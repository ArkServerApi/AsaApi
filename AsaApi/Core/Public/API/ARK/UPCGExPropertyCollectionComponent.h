#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPCGExPropertyCollectionComponent : public UActorComponent
{
public:
	UPCGExPropertyCollectionComponent() = delete;
	~UPCGExPropertyCollectionComponent() = delete;
	UPCGExPropertyCollectionComponent(const UPCGExPropertyCollectionComponent&) = delete;
	UPCGExPropertyCollectionComponent& operator=(const UPCGExPropertyCollectionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPCGExPropertyCollectionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPCGExPropertyCollectionComponent"); }

	FPCGExPropertySchemaCollection& PropertiesField() { return *GetNativePointerField<FPCGExPropertySchemaCollection*>(this, "UPCGExPropertyCollectionComponent.Properties"); }
	static UPCGExPropertyCollectionComponent* FindOnActor(const AActor* Actor) { return NativeCall<UPCGExPropertyCollectionComponent*, const AActor*>(nullptr, "UPCGExPropertyCollectionComponent.FindOnActor(AActor*)", Actor); }
	void PreparePropertyValues() { NativeCall<void>(this, "UPCGExPropertyCollectionComponent.PreparePropertyValues()"); }
	void PostLoad() { NativeCall<void>(this, "UPCGExPropertyCollectionComponent.PostLoad()"); }
	void PreparePropertyValues_Implementation() { NativeCall<void>(this, "UPCGExPropertyCollectionComponent.PreparePropertyValues_Implementation()"); }
	void OnRegister() { NativeCall<void>(this, "UPCGExPropertyCollectionComponent.OnRegister()"); }
	void OnComponentCreated() { NativeCall<void>(this, "UPCGExPropertyCollectionComponent.OnComponentCreated()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPCGExPropertyCollectionComponent.Serialize(FArchive&)", Ar); }
};
