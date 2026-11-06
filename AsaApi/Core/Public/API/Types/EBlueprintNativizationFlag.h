#pragma once


enum class EBlueprintNativizationFlag:unsigned char
{
	Disabled = 0x0,
	Dependency = 0x1,
	ExplicitlyEnabled = 0x2
};