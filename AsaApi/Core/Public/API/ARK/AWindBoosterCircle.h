#pragma once
#include "BulkForward.h"
#include "AWindBooster.h"

struct AWindBoosterCircle : public AWindBooster
{
public:
	AWindBoosterCircle() = delete;
	~AWindBoosterCircle() = delete;
	AWindBoosterCircle(const AWindBoosterCircle&) = delete;
	AWindBoosterCircle& operator=(const AWindBoosterCircle&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWindBoosterCircle"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWindBoosterCircle"); }

	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "AWindBoosterCircle.OnBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	bool GetStaticMinimapData_Implementation(FMinimapMarkerStaticData& OutData) { return NativeCall<bool, FMinimapMarkerStaticData&>(this, "AWindBoosterCircle.GetStaticMinimapData_Implementation(FMinimapMarkerStaticData&)", OutData); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AWindBoosterCircle.Tick(float)", DeltaSeconds); }
};
