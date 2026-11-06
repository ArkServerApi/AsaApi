#pragma once
#include "BulkForward.h"
#include "APlayerController.h"

struct ANoPawnPlayerController : public APlayerController
{
public:
	ANoPawnPlayerController() = delete;
	~ANoPawnPlayerController() = delete;
	ANoPawnPlayerController(const ANoPawnPlayerController&) = delete;
	ANoPawnPlayerController& operator=(const ANoPawnPlayerController&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANoPawnPlayerController"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANoPawnPlayerController"); }

	bool& bEnableReplicationToConnectionField() { return *GetNativePointerField<bool*>(this, "ANoPawnPlayerController.bEnableReplicationToConnection"); }
	AActor* GetViewTarget() { return NativeCall<AActor*>(this, "ANoPawnPlayerController.GetViewTarget()"); }
	void ServerSetViewTargetPosition_Implementation(UE::Math::TVector<double>* ViewTargetPos) { if (!ViewTargetPos) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "ANoPawnPlayerController.ServerSetViewTargetPosition_Implementation(UE::Math::TVector<double>)", *ViewTargetPos); }
	UNetConnection* GetNetConnection() { return NativeCall<UNetConnection*>(this, "ANoPawnPlayerController.GetNetConnection()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ANoPawnPlayerController.PostInitializeComponents()"); }
	void ServerEnableReplicationToConnection_Implementation(bool bEnable) { NativeCall<void, bool>(this, "ANoPawnPlayerController.ServerEnableReplicationToConnection_Implementation(bool)", bEnable); }
};
