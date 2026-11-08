#pragma once


struct FCustomTrackedActorInfo
{
	FString Name;
	float TameAffinityPercent;
	float HealthPercent;
	float HealthCurrent;
	float HealthMax;
	float HungerPercent;
	float HungerCurrent;
	float HungerMax;
	float TorpidityPercent;
	float TameEffectivenessPercent;
	int TameEffectivenessLvlModifier;
	UE::Math::TVector<double> Location;
	bool bIsConcious;
	bool bUseGender;
	bool bIsFemale;
	bool bIsTamed;
	float DinoImprintingQuality;
	float BabyNextCuddleTime;
	float BabyAge;
	float TimeUntilNextNamedAge;
	long double LastTameConsumedFoodTime;
	FString ImprinterName;
	int DataID1;
	int DataID2;
	FString TargetName;
	bool bIsPlayer;
	bool bIsFavorited;
	bool bIsTrackedWaypoint;
	TSubclassOf<UPrimalDinoEntry> DinoEntry;
	bool bHideFromTrackListAndOnlyShowOnMap;
	FString TribeName;
	int TargetingTeam;
	bool bIsVehicle;
	bool bIsValidForCurrentFilter;
	int Level;
	long double TamedAtTime;
	bool POIVisible;
};