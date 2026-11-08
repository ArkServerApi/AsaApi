#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UActorComponent.h"

struct UPrimalHarvestingComponent : UActorComponent
{
public:
	UPrimalHarvestingComponent() = delete;
	~UPrimalHarvestingComponent() = delete;
	UPrimalHarvestingComponent(const UPrimalHarvestingComponent&) = delete;
	UPrimalHarvestingComponent& operator=(const UPrimalHarvestingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalHarvestingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalHarvestingComponent"); }

	float& MaxHarvestHealthField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MaxHarvestHealth"); }
	float& ExtraHarvestingXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExtraHarvestingXPMultiplier"); }
	float& HarvestHealthGiveResourceIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.HarvestHealthGiveResourceInterval"); }
	float& CurrentHarvestHealthField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.CurrentHarvestHealth"); }
	bool& bIsUnharvestableField() { return *GetNativePointerField<bool*>(this, "UPrimalHarvestingComponent.bIsUnharvestable"); }
	int& AssignedToTribeIDField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.AssignedToTribeID"); }
	float& UseHarvestDamageAmountField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.UseHarvestDamageAmount"); }
	float& UsableHarvestSphereRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.UsableHarvestSphereRadius"); }
	bool& ShouldReplenishField() { return *GetNativePointerField<bool*>(this, "UPrimalHarvestingComponent.ShouldReplenish"); }
	float& MinPlayerDistanceReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinPlayerDistanceReplenishing"); }
	float& MinStructureDistanceReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinStructureDistanceReplenishing"); }
	float& MinNonCoreStructureDistanceReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.MinNonCoreStructureDistanceReplenishing"); }
	float& BaseMinTimeAfterDepletionReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.BaseMinTimeAfterDepletionReplenishing"); }
	float& BaseMaxTimeAfterDepletionReplenishingField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.BaseMaxTimeAfterDepletionReplenishing"); }
	float& ExhaustedDepletionTimeIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionTimeInterval"); }
	float& ExhaustedDepletionPowerField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionPower"); }
	float& ExhaustedDepletionEffectScaleField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ExhaustedDepletionEffectScale"); }
	float& ReduceExhaustedDepletionSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.ReduceExhaustedDepletionSpeed"); }
	float& AutoReplenishIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.AutoReplenishInterval"); }
	float& AutoReplenishPercentField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.AutoReplenishPercent"); }
	float& DamageInstigatorAmountField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DamageInstigatorAmount"); }
	int& GiveItemEntriesMinField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.GiveItemEntriesMin"); }
	int& GiveItemEntriesMaxField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.GiveItemEntriesMax"); }
	float& TamedDinoHarvestGiveHealthMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.TamedDinoHarvestGiveHealthMultiplier"); }
	float& DinoHarvestGiveHealthAmountField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthAmount"); }
	float& DinoHarvestGiveHealthSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthSpeed"); }
	int& DinoHarvestGiveHealthDescriptionIndexField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.DinoHarvestGiveHealthDescriptionIndex"); }
	int& NumOfPerInstanceCustomDataValuesField() { return *GetNativePointerField<int*>(this, "UPrimalHarvestingComponent.NumOfPerInstanceCustomDataValues"); }
	float& HarvestingPriorityField() { return *GetNativePointerField<float*>(this, "UPrimalHarvestingComponent.HarvestingPriority"); }

	bool ShouldAddToActorComponents() { return NativeCall<bool>(this, "UPrimalHarvestingComponent.ShouldAddToActorComponents()"); }
	float GetCurrentHarvestHealth() { return NativeCall<float>(this, "UPrimalHarvestingComponent.GetCurrentHarvestHealth()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimalHarvestingComponent._getUObject()"); }
	bool ShouldInstantHarvest() { return NativeCall<bool>(this, "UPrimalHarvestingComponent.ShouldInstantHarvest()"); }
	bool AllowOctreeUsing() { return NativeCall<bool>(this, "UPrimalHarvestingComponent.AllowOctreeUsing()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "UPrimalHarvestingComponent.DrawHUD(AShooterHUD*)", HUD); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "UPrimalHarvestingComponent.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	int GetNumOfCustomDataValues() { return NativeCall<int>(this, "UPrimalHarvestingComponent.GetNumOfCustomDataValues()"); }
	bool WantsInstanceRotation() { return NativeCall<bool>(this, "UPrimalHarvestingComponent.WantsInstanceRotation()"); }
	void HandleHarvestingMilestones(AShooterPlayerController* ForPC, UPrimalItem* ForItem, int Quantity) { NativeCall<void, AShooterPlayerController*, UPrimalItem*, int>(this, "UPrimalHarvestingComponent.HandleHarvestingMilestones(AShooterPlayerController*,UPrimalItem*,int)", ForPC, ForItem, Quantity); }
	float GetInstanceCurrentHarvestHealth(UInstancedStaticMeshComponent* FromISMC, int WithHitBodyIndex) { return NativeCall<float, UInstancedStaticMeshComponent*, int>(this, "UPrimalHarvestingComponent.GetInstanceCurrentHarvestHealth(UInstancedStaticMeshComponent*,int)", FromISMC, WithHitBodyIndex); }

	BitFieldValue<bool, unsigned __int32> bSetOwnerHealthToHarvestHealth() { return { this, "UPrimalHarvestingComponent.bSetOwnerHealthToHarvestHealth"}; }
	BitFieldValue<bool, unsigned __int32> bUsableHarvesting() { return { this, "UPrimalHarvestingComponent.bUsableHarvesting"}; }
	BitFieldValue<bool, unsigned __int32> bAllowForcedRepopulation() { return { this, "UPrimalHarvestingComponent.bAllowForcedRepopulation"}; }
	BitFieldValue<bool, unsigned __int32> bAllowHarvestHealthScaling() { return { this, "UPrimalHarvestingComponent.bAllowHarvestHealthScaling"}; }
	BitFieldValue<bool, unsigned __int32> bUsableAllowHarvestHealthScaling() { return { this, "UPrimalHarvestingComponent.bUsableAllowHarvestHealthScaling"}; }
	BitFieldValue<bool, unsigned __int32> bNonBlockingUsableHarvesting() { return { this, "UPrimalHarvestingComponent.bNonBlockingUsableHarvesting"}; }
	BitFieldValue<bool, unsigned __int32> bClampResourceHarvestDamage() { return { this, "UPrimalHarvestingComponent.bClampResourceHarvestDamage"}; }
	BitFieldValue<bool, unsigned __int32> bIsDefaultHarvestingComponent() { return { this, "UPrimalHarvestingComponent.bIsDefaultHarvestingComponent"}; }
	BitFieldValue<bool, unsigned __int32> bIsSingleUnitHarvest() { return { this, "UPrimalHarvestingComponent.bIsSingleUnitHarvest"}; }
	BitFieldValue<bool, unsigned __int32> bAssignedToTribeHarvestOnly() { return { this, "UPrimalHarvestingComponent.bAssignedToTribeHarvestOnly"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPRecieveComponentDamage() { return { this, "UPrimalHarvestingComponent.bUseBPRecieveComponentDamage"}; }
	BitFieldValue<bool, unsigned __int32> bEnforceSingleInstantHarvest() { return { this, "UPrimalHarvestingComponent.bEnforceSingleInstantHarvest"}; }

	USoundBase*& HarvestDestructionSoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalHarvestingComponent.HarvestDestructionSound"); }

	FString& DescriptiveNameField() { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.DescriptiveName"); }
	FString& UseHarvestStringField() { return *GetNativePointerField<FString*>(this, "UPrimalHarvestingComponent.UseHarvestString"); }
	FOnItemHarvested& OnItemHarvestedField() { return *GetNativePointerField<FOnItemHarvested*>(this, "UPrimalHarvestingComponent.OnItemHarvested"); }
	FAttachedInstancedHarvestingElement*& ActiveInstancedElementField() { return *GetNativePointerField<FAttachedInstancedHarvestingElement**>(this, "UPrimalHarvestingComponent.ActiveInstancedElement"); }
	TArray<FName, TSizedDefaultAllocator<32> >& PendingMilestoneUpdatesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalHarvestingComponent.PendingMilestoneUpdates"); }
	TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>& LastHarvesterPCField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>*>(this, "UPrimalHarvestingComponent.LastHarvesterPC"); }
	void BPRecieveComponentDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, AController*, AActor*>(this, "UPrimalHarvestingComponent.BPRecieveComponentDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	FAttachedInstanced* AllocateAttachment(UActorComponent* Parent, FAttachedInstancedHelper& WithHelper, int MaxInstances) { return NativeCall<FAttachedInstanced*, UActorComponent*, FAttachedInstancedHelper&, int>(this, "UPrimalHarvestingComponent.AllocateAttachment(UActorComponent*,FAttachedInstancedHelper&,int)", Parent, WithHelper, MaxInstances); }
};
