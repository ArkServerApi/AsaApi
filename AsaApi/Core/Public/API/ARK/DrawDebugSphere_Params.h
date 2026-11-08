#pragma once


struct DrawDebugSphere_Params
{
	/*IN params*/
	FVector Center;
	double Radius;
	int ForPlayerID;
	int ForTribeID;
	FLinearColor Color;
	int Duration;
	DrawSphereType DrawType;
	/*OUT params (return)*/
	AActor* SphereActor;

	DrawDebugSphere_Params(
		const FVector& Center,
		const double& Radius,
		const int& ForPlayerID,
		const int& ForTribeID,
		const FLinearColor& Color,
		const int& Duration,
		const DrawSphereType& DrawType
	)
		: Center(Center)
		, Radius(Radius)
		, ForPlayerID(ForPlayerID)
		, ForTribeID(ForTribeID)
		, Color(Color)
		, Duration(Duration)
		, DrawType(DrawType)
	{
	}
};