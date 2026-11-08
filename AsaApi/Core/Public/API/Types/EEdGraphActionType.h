#pragma once


enum class EEdGraphActionType:int
{
	GRAPHACTION_Default = 0x0,
	GRAPHACTION_AddNode = 0x1,
	GRAPHACTION_SelectNode = 0x2,
	GRAPHACTION_RemoveNode = 0x4
};