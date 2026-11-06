#pragma once


enum class ECubeGridToolAction:int
{
	NoAction = 0x0,
	Push = 0x1,
	Pull = 0x2,
	Flip = 0x3,
	SlideForward = 0x4,
	SlideBack = 0x5,
	DecreaseGridPower = 0x6,
	IncreaseGridPower = 0x7,
	CornerMode = 0x8,
	ResetFromActor = 0x9,
	Done = 0xA,
	Cancel = 0xB
};