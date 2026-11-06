#pragma once


struct FDinoSetupGroup
{
	// Fields

	FName& GroupNameField() { return *GetNativePointerField<FName*>(this, "FDinoSetupGroup.GroupName"); }
	float& RandomWeightField() { return *GetNativePointerField<float*>(this, "FDinoSetupGroup.RandomWeight"); }
	TArray<FDinoSetup, TSizedDefaultAllocator<32> >& EntriesField() { return *GetNativePointerField<TArray<FDinoSetup, TSizedDefaultAllocator<32> >*>(this, "FDinoSetupGroup.Entries"); }
	TArray<int, TSizedDefaultAllocator<32> >& EntriesSpawnNumberLimitsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FDinoSetupGroup.EntriesSpawnNumberLimits"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoSetupGroup>(); }
	FDinoSetupGroup* operator=(const FDinoSetupGroup* __that) { return NativeCall<FDinoSetupGroup*, const FDinoSetupGroup*>(this, "FDinoSetupGroup.operator=(FDinoSetupGroup&)", __that); }
	FDinoSetupGroup* operator=(FDinoSetupGroup* __that) { return NativeCall<FDinoSetupGroup*, FDinoSetupGroup*>(this, "FDinoSetupGroup.operator=(FDinoSetupGroup&)", __that); }
};