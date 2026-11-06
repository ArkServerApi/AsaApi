#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UBlueprintFunctionLibrary.h"

struct UPrimalBlueprintFunctions : UBlueprintFunctionLibrary
{
public:
	UPrimalBlueprintFunctions() = delete;
	~UPrimalBlueprintFunctions() = delete;
	UPrimalBlueprintFunctions(const UPrimalBlueprintFunctions&) = delete;
	UPrimalBlueprintFunctions& operator=(const UPrimalBlueprintFunctions&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalBlueprintFunctions"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalBlueprintFunctions"); }



	static void SetCastFarShadow(UPrimitiveComponent* Component, bool bCastFarShadow) { NativeCall<void, UPrimitiveComponent*, bool>(nullptr, "UPrimalBlueprintFunctions.SetCastFarShadow(UPrimitiveComponent*,bool)", Component, bCastFarShadow); }
	static UBehaviorTreeComponent* GetBehaviorTree(UBTNode* NodeOwner) { return NativeCall<UBehaviorTreeComponent*, UBTNode*>(nullptr, "UPrimalBlueprintFunctions.GetBehaviorTree(UBTNode*)", NodeOwner); }

	static UE::Math::TRotator<double>* GetInjectedLightDirection(UE::Math::TRotator<double>* result, UObject* WorldContextObject, ADirectionalLight* ForLight) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, UObject*, ADirectionalLight*>(nullptr, "UPrimalBlueprintFunctions.GetInjectedLightDirection(UObject*,ADirectionalLight*)", result, WorldContextObject, ForLight); }
	static TArray<float, TSizedDefaultAllocator<32> >* GetWaterHeightPlaneBufferData(TArray<float, TSizedDefaultAllocator<32> >* result, int waterPlanesGridTexture_Dim) { return NativeCall<TArray<float, TSizedDefaultAllocator<32> >*, TArray<float, TSizedDefaultAllocator<32> >*, int>(nullptr, "UPrimalBlueprintFunctions.GetWaterHeightPlaneBufferData(int)", result, waterPlanesGridTexture_Dim); }
	static int ControllerEvent_GetUserIndex(const FControllerEvent& Input) { return NativeCall<int, const FControllerEvent&>(nullptr, "UPrimalBlueprintFunctions.ControllerEvent_GetUserIndex(FControllerEvent&)", Input); }
	static FString* FloatToStringInvariant(FString* result, float Value, int Places) { return NativeCall<FString*, FString*, float, int>(nullptr, "UPrimalBlueprintFunctions.FloatToStringInvariant(float,int)", result, Value, Places); }
	static float ControllerEvent_GetAnalogValue(const FControllerEvent& Input) { return NativeCall<float, const FControllerEvent&>(nullptr, "UPrimalBlueprintFunctions.ControllerEvent_GetAnalogValue(FControllerEvent&)", Input); }
	static void ForceNotifyBlackboardValue(UBTNode* NodeOwner, const FBlackboardKeySelector& Key) { NativeCall<void, UBTNode*, const FBlackboardKeySelector&>(nullptr, "UPrimalBlueprintFunctions.ForceNotifyBlackboardValue(UBTNode*,FBlackboardKeySelector&)", NodeOwner, Key); }
};
