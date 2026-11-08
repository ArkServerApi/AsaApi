#pragma once


enum class EDeterminismLevel:unsigned char
{
	None = 0x0,
	NoDeterminism = 0x0,
	Basic = 0x1,
	OrderOrthogonal = 0x2,
	OrderConsistent = 0x3,
	OrderIndependent = 0x4,
	Deterministic = 0x4
};