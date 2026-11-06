#pragma once


enum class FNavigationSystemRunMode:unsigned char
{
	InvalidMode = 0x0,
	GameMode = 0x1,
	EditorMode = 0x2,
	SimulationMode = 0x3,
	PIEMode = 0x4,
	InferFromWorldMode = 0x5,
	EditorWorldPartitionBuildMode = 0x6
};