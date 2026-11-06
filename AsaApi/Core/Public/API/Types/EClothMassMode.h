#pragma once


enum class EClothMassMode:unsigned char
{
	UniformMass = 0x0,
	TotalMass = 0x1,
	Density = 0x2,
	MaxClothMassMode = 0x3
};