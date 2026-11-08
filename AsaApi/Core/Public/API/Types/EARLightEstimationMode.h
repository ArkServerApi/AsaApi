#pragma once


enum class EARLightEstimationMode:unsigned char
{
	None = 0x0,
	AmbientLightEstimate = 0x1,
	DirectionalLightEstimate = 0x2
};