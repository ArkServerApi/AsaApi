#pragma once


enum class ProfilerState:int
{
	PS_Off = 0x0,
	PS_InitForStructures = 0x1,
	PS_InitForDinos = 0x2,
	PS_InitForLocations = 0x3,
	PS_EmptyScene = 0x4,
	PS_Create = 0x5,
	PS_Wait = 0x6,
	PS_Measure = 0x7,
	PS_GC = 0x8,
	PS_OutputStats = 0x9,
	PS_Num = 0xA
};