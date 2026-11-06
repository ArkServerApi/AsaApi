#pragma once


enum class ERigVMBreakpointAction:unsigned char
{
	None = 0x0,
	Resume = 0x1,
	StepOver = 0x2,
	StepInto = 0x3,
	StepOut = 0x4,
	Max = 0x5
};