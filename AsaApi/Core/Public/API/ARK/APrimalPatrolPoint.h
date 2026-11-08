#pragma once
#include "BulkForward.h"
#include "ANote.h"

struct APrimalPatrolPoint : public ANote
{
public:
	APrimalPatrolPoint() = delete;
	~APrimalPatrolPoint() = delete;
	APrimalPatrolPoint(const APrimalPatrolPoint&) = delete;
	APrimalPatrolPoint& operator=(const APrimalPatrolPoint&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalPatrolPoint"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalPatrolPoint"); }

	int& PointHierarchyDepthField() { return *GetNativePointerField<int*>(this, "APrimalPatrolPoint.PointHierarchyDepth"); }
	FName& PointRegionField() { return *GetNativePointerField<FName*>(this, "APrimalPatrolPoint.PointRegion"); }
	int& PointIndexField() { return *GetNativePointerField<int*>(this, "APrimalPatrolPoint.PointIndex"); }
	BitFieldValue<bool, unsigned char> bUseBPCanUseAsPassingByPoint() { return { this, "APrimalPatrolPoint.bUseBPCanUseAsPassingByPoint"}; }
	bool BPCanUseAsPassingByPoint(APrimalPatrolPoint* StartPoint, APrimalPatrolPoint* EndPoint, APrimalPatrolPoint* PreviousPoint) { return NativeCall<bool, APrimalPatrolPoint*, APrimalPatrolPoint*, APrimalPatrolPoint*>(this, "APrimalPatrolPoint.BPCanUseAsPassingByPoint(APrimalPatrolPoint*,APrimalPatrolPoint*,APrimalPatrolPoint*)", StartPoint, EndPoint, PreviousPoint); }
	bool IsConnectionOccupied(APrimalPatrolPoint* EndPoint, int ForGroupID) { return NativeCall<bool, APrimalPatrolPoint*, int>(this, "APrimalPatrolPoint.IsConnectionOccupied(APrimalPatrolPoint*,int)", EndPoint, ForGroupID); }
	bool HasAvailableConnectionForGroup(int GroupID, int GroupSize, APrimalPatrolPoint* ExcludedPoint) { return NativeCall<bool, int, int, APrimalPatrolPoint*>(this, "APrimalPatrolPoint.HasAvailableConnectionForGroup(int,int,APrimalPatrolPoint*)", GroupID, GroupSize, ExcludedPoint); }
	void SetConnectionUnoccupied(FPatrolPointConnection& Connection, int ByGroupID) { NativeCall<void, FPatrolPointConnection&, int>(this, "APrimalPatrolPoint.SetConnectionUnoccupied(FPatrolPointConnection&,int)", Connection, ByGroupID); }
	void SetConnectionOccupied(FPatrolPointConnection& Connection, int ByGroupID) { NativeCall<void, FPatrolPointConnection&, int>(this, "APrimalPatrolPoint.SetConnectionOccupied(FPatrolPointConnection&,int)", Connection, ByGroupID); }
	void SetConnectionForEndPointUnoccupied(APrimalPatrolPoint* EndPoint, int ByGroupID) { NativeCall<void, APrimalPatrolPoint*, int>(this, "APrimalPatrolPoint.SetConnectionForEndPointUnoccupied(APrimalPatrolPoint*,int)", EndPoint, ByGroupID); }
	void SetConnectionForEndPointOccupied(APrimalPatrolPoint* EndPoint, int ByGroupID) { NativeCall<void, APrimalPatrolPoint*, int>(this, "APrimalPatrolPoint.SetConnectionForEndPointOccupied(APrimalPatrolPoint*,int)", EndPoint, ByGroupID); }
	bool HasConnection(APrimalPatrolPoint* ToPoint) { return NativeCall<bool, APrimalPatrolPoint*>(this, "APrimalPatrolPoint.HasConnection(APrimalPatrolPoint*)", ToPoint); }
};
