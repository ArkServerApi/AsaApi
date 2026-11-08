#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct USpringArmComponent : public USceneComponent
{
public:
	USpringArmComponent() = delete;
	~USpringArmComponent() = delete;
	USpringArmComponent(const USpringArmComponent&) = delete;
	USpringArmComponent& operator=(const USpringArmComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USpringArmComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USpringArmComponent"); }

	float& TargetArmLengthField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.TargetArmLength"); }
	UE::Math::TVector<double>& SocketOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USpringArmComponent.SocketOffset"); }
	UE::Math::TVector<double>& TargetOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USpringArmComponent.TargetOffset"); }
	float& ProbeSizeField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.ProbeSize"); }
	float& CameraLagSpeedField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.CameraLagSpeed"); }
	float& CameraRotationLagSpeedField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.CameraRotationLagSpeed"); }
	float& CameraLagMaxTimeStepField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.CameraLagMaxTimeStep"); }
	float& CameraLagMaxDistanceField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.CameraLagMaxDistance"); }
	bool& bIsCameraFixedField() { return *GetNativePointerField<bool*>(this, "USpringArmComponent.bIsCameraFixed"); }
	UE::Math::TVector<double>& UnfixedCameraPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USpringArmComponent.UnfixedCameraPosition"); }
	UE::Math::TVector<double>& PreviousDesiredLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USpringArmComponent.PreviousDesiredLoc"); }
	UE::Math::TVector<double>& PreviousArmOriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USpringArmComponent.PreviousArmOrigin"); }
	UE::Math::TRotator<double>& PreviousDesiredRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USpringArmComponent.PreviousDesiredRot"); }
	UE::Math::TVector<double>& RelativeSocketLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USpringArmComponent.RelativeSocketLocation"); }
	BitFieldValue<bool, unsigned __int32> bDoCollisionTest() { return { this, "USpringArmComponent.bDoCollisionTest"}; }
	BitFieldValue<bool, unsigned __int32> bUsePawnControlRotation() { return { this, "USpringArmComponent.bUsePawnControlRotation"}; }
	BitFieldValue<bool, unsigned __int32> bInheritPitch() { return { this, "USpringArmComponent.bInheritPitch"}; }
	BitFieldValue<bool, unsigned __int32> bInheritYaw() { return { this, "USpringArmComponent.bInheritYaw"}; }
	BitFieldValue<bool, unsigned __int32> bInheritRoll() { return { this, "USpringArmComponent.bInheritRoll"}; }
	BitFieldValue<bool, unsigned __int32> bEnableCameraLag() { return { this, "USpringArmComponent.bEnableCameraLag"}; }
	BitFieldValue<bool, unsigned __int32> bEnableCameraRotationLag() { return { this, "USpringArmComponent.bEnableCameraRotationLag"}; }
	BitFieldValue<bool, unsigned __int32> bUseCameraLagSubstepping() { return { this, "USpringArmComponent.bUseCameraLagSubstepping"}; }
	BitFieldValue<bool, unsigned __int32> bDrawDebugLagMarkers() { return { this, "USpringArmComponent.bDrawDebugLagMarkers"}; }
	BitFieldValue<bool, unsigned __int32> bClampToMaxPhysicsDeltaTime() { return { this, "USpringArmComponent.bClampToMaxPhysicsDeltaTime"}; }
	UE::Math::TTransform<double>* GetSocketTransform(UE::Math::TTransform<double>* result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, ERelativeTransformSpace>(this, "USpringArmComponent.GetSocketTransform(FName,ERelativeTransformSpace)", result, InSocketName, TransformSpace); }
	UE::Math::TRotator<double>* GetTargetRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "USpringArmComponent.GetTargetRotation()", result); }
	void OnRegister() { NativeCall<void>(this, "USpringArmComponent.OnRegister()"); }
	bool HasAnySockets() { return NativeCall<bool>(this, "USpringArmComponent.HasAnySockets()"); }
	void UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime) { NativeCall<void, bool, bool, bool, float>(this, "USpringArmComponent.UpdateDesiredArmLocation(bool,bool,bool,float)", bDoTrace, bDoLocationLag, bDoRotationLag, DeltaTime); }
	void PostLoad() { NativeCall<void>(this, "USpringArmComponent.PostLoad()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "USpringArmComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	UE::Math::TVector<double>* BlendLocations(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& DesiredArmLocation, const UE::Math::TVector<double>& TraceHitLocation, bool bHitSomething, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool, float>(this, "USpringArmComponent.BlendLocations(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,float)", result, DesiredArmLocation, TraceHitLocation, bHitSomething, DeltaTime); }
	UE::Math::TRotator<double>* GetDesiredRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "USpringArmComponent.GetDesiredRotation()", result); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "USpringArmComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
};
