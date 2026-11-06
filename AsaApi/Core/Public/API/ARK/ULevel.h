#pragma once


struct ULevel : UObject
{
	TArray<AActor*> ActorsField() const { return GetNativeField<TArray<AActor*>>(this, "ULevel.Actors2"); }

	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
};