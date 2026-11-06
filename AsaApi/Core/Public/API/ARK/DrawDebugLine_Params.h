#pragma once


struct DrawDebugLine_Params
{
	/*IN params*/
	FVector Start;
	FVector End;
	FLinearColor Color;
	int Duration;

	DrawDebugLine_Params()
		: Start(FVector(0,0,0))
		, End(FVector(0, 0, 0))
		, Color(FLinearColor(0, 0, 0, 0))
		, Duration(0)
	{
	}

	DrawDebugLine_Params(
		const FVector& Start,
		const FVector& End,
		const FLinearColor& Color,
		const int& Duration
	)
		: Start(Start)
		, End(End)
		, Color(Color)
		, Duration(Duration)
	{
	}
};