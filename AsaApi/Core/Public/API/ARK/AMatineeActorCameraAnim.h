#pragma once
#include "BulkForward.h"
#include "AMatineeActor.h"

struct AMatineeActorCameraAnim : public AMatineeActor
{
public:
	AMatineeActorCameraAnim() = delete;
	~AMatineeActorCameraAnim() = delete;
	AMatineeActorCameraAnim(const AMatineeActorCameraAnim&) = delete;
	AMatineeActorCameraAnim& operator=(const AMatineeActorCameraAnim&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMatineeActorCameraAnim"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMatineeActorCameraAnim"); }

};
