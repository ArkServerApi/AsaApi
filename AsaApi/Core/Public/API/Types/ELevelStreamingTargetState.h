#pragma once


enum class ELevelStreamingTargetState:unsigned char
{
	Unloaded = 0x0,
	UnloadedAndRemoved = 0x1,
	LoadedNotVisible = 0x2,
	LoadedVisible = 0x3
};