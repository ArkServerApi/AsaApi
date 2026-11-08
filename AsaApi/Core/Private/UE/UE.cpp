#include "API/ARK/Ark.h"
#include "API/ARK/UE.h"
#include "ClassCacheState.h"
#include "ClassCacheGCScope.h"
#include "ClassResolutionScope.h"
#include "../Offsets.h"
#include <algorithm>
#include <mutex>
#include <stdexcept>

ARK_API FProperty* UObject::FindProperty(FName name)
{
	for (FProperty* Property = this->ClassPrivateField()->PropertyLinkField(); Property != nullptr; Property = Property->PropertyLinkNextField())
	{
		if (Property->NamePrivateField().ToString().Equals(name.ToString()))
			return Property;
	}
	return nullptr;
}

namespace AsaApi::detail
{
    ClassCacheState& GetClassCacheState()
    {
        // No engine calls from a static destructor or from the DLL loader lock.
        static auto* State = new ClassCacheState;
        return *State;
    }

    std::string NativeCppClassName(UClass* Class)
    {
        return FString(Class->GetPrefixCPP()).ToStringUTF8()
            + Class->NamePrivateField().ToString().ToStringUTF8();
    }

    bool IsDiscoverableNativeClass(UClass* Class)
    {
        const auto Flags = static_cast<unsigned int>(Class->ClassFlagsField());
        return (Flags & static_cast<unsigned int>(EClassFlags::CLASS_Native)) != 0
            && (Flags & static_cast<unsigned int>(EClassFlags::CLASS_NewerVersionExists)) == 0;
    }

    void BuildClassPathIndex(ClassCacheState& State, UClass* MetaClass)
    {
        TArray<UObject*> Objects;
        Globals::GetObjectsOfClass(MetaClass, Objects, true,
            EObjectFlags::RF_ClassDefaultObject, EInternalObjectFlags::None);
        std::unordered_map<std::string, std::vector<std::wstring>> Paths;
        for (auto* Object : Objects)
        {
            auto* Class = static_cast<UClass*>(Object);
            if (!IsDiscoverableNativeClass(Class)) continue;
            FString Path;
            Class->GetPathName(nullptr, Path);
            std::wstring FullPath(*Path, Path.Len());
            if (FullPath.empty()) continue;
            auto& Names = Paths[NativeCppClassName(Class)];
            if (std::find(Names.begin(), Names.end(), FullPath) == Names.end())
                Names.push_back(std::move(FullPath));
        }
        // This index deliberately contains paths, never unprotected UObject pointers.
        std::unique_lock Lock(State.Mutex);
        if (!State.Closing)
        {
            State.ClassPaths.swap(Paths);
            State.IndexBuilt = true;
        }
    }

    UClass* FindIndexedClass(ClassCacheState& State, UClass* MetaClass, const std::string& CppName)
    {
        std::vector<std::wstring> Paths;
        {
            std::shared_lock Lock(State.Mutex);
            const auto Found = State.ClassPaths.find(CppName);
            if (Found == State.ClassPaths.end()) return nullptr;
            Paths = Found->second;
        }
        UClass* Result = nullptr;
        for (const auto& Path : Paths)
        {
            auto* Object = Globals::StaticFindObjectSafe(MetaClass, nullptr, Path.c_str());
            if (!Object) continue;
            auto* Class = static_cast<UClass*>(Object);
            if (!IsDiscoverableNativeClass(Class) || NativeCppClassName(Class) != CppName) continue;
            if (Result && Result != Class)
                throw std::runtime_error("Ambiguous native class identity: " + CppName);
            Result = Class;
        }
        return Result;
    }

    void ShutdownClassCache()
    {
        auto& State = GetClassCacheState();
        // This is called before StaticExit purges objects and tears down GC.
        std::unordered_map<std::string, UClass*> Classes;
        {
            std::unique_lock Lock(State.Mutex);
            if (State.Closing) return;
            State.Closing = true;
            Classes.swap(State.Classes);
            State.ClassPaths.clear();
        }
        for (const auto& Entry : Classes)
            NativeCall<void>(Entry.second, "UObjectBase.ReleaseRef()");
    }
}

