#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UW_SkillTreeRune : public UPrimalUserWidget
{
public:
	UW_SkillTreeRune() = delete;
	~UW_SkillTreeRune() = delete;
	UW_SkillTreeRune(const UW_SkillTreeRune&) = delete;
	UW_SkillTreeRune& operator=(const UW_SkillTreeRune&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UW_SkillTreeRune"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UW_SkillTreeRune"); }

	float& HexRotationField() { return *GetNativePointerField<float*>(this, "UW_SkillTreeRune.HexRotation"); }
	float& BorderThicknessField() { return *GetNativePointerField<float*>(this, "UW_SkillTreeRune.BorderThickness"); }
	float& TickLengthField() { return *GetNativePointerField<float*>(this, "UW_SkillTreeRune.TickLength"); }
	float& TickThicknessField() { return *GetNativePointerField<float*>(this, "UW_SkillTreeRune.TickThickness"); }
	int& TicksTotalField() { return *GetNativePointerField<int*>(this, "UW_SkillTreeRune.TicksTotal"); }
	bool& bInvert180Field() { return *GetNativePointerField<bool*>(this, "UW_SkillTreeRune.bInvert180"); }
	FLinearColor& TickColorField() { return *GetNativePointerField<FLinearColor*>(this, "UW_SkillTreeRune.TickColor"); }
	bool& bDirtyField() { return *GetNativePointerField<bool*>(this, "UW_SkillTreeRune.bDirty"); }
	UE::Math::TVector2<double>& CachedCenterField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UW_SkillTreeRune.CachedCenter"); }
	float& CachedRadiusField() { return *GetNativePointerField<float*>(this, "UW_SkillTreeRune.CachedRadius"); }
	double& StartDistField() { return *GetNativePointerField<double*>(this, "UW_SkillTreeRune.StartDist"); }
	UE::Math::TVector2<double>& LastSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UW_SkillTreeRune.LastSize"); }
	int NativePaint(const FPaintArgs& Args, const FGeometry& Geo, const FSlateRect& Cull, FSlateWindowElementList& Out, int Layer, const FWidgetStyle& Style, bool bParentEnabled) { return NativeCall<int, const FPaintArgs&, const FGeometry&, const FSlateRect&, FSlateWindowElementList&, int, const FWidgetStyle&, bool>(this, "UW_SkillTreeRune.NativePaint(FPaintArgs&,FGeometry&,FSlateRect&,FSlateWindowElementList&,int,FWidgetStyle&,bool)", Args, Geo, Cull, Out, Layer, Style, bParentEnabled); }
	void SynchronizeProperties() { NativeCall<void>(this, "UW_SkillTreeRune.SynchronizeProperties()"); }
	void UpdateCache(const FGeometry& Geo) { NativeCall<void, const FGeometry&>(this, "UW_SkillTreeRune.UpdateCache(FGeometry&)", Geo); }
};
