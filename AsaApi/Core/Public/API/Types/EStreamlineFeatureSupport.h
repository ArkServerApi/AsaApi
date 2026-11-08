#pragma once


enum class EStreamlineFeatureSupport:int
{
	Supported = 0x0,
	NotSupported = 0x1,
	NotSupportedIncompatibleHardware = 0x2,
	NotSupportedHardwareSchedulingDisabled = 0x3,
	NotSupportedOperatingSystemOutOfDate = 0x4,
	NotSupportedDriverOutOfDate = 0x5,
	NotSupportedIncompatibleRHI = 0x6,
	NumValues = 0x7
};