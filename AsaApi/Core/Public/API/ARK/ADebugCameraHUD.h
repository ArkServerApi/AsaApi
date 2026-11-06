#pragma once
#include "BulkForward.h"
#include "AHUD.h"

struct ADebugCameraHUD : public AHUD
{
public:
	ADebugCameraHUD() = delete;
	~ADebugCameraHUD() = delete;
	ADebugCameraHUD(const ADebugCameraHUD&) = delete;
	ADebugCameraHUD& operator=(const ADebugCameraHUD&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADebugCameraHUD"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADebugCameraHUD"); }

	void PostRender() { NativeCall<void>(this, "ADebugCameraHUD.PostRender()"); }
	bool DisplayMaterials(float X, float& Y, float DY, UMeshComponent* MeshComp) { return NativeCall<bool, float, float&, float, UMeshComponent*>(this, "ADebugCameraHUD.DisplayMaterials(float,float&,float,UMeshComponent*)", X, Y, DY, MeshComp); }
};
