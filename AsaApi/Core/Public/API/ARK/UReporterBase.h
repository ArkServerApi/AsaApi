#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UReporterBase : public UObject
{
public:
	UReporterBase() = delete;
	~UReporterBase() = delete;
	UReporterBase(const UReporterBase&) = delete;
	UReporterBase& operator=(const UReporterBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UReporterBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UReporterBase"); }
	bool& bVisibleField() { return *GetNativePointerField<bool*>(this, "UReporterBase.bVisible"); }
	void Draw(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UReporterBase.Draw(UCanvas*)", Canvas); }
	void DrawTriangle(UCanvas* Canvas, const UE::Math::TVector2<double>& Vertex1, const UE::Math::TVector2<double>& Vertex2, const UE::Math::TVector2<double>& Vertex3, const FLinearColor& Color) { NativeCall<void, UCanvas*, const UE::Math::TVector2<double>&, const UE::Math::TVector2<double>&, const UE::Math::TVector2<double>&, const FLinearColor&>(this, "UReporterBase.DrawTriangle(UCanvas*,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,FLinearColor&)", Canvas, Vertex1, Vertex2, Vertex3, Color); }
	UE::Math::TVector2<double>* ToScreenSpace(UE::Math::TVector2<double>* result, const UE::Math::TVector2<double>& InVector, UCanvas* Canvas) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, const UE::Math::TVector2<double>&, UCanvas*>(this, "UReporterBase.ToScreenSpace(UE::Math::TVector2<double>&,UCanvas*)", result, InVector, Canvas); }
};
