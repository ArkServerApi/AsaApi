#pragma once


enum class ERayTracingPrimaryRaysFlag:unsigned int
{
	None = 0x0,
	UseGBufferForMaxDistance = 0x1,
	PrimaryView = 0x2,
	AllowSkipSkySample = 0x4
};