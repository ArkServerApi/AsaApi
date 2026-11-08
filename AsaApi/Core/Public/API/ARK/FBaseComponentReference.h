#pragma once


struct FBaseComponentReference
{
	// Fields

	FName& ComponentPropertyField() { return *GetNativePointerField<FName*>(this, "FBaseComponentReference.ComponentProperty"); }
	FString& PathToComponentField() { return *GetNativePointerField<FString*>(this, "FBaseComponentReference.PathToComponent"); }
	TWeakObjectPtr<UActorComponent, FWeakObjectPtr>& OverrideComponentField() { return *GetNativePointerField<TWeakObjectPtr<UActorComponent, FWeakObjectPtr>*>(this, "FBaseComponentReference.OverrideComponent"); }

	// Bitfields

	// Functions

	UActorComponent* ExtractComponent(struct AActor* SearchActor) const { return NativeCall<UActorComponent*, struct AActor*>(this, "FBaseComponentReference.ExtractComponent(AActor*)", SearchActor); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FBaseComponentReference>(); }
};