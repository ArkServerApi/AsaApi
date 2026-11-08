#pragma once


enum class ESimulationInitializationState:unsigned char
{
	Unintialized = 0x0,
	Activated = 0x1,
	Created = 0x2,
	Initialized = 0x3
};