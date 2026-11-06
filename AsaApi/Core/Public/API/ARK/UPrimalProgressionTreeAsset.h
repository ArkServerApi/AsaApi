#pragma once
#include "BulkForward.h"
#include "UPrimaryDataAsset.h"

struct UPrimalProgressionTreeAsset : public UPrimaryDataAsset
{
public:
	UPrimalProgressionTreeAsset() = delete;
	~UPrimalProgressionTreeAsset() = delete;
	UPrimalProgressionTreeAsset(const UPrimalProgressionTreeAsset&) = delete;
	UPrimalProgressionTreeAsset& operator=(const UPrimalProgressionTreeAsset&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeAsset"); }

	UPrimalProgressionTreeGraph*& ProgressionGraphField() { return *GetNativePointerField<UPrimalProgressionTreeGraph**>(this, "UPrimalProgressionTreeAsset.ProgressionGraph"); }
	FName& SkillTreeTagField() { return *GetNativePointerField<FName*>(this, "UPrimalProgressionTreeAsset.SkillTreeTag"); }
	BitFieldValue<bool, unsigned char> bUsesDedicatedSkillPointPool() { return { this, "UPrimalProgressionTreeAsset.bUsesDedicatedSkillPointPool"}; }
	void InitializeGraph() { NativeCall<void>(this, "UPrimalProgressionTreeAsset.InitializeGraph()"); }
	void PostLoad() { NativeCall<void>(this, "UPrimalProgressionTreeAsset.PostLoad()"); }
};
