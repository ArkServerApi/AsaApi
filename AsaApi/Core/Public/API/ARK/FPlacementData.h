#pragma once


struct FPlacementData
{
	// Fields

	UE::Math::TVector<double>& AdjustedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPlacementData.AdjustedLocation"); }
	UE::Math::TRotator<double>& AdjustedRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPlacementData.AdjustedRotation"); }
	BitFieldValue<bool, unsigned __int32> bSnapped() { return { this, "FPlacementData.bSnapped"}; }
	BitFieldValue<bool, unsigned __int32> bDisableEncroachmentCheck() { return { this, "FPlacementData.bDisableEncroachmentCheck"}; }
	int& MySnapToIndexField() { return *GetNativePointerField<int*>(this, "FPlacementData.MySnapToIndex"); }
	int& TheirSnapToIndexField() { return *GetNativePointerField<int*>(this, "FPlacementData.TheirSnapToIndex"); }
	AActor*& FloorHitActorField() { return *GetNativePointerField<AActor**>(this, "FPlacementData.FloorHitActor"); }
	APrimalStructure*& ParentStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "FPlacementData.ParentStructure"); }
	APrimalStructure*& ForcePlacedOnFloorParentStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "FPlacementData.ForcePlacedOnFloorParentStructure"); }
	APrimalStructure*& ReplacesStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "FPlacementData.ReplacesStructure"); }
	APawn*& AttachToPawnField() { return *GetNativePointerField<APawn**>(this, "FPlacementData.AttachToPawn"); }
	FName& AttachToBoneField() { return *GetNativePointerField<FName*>(this, "FPlacementData.AttachToBone"); }
	APrimalDinoCharacter*& DinoCharacterField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "FPlacementData.DinoCharacter"); }
	float& HeightOffsetField() { return *GetNativePointerField<float*>(this, "FPlacementData.HeightOffset"); }
	float& YawRotOffsetField() { return *GetNativePointerField<float*>(this, "FPlacementData.YawRotOffset"); }
	int& PlacingAlignmentModeField() { return *GetNativePointerField<int*>(this, "FPlacementData.PlacingAlignmentMode"); }
	BitFieldValue<bool, unsigned __int32> bIgnoreSnappingIfOptional() { return { this, "FPlacementData.bIgnoreSnappingIfOptional"}; }
	BitFieldValue<bool, unsigned __int32> bIsChoosingRotation() { return { this, "FPlacementData.bIsChoosingRotation"}; }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPlacementData>(); }
};