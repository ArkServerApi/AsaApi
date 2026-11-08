#pragma once


struct FOverlappedFoliageElement
{
	// Fields

	AActor*& HarvestActorField() { return *GetNativePointerField<AActor**>(this, "FOverlappedFoliageElement.HarvestActor"); }
	UInstancedStaticMeshComponent*& InstancedStaticMeshComponentField() { return *GetNativePointerField<UInstancedStaticMeshComponent**>(this, "FOverlappedFoliageElement.InstancedStaticMeshComponent"); }
	UPrimalHarvestingComponent*& HarvestingComponentField() { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "FOverlappedFoliageElement.HarvestingComponent"); }
	UE::Math::TVector<double>& HarvestLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FOverlappedFoliageElement.HarvestLocation"); }
	int& HitBodyIndexField() { return *GetNativePointerField<int*>(this, "FOverlappedFoliageElement.HitBodyIndex"); }
	float& MaxHarvestHealthField() { return *GetNativePointerField<float*>(this, "FOverlappedFoliageElement.MaxHarvestHealth"); }
	float& CurrentHarvestHealthField() { return *GetNativePointerField<float*>(this, "FOverlappedFoliageElement.CurrentHarvestHealth"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsUnharvestableField() { return { this, "FOverlappedFoliageElement.bIsUnharvestable" }; }
	BitFieldValue<bool, unsigned __int32> bIsVisibleAndActiveField() { return { this, "FOverlappedFoliageElement.bIsVisibleAndActive" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FOverlappedFoliageElement>(); }
};