#pragma once
inline USceneComponent * & APointOfInterestCosmeticActor::CosmeticRootCompField()  { return *GetNativePointerField<USceneComponent**>(this, "APointOfInterestCosmeticActor.CosmeticRootComp"); }
inline UParticleSystemComponent * & APointOfInterestCosmeticActor::CosmeticParticlesCompField()  { return *GetNativePointerField<UParticleSystemComponent**>(this, "APointOfInterestCosmeticActor.CosmeticParticlesComp"); }
inline FPointOfInterestData & APointOfInterestCosmeticActor::MyPointOfInterestDataField()  { return *GetNativePointerField<FPointOfInterestData*>(this, "APointOfInterestCosmeticActor.MyPointOfInterestData"); }
