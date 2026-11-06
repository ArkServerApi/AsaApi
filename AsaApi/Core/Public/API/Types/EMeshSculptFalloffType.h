#pragma once


enum class EMeshSculptFalloffType:unsigned char
{
	Smooth = 0x0,
	Linear = 0x1,
	Inverse = 0x2,
	Round = 0x3,
	BoxSmooth = 0x4,
	BoxLinear = 0x5,
	BoxInverse = 0x6,
	BoxRound = 0x7,
	LastValue = 0x8
};