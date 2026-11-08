#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADatasmithAreaLightActor : public AActor
{
public:
	ADatasmithAreaLightActor() = delete;
	~ADatasmithAreaLightActor() = delete;
	ADatasmithAreaLightActor(const ADatasmithAreaLightActor&) = delete;
	ADatasmithAreaLightActor& operator=(const ADatasmithAreaLightActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADatasmithAreaLightActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADatasmithAreaLightActor"); }

	TEnumAsByte<EComponentMobility::Type>& MobilityField() { return *GetNativePointerField<TEnumAsByte<EComponentMobility::Type>*>(this, "ADatasmithAreaLightActor.Mobility"); }
	EDatasmithAreaLightActorType& LightTypeField() { return *GetNativePointerField<EDatasmithAreaLightActorType*>(this, "ADatasmithAreaLightActor.LightType"); }
	EDatasmithAreaLightActorShape& LightShapeField() { return *GetNativePointerField<EDatasmithAreaLightActorShape*>(this, "ADatasmithAreaLightActor.LightShape"); }
	UE::Math::TVector2<double>& DimensionsField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "ADatasmithAreaLightActor.Dimensions"); }
	float& IntensityField() { return *GetNativePointerField<float*>(this, "ADatasmithAreaLightActor.Intensity"); }
	ELightUnits& IntensityUnitsField() { return *GetNativePointerField<ELightUnits*>(this, "ADatasmithAreaLightActor.IntensityUnits"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "ADatasmithAreaLightActor.Color"); }
	float& TemperatureField() { return *GetNativePointerField<float*>(this, "ADatasmithAreaLightActor.Temperature"); }
	bool& bUseIESBrightnessField() { return *GetNativePointerField<bool*>(this, "ADatasmithAreaLightActor.bUseIESBrightness"); }
	float& IESBrightnessScaleField() { return *GetNativePointerField<float*>(this, "ADatasmithAreaLightActor.IESBrightnessScale"); }
	UE::Math::TRotator<double>& RotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ADatasmithAreaLightActor.Rotation"); }
	float& SourceRadiusField() { return *GetNativePointerField<float*>(this, "ADatasmithAreaLightActor.SourceRadius"); }
	float& SourceLengthField() { return *GetNativePointerField<float*>(this, "ADatasmithAreaLightActor.SourceLength"); }
	float& AttenuationRadiusField() { return *GetNativePointerField<float*>(this, "ADatasmithAreaLightActor.AttenuationRadius"); }
	float& SpotlightInnerAngleField() { return *GetNativePointerField<float*>(this, "ADatasmithAreaLightActor.SpotlightInnerAngle"); }
	float& SpotlightOuterAngleField() { return *GetNativePointerField<float*>(this, "ADatasmithAreaLightActor.SpotlightOuterAngle"); }
};
