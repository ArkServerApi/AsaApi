#pragma once


enum class ENetDormancy:int
{
	DORM_Never = 0x0,
	DORM_Awake = 0x1,
	DORM_DormantAll = 0x2,
	DORM_DormantPartial = 0x3,
	DORM_Initial = 0x4,
	DORM_MAX = 0x5
};