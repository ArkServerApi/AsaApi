#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UInheritableComponentHandler : public UObject
{
public:
	UInheritableComponentHandler() = delete;
	~UInheritableComponentHandler() = delete;
	UInheritableComponentHandler(const UInheritableComponentHandler&) = delete;
	UInheritableComponentHandler& operator=(const UInheritableComponentHandler&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInheritableComponentHandler"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInheritableComponentHandler"); }
	const FBlueprintCookedComponentInstancingData* GetOverridenComponentTemplateData(const FComponentKey& Key) { return NativeCall<const FBlueprintCookedComponentInstancingData*, const FComponentKey&>(this, "UInheritableComponentHandler.GetOverridenComponentTemplateData(FComponentKey&)", Key); }
	UActorComponent* GetOverridenComponentTemplate(const FComponentKey& Key) { return NativeCall<UActorComponent*, const FComponentKey&>(this, "UInheritableComponentHandler.GetOverridenComponentTemplate(FComponentKey&)", Key); }
	void PreloadAll() { NativeCall<void>(this, "UInheritableComponentHandler.PreloadAll()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UInheritableComponentHandler.Serialize(FArchive&)", Ar); }
};
