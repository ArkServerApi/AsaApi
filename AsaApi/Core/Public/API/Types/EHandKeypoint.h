#pragma once


enum class EHandKeypoint:unsigned char
{
	Palm = 0x0,
	Wrist = 0x1,
	ThumbMetacarpal = 0x2,
	ThumbProximal = 0x3,
	ThumbDistal = 0x4,
	ThumbTip = 0x5,
	IndexMetacarpal = 0x6,
	IndexProximal = 0x7,
	IndexIntermediate = 0x8,
	IndexDistal = 0x9,
	IndexTip = 0xA,
	MiddleMetacarpal = 0xB,
	MiddleProximal = 0xC,
	MiddleIntermediate = 0xD,
	MiddleDistal = 0xE,
	MiddleTip = 0xF,
	RingMetacarpal = 0x10,
	RingProximal = 0x11,
	RingIntermediate = 0x12,
	RingDistal = 0x13,
	RingTip = 0x14,
	LittleMetacarpal = 0x15,
	LittleProximal = 0x16,
	LittleIntermediate = 0x17,
	LittleDistal = 0x18,
	LittleTip = 0x19
};