#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ALevelStreamingVolume : public AVolume
{
public:
	ALevelStreamingVolume() = delete;
	~ALevelStreamingVolume() = delete;
	ALevelStreamingVolume(const ALevelStreamingVolume&) = delete;
	ALevelStreamingVolume& operator=(const ALevelStreamingVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALevelStreamingVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALevelStreamingVolume"); }

	TArray<FName, TSizedDefaultAllocator<32> >& StreamingLevelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ALevelStreamingVolume.StreamingLevelNames"); }
	BitFieldValue<bool, unsigned __int32> bEditorPreVisOnly() { return { this, "ALevelStreamingVolume.bEditorPreVisOnly"}; }
	BitFieldValue<bool, unsigned __int32> bDisabled() { return { this, "ALevelStreamingVolume.bDisabled"}; }
	void PostLoad() { NativeCall<void>(this, "ALevelStreamingVolume.PostLoad()"); }
};
