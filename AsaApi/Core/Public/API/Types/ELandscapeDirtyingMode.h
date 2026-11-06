#pragma once


enum class ELandscapeDirtyingMode:unsigned char
{
	Auto = 0x0,
	InLandscapeModeOnly = 0x1,
	InLandscapeModeAndUserTriggeredChanges = 0x2
};