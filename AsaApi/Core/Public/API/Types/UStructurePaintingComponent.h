#pragma once
#include "../ARK/BulkForward.h"

struct UStructurePaintingComponent {
	int& PaintingSizeXField();
	int& PaintingSizeYField();
	TArray<FColor, TSizedDefaultAllocator<32> >& ColorTableField();
	int& PaintingTextureUVIndexField();
	int& PaintingRevisionField();
	int& UniquePaintingIdField();
	UE::Math::TRotator<double>& PreviewCameraRotationField();
	UE::Math::TVector<double>& PreviewCameraPivotOffsetField();
	float& PreviewCameraDistanceScaleFactorField();
	float& PreviewCameraDefaultZoomMultiplierField();
	float& PreviewCameraMaxZoomMultiplierField();
	TArray<int, TSizedDefaultAllocator<32> >& MirroredUPaintingIndicesField();
	float& OverridePaintingLoadRangeField();
	FName& PaintingTextureParamNameField();
	double& LastStreamRequestTimeField();
	float& RevisionChangedTimeField();
	bool& bForceReloadPaintField();
	FTimerHandle& TryPaintExtraPaintingComponentHandleField();
	FTimerHandle& SendQueuedPaintItemsToServerHandleField();
	bool& bIsPaintingFromLoadedFileField();
	FOnPaintingTextureSet& OnPaintingTextureSetField();
	bool& ForceReplicateToServerField();
	FColor& TransparencyReplacedWithBackgroundColorField();
	int& BulkUpdatingCounterField();
	BitFieldValue<bool, unsigned __int32> bMultiplicativeBlending();
	BitFieldValue<bool, unsigned __int32> bMirroredTexCoordU();
	BitFieldValue<bool, unsigned __int32> bIsExtraDinoSaddleCanvas();
	BitFieldValue<bool, unsigned __int32> bApplyRootBoneTranslationsWhenPainting();
	BitFieldValue<bool, unsigned __int32> bSaveToTribeFlagPainting();
	BitFieldValue<bool, unsigned __int32> bIsDynamicPainting();
	void DelayedTextureUpdate();
	float GetPaintConsumptionForEachPixel();
	void UnloadExtraPaintingComponent(int PaintingIndex);
	UMeshComponent* GetTargetMesh(int Paintingindex);
	bool HasPaintingTexture();
	void RemovePaintingTexture(int PaintingIndex);
	void ScaleTexture(float AddScaleX, float AddScaleY);
	void OnRep_PaintingRevision();
	UPaintingCache* PaintingCache();
	void OnComponentDestroyed(bool bDestroyingHierarchy);
	void ApplyServerQueuedPaints(int PaintingIndex);
	void SendQueuedPaintItemsToServer();
	void GetOldSavePaintingRevision();
	void BeginBulkUpdates();
	void SetClusterPaintingTexture(UPaintingTexture* Texture, const FGuid& ClusterPaintingGUID);
	void ServerScaleTexture(AShooterPlayerController* Painter, float AddScaleX, float AddScaleY);
	void EndBulkUpdates();
	void SetPaintingTextureMap(int Index, TWeakObjectPtr<UPaintingTexture, FWeakObjectPtr> PaintingTexture);
	void DestroyComponent(bool bPromoteChildren);
	TWeakObjectPtr<UPaintingTexture, FWeakObjectPtr> GetPaintingTexture(int Index);
	FString* GetLocalSavingPath(FString* result);
	void InitializeComponent();
	void CreateInitialTextureRevision(int PaintingIndex);
	TWeakObjectPtr<UPaintingTexture, FWeakObjectPtr> GetClusterPaintingTexture(const FGuid& ClusterPaintingGUID);
	UObject* _getUObject();
	void TryPaintExtraPaintingComponent(int PaintingIndex);
	void SetPaintingTexture(UPaintingTexture* Texture, int IndexPainting);
	void UpdateMICPaintingTextureForIndex(int IndexPainting);
	void OnRep_PaintingId();
	int GetUniquePaintingId(int Index);
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStructurePaintingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStructurePaintingComponent"); }
};