#pragma once


struct FTrackedActorOverallContainer
{
	// Fields

	TMap<int, FTrackedActorPlusInfoStruct, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FTrackedActorPlusInfoStruct, 0> >& TrackedActorEntriesAsPerCategoryField() { return *GetNativePointerField<TMap<int, FTrackedActorPlusInfoStruct, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FTrackedActorPlusInfoStruct, 0> >*>(this, "FTrackedActorOverallContainer.TrackedActorEntriesAsPerCategory"); }

	// Bitfields

	// Functions

	UScriptStruct* StaticStruct() { return FindScriptStruct<FTrackedActorOverallContainer>(); }
};