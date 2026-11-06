#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ABrush : public AActor
{
public:
	ABrush() = delete;
	~ABrush() = delete;
	ABrush(const ABrush&) = delete;
	ABrush& operator=(const ABrush&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABrush"); }

	FColor& BrushColorField() { return *GetNativePointerField<FColor*>(this, "ABrush.BrushColor"); }
	int& PolyFlagsField() { return *GetNativePointerField<int*>(this, "ABrush.PolyFlags"); }
	BitFieldValue<bool, unsigned __int32> bColored() { return { this, "ABrush.bColored"}; }
	BitFieldValue<bool, unsigned __int32> bSolidWhenSelected() { return { this, "ABrush.bSolidWhenSelected"}; }
	BitFieldValue<bool, unsigned __int32> bPlaceableFromClassBrowser() { return { this, "ABrush.bPlaceableFromClassBrowser"}; }
	BitFieldValue<bool, unsigned __int32> bNotForClientOrServer() { return { this, "ABrush.bNotForClientOrServer"}; }
	BitFieldValue<bool, unsigned __int32> bInManipulation() { return { this, "ABrush.bInManipulation"}; }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ABrush.IsLevelBoundsRelevant()"); }
	bool IsStaticBrush() { return NativeCall<bool>(this, "ABrush.IsStaticBrush()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "ABrush.NeedsLoadForServer()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABrush"); }
	bool IsBrushShape() { return NativeCall<bool>(this, "ABrush.IsBrushShape()"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "ABrush.NeedsLoadForClient()"); }
	bool IsComponentRelevantForNavigation(UActorComponent* Component) { return NativeCall<bool, UActorComponent*>(this, "ABrush.IsComponentRelevantForNavigation(UActorComponent*)", Component); }
	void RebuildNavigationData() { NativeCall<void>(this, "ABrush.RebuildNavigationData()"); }
	bool IsVolumeBrush() { return NativeCall<bool>(this, "ABrush.IsVolumeBrush()"); }
	FColor GetWireColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "ABrush.GetWireColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
};
