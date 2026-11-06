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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void UpdateMorphTargets() { NativeCall<void>(this, "UBrigantineAnimInstance.UpdateMorphTargets()"); }
	void NativeUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UBrigantineAnimInstance.NativeUpdateAnimation(float)", DeltaSeconds); }
};
