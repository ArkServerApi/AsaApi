#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UCanvas : public UObject
{
public:
	UCanvas() = delete;
	~UCanvas() = delete;
	UCanvas(const UCanvas&) = delete;
	UCanvas& operator=(const UCanvas&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCanvas"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCanvas"); }
	float& OrgXField() { return *GetNativePointerField<float*>(this, "UCanvas.OrgX"); }
	float& OrgYField() { return *GetNativePointerField<float*>(this, "UCanvas.OrgY"); }
	float& ClipXField() { return *GetNativePointerField<float*>(this, "UCanvas.ClipX"); }
	float& ClipYField() { return *GetNativePointerField<float*>(this, "UCanvas.ClipY"); }
	FColor& DrawColorField() { return *GetNativePointerField<FColor*>(this, "UCanvas.DrawColor"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UCanvas.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UCanvas.SizeY"); }
	int& UnsafeSizeXField() { return *GetNativePointerField<int*>(this, "UCanvas.UnsafeSizeX"); }
	int& UnsafeSizeYField() { return *GetNativePointerField<int*>(this, "UCanvas.UnsafeSizeY"); }
	int& SafeZonePadXField() { return *GetNativePointerField<int*>(this, "UCanvas.SafeZonePadX"); }
	int& SafeZonePadYField() { return *GetNativePointerField<int*>(this, "UCanvas.SafeZonePadY"); }
	int& SafeZonePadEXField() { return *GetNativePointerField<int*>(this, "UCanvas.SafeZonePadEX"); }
	int& SafeZonePadEYField() { return *GetNativePointerField<int*>(this, "UCanvas.SafeZonePadEY"); }
	int& CachedDisplayWidthField() { return *GetNativePointerField<int*>(this, "UCanvas.CachedDisplayWidth"); }
	int& CachedDisplayHeightField() { return *GetNativePointerField<int*>(this, "UCanvas.CachedDisplayHeight"); }
	FDisplayDebugManager& DisplayDebugManagerField() { return *GetNativePointerField<FDisplayDebugManager*>(this, "UCanvas.DisplayDebugManager"); }
	FCanvas*& CanvasField() { return *GetNativePointerField<FCanvas**>(this, "UCanvas.Canvas"); }
	FSceneView*& SceneViewField() { return *GetNativePointerField<FSceneView**>(this, "UCanvas.SceneView"); }
	BitFieldValue<bool, unsigned __int32> bCenterX() { return { this, "UCanvas.bCenterX"}; }
	BitFieldValue<bool, unsigned __int32> bCenterY() { return { this, "UCanvas.bCenterY"}; }
	BitFieldValue<bool, unsigned __int32> bNoSmooth() { return { this, "UCanvas.bNoSmooth"}; }
	void Reset(bool bKeepOrigin) { NativeCall<void, bool>(this, "UCanvas.Reset(bool)", bKeepOrigin); }
	int HowManyRows(float theX, float theY, UFont* theFont, float theScale, const wchar_t* theText, float canvasSize) { return NativeCall<int, float, float, UFont*, float, const wchar_t*, float>(this, "UCanvas.HowManyRows(float,float,UFont*,float,wchar_t*,float)", theX, theY, theFont, theScale, theText, canvasSize); }
	void SetDrawColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A) { NativeCall<void, unsigned char, unsigned char, unsigned char, unsigned char>(this, "UCanvas.SetDrawColor(unsignedchar,unsignedchar,unsignedchar,unsignedchar)", R, G, B, A); }
	void ApplySafeZoneTransform() { NativeCall<void>(this, "UCanvas.ApplySafeZoneTransform()"); }
	void UpdateSafeZoneData() { NativeCall<void>(this, "UCanvas.UpdateSafeZoneData()"); }
	float BPDrawTextCentered(UFont* InFont, const FString& InText, float X, float Y, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY) { return NativeCall<float, UFont*, const FString&, float, float, float, float, bool, bool>(this, "UCanvas.BPDrawTextCentered(UFont*,FString&,float,float,float,float,bool,bool)", InFont, InText, X, Y, XScale, YScale, bDoCenterX, bDoCenterY); }
	void K2_DrawMaterial(UMaterialInterface* RenderMaterial, UE::Math::TVector2<double>* ScreenPosition, UE::Math::TVector2<double>* ScreenSize, UE::Math::TVector2<double>* CoordinatePosition, UE::Math::TVector2<double>* CoordinateSize, float Rotation, UE::Math::TVector2<double>* PivotPoint, bool bApplyGammaCorrection) { if (!ScreenPosition) throw std::invalid_argument("Null native value parameter"); if (!ScreenSize) throw std::invalid_argument("Null native value parameter"); if (!CoordinatePosition) throw std::invalid_argument("Null native value parameter"); if (!CoordinateSize) throw std::invalid_argument("Null native value parameter"); if (!PivotPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UMaterialInterface *, UE :: Math :: TVector2 < double >, UE :: Math :: TVector2 < double >, UE :: Math :: TVector2 < double >, UE :: Math :: TVector2 < double >, float, UE :: Math :: TVector2 < double >, bool>(this, "UCanvas.K2_DrawMaterial(UMaterialInterface*,UE::Math::TVector2<double>,UE::Math::TVector2<double>,UE::Math::TVector2<double>,UE::Math::TVector2<double>,float,UE::Math::TVector2<double>,bool)", RenderMaterial, *ScreenPosition, *ScreenSize, *CoordinatePosition, *CoordinateSize, Rotation, *PivotPoint, bApplyGammaCorrection); }
	void SetView(FSceneView* InView) { NativeCall<void, FSceneView*>(this, "UCanvas.SetView(FSceneView*)", InView); }
	void Init(int InSizeX, int InSizeY, FSceneView* InSceneView, FCanvas* InCanvas) { NativeCall<void, int, int, FSceneView*, FCanvas*>(this, "UCanvas.Init(int,int,FSceneView*,FCanvas*)", InSizeX, InSizeY, InSceneView, InCanvas); }
	void DrawItem(FCanvasItem& Item) { NativeCall<void, FCanvasItem&>(this, "UCanvas.DrawItem(FCanvasItem&)", Item); }
	void DrawItem(FCanvasItem& Item, const UE::Math::TVector2<double>& InPosition) { NativeCall<void, FCanvasItem&, const UE::Math::TVector2<double>&>(this, "UCanvas.DrawItem(FCanvasItem&,UE::Math::TVector2<double>&)", Item, InPosition); }
	void PopSafeZoneTransform() { NativeCall<void>(this, "UCanvas.PopSafeZoneTransform()"); }
	void DrawItem(FCanvasItem& Item, float X, float Y) { NativeCall<void, FCanvasItem&, float, float>(this, "UCanvas.DrawItem(FCanvasItem&,float,float)", Item, X, Y); }
	float DrawTextWrapped(UFont* InFont, const FString& InText, float X, float Y, float XWidth, float YWidth, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY, const UE::Math::TVector2<double>& SpacingAdjust, const FFontRenderInfo& RenderInfo, int* OutXL) { return NativeCall<float, UFont*, const FString&, float, float, float, float, float, float, bool, bool, const UE::Math::TVector2<double>&, const FFontRenderInfo&, int*>(this, "UCanvas.DrawTextWrapped(UFont*,FString&,float,float,float,float,float,float,bool,bool,UE::Math::TVector2<double>&,FFontRenderInfo&,int*)", InFont, InText, X, Y, XWidth, YWidth, XScale, YScale, bDoCenterX, bDoCenterY, SpacingAdjust, RenderInfo, OutXL); }
	void SetDrawColor(const FColor& C) { NativeCall<void, const FColor&>(this, "UCanvas.SetDrawColor(FColor&)", C); }
	static void UpdateAllCanvasSafeZoneData() { NativeCall<void>(nullptr, "UCanvas.UpdateAllCanvasSafeZoneData()"); }
	void Deproject(UE::Math::TVector2<double>* ScreenPos, UE::Math::TVector<double>& WorldOrigin, UE::Math::TVector<double>& WorldDirection) { if (!ScreenPos) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >, UE :: Math :: TVector < double > &, UE :: Math :: TVector < double > &>(this, "UCanvas.Deproject(UE::Math::TVector2<double>,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", *ScreenPos, WorldOrigin, WorldDirection); }
	void DrawDebugGraph(const FString& Title, float ValueX, float ValueY, float UL_X, float UL_Y, float W, float H, UE::Math::TVector2<double>* RangeX, UE::Math::TVector2<double>* RangeY) { if (!RangeX) throw std::invalid_argument("Null native value parameter"); if (!RangeY) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, const FString &, float, float, float, float, float, float, UE :: Math :: TVector2 < double >, UE :: Math :: TVector2 < double >>(this, "UCanvas.DrawDebugGraph(FString&,float,float,float,float,float,float,UE::Math::TVector2<double>,UE::Math::TVector2<double>)", Title, ValueX, ValueY, UL_X, UL_Y, W, H, *RangeX, *RangeY); }
	int WrappedPrintReal(bool Draw, float X, float Y, float XWidth, float YWidth, int& out_XL, int& out_YL, UFont* Font, float ScaleX, float ScaleY, bool bCenterTextX, bool bCenterTextY, const wchar_t* Text, const FFontRenderInfo& RenderInfo, UE::Math::TVector2<double>& SpacingAdjust) { return NativeCall<int, bool, float, float, float, float, int&, int&, UFont*, float, float, bool, bool, const wchar_t*, const FFontRenderInfo&, UE::Math::TVector2<double>&>(this, "UCanvas.WrappedPrintReal(bool,float,float,float,float,int&,int&,UFont*,float,float,bool,bool,wchar_t*,FFontRenderInfo&,UE::Math::TVector2<double>&)", Draw, X, Y, XWidth, YWidth, out_XL, out_YL, Font, ScaleX, ScaleY, bCenterTextX, bCenterTextY, Text, RenderInfo, SpacingAdjust); }
	void Update() { NativeCall<void>(this, "UCanvas.Update()"); }
	void BeginDestroy() { NativeCall<void>(this, "UCanvas.BeginDestroy()"); }
};
