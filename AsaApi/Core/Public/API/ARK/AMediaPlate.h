#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AMediaPlate : public AActor
{
public:
	AMediaPlate() = delete;
	~AMediaPlate() = delete;
	AMediaPlate(const AMediaPlate&) = delete;
	AMediaPlate& operator=(const AMediaPlate&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMediaPlate"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMediaPlate"); }

	bool& bEnableHoldoutCompositeField() { return *GetNativePointerField<bool*>(this, "AMediaPlate.bEnableHoldoutComposite"); }
	UMaterialInterface* GetCurrentMaterial() { return NativeCall<UMaterialInterface*>(this, "AMediaPlate.GetCurrentMaterial()"); }
	void SetHoldoutCompositeEnabled(bool bInEnabled) { NativeCall<void, bool>(this, "AMediaPlate.SetHoldoutCompositeEnabled(bool)", bInEnabled); }
	void PostActorCreated() { NativeCall<void>(this, "AMediaPlate.PostActorCreated()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AMediaPlate.PostRegisterAllComponents()"); }
	void PostLoad() { NativeCall<void>(this, "AMediaPlate.PostLoad()"); }
	void BeginDestroy() { NativeCall<void>(this, "AMediaPlate.BeginDestroy()"); }
};
