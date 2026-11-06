#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalProgressionTreeGraph : UObject
{
public:
	UPrimalProgressionTreeGraph() = delete;
	~UPrimalProgressionTreeGraph() = delete;
	UPrimalProgressionTreeGraph(const UPrimalProgressionTreeGraph&) = delete;
	UPrimalProgressionTreeGraph& operator=(const UPrimalProgressionTreeGraph&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeGraph"); }



	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeGraph"); }

	TArray<UPrimalProgressionTreeFeature*, TSizedDefaultAllocator<32> >& GraphFeaturesField() { return *GetNativePointerField<TArray<UPrimalProgressionTreeFeature*, TSizedDefaultAllocator<32> >*>(this, "UPrimalProgressionTreeGraph.GraphFeatures"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetPathBetweenNodes_Implementation(TArray<FName, TSizedDefaultAllocator<32> >* result, FName StartNodeID, FName EndNodeID) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*, FName, FName>(this, "UPrimalProgressionTreeGraph.GetPathBetweenNodes_Implementation(FName,FName)", result, StartNodeID, EndNodeID); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetLeafNodes_Implementation(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalProgressionTreeGraph.GetLeafNodes_Implementation()", result); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetRootNodes_Implementation(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalProgressionTreeGraph.GetRootNodes_Implementation()", result); }
	void AddNode_Implementation(FName NodeID, UE::Math::TVector2<double>* NodePosition) { if (!NodePosition) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector2 < double >>(this, "UPrimalProgressionTreeGraph.AddNode_Implementation(FName,UE::Math::TVector2<double>)", NodeID, *NodePosition); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetAllDescendants_Implementation(TArray<FName, TSizedDefaultAllocator<32> >* result, FName NodeID) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*, FName>(this, "UPrimalProgressionTreeGraph.GetAllDescendants_Implementation(FName)", result, NodeID); }
	void AddNode(FName NodeID, UE::Math::TVector2<double>* NodePosition) { if (!NodePosition) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector2 < double >>(this, "UPrimalProgressionTreeGraph.AddNode(FName,UE::Math::TVector2<double>)", NodeID, *NodePosition); }
	bool ArePrerequisitesMetForController(FName NodeID, APlayerController* ForPC, UObject* ForSkillProviderObject) { return NativeCall<bool, FName, APlayerController*, UObject*>(this, "UPrimalProgressionTreeGraph.ArePrerequisitesMetForController(FName,APlayerController*,UObject*)", NodeID, ForPC, ForSkillProviderObject); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetAllAncestors_Implementation(TArray<FName, TSizedDefaultAllocator<32> >* result, FName NodeID) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*, FName>(this, "UPrimalProgressionTreeGraph.GetAllAncestors_Implementation(FName)", result, NodeID); }
	bool PathExists_Implementation(FName StartNodeID, FName EndNodeID) { return NativeCall<bool, FName, FName>(this, "UPrimalProgressionTreeGraph.PathExists_Implementation(FName,FName)", StartNodeID, EndNodeID); }
	void RemoveNode_Implementation(FName NodeID) { NativeCall<void, FName>(this, "UPrimalProgressionTreeGraph.RemoveNode_Implementation(FName)", NodeID); }
	void AddChild_Implementation(FName NodeID, FName ChildID) { NativeCall<void, FName, FName>(this, "UPrimalProgressionTreeGraph.AddChild_Implementation(FName,FName)", NodeID, ChildID); }
	float GetEdgeWeight_Implementation(FName FromNodeID, FName ToNodeID) { return NativeCall<float, FName, FName>(this, "UPrimalProgressionTreeGraph.GetEdgeWeight_Implementation(FName,FName)", FromNodeID, ToNodeID); }
	bool ArePrerequisitesMetForController_Implementation(FName NodeID, APlayerController* ForPC, UObject* ForSkillProviderObject) { return NativeCall<bool, FName, APlayerController*, UObject*>(this, "UPrimalProgressionTreeGraph.ArePrerequisitesMetForController_Implementation(FName,APlayerController*,UObject*)", NodeID, ForPC, ForSkillProviderObject); }
	void AddPrerequisite_Implementation(FName NodeID, FName PrereqID, int GroupIndex) { NativeCall<void, FName, FName, int>(this, "UPrimalProgressionTreeGraph.AddPrerequisite_Implementation(FName,FName,int)", NodeID, PrereqID, GroupIndex); }
	bool ValidateGraph_Implementation(TArray<FString, TSizedDefaultAllocator<32> >& ValidationErrors) { return NativeCall<bool, TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UPrimalProgressionTreeGraph.ValidateGraph_Implementation(TArray<FString,TSizedDefaultAllocator<32>>&)", ValidationErrors); }
	float GetEdgeWeight(FName FromNodeID, FName ToNodeID) { return NativeCall<float, FName, FName>(this, "UPrimalProgressionTreeGraph.GetEdgeWeight(FName,FName)", FromNodeID, ToNodeID); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetShortestWeightedPath_Implementation(TArray<FName, TSizedDefaultAllocator<32> >* result, FName StartNodeID, FName EndNodeID) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*, FName, FName>(this, "UPrimalProgressionTreeGraph.GetShortestWeightedPath_Implementation(FName,FName)", result, StartNodeID, EndNodeID); }
};
