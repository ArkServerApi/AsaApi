#pragma once


enum class EPartySystemState:unsigned char
{
	Initializing = 0x0,
	Initialized = 0x1,
	RequestingShutdown = 0x2,
	ShutDown = 0x3
};