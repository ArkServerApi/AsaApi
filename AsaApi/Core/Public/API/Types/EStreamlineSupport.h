#pragma once


enum class EStreamlineSupport:unsigned char
{
	Supported = 0x0,
	NotSupported = 0x1,
	NotSupportedIncompatibleRHI = 0x2,
	NumValues = 0x3
};