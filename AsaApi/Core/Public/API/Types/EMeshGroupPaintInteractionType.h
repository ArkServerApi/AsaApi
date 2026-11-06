#pragma once


enum class EMeshGroupPaintInteractionType:unsigned char
{
	Brush = 0x0,
	Fill = 0x1,
	GroupFill = 0x2,
	PolyLasso = 0x3,
	LastValue = 0x4
};