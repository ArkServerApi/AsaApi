#pragma once


const struct FTeamPingData
{
	unsigned __int8 PingID;
	UE::Math::TVector<double> Location;
	AActor* ToActor;
	int ByPlayerID;
	int TargetingTeam;
	long double CreationTime;
	TEnumAsByte<enum ETeamPingType::Type> PingType;
	FString PlayerName;
};