#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class ULandscapeLayerInfoObject : public UObject
{
public:
	ULandscapeLayerInfoObject() = delete;
	~ULandscapeLayerInfoObject() = delete;
	ULandscapeLayerInfoObject(const ULandscapeLayerInfoObject&) = delete;
	ULandscapeLayerInfoObject& operator=(const ULandscapeLayerInfoObject&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeLayerInfoObject"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeLayerInfoObject"); }
	FName& LayerNameField() { return *GetNativePointerField<FName*>(this, "ULandscapeLayerInfoObject.LayerName"); }
	float& HardnessField() { return *GetNativePointerField<float*>(this, "ULandscapeLayerInfoObject.Hardness"); }
	FLinearColor& LayerUsageDebugColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULandscapeLayerInfoObject.LayerUsageDebugColor"); }
	FName& BlendGroupField() { return *GetNativePointerField<FName*>(this, "ULandscapeLayerInfoObject.BlendGroup"); }
	void SetLayerUsageDebugColor(const FLinearColor& InLayerUsageDebugColor, bool bInModify, unsigned int InChangeType) { NativeCall<void, const FLinearColor&, bool, unsigned int>(this, "ULandscapeLayerInfoObject.SetLayerUsageDebugColor(FLinearColor&,bool,unsignedint)", InLayerUsageDebugColor, bInModify, InChangeType); }
	void SetHardness(float InHardness, bool bInModify, unsigned int InChangeType) { NativeCall<void, float, bool, unsigned int>(this, "ULandscapeLayerInfoObject.SetHardness(float,bool,unsignedint)", InHardness, bInModify, InChangeType); }
	void SetLayerName(const FName& InLayerName, bool bInModify) { NativeCall<void, const FName&, bool>(this, "ULandscapeLayerInfoObject.SetLayerName(FName&,bool)", InLayerName, bInModify); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULandscapeLayerInfoObject.Serialize(FArchive&)", Ar); }
};
