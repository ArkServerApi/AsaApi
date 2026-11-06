#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAudioLinkSettingsAbstract : public UObject
{
public:
	UAudioLinkSettingsAbstract() = delete;
	~UAudioLinkSettingsAbstract() = delete;
	UAudioLinkSettingsAbstract(const UAudioLinkSettingsAbstract&) = delete;
	UAudioLinkSettingsAbstract& operator=(const UAudioLinkSettingsAbstract&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	FName GetFactoryName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UAudioLinkSettingsAbstract.GetFactoryName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
};
