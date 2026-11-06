#pragma once


enum class EPelvisHeightMode:unsigned char
{
	AllLegs = 0x0,
	AllPlantedFeet = 0x1,
	FrontPlantedFeetUphill_FrontFeetDownhill = 0x2
};