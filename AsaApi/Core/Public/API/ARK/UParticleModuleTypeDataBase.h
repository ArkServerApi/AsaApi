#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UParticleModule.h"

class UParticleModuleTypeDataBase : public UParticleModule
{
public:
	UParticleModuleTypeDataBase() = delete;
	~UParticleModuleTypeDataBase() = delete;
	UParticleModuleTypeDataBase(const UParticleModuleTypeDataBase&) = delete;
	UParticleModuleTypeDataBase& operator=(const UParticleModuleTypeDataBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleModuleTypeDataBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleModuleTypeDataBase"); }
	FParticleEmitterInstance* CreateInstance(UParticleEmitter* InEmitterParent, IParticleEmitterInstanceOwner& InComponent) { return NativeCall<FParticleEmitterInstance*, UParticleEmitter*, IParticleEmitterInstanceOwner&>(this, "UParticleModuleTypeDataBase.CreateInstance(UParticleEmitter*,IParticleEmitterInstanceOwner&)", InEmitterParent, InComponent); }
	bool IsAMeshEmitter() { return NativeCall<bool>(this, "UParticleModuleTypeDataBase.IsAMeshEmitter()"); }
	const FVertexFactoryType* GetVertexFactoryType() { return NativeCall<const FVertexFactoryType*>(this, "UParticleModuleTypeDataBase.GetVertexFactoryType()"); }
	bool SupportsSubUV() { return NativeCall<bool>(this, "UParticleModuleTypeDataBase.SupportsSubUV()"); }
	bool RequiresBuild() { return NativeCall<bool>(this, "UParticleModuleTypeDataBase.RequiresBuild()"); }
	void Build(FParticleEmitterBuildInfo& EmitterBuildInfo) { NativeCall<void, FParticleEmitterBuildInfo&>(this, "UParticleModuleTypeDataBase.Build(FParticleEmitterBuildInfo&)", EmitterBuildInfo); }
	void CacheModuleInfo(UParticleEmitter* Emitter) { NativeCall<void, UParticleEmitter*>(this, "UParticleModuleTypeDataBase.CacheModuleInfo(UParticleEmitter*)", Emitter); }
	bool SupportsSpecificScreenAlignmentFlags() { return NativeCall<bool>(this, "UParticleModuleTypeDataBase.SupportsSpecificScreenAlignmentFlags()"); }
	bool IsMotionBlurEnabled() { return NativeCall<bool>(this, "UParticleModuleTypeDataBase.IsMotionBlurEnabled()"); }
};
