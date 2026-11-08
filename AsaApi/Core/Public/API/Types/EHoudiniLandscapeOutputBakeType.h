#pragma once


enum class EHoudiniLandscapeOutputBakeType:unsigned char
{
	Detachment = 0x0,
	BakeToImage = 0x1,
	BakeToWorld = 0x2,
	InValid = 0x3
};