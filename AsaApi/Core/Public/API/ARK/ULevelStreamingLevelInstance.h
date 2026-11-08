#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "ULevelStreamingDynamic.h"

class ULevelStreamingLevelInstance : public ULevelStreamingDynamic
{
public:
	ULevelStreamingLevelInstance() = delete;
	~ULevelStreamingLevelInstance() = delete;
	ULevelStreamingLevelInstance(const ULevelStreamingLevelInstance&) = delete;
	ULevelStreamingLevelInstance& operator=(const ULevelStreamingLevelInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULevelStreamingLevelInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULevelStreamingLevelInstance"); }
	FLevelInstanceID& LevelInstanceIDField() { return *GetNativePointerField<FLevelInstanceID*>(this, "ULevelStreamingLevelInstance.LevelInstanceID"); }
	static ULevelStreamingLevelInstance* LoadInstance(ILevelInstanceInterface* LevelInstance) { return NativeCall<ULevelStreamingLevelInstance*, ILevelInstanceInterface*>(nullptr, "ULevelStreamingLevelInstance.LoadInstance(ILevelInstanceInterface*)", LevelInstance); }
	ILevelInstanceInterface* GetLevelInstance() { return NativeCall<ILevelInstanceInterface*>(this, "ULevelStreamingLevelInstance.GetLevelInstance()"); }
	void OnLevelLoadedChanged(ULevel* InLevel) { NativeCall<void, ULevel*>(this, "ULevelStreamingLevelInstance.OnLevelLoadedChanged(ULevel*)", InLevel); }
};
