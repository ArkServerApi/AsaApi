#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UReporterBase.h"

class UReporterGraph : public UReporterBase
{
public:
	UReporterGraph() = delete;
	~UReporterGraph() = delete;
	UReporterGraph(const UReporterGraph&) = delete;
	UReporterGraph& operator=(const UReporterGraph&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UReporterGraph"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UReporterGraph"); }
	FRect& GraphScreenSizeField() { return *GetNativePointerField<FRect*>(this, "UReporterGraph.GraphScreenSize"); }
	FRect& GraphMinMaxDataField() { return *GetNativePointerField<FRect*>(this, "UReporterGraph.GraphMinMaxData"); }
	FLinearColor& AxesColorField() { return *GetNativePointerField<FLinearColor*>(this, "UReporterGraph.AxesColor"); }
	int& NumXNotchesField() { return *GetNativePointerField<int*>(this, "UReporterGraph.NumXNotches"); }
	int& NumYNotchesField() { return *GetNativePointerField<int*>(this, "UReporterGraph.NumYNotches"); }
	float& LegendWidthField() { return *GetNativePointerField<float*>(this, "UReporterGraph.LegendWidth"); }
	FColor& BackgroundColorField() { return *GetNativePointerField<FColor*>(this, "UReporterGraph.BackgroundColor"); }
	float& CursorLocationField() { return *GetNativePointerField<float*>(this, "UReporterGraph.CursorLocation"); }
	BitFieldValue<bool, unsigned __int32> bOffsetDataSets() { return { this, "UReporterGraph.bOffsetDataSets"}; }
	BitFieldValue<bool, unsigned __int32> bUseTinyFont() { return { this, "UReporterGraph.bUseTinyFont"}; }
	BitFieldValue<bool, unsigned __int32> bDrawCursorOnGraph() { return { this, "UReporterGraph.bDrawCursorOnGraph"}; }
	BitFieldValue<bool, unsigned __int32> bDrawExtremes() { return { this, "UReporterGraph.bDrawExtremes"}; }
	void DrawLegend(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UReporterGraph.DrawLegend(UCanvas*)", Canvas); }
	void DrawAxis(UCanvas* Canvas, UE::Math::TVector2<double>* Start, UE::Math::TVector2<double>* End, float NumNotches, bool bIsVerticalAxis) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UCanvas *, UE :: Math :: TVector2 < double >, UE :: Math :: TVector2 < double >, float, bool>(this, "UReporterGraph.DrawAxis(UCanvas*,UE::Math::TVector2<double>,UE::Math::TVector2<double>,float,bool)", Canvas, *Start, *End, NumNotches, bIsVerticalAxis); }
	void DrawAxes(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UReporterGraph.DrawAxes(UCanvas*)", Canvas); }
	UE::Math::TVector2<double>* ToScreenSpace(UE::Math::TVector2<double>* result, const UE::Math::TVector2<double>& InVector, UCanvas* Canvas) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, const UE::Math::TVector2<double>&, UCanvas*>(this, "UReporterGraph.ToScreenSpace(UE::Math::TVector2<double>&,UCanvas*)", result, InVector, Canvas); }
	void DrawData(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UReporterGraph.DrawData(UCanvas*)", Canvas); }
	void Draw(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UReporterGraph.Draw(UCanvas*)", Canvas); }
	void DrawThresholds(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UReporterGraph.DrawThresholds(UCanvas*)", Canvas); }
};
