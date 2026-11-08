#pragma once


enum class UDLSSSupport:unsigned char
{
	Supported = 0x0,
	NotSupported = 0x1,
	NotSupportedIncompatibleHardware = 0x2,
	NotSupportedDriverOutOfDate = 0x3,
	NotSupportedOperatingSystemOutOfDate = 0x4,
	NotSupportedByPlatformAtBuildTime = 0x5,
	NotSupportedIncompatibleAPICaptureToolActive = 0x6
};