#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USoundNode : public UObject
{
public:
	USoundNode() = delete;
	~USoundNode() = delete;
	USoundNode(const USoundNode&) = delete;
	USoundNode& operator=(const USoundNode&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundNode"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundNode"); }
	FRandomStream& RandomStreamField() { return *GetNativePointerField<FRandomStream*>(this, "USoundNode.RandomStream"); }
	bool& bIsRetainingAudioField() { return *GetNativePointerField<bool*>(this, "USoundNode.bIsRetainingAudio"); }
	bool SupportsSubtitles() { return NativeCall<bool>(this, "USoundNode.SupportsSubtitles()"); }
	void CreateStartingConnectors() { NativeCall<void>(this, "USoundNode.CreateStartingConnectors()"); }
	bool HasAttenuationNode() { return NativeCall<bool>(this, "USoundNode.HasAttenuationNode()"); }
	static unsigned __int64 GetNodeWaveInstanceHash(unsigned __int64 ParentWaveInstanceHash, unsigned __int64 ChildNodeHash, unsigned int ChildIndex) { return NativeCall<unsigned __int64, unsigned __int64, unsigned __int64, unsigned int>(nullptr, "USoundNode.GetNodeWaveInstanceHash(unsigned__int64,unsigned__int64,unsignedint)", ParentWaveInstanceHash, ChildNodeHash, ChildIndex); }
	static unsigned __int64 GetNodeWaveInstanceHash(unsigned __int64 ParentWaveInstanceHash, const USoundNode* ChildNode, unsigned int ChildIndex) { return NativeCall<unsigned __int64, unsigned __int64, const USoundNode*, unsigned int>(nullptr, "USoundNode.GetNodeWaveInstanceHash(unsigned__int64,USoundNode*,unsignedint)", ParentWaveInstanceHash, ChildNode, ChildIndex); }
	bool HasConcatenatorNode() { return NativeCall<bool>(this, "USoundNode.HasConcatenatorNode()"); }
	bool NotifyWaveInstanceFinished(FWaveInstance* WaveInstance) { return NativeCall<bool, FWaveInstance*>(this, "USoundNode.NotifyWaveInstanceFinished(FWaveInstance*)", WaveInstance); }
	void RetainChildWavePlayers(bool bRecurse) { NativeCall<void, bool>(this, "USoundNode.RetainChildWavePlayers(bool)", bRecurse); }
	bool CanBeInCluster() { return NativeCall<bool>(this, "USoundNode.CanBeInCluster()"); }
	bool HasDelayNode() { return NativeCall<bool>(this, "USoundNode.HasDelayNode()"); }
	float GetMaxDistance() { return NativeCall<float>(this, "USoundNode.GetMaxDistance()"); }
	int GetNumSounds(unsigned __int64 NodeWaveInstanceHash, FActiveSound& ActiveSound) { return NativeCall<int, unsigned __int64, FActiveSound&>(this, "USoundNode.GetNumSounds(unsigned__int64,FActiveSound&)", NodeWaveInstanceHash, ActiveSound); }
	void RemoveSoundWaveOnChildWavePlayers() { NativeCall<void>(this, "USoundNode.RemoveSoundWaveOnChildWavePlayers()"); }
	int GetMaxChildNodes() { return NativeCall<int>(this, "USoundNode.GetMaxChildNodes()"); }
	void InsertChildNode(int Index) { NativeCall<void, int>(this, "USoundNode.InsertChildNode(int)", Index); }
	void LoadChildWavePlayerAssets(bool bAddToRoot, bool bRecurse) { NativeCall<void, bool, bool>(this, "USoundNode.LoadChildWavePlayerAssets(bool,bool)", bAddToRoot, bRecurse); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USoundNode.Serialize(FArchive&)", Ar); }
	bool CanBeClusterRoot() { return NativeCall<bool>(this, "USoundNode.CanBeClusterRoot()"); }
	void ReleaseRetainerOnChildWavePlayers(bool bRecurse) { NativeCall<void, bool>(this, "USoundNode.ReleaseRetainerOnChildWavePlayers(bool)", bRecurse); }
	void BeginDestroy() { NativeCall<void>(this, "USoundNode.BeginDestroy()"); }
	int GetMinChildNodes() { return NativeCall<int>(this, "USoundNode.GetMinChildNodes()"); }
	void RemoveChildNode(int Index) { NativeCall<void, int>(this, "USoundNode.RemoveChildNode(int)", Index); }
	bool IsPlayWhenSilent() { return NativeCall<bool>(this, "USoundNode.IsPlayWhenSilent()"); }
	void PrimeChildWavePlayers(bool bRecurse) { NativeCall<void, bool>(this, "USoundNode.PrimeChildWavePlayers(bool)", bRecurse); }
	float GetDuration() { return NativeCall<float>(this, "USoundNode.GetDuration()"); }
};
