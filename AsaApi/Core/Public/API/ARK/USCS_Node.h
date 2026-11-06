#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USCS_Node : public UObject
{
public:
	USCS_Node() = delete;
	~USCS_Node() = delete;
	USCS_Node(const USCS_Node&) = delete;
	USCS_Node& operator=(const USCS_Node&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USCS_Node"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USCS_Node"); }
	FBlueprintCookedComponentInstancingData& CookedComponentInstancingDataField() { return *GetNativePointerField<FBlueprintCookedComponentInstancingData*>(this, "USCS_Node.CookedComponentInstancingData"); }
	FName& AttachToNameField() { return *GetNativePointerField<FName*>(this, "USCS_Node.AttachToName"); }
	FName& ParentComponentOrVariableNameField() { return *GetNativePointerField<FName*>(this, "USCS_Node.ParentComponentOrVariableName"); }
	FName& ParentComponentOwnerClassNameField() { return *GetNativePointerField<FName*>(this, "USCS_Node.ParentComponentOwnerClassName"); }
	bool& bIsParentComponentNativeField() { return *GetNativePointerField<bool*>(this, "USCS_Node.bIsParentComponentNative"); }
	FGuid& VariableGuidField() { return *GetNativePointerField<FGuid*>(this, "USCS_Node.VariableGuid"); }
	FName& InternalVariableNameField() { return *GetNativePointerField<FName*>(this, "USCS_Node.InternalVariableName"); }
	UActorComponent* GetActualComponentTemplate(UBlueprintGeneratedClass* ActualBPGC) { return NativeCall<UActorComponent*, UBlueprintGeneratedClass*>(this, "USCS_Node.GetActualComponentTemplate(UBlueprintGeneratedClass*)", ActualBPGC); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USCS_Node.Serialize(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "USCS_Node.PostLoad()"); }
	void PreloadChain() { NativeCall<void>(this, "USCS_Node.PreloadChain()"); }
};
