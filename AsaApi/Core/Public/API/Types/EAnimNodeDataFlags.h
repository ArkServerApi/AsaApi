#pragma once


enum class EAnimNodeDataFlags:unsigned int
{
	None = 0x0,
	HasInitialUpdateFunction = 0x1,
	HasBecomeRelevantFunction = 0x2,
	HasUpdateFunction = 0x4
};