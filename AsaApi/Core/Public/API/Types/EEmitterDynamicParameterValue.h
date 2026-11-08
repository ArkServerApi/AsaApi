#pragma once


enum class EEmitterDynamicParameterValue:int
{
	EDPV_UserSet = 0x0,
	EDPV_AutoSet = 0x1,
	EDPV_VelocityX = 0x2,
	EDPV_VelocityY = 0x3,
	EDPV_VelocityZ = 0x4,
	EDPV_VelocityMag = 0x5,
	EDPV_MAX = 0x6
};