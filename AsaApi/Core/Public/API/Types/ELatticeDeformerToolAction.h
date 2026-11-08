#pragma once


enum class ELatticeDeformerToolAction:unsigned char
{
	NoAction = 0x0,
	Constrain = 0x1,
	ClearConstraints = 0x2
};