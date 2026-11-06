#pragma once


struct ULevel : UObject
{
	TArray<AActor*> ActorsField() const { return GetNativeField<TArray<AActor*>>(this, "ULevel.Actors2"); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ULevel.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
};