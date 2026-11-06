#pragma once
#include "BulkForward.h"
#include "UNavRelevantComponent.h"

struct UNavModifierComponent : public UNavRelevantComponent
{
public:
	UNavModifierComponent() = delete;
	~UNavModifierComponent() = delete;
	UNavModifierComponent(const UNavModifierComponent&) = delete;
	UNavModifierComponent& operator=(const UNavModifierComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavModifierComponent"); }

	UE::Math::TVector<double>& FailsafeExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UNavModifierComponent.FailsafeExtent"); }
	ENavigationDataResolution& NavMeshResolutionField() { return *GetNativePointerField<ENavigationDataResolution*>(this, "UNavModifierComponent.NavMeshResolution"); }
	FDelegateHandle& TransformUpdateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UNavModifierComponent.TransformUpdateHandle"); }
	BitFieldValue<bool, unsigned char> bIncludeAgentHeight() { return { this, "UNavModifierComponent.bIncludeAgentHeight"}; }
	void OnRegister() { NativeCall<void>(this, "UNavModifierComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UNavModifierComponent.OnUnregister()"); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "UNavModifierComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	void CalculateBounds() { NativeCall<void>(this, "UNavModifierComponent.CalculateBounds()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavModifierComponent"); }
	void CalcAndCacheBounds() { NativeCall<void>(this, "UNavModifierComponent.CalcAndCacheBounds()"); }
};
