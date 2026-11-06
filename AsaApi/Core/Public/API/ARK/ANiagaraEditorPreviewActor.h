#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ANiagaraEditorPreviewActor : public AActor
{
public:
	ANiagaraEditorPreviewActor() = delete;
	~ANiagaraEditorPreviewActor() = delete;
	ANiagaraEditorPreviewActor(const ANiagaraEditorPreviewActor&) = delete;
	ANiagaraEditorPreviewActor& operator=(const ANiagaraEditorPreviewActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANiagaraEditorPreviewActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANiagaraEditorPreviewActor"); }

	double& MotionDurationField() { return *GetNativePointerField<double*>(this, "ANiagaraEditorPreviewActor.MotionDuration"); }
	double& ShapeTensionField() { return *GetNativePointerField<double*>(this, "ANiagaraEditorPreviewActor.ShapeTension"); }
	double& ShapeScaleField() { return *GetNativePointerField<double*>(this, "ANiagaraEditorPreviewActor.ShapeScale"); }
	UE::Math::TRotator<double>& ShapeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ANiagaraEditorPreviewActor.ShapeRotation"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& CustomShapePointsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "ANiagaraEditorPreviewActor.CustomShapePoints"); }
	double& CircleRadiusField() { return *GetNativePointerField<double*>(this, "ANiagaraEditorPreviewActor.CircleRadius"); }
	UE::Math::TVector2<double>& SquareSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "ANiagaraEditorPreviewActor.SquareSize"); }
	UE::Math::TVector2<double>& TriangleSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "ANiagaraEditorPreviewActor.TriangleSize"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ANiagaraEditorPreviewActor.Tick(float)", DeltaSeconds); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ANiagaraEditorPreviewActor.PostUnregisterAllComponents()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ANiagaraEditorPreviewActor.PostRegisterAllComponents()"); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ANiagaraEditorPreviewActor.ShouldTickIfViewportsOnly()"); }
};
