#pragma once


struct ATriggerBase : AActor
{
	// Fields

	TObjectPtr<UShapeComponent>& CollisionComponentField() { return *GetNativePointerField<TObjectPtr<UShapeComponent>*>(this, "ATriggerBase.CollisionComponent"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("ATriggerBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATriggerBase"); }
};