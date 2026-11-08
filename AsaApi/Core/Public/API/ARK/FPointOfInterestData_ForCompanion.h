#pragma once


struct FPointOfInterestData_ForCompanion
{
	// Fields

	FPointOfInterestData& PointDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "FPointOfInterestData_ForCompanion.PointData"); }
	FPointOfInterestCompanionBehavior& PointCompanionBehaviorField() { return *GetNativePointerField<FPointOfInterestCompanionBehavior*>(this, "FPointOfInterestData_ForCompanion.PointCompanionBehavior"); }

	// Bitfields

	// Functions
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPointOfInterestData_ForCompanion>(); }
};