#pragma once


enum class EPCGMetadataOp:unsigned char
{
	Min = 0x0,
	Max = 0x1,
	Sub = 0x2,
	Add = 0x3,
	Mul = 0x4,
	Div = 0x5,
	SourceValue = 0x6,
	TargetValue = 0x7
};