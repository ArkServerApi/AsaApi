#pragma once


enum class EDLSSSupport:unsigned char
{
	Supported = 0x0,
	NotSupported = 0x1,
	NotSupportedIncompatibleHardware = 0x2,
	NotSupportedDriverOutOfDate = 0x3,
	NotSupportedOperatingSystemOutOfDate = 0x4,
	NotSupportedIncompatibleAPICaptureToolActive = 0x5
};