#pragma once


enum class ENGXProjectIdentifier:int
{
	MinValue = 0x0,
	NGXApplicationIDThenUEProjectID = 0x0,
	ForceUEProjectID = 0x1,
	ForceNGXApplicationID = 0x2,
	MaxValue = 0x2
};