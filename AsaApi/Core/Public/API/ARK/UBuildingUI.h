#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UBuildingUI : public UPrimalUI
{
public:
	UBuildingUI() = delete;
	~UBuildingUI() = delete;
	UBuildingUI(const UBuildingUI&) = delete;
	UBuildingUI& operator=(const UBuildingUI&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBuildingUI"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBuildingUI"); }

	APrimalStructurePlacer* GetStructurePlacer() { return NativeCall<APrimalStructurePlacer*>(this, "UBuildingUI.GetStructurePlacer()"); }
	UTexture2D* GetStructureIcon(APrimalStructure* Structure) { return NativeCall<UTexture2D*, APrimalStructure*>(this, "UBuildingUI.GetStructureIcon(APrimalStructure*)", Structure); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UBuildingUI.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
};
