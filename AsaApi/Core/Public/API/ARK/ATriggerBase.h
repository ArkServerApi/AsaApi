#pragma once


struct ATriggerBase : AActor
{
	// Fields

	TObjectPtr<UShapeComponent>& CollisionComponentField() { return *GetNativePointerField<TObjectPtr<UShapeComponent>*>(this, "ATriggerBase.CollisionComponent"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return GetPrivateStaticClass(); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "ATriggerBase.StaticClass()"); }
};