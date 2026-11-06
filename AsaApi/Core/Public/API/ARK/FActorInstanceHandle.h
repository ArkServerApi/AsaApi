#pragma once


struct FActorInstanceHandle
{
	TWeakObjectPtr<AActor> Actor;
	TWeakObjectPtr<struct ALightWeightInstanceManager> Manager;
	int InstanceIndex;
	unsigned int InstanceUID;
};