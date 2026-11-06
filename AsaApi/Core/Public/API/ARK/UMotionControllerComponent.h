#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UMotionControllerComponent : public UPrimitiveComponent
{
public:
	UMotionControllerComponent() = delete;
	~UMotionControllerComponent() = delete;
	UMotionControllerComponent(const UMotionControllerComponent&) = delete;
	UMotionControllerComponent& operator=(const UMotionControllerComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMotionControllerComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMotionControllerComponent"); }

	int& PlayerIndexField() { return *GetNativePointerField<int*>(this, "UMotionControllerComponent.PlayerIndex"); }
	FName& MotionSourceField() { return *GetNativePointerField<FName*>(this, "UMotionControllerComponent.MotionSource"); }
	ETrackingStatus& CurrentTrackingStatusField() { return *GetNativePointerField<ETrackingStatus*>(this, "UMotionControllerComponent.CurrentTrackingStatus"); }
	IMotionController*& InUseMotionControllerField() { return *GetNativePointerField<IMotionController**>(this, "UMotionControllerComponent.InUseMotionController"); }
	bool& bTrackedField() { return *GetNativePointerField<bool*>(this, "UMotionControllerComponent.bTracked"); }
	bool& bHasAuthorityField() { return *GetNativePointerField<bool*>(this, "UMotionControllerComponent.bHasAuthority"); }
	bool& bProvidedLinearVelocityField() { return *GetNativePointerField<bool*>(this, "UMotionControllerComponent.bProvidedLinearVelocity"); }
	bool& bProvidedAngularVelocityField() { return *GetNativePointerField<bool*>(this, "UMotionControllerComponent.bProvidedAngularVelocity"); }
	bool& bProvidedLinearAccelerationField() { return *GetNativePointerField<bool*>(this, "UMotionControllerComponent.bProvidedLinearAcceleration"); }
	UE::Math::TVector<double>& LinearVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UMotionControllerComponent.LinearVelocity"); }
	UE::Math::TVector<double>& AngularVelocityAsAxisAndLengthField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UMotionControllerComponent.AngularVelocityAsAxisAndLength"); }
	UE::Math::TVector<double>& LinearAccelerationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UMotionControllerComponent.LinearAcceleration"); }
	IMotionController*& PolledMotionController_GameThreadField() { return *GetNativePointerField<IMotionController**>(this, "UMotionControllerComponent.PolledMotionController_GameThread"); }
	IMotionController*& PolledMotionController_RenderThreadField() { return *GetNativePointerField<IMotionController**>(this, "UMotionControllerComponent.PolledMotionController_RenderThread"); }
	bool& bPolledHMD_GameThreadField() { return *GetNativePointerField<bool*>(this, "UMotionControllerComponent.bPolledHMD_GameThread"); }
	bool& bPolledHMD_RenderThreadField() { return *GetNativePointerField<bool*>(this, "UMotionControllerComponent.bPolledHMD_RenderThread"); }
	UE::Math::TVector<double>& RenderThreadComponentScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UMotionControllerComponent.RenderThreadComponentScale"); }
	BitFieldValue<bool, unsigned __int32> bDisableLowLatencyUpdate() { return { this, "UMotionControllerComponent.bDisableLowLatencyUpdate"}; }
	void BeginDestroy() { NativeCall<void>(this, "UMotionControllerComponent.BeginDestroy()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UMotionControllerComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	bool GetLinearAcceleration(UE::Math::TVector<double>& OutLinearAcceleration) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "UMotionControllerComponent.GetLinearAcceleration(UE::Math::TVector<double>&)", OutLinearAcceleration); }
	bool GetLinearVelocity(UE::Math::TVector<double>& OutLinearVelocity) { return NativeCall<bool, UE::Math::TVector<double>&>(this, "UMotionControllerComponent.GetLinearVelocity(UE::Math::TVector<double>&)", OutLinearVelocity); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UMotionControllerComponent.Serialize(FArchive&)", Ar); }
	void InitializeComponent() { NativeCall<void>(this, "UMotionControllerComponent.InitializeComponent()"); }
	bool GetAngularVelocity(UE::Math::TRotator<double>& OutAngularVelocity) { return NativeCall<bool, UE::Math::TRotator<double>&>(this, "UMotionControllerComponent.GetAngularVelocity(UE::Math::TRotator<double>&)", OutAngularVelocity); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UMotionControllerComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	bool PollControllerState_GameThread(UE::Math::TVector<double>& Position, UE::Math::TRotator<double>& Orientation, bool& OutbProvidedLinearVelocity, UE::Math::TVector<double>& OutLinearVelocity, bool& OutbProvidedAngularVelocity, UE::Math::TVector<double>& OutAngularVelocityAsAxisAndLength, bool& OutbProvidedLinearAcceleration, UE::Math::TVector<double>& OutLinearAcceleration, float WorldToMetersScale) { return NativeCall<bool, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, bool&, UE::Math::TVector<double>&, bool&, UE::Math::TVector<double>&, bool&, UE::Math::TVector<double>&, float>(this, "UMotionControllerComponent.PollControllerState_GameThread(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool&,UE::Math::TVector<double>&,bool&,UE::Math::TVector<double>&,bool&,UE::Math::TVector<double>&,float)", Position, Orientation, OutbProvidedLinearVelocity, OutLinearVelocity, OutbProvidedAngularVelocity, OutAngularVelocityAsAxisAndLength, OutbProvidedLinearAcceleration, OutLinearAcceleration, WorldToMetersScale); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UMotionControllerComponent.SendRenderTransform_Concurrent()"); }
};