ARK_API UClass* AsaApi::ResolveClass(const char* cppClassName)
{
    if (!cppClassName || !*cppClassName)
        throw std::invalid_argument("A native C++ class name is required");
    const std::string Name(cppClassName);
    if ((Name.front() != 'U' && Name.front() != 'A') ||
        !std::all_of(Name.begin(), Name.end(), [](unsigned char Ch) {
            return (Ch >= 'A' && Ch <= 'Z') || (Ch >= 'a' && Ch <= 'z') ||
                (Ch >= '0' && Ch <= '9') || Ch == '_';
        })) throw std::invalid_argument("Invalid native C++ class name: " + Name);

    auto& State = detail::GetClassCacheState();
    {
        std::shared_lock Lock(State.Mutex);
        if (State.Closing) throw std::runtime_error("The UObject system is shutting down");
        const auto Found = State.Classes.find(Name);
        if (Found != State.Classes.end()) return Found->second;
    }

    const char* Required[] = {
        "UClass.StaticClass()", "FGCScopeGuard.FGCScopeGuard()",
        "FGCScopeGuard.~FGCScopeGuard()", "UObjectBase.AddRef()",
        "UObjectBase.ReleaseRef()", "Global.IsInGameThread()",
        "Global.IsGarbageCollectingAndLockingUObjectHashTables()"
    };
    for (const auto* Key : Required)
        if (!API::Offsets::Get().HasOffset(Key))
            throw std::runtime_error("Class resolver runtime dependency is unavailable: " + std::string(Key));

    if (NativeCall<bool>(nullptr, "Global.IsInGameThread()") &&
        NativeCall<bool>(nullptr, "Global.IsGarbageCollectingAndLockingUObjectHashTables()"))
        throw std::runtime_error("An uncached class cannot be resolved during garbage collection");

    // Acquire the engine GC guard before our mutex: GC must never wait on an
    // API cache mutex held by a thread which is itself waiting for GC to finish.
    detail::ClassResolutionScope ResolutionScope(Name);
    detail::ClassCacheGCScope GCScope;
    {
        std::shared_lock Lock(State.Mutex);
        if (State.Closing) throw std::runtime_error("The UObject system is shutting down");
        const auto Existing = State.Classes.find(Name);
        if (Existing != State.Classes.end()) return Existing->second;
    }

    UClass* Class = nullptr;
    const auto StaticKey = Name + ".StaticClass()";
    const auto PrivateKey = Name + ".GetPrivateStaticClass()";
    if (API::Offsets::Get().HasOffset(StaticKey))
        Class = NativeCall<UClass*>(nullptr, StaticKey);
    else if (API::Offsets::Get().HasOffset(PrivateKey))
        Class = NativeCall<UClass*>(nullptr, PrivateKey);

    // Bootstrap directly through the native class factory to avoid recursion
    // through UClass's own public resolver wrapper.
    UClass* MetaClass = NativeCall<UClass*>(nullptr, "UClass.StaticClass()");
    if (!MetaClass) return nullptr;
    if (!Class)
    {
        bool HadIndex;
        {
            std::shared_lock Lock(State.Mutex);
            HadIndex = State.IndexBuilt;
        }
        if (!HadIndex) detail::BuildClassPathIndex(State, MetaClass);
        Class = detail::FindIndexedClass(State, MetaClass, Name);
        if (!Class && HadIndex)
        {
            // Native modules can register additional classes after startup.
            detail::BuildClassPathIndex(State, MetaClass);
            Class = detail::FindIndexedClass(State, MetaClass, Name);
        }
    }
    if (!Class) return nullptr; // Do not cache failed/early registration lookups.
    if (!Class->ClassPrivateField() || !Class->ClassPrivateField()->IsChildOf(MetaClass))
        throw std::runtime_error("Native factory did not return a UClass: " + Name);

    NativeCall<void>(Class, "UObjectBase.AddRef()");
    UClass* Result = nullptr;
    bool Inserted = false;
    try
    {
        std::unique_lock Lock(State.Mutex);
        if (!State.Closing)
        {
            const auto Entry = State.Classes.emplace(Name, Class);
            Result = Entry.first->second;
            Inserted = Entry.second;
        }
    }
    catch (...)
    {
        NativeCall<void>(Class, "UObjectBase.ReleaseRef()");
        throw;
    }
    if (!Inserted) NativeCall<void>(Class, "UObjectBase.ReleaseRef()");
    if (!Result) throw std::runtime_error("The UObject system is shutting down");
    return Result;
}

ARK_API std::size_t AsaApi::GetClassCacheSize()
{
    auto& State = detail::GetClassCacheState();
    std::shared_lock Lock(State.Mutex);
    return State.Classes.size();
}
