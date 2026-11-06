#pragma once


enum class EMeshApproximationGroundPlaneClippingPolicy:unsigned char
{
	NoGroundClipping = 0x0,
	DiscardWithZPlane = 0x1,
	CutWithZPlane = 0x2,
	CutAndFillWithZPlane = 0x3
};