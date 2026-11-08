#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UActorComponent.h"

struct UPrimalWindSourceComponent : UActorComponent
{
public:
	UPrimalWindSourceComponent() = delete;
	~UPrimalWindSourceComponent() = delete;
	UPrimalWindSourceComponent(const UPrimalWindSourceComponent&) = delete;
	UPrimalWindSourceComponent& operator=(const UPrimalWindSourceComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalWindSourceComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalWindSourceComponent"); }

	float& RadiusInnerField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.RadiusInner"); }
	float& RadiusOuterField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.RadiusOuter"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "UPrimalWindSourceComponent.Priority"); }
	float& MinimumFoliageInteractionRadiusForBabiesField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.MinimumFoliageInteractionRadiusForBabies"); }
	float& StrengthField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.Strength"); }
	float& VelStrengthMultiplierXYField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.VelStrengthMultiplierXY"); }
	float& VelStrengthMultiplierZField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.VelStrengthMultiplierZ"); }
	float& PlasticityAmountField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.PlasticityAmount"); }
	float& PlasticityAmountAbsoluteField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.PlasticityAmountAbsolute"); }
	float& OscillationSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.OscillationSpeed"); }
	float& BendAmountField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.BendAmount"); }
	float& MinVelocityThresholdSquaredField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.MinVelocityThresholdSquared"); }
	float& WindSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.WindSpeed"); }
	float& WindHeadingField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.WindHeading"); }
	float& WindFrequencyField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.WindFrequency"); }
	float& WindStrengthField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.WindStrength"); }
	float& TriggerPeriodicIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.TriggerPeriodicInterval"); }
	double& LastTriggeredPeriodicTimeField() { return *GetNativePointerField<double*>(this, "UPrimalWindSourceComponent.LastTriggeredPeriodicTime"); }
	double& BeginPlayTimeField() { return *GetNativePointerField<double*>(this, "UPrimalWindSourceComponent.BeginPlayTime"); }
	int& CollectionIndexField() { return *GetNativePointerField<int*>(this, "UPrimalWindSourceComponent.CollectionIndex"); }
	unsigned __int64& LastFrameBelowFluidSurfaceField() { return *GetNativePointerField<unsigned __int64*>(this, "UPrimalWindSourceComponent.LastFrameBelowFluidSurface"); }
	unsigned __int64& LastFrameAboveFluidSurfaceField() { return *GetNativePointerField<unsigned __int64*>(this, "UPrimalWindSourceComponent.LastFrameAboveFluidSurface"); }
	bool& SpecialCheck_IsInnerSphereAboveWaterField() { return *GetNativePointerField<bool*>(this, "UPrimalWindSourceComponent.SpecialCheck_IsInnerSphereAboveWater"); }
	unsigned __int64& LastFrameAppliedBySolverField() { return *GetNativePointerField<unsigned __int64*>(this, "UPrimalWindSourceComponent.LastFrameAppliedBySolver"); }
	float& expirationTimeRandomOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.expirationTimeRandomOffset"); }

	void SetupAttachment() { NativeCall<void>(this, "UPrimalWindSourceComponent.SetupAttachment()"); }
	bool AllowRegisterWithWorld(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UPrimalWindSourceComponent.AllowRegisterWithWorld(UWorld*)", InWorld); }
	bool ShouldDestroy() { return NativeCall<bool>(this, "UPrimalWindSourceComponent.ShouldDestroy()"); }
	bool IsAttachedToPrimalCharacter() { return NativeCall<bool>(this, "UPrimalWindSourceComponent.IsAttachedToPrimalCharacter()"); }
	float GetPlasticity() { return NativeCall<float>(this, "UPrimalWindSourceComponent.GetPlasticity()"); }
	void SetAttachment(UPrimitiveComponent* newAttachmentComponent, int attachmentCollectionIndex) { NativeCall<void, UPrimitiveComponent*, int>(this, "UPrimalWindSourceComponent.SetAttachment(UPrimitiveComponent*,int)", newAttachmentComponent, attachmentCollectionIndex); }
	void BeginPlay() { NativeCall<void>(this, "UPrimalWindSourceComponent.BeginPlay()"); }
	void UpdateSourceVelocityAndAcceleration(float DeltaTime) { NativeCall<void, float>(this, "UPrimalWindSourceComponent.UpdateSourceVelocityAndAcceleration(float)", DeltaTime); }
	void RefreshAttachment() { NativeCall<void>(this, "UPrimalWindSourceComponent.RefreshAttachment()"); }
	bool IsAttachedToPrimalStructure() { return NativeCall<bool>(this, "UPrimalWindSourceComponent.IsAttachedToPrimalStructure()"); }
	void DrawWindSourceDebug() { NativeCall<void>(this, "UPrimalWindSourceComponent.DrawWindSourceDebug()"); }
	bool IsInteractionEnabled() { return NativeCall<bool>(this, "UPrimalWindSourceComponent.IsInteractionEnabled()"); }
	void BPHandleCreatingBubbles() { NativeCall<void>(this, "UPrimalWindSourceComponent.BPHandleCreatingBubbles()"); }
	void BPDeactivateBubbleComponent() { NativeCall<void>(this, "UPrimalWindSourceComponent.BPDeactivateBubbleComponent()"); }

	BitFieldValue<bool, unsigned char> bEnableFluidInteraction() { return { this, "UPrimalWindSourceComponent.bEnableFluidInteraction"}; }
	BitFieldValue<bool, unsigned char> bEnableFoliageInteraction() { return { this, "UPrimalWindSourceComponent.bEnableFoliageInteraction"}; }
	BitFieldValue<bool, unsigned char> bEnableSnowInteraction() { return { this, "UPrimalWindSourceComponent.bEnableSnowInteraction"}; }
	BitFieldValue<bool, unsigned char> bEnableBubbleSpawnWhenUnderwaterIfWaterInteractionIsEnabled() { return { this, "UPrimalWindSourceComponent.bEnableBubbleSpawnWhenUnderwaterIfWaterInteractionIsEnabled"}; }
	BitFieldValue<bool, unsigned char> bFluidInteractionWasThrottled() { return { this, "UPrimalWindSourceComponent.bFluidInteractionWasThrottled"}; }
	BitFieldValue<bool, unsigned char> bFoliageInteractionWasThrottled() { return { this, "UPrimalWindSourceComponent.bFoliageInteractionWasThrottled"}; }
	BitFieldValue<bool, unsigned char> bSnowInteractionWasThrottled() { return { this, "UPrimalWindSourceComponent.bSnowInteractionWasThrottled"}; }
	BitFieldValue<bool, unsigned char> bEnableFoliageInteractionOnBabies() { return { this, "UPrimalWindSourceComponent.bEnableFoliageInteractionOnBabies"}; }
	BitFieldValue<bool, unsigned char> bEnableFluidEmissionTexture() { return { this, "UPrimalWindSourceComponent.bEnableFluidEmissionTexture"}; }
	BitFieldValue<bool, unsigned char> bEnabled() { return { this, "UPrimalWindSourceComponent.bEnabled"}; }
	BitFieldValue<bool, unsigned char> bUsedOnPlayerCamera() { return { this, "UPrimalWindSourceComponent.bUsedOnPlayerCamera"}; }
	BitFieldValue<bool, unsigned char> bUseVolumetricDispatcher() { return { this, "UPrimalWindSourceComponent.bUseVolumetricDispatcher"}; }
	BitFieldValue<bool, unsigned char> bTriggerConstant() { return { this, "UPrimalWindSourceComponent.bTriggerConstant"}; }
	BitFieldValue<bool, unsigned char> bTriggerPeriodically() { return { this, "UPrimalWindSourceComponent.bTriggerPeriodically"}; }
	BitFieldValue<bool, unsigned char> bTriggerManual() { return { this, "UPrimalWindSourceComponent.bTriggerManual"}; }
	BitFieldValue<bool, unsigned char> bUseActorVelForStrength() { return { this, "UPrimalWindSourceComponent.bUseActorVelForStrength"}; }
	BitFieldValue<bool, unsigned char> bUseActorVelForDirection() { return { this, "UPrimalWindSourceComponent.bUseActorVelForDirection"}; }
	BitFieldValue<bool, unsigned char> bUseBPExitedFluidSurface() { return { this, "UPrimalWindSourceComponent.bUseBPExitedFluidSurface"}; }
	BitFieldValue<bool, unsigned char> bUseBPImpactedFluidSurface() { return { this, "UPrimalWindSourceComponent.bUseBPImpactedFluidSurface"}; }
	BitFieldValue<bool, unsigned char> bUseBPImpactingFluidSurfaceTick() { return { this, "UPrimalWindSourceComponent.bUseBPImpactingFluidSurfaceTick"}; }
	BitFieldValue<bool, unsigned char> bEnableDebug() { return { this, "UPrimalWindSourceComponent.bEnableDebug"}; }
	BitFieldValue<bool, unsigned char> SelectThisComponent() { return { this, "UPrimalWindSourceComponent.SelectThisComponent"}; }
	BitFieldValue<bool, unsigned char> SpecialCheck_DetermineInnerSphereImpactsFluid() { return { this, "UPrimalWindSourceComponent.SpecialCheck_DetermineInnerSphereImpactsFluid"}; }
	BitFieldValue<bool, unsigned char> bClearedParameters() { return { this, "UPrimalWindSourceComponent.bClearedParameters"}; }
	BitFieldValue<bool, unsigned char> bWasEnabled() { return { this, "UPrimalWindSourceComponent.bWasEnabled"}; }
	BitFieldValue<bool, unsigned char> BubbleComponentIsActive() { return { this, "UPrimalWindSourceComponent.BubbleComponentIsActive"}; }

	APrimalFoliageSolver*& MyFoliageSolverField() { return *GetNativePointerField<APrimalFoliageSolver**>(this, "UPrimalWindSourceComponent.MyFoliageSolver"); }
	AVolumetricDispatcher*& MyDispatcherField() { return *GetNativePointerField<AVolumetricDispatcher**>(this, "UPrimalWindSourceComponent.MyDispatcher"); }
	UPrimitiveComponent*& AttachmentComponentField() { return *GetNativePointerField<UPrimitiveComponent**>(this, "UPrimalWindSourceComponent.AttachmentComponent"); }

	EWindSourceMode& WindSourceModeField() { return *GetNativePointerField<EWindSourceMode*>(this, "UPrimalWindSourceComponent.WindSourceMode"); }
	UE::Math::TVector<double>& WindSourceRelativeOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalWindSourceComponent.WindSourceRelativeOffset"); }
	UE::Math::TVector<double>& ExtraCapsuleWindSourceRelativeOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalWindSourceComponent.ExtraCapsuleWindSourceRelativeOffset"); }
	EEffectScope& EffectScopeField() { return *GetNativePointerField<EEffectScope*>(this, "UPrimalWindSourceComponent.EffectScope"); }
	FName& CharacterAttachmentSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalWindSourceComponent.CharacterAttachmentSocket"); }
	UE::Math::TVector<float>& SourceScaleField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UPrimalWindSourceComponent.SourceScale"); }
	UE::Math::TVector<float>& DirectionalRadialField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UPrimalWindSourceComponent.DirectionalRadial"); }
	UE::Math::TVector<float>& CurrentVelocityField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UPrimalWindSourceComponent.CurrentVelocity"); }
	UE::Math::TVector<float>& CurrentAccelerationField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UPrimalWindSourceComponent.CurrentAcceleration"); }
	UE::Math::TVector<float>& ExtraCapsuleCurrentVelocityField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UPrimalWindSourceComponent.ExtraCapsuleCurrentVelocity"); }
	UE::Math::TVector<float>& ExtraCapsuleCurrentAccelerationField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UPrimalWindSourceComponent.ExtraCapsuleCurrentAcceleration"); }
	UE::Math::TVector<double>& PreviousLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalWindSourceComponent.PreviousLocation"); }
	UE::Math::TVector<float>& PreviousVelocityField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UPrimalWindSourceComponent.PreviousVelocity"); }
	UE::Math::TVector<double>& ExtraCapsulePreviousLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalWindSourceComponent.ExtraCapsulePreviousLocation"); }
	UE::Math::TVector<float>& ExtraCapsulePreviousVelocityField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UPrimalWindSourceComponent.ExtraCapsulePreviousVelocity"); }
	FName& ExtraCapsuleAttachmentSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalWindSourceComponent.ExtraCapsuleAttachmentSocket"); }
	FName& AttachmentSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalWindSourceComponent.AttachmentSocket"); }
	void AttachWindSourceToMeshComponent(UMeshComponent* AttachMeshComp, FName AttachSocket) { NativeCall<void, UMeshComponent*, FName>(this, "UPrimalWindSourceComponent.AttachWindSourceToMeshComponent(UMeshComponent*,FName)", AttachMeshComp, AttachSocket); }
	void GetScaledRadiiForFoliageInteraction(UPrimalWindSourceComponent* WindSource, float& inner, float& outer) { NativeCall<void, UPrimalWindSourceComponent*, float&, float&>(this, "UPrimalWindSourceComponent.GetScaledRadiiForFoliageInteraction(UPrimalWindSourceComponent*,float&,float&)", WindSource, inner, outer); }
	void BPExitedFluidSurface(const UE::Math::TVector<double>& impactLocation, float penetrationScalar) { NativeCall<void, const UE::Math::TVector<double>&, float>(this, "UPrimalWindSourceComponent.BPExitedFluidSurface(UE::Math::TVector<double>&,float)", impactLocation, penetrationScalar); }
	UE::Math::TVector<double>* GetCurrentWindSourceLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalWindSourceComponent.GetCurrentWindSourceLocation()", result); }
	UE::Math::TVector<double>* GetCurrentExtraCapsuleWindSourceLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalWindSourceComponent.GetCurrentExtraCapsuleWindSourceLocation()", result); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPrimalWindSourceComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void BPImpactingFluidSurfaceTick(const UE::Math::TVector<double>& impactLocation, float penetrationScalar) { NativeCall<void, const UE::Math::TVector<double>&, float>(this, "UPrimalWindSourceComponent.BPImpactingFluidSurfaceTick(UE::Math::TVector<double>&,float)", impactLocation, penetrationScalar); }
	void BPImpactedFluidSurface(const UE::Math::TVector<double>& impactLocation, float penetrationScalar) { NativeCall<void, const UE::Math::TVector<double>&, float>(this, "UPrimalWindSourceComponent.BPImpactedFluidSurface(UE::Math::TVector<double>&,float)", impactLocation, penetrationScalar); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UPrimalWindSourceComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
