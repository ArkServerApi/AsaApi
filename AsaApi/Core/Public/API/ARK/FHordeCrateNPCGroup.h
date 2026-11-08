#pragma once


struct FHordeCrateNPCGroup
{
	// Fields

	TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& NPCClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.NPCClasses"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& NPCAssetsField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.NPCAssets"); }
	TArray<float, TSizedDefaultAllocator<32> >& NPCWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.NPCWeights"); }
	TArray<int, TSizedDefaultAllocator<32> >& MinLevelsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.MinLevels"); }
	TArray<int, TSizedDefaultAllocator<32> >& MaxLevelsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.MaxLevels"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FHordeCrateNPCGroup>(); }
};