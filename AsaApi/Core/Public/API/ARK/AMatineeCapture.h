#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AMatineeCapture : public AActor
{
public:
	AMatineeCapture() = delete;
	~AMatineeCapture() = delete;
	AMatineeCapture(const AMatineeCapture&) = delete;
	AMatineeCapture& operator=(const AMatineeCapture&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMatineeCapture"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMatineeCapture"); }

	AMatineeActor*& MatineeActorField() { return *GetNativePointerField<AMatineeActor**>(this, "AMatineeCapture.MatineeActor"); }
	float& CaptureFPSField() { return *GetNativePointerField<float*>(this, "AMatineeCapture.CaptureFPS"); }
	int& ResXField() { return *GetNativePointerField<int*>(this, "AMatineeCapture.ResX"); }
	int& ResYField() { return *GetNativePointerField<int*>(this, "AMatineeCapture.ResY"); }
	float& PreviewMatineeTimeField() { return *GetNativePointerField<float*>(this, "AMatineeCapture.PreviewMatineeTime"); }
	bool& bBeginCaptureField() { return *GetNativePointerField<bool*>(this, "AMatineeCapture.bBeginCapture"); }
	bool& bCancelCaptureField() { return *GetNativePointerField<bool*>(this, "AMatineeCapture.bCancelCapture"); }
	float& CaptureIntervalField() { return *GetNativePointerField<float*>(this, "AMatineeCapture.CaptureInterval"); }
	bool& bIsCapturingField() { return *GetNativePointerField<bool*>(this, "AMatineeCapture.bIsCapturing"); }
	int& CaptureIndexField() { return *GetNativePointerField<int*>(this, "AMatineeCapture.CaptureIndex"); }
	float& PreCaptureInterPositionField() { return *GetNativePointerField<float*>(this, "AMatineeCapture.PreCaptureInterPosition"); }
	int& TotalCapturesCountField() { return *GetNativePointerField<int*>(this, "AMatineeCapture.TotalCapturesCount"); }
};
