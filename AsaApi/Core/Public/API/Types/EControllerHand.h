#pragma once


enum class EControllerHand:unsigned char
{
	Left = 0x0,
	Right = 0x1,
	AnyHand = 0x2,
	Pad = 0x3,
	ExternalCamera = 0x4,
	Gun = 0x5,
	HMD = 0x6,
	Chest = 0x7,
	LeftShoulder = 0x8,
	RightShoulder = 0x9,
	LeftElbow = 0xA,
	RightElbow = 0xB,
	Waist = 0xC,
	LeftKnee = 0xD,
	RightKnee = 0xE,
	LeftFoot = 0xF,
	RightFoot = 0x10,
	Special = 0x11,
	ControllerHand_Count = 0x12
};