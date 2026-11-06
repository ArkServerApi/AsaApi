#pragma once


enum class ERayTracingGroupCullingPriority:unsigned char
{
	CP_0_NEVER_CULL = 0x0,
	CP_1 = 0x1,
	CP_2 = 0x2,
	CP_3 = 0x3,
	CP_4_DEFAULT = 0x4,
	CP_5 = 0x5,
	CP_6 = 0x6,
	CP_7 = 0x7,
	CP_8_QUICKLY_CULL = 0x8
};