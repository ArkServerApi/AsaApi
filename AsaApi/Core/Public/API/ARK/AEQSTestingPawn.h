#pragma once
#include "BulkForward.h"
#include "ACharacter.h"

struct AEQSTestingPawn : public ACharacter
{
public:
	AEQSTestingPawn() = delete;
	~AEQSTestingPawn() = delete;
	AEQSTestingPawn(const AEQSTestingPawn&) = delete;
	AEQSTestingPawn& operator=(const AEQSTestingPawn&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AEQSTestingPawn"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AEQSTestingPawn"); }

	float& TimeLimitPerStepField() { return *GetNativePointerField<float*>(this, "AEQSTestingPawn.TimeLimitPerStep"); }
	int& StepToDebugDrawField() { return *GetNativePointerField<int*>(this, "AEQSTestingPawn.StepToDebugDraw"); }
	EEnvQueryHightlightMode& HighlightModeField() { return *GetNativePointerField<EEnvQueryHightlightMode*>(this, "AEQSTestingPawn.HighlightMode"); }
	TEnumAsByte<EEnvQueryRunMode::Type>& QueryingModeField() { return *GetNativePointerField<TEnumAsByte<EEnvQueryRunMode::Type>*>(this, "AEQSTestingPawn.QueryingMode"); }
	FNavAgentProperties& NavAgentPropertiesField() { return *GetNativePointerField<FNavAgentProperties*>(this, "AEQSTestingPawn.NavAgentProperties"); }
	BitFieldValue<bool, unsigned __int32> bDrawLabels() { return { this, "AEQSTestingPawn.bDrawLabels"}; }
	BitFieldValue<bool, unsigned __int32> bDrawFailedItems() { return { this, "AEQSTestingPawn.bDrawFailedItems"}; }
	BitFieldValue<bool, unsigned __int32> bReRunQueryOnlyOnFinishedMove() { return { this, "AEQSTestingPawn.bReRunQueryOnlyOnFinishedMove"}; }
	BitFieldValue<bool, unsigned __int32> bShouldBeVisibleInGame() { return { this, "AEQSTestingPawn.bShouldBeVisibleInGame"}; }
	BitFieldValue<bool, unsigned __int32> bTickDuringGame() { return { this, "AEQSTestingPawn.bTickDuringGame"}; }
	BitFieldValue<bool, unsigned __int32> bRunQueryOnSelectionChanged() { return { this, "AEQSTestingPawn.bRunQueryOnSelectionChanged"}; }
	const FEnvQueryInstance* GetQueryInstance() { return NativeCall<const FEnvQueryInstance*>(this, "AEQSTestingPawn.GetQueryInstance()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AEQSTestingPawn._getUObject()"); }
	void TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction& ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction&>(this, "AEQSTestingPawn.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaTime, TickType, ThisTickFunction); }
	void MakeOneStep() { NativeCall<void>(this, "AEQSTestingPawn.MakeOneStep()"); }
	const FEnvQueryResult* GetQueryResult() { return NativeCall<const FEnvQueryResult*>(this, "AEQSTestingPawn.GetQueryResult()"); }
	float GetHighlightRangePct() { return NativeCall<float>(this, "AEQSTestingPawn.GetHighlightRangePct()"); }
	void Reset() { NativeCall<void>(this, "AEQSTestingPawn.Reset()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "AEQSTestingPawn.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	const FNavAgentProperties& GetNavAgentPropertiesRef() { return NativeCall<const FNavAgentProperties&>(this, "AEQSTestingPawn.GetNavAgentPropertiesRef()"); }
	bool GetShouldDebugDrawLabels() { return NativeCall<bool>(this, "AEQSTestingPawn.GetShouldDebugDrawLabels()"); }
	bool GetShouldDrawFailedItems() { return NativeCall<bool>(this, "AEQSTestingPawn.GetShouldDrawFailedItems()"); }
	void PostLoad() { NativeCall<void>(this, "AEQSTestingPawn.PostLoad()"); }
};
