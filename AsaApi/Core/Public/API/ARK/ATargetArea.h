#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ATargetArea : public AActor
{
public:
	ATargetArea() = delete;
	~ATargetArea() = delete;
	ATargetArea(const ATargetArea&) = delete;
	ATargetArea& operator=(const ATargetArea&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	float& RadiusField() { return *GetNativePointerField<float*>(this, "ATargetArea.Radius"); }
	USphereComponent*& MySphereComponentField() { return *GetNativePointerField<USphereComponent**>(this, "ATargetArea.MySphereComponent"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ATargetArea.Tick(float)", DeltaSeconds); }
	void BeginPlay() { NativeCall<void>(this, "ATargetArea.BeginPlay()"); }
};
