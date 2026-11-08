#pragma once


struct FTrackedActorPlusInfoStruct
{
	AActor* TrackedActor;
	FCustomTrackedActorInfo ReplicatedInfo;
	UE::Math::TVector<double> ActorLastKnownLocation;
	UE::Math::TVector<double> LastPOILocation;
	int PreviousLinkedListTrackedActorID;
	unsigned __int8 PreviousLinkedListTrackedActorCategory;
	int NextLinkedListTrackedActorID;
	unsigned __int8 NextLinkedListTrackedActorCategory;
};