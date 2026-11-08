#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALiveLinkDataPreview : public AActor
{
public:
	ALiveLinkDataPreview() = delete;
	~ALiveLinkDataPreview() = delete;
	ALiveLinkDataPreview(const ALiveLinkDataPreview&) = delete;
	ALiveLinkDataPreview& operator=(const ALiveLinkDataPreview&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALiveLinkDataPreview"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALiveLinkDataPreview"); }

	bool& bDrawLabelsField() { return *GetNativePointerField<bool*>(this, "ALiveLinkDataPreview.bDrawLabels"); }
	bool& bEvaluateLiveLinkField() { return *GetNativePointerField<bool*>(this, "ALiveLinkDataPreview.bEvaluateLiveLink"); }
	void InitializeSubjects() { NativeCall<void>(this, "ALiveLinkDataPreview.InitializeSubjects()"); }
	void SetMaterialInstance(ULiveLinkDataPreviewComponent* InDataPreviewComponent) { NativeCall<void, ULiveLinkDataPreviewComponent*>(this, "ALiveLinkDataPreview.SetMaterialInstance(ULiveLinkDataPreviewComponent*)", InDataPreviewComponent); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ALiveLinkDataPreview.Tick(float)", DeltaTime); }
};
