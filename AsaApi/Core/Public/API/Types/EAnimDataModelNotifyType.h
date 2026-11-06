#pragma once


enum class EAnimDataModelNotifyType:unsigned char
{
	BracketOpened = 0x0,
	BracketClosed = 0x1,
	TrackAdded = 0x2,
	TrackChanged = 0x3,
	TrackRemoved = 0x4,
	SequenceLengthChanged = 0x5,
	FrameRateChanged = 0x6,
	CurveAdded = 0x7,
	CurveChanged = 0x8,
	CurveRemoved = 0x9,
	CurveFlagsChanged = 0xA,
	CurveRenamed = 0xB,
	CurveScaled = 0xC,
	CurveColorChanged = 0xD,
	AttributeAdded = 0xE,
	AttributeRemoved = 0xF,
	AttributeChanged = 0x10,
	Populated = 0x11,
	Reset = 0x12,
	Invalid = 0x13
};