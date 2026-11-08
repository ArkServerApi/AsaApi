#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AHideActorList : public AActor
{
public:
	AHideActorList() = delete;
	~AHideActorList() = delete;
	AHideActorList(const AHideActorList&) = delete;
	AHideActorList& operator=(const AHideActorList&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHideActorList"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AHideActorList"); }
	EDomeState::Type GetDomeState() { return NativeCall<EDomeState::Type>(this, "AHideActorList.GetDomeState()"); }
	FName GetDomeTag() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AHideActorList.GetDomeTag()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	static void HandleHideActorsList(const UObject* WorldContextObject) { NativeCall<void, const UObject*>(nullptr, "AHideActorList.HandleHideActorsList(UObject*)", WorldContextObject); }
};
