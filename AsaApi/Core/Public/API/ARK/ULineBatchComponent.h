#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct ULineBatchComponent : public UPrimitiveComponent
{
public:
	ULineBatchComponent() = delete;
	~ULineBatchComponent() = delete;
	ULineBatchComponent(const ULineBatchComponent&) = delete;
	ULineBatchComponent& operator=(const ULineBatchComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULineBatchComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULineBatchComponent"); }

	float& DefaultLifeTimeField() { return *GetNativePointerField<float*>(this, "ULineBatchComponent.DefaultLifeTime"); }
	BitFieldValue<bool, unsigned __int32> bCalculateAccurateBounds() { return { this, "ULineBatchComponent.bCalculateAccurateBounds"}; }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "ULineBatchComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void DrawLine(const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& End, const FLinearColor& Color, unsigned char DepthPriority, float Thickness, float LifeTime, unsigned int BatchID) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const FLinearColor&, unsigned char, float, float, unsigned int>(this, "ULineBatchComponent.DrawLine(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FLinearColor&,unsignedchar,float,float,unsignedint)", Start, End, Color, DepthPriority, Thickness, LifeTime, BatchID); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "ULineBatchComponent.CreateSceneProxy()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "ULineBatchComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void Flush() { NativeCall<void>(this, "ULineBatchComponent.Flush()"); }
	void DrawPoint(const UE::Math::TVector<double>& Position, const FLinearColor& Color, float PointSize, unsigned char DepthPriority, float LifeTime, unsigned int BatchID) { NativeCall<void, const UE::Math::TVector<double>&, const FLinearColor&, float, unsigned char, float, unsigned int>(this, "ULineBatchComponent.DrawPoint(UE::Math::TVector<double>&,FLinearColor&,float,unsignedchar,float,unsignedint)", Position, Color, PointSize, DepthPriority, LifeTime, BatchID); }
};
