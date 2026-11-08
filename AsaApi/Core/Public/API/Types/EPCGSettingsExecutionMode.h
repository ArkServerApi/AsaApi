#pragma once


enum class EPCGSettingsExecutionMode:unsigned char
{
	Enabled = 0x0,
	Debug = 0x1,
	Isolated = 0x2,
	Disabled = 0x3
};