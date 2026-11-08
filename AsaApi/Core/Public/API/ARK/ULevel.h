#pragma once


struct ULevel : UObject
{
	TArray<AActor*> ActorsField() const { return GetNativeField<TArray<AActor*>>(this, "ULevel.Actors2"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ULevel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULevel"); }
};