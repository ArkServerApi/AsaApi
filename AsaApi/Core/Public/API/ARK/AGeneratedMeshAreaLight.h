#pragma once
#include "BulkForward.h"
#include "ASpotLight.h"

struct AGeneratedMeshAreaLight : public ASpotLight
{
public:
	AGeneratedMeshAreaLight() = delete;
	~AGeneratedMeshAreaLight() = delete;
	AGeneratedMeshAreaLight(const AGeneratedMeshAreaLight&) = delete;
	AGeneratedMeshAreaLight& operator=(const AGeneratedMeshAreaLight&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
