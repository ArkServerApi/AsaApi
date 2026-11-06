#pragma once
#include "BulkForward.h"
#include "UShipAnimInstance.h"

struct UBrigantineAnimInstance : public UShipAnimInstance
{
public:
	UBrigantineAnimInstance() = delete;
	~UBrigantineAnimInstance() = delete;
	UBrigantineAnimInstance(const UBrigantineAnimInstance&) = delete;
	UBrigantineAnimInstance& operator=(const UBrigantineAnimInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBrigantineAnimInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBrigantineAnimInstance"); }

	void UpdateMorphTargets() { NativeCall<void>(this, "UBrigantineAnimInstance.UpdateMorphTargets()"); }
	void NativeUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UBrigantineAnimInstance.NativeUpdateAnimation(float)", DeltaSeconds); }
};
