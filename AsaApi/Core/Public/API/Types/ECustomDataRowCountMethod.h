#pragma once


enum class ECustomDataRowCountMethod:int
{
	RCM_Constant = 0x0,
	RCM_ScalarParam = 0x1,
	RCM_TextureParamWidth = 0x2,
	RCM_TextureParamHeight = 0x3,
	RCM_TextureParamSize = 0x4
};