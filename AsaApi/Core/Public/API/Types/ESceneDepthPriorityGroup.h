#pragma once


enum class ESceneDepthPriorityGroup:int
{
	SDPG_World = 0x0,
	SDPG_Foreground = 0x1,
	SDPG_MAX = 0x2
};