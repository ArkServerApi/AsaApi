#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USimpleConstructionScript : public UObject
{
public:
	USimpleConstructionScript() = delete;
	~USimpleConstructionScript() = delete;
	USimpleConstructionScript(const USimpleConstructionScript&) = delete;
	USimpleConstructionScript& operator=(const USimpleConstructionScript&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USimpleConstructionScript"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USimpleConstructionScript"); }
	int& NameToSCSNodeMapRefCountField() { return *GetNativePointerField<int*>(this, "USimpleConstructionScript.NameToSCSNodeMapRefCount"); }
	FStaticMeshComponentBulkReregisterContext*& ReregisterContextField() { return *GetNativePointerField<FStaticMeshComponentBulkReregisterContext**>(this, "USimpleConstructionScript.ReregisterContext"); }
	void FixupRootNodeParentReferences() { NativeCall<void>(this, "USimpleConstructionScript.FixupRootNodeParentReferences()"); }
	void PreloadChain() { NativeCall<void>(this, "USimpleConstructionScript.PreloadChain()"); }
	USCS_Node* FindSCSNodeByGuid(FGuid* Guid) { if (!Guid) throw std::invalid_argument("Null native value parameter"); return NativeCall<USCS_Node *, FGuid>(this, "USimpleConstructionScript.FindSCSNodeByGuid(FGuid)", *Guid); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USimpleConstructionScript.Serialize(FArchive&)", Ar); }
	UClass* GetOwnerClass() { return NativeCall<UClass*>(this, "USimpleConstructionScript.GetOwnerClass()"); }
	USCS_Node* FindSCSNode(FName InName) { return NativeCall<USCS_Node*, FName>(this, "USimpleConstructionScript.FindSCSNode(FName)", InName); }
	void PostLoad() { NativeCall<void>(this, "USimpleConstructionScript.PostLoad()"); }
	static void RegisterInstancedComponent(UActorComponent* InstancedComponent) { NativeCall<void, UActorComponent*>(nullptr, "USimpleConstructionScript.RegisterInstancedComponent(UActorComponent*)", InstancedComponent); }
};
