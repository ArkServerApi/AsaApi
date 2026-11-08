#pragma once


enum class PCGNormalToDensityMode:signed char
{
	Set = 0x0,
	Minimum = 0x1,
	Maximum = 0x2,
	Add = 0x3,
	Subtract = 0x4,
	Multiply = 0x5,
	Divide = 0x6
};