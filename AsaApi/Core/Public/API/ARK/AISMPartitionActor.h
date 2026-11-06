#pragma once
#include "BulkForward.h"
#include "APartitionActor.h"

struct AISMPartitionActor : public APartitionActor
{
public:
	AISMPartitionActor() = delete;
	~AISMPartitionActor() = delete;
	AISMPartitionActor(const AISMPartitionActor&) = delete;
	AISMPartitionActor& operator=(const AISMPartitionActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AISMPartitionActor"); }

	bool CanMoveSMInstance(const FSMInstanceId& InstanceId, ETypedElementWorldType WorldType) { return NativeCall<bool, const FSMInstanceId&, ETypedElementWorldType>(this, "AISMPartitionActor.CanMoveSMInstance(FSMInstanceId&,ETypedElementWorldType)", InstanceId, WorldType); }
	void NotifySMInstanceSelectionChanged(const FSMInstanceId& InstanceId, bool bIsSelected) { NativeCall<void, const FSMInstanceId&, bool>(this, "AISMPartitionActor.NotifySMInstanceSelectionChanged(FSMInstanceId&,bool)", InstanceId, bIsSelected); }
	bool CanEditSMInstance(const FSMInstanceId& InstanceId) { return NativeCall<bool, const FSMInstanceId&>(this, "AISMPartitionActor.CanEditSMInstance(FSMInstanceId&)", InstanceId); }
	ISMInstanceManager* GetSMInstanceManager(const FSMInstanceId& InstanceId) { return NativeCall<ISMInstanceManager*, const FSMInstanceId&>(this, "AISMPartitionActor.GetSMInstanceManager(FSMInstanceId&)", InstanceId); }
	void NotifySMInstanceMovementStarted(const FSMInstanceId& InstanceId) { NativeCall<void, const FSMInstanceId&>(this, "AISMPartitionActor.NotifySMInstanceMovementStarted(FSMInstanceId&)", InstanceId); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AISMPartitionActor._getUObject()"); }
	bool CanDeleteSMInstance(const FSMInstanceId& InstanceId) { return NativeCall<bool, const FSMInstanceId&>(this, "AISMPartitionActor.CanDeleteSMInstance(FSMInstanceId&)", InstanceId); }
	void NotifySMInstanceMovementEnded(const FSMInstanceId& InstanceId) { NativeCall<void, const FSMInstanceId&>(this, "AISMPartitionActor.NotifySMInstanceMovementEnded(FSMInstanceId&)", InstanceId); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AISMPartitionActor"); }
	bool CanDuplicateSMInstance(const FSMInstanceId& InstanceId) { return NativeCall<bool, const FSMInstanceId&>(this, "AISMPartitionActor.CanDuplicateSMInstance(FSMInstanceId&)", InstanceId); }
	void NotifySMInstanceMovementOngoing(const FSMInstanceId& InstanceId) { NativeCall<void, const FSMInstanceId&>(this, "AISMPartitionActor.NotifySMInstanceMovementOngoing(FSMInstanceId&)", InstanceId); }
};
