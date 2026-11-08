#pragma once


struct UStreamableRenderAsset : UObject
{
    enum class ETickStreamingFlags : int
    {
        None = 0, SendCompletionEvents = 1
    };
	// Fields

	//TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload, TSizedDefaultAllocator<32> >& MipChangeCallbacksField() { return *GetNativePointerField<TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload, TSizedDefaultAllocator<32> >*>(this, "UStreamableRenderAsset.MipChangeCallbacks"); }
	//TRefCountPtr<FRenderAssetUpdate>& PendingUpdateField() { return *GetNativePointerField<TRefCountPtr<FRenderAssetUpdate>*>(this, "UStreamableRenderAsset.PendingUpdate"); }
	long double& ForceMipLevelsToBeResidentTimestampField() { return *GetNativePointerField<long double*>(this, "UStreamableRenderAsset.ForceMipLevelsToBeResidentTimestamp"); }
	int& NumCinematicMipLevelsField() { return *GetNativePointerField<int*>(this, "UStreamableRenderAsset.NumCinematicMipLevels"); }
	//FPerQualityLevelInt& NoRefStreamingLODBiasField() { return *GetNativePointerField<FPerQualityLevelInt*>(this, "UStreamableRenderAsset.NoRefStreamingLODBias"); }
	int& StreamingIndexField() { return *GetNativePointerField<int*>(this, "UStreamableRenderAsset.StreamingIndex"); }
	//FStreamableRenderResourceState& CachedSRRStateField() { return *GetNativePointerField<FStreamableRenderResourceState*>(this, "UStreamableRenderAsset.CachedSRRState"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> NeverStream() { return { this, "UStreamableRenderAsset.NeverStream" }; }
	BitFieldValue<bool, unsigned __int32> bGlobalForceMipLevelsToBeResident() { return { this, "UStreamableRenderAsset.bGlobalForceMipLevelsToBeResident" }; }
	BitFieldValue<bool, unsigned __int32> bHasStreamingUpdatePending() { return { this, "UStreamableRenderAsset.bHasStreamingUpdatePending" }; }
	BitFieldValue<bool, unsigned __int32> bForceMiplevelsToBeResident() { return { this, "UStreamableRenderAsset.bForceMiplevelsToBeResident" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreStreamingMipBias() { return { this, "UStreamableRenderAsset.bIgnoreStreamingMipBias" }; }
	BitFieldValue<bool, unsigned __int32> bUseCinematicMipLevels() { return { this, "UStreamableRenderAsset.bUseCinematicMipLevels" }; }

	// Functions

// 	void ResizeGrow(int OldNum) { NativeCall<void, int>(this, "UStreamableRenderAsset.ResizeGrow(int)", OldNum); }
// FUNCTION MISSING: UStreamableRenderAsset.ResizeGrow(int)
	bool StreamIn(int NewMipCount, bool bHighPrio) { return NativeCall<bool, int, bool>(this, "UStreamableRenderAsset.StreamIn(int,bool)", NewMipCount, bHighPrio); }
	bool StreamOut(int NewMipCount) { return NativeCall<bool, int>(this, "UStreamableRenderAsset.StreamOut(int)", NewMipCount); }
	int CalcCumulativeLODSize(int NumLODs) { return NativeCall<int, int>(this, "UStreamableRenderAsset.CalcCumulativeLODSize(int)", NumLODs); }
	bool ShouldMipLevelsBeForcedResident() { return NativeCall<bool>(this, "UStreamableRenderAsset.ShouldMipLevelsBeForcedResident()"); }
	float GetLastRenderTimeForStreaming() { return NativeCall<float>(this, "UStreamableRenderAsset.GetLastRenderTimeForStreaming()"); }
	bool DoesMipDataExist(const int MipIndex) { return NativeCall<bool, const int>(this, "UStreamableRenderAsset.DoesMipDataExist(int)", MipIndex); }
	unsigned int GetMipIoFilenameHash(const int MipIndex) { return NativeCall<unsigned int, const int>(this, "UStreamableRenderAsset.GetMipIoFilenameHash(int)", MipIndex); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStreamableRenderAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStreamableRenderAsset"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUStreamableRenderAsset();
	//void UStreamableRenderAsset(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UStreamableRenderAsset.UStreamableRenderAsset(FObjectInitializer*)", ObjectInitializer); }
	//void ~UStreamableRenderAsset() { NativeCall<void>(this, "UStreamableRenderAsset.~UStreamableRenderAsset()"); }
	void TickMipLevelChangeCallbacks(TArray<UStreamableRenderAsset*, TSizedDefaultAllocator<32> >* DeferredTickCBAssets) { NativeCall<void, TArray<UStreamableRenderAsset*, TSizedDefaultAllocator<32> >*>(this, "UStreamableRenderAsset.TickMipLevelChangeCallbacks(TArray<UStreamableRenderAsset*,TSizedDefaultAllocator<32>>*)", DeferredTickCBAssets); }
	void TickStreaming(UStreamableRenderAsset::ETickStreamingFlags Flags, TArray<UStreamableRenderAsset*, TSizedDefaultAllocator<32> >* DeferredTickCBAssets) { NativeCall<void, UStreamableRenderAsset::ETickStreamingFlags, TArray<UStreamableRenderAsset*, TSizedDefaultAllocator<32> >*>(this, "UStreamableRenderAsset.TickStreaming(UStreamableRenderAsset::ETickStreamingFlags,TArray<UStreamableRenderAsset*,TSizedDefaultAllocator<32>>*)", Flags, DeferredTickCBAssets); }
	void SetForceMipLevelsToBeResident(float Seconds, int CinematicLODGroupMask) { NativeCall<void, float, int>(this, "UStreamableRenderAsset.SetForceMipLevelsToBeResident(float,int)", Seconds, CinematicLODGroupMask); }
	bool HasPendingInitOrStreaming() { return NativeCall<bool>(this, "UStreamableRenderAsset.HasPendingInitOrStreaming()"); }
	void LinkStreaming() { NativeCall<void>(this, "UStreamableRenderAsset.LinkStreaming()"); }
	void UnlinkStreaming() { NativeCall<void>(this, "UStreamableRenderAsset.UnlinkStreaming()"); }
	void WaitForPendingInitOrStreaming(UStreamableRenderAsset::ETickStreamingFlags Flags) { NativeCall<void, UStreamableRenderAsset::ETickStreamingFlags>(this, "UStreamableRenderAsset.WaitForPendingInitOrStreaming(UStreamableRenderAsset::ETickStreamingFlags)", Flags); }
	void BeginDestroy() { NativeCall<void>(this, "UStreamableRenderAsset.BeginDestroy()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UStreamableRenderAsset.IsReadyForFinishDestroy()"); }
	//void FLODStreamingCallbackPayload, class TSizedDefaultAllocator<32 >> () { NativeCall<void>(this, "UStreamableRenderAsset.FLODStreamingCallbackPayload,class TSizedDefaultAllocator<32>>()"); }
// 	void RemoveAtSwapImpl(int Index, int Count, bool bAllowShrinking) { NativeCall<void, int, int, bool>(this, "UStreamableRenderAsset.RemoveAtSwapImpl(int,int,bool)", Index, Count, bAllowShrinking); }
// FUNCTION MISSING: UStreamableRenderAsset.RemoveAtSwapImpl(int,int,bool)
// 	void RemoveAtImpl(int Index, int Count, bool bAllowShrinking) { NativeCall<void, int, int, bool>(this, "UStreamableRenderAsset.RemoveAtImpl(int,int,bool)", Index, Count, bAllowShrinking); }
// FUNCTION MISSING: UStreamableRenderAsset.RemoveAtImpl(int,int,bool)
};