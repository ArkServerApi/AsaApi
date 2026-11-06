#pragma once
#include "BulkForward.h"
#include "ANavigationData.h"

struct AAbstractNavData : public ANavigationData
{
public:
	AAbstractNavData() = delete;
	~AAbstractNavData() = delete;
	AAbstractNavData(const AAbstractNavData&) = delete;
	AAbstractNavData& operator=(const AAbstractNavData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AAbstractNavData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AAbstractNavData"); }

	void OnNavAreaAdded(const UClass* NavAreaClass, int AgentIndex) { NativeCall<void, const UClass*, int>(this, "AAbstractNavData.OnNavAreaAdded(UClass*,int)", NavAreaClass, AgentIndex); }
	void OnNavAreaRemoved(const UClass* NavAreaClass) { NativeCall<void, const UClass*>(this, "AAbstractNavData.OnNavAreaRemoved(UClass*)", NavAreaClass); }
	void PostLoad() { NativeCall<void>(this, "AAbstractNavData.PostLoad()"); }
	bool IsNodeRefValid(unsigned __int64 NodeRef) { return NativeCall<bool, unsigned __int64>(this, "AAbstractNavData.IsNodeRefValid(unsigned__int64)", NodeRef); }
	bool DoesNodeContainLocation(unsigned __int64 NodeRef, const UE::Math::TVector<double>& WorldSpaceLocation) { return NativeCall<bool, unsigned __int64, const UE::Math::TVector<double>&>(this, "AAbstractNavData.DoesNodeContainLocation(unsigned__int64,UE::Math::TVector<double>&)", NodeRef, WorldSpaceLocation); }
	static bool TestPathAbstract(const FNavAgentProperties& AgentProperties, const FPathFindingQuery& Query, int* NumVisitedNodes) { return NativeCall<bool, const FNavAgentProperties&, const FPathFindingQuery&, int*>(nullptr, "AAbstractNavData.TestPathAbstract(FNavAgentProperties&,FPathFindingQuery&,int*)", AgentProperties, Query, NumVisitedNodes); }
};
