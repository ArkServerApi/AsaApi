#pragma once


namespace EDinoTamedOrder
{
	enum Type:int
	{
		SetAggressionPassive = 0x0,
		SetAggressionNeutral = 0x1,
		SetAggressionAggressive = 0x2,
		SetAggressionAttackTarget = 0x3,
		ToggleFollowMe = 0x4,
		FollowMe = 0x5,
		StopFollowing = 0x6,
		CycleFollowDistance = 0x7,
		SetAggressionPassiveFlee = 0x8,
		LandingToMe = 0x9,
		MAX = 0xA
	};
}