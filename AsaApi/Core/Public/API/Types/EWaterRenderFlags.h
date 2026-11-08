#pragma once


enum class EWaterRenderFlags:int
{
	eWRF_NONE = 0x0,
	eWRF_UNDER = 0x1,
	eWRF_ABOVE = 0x2,
	eWRF_UNDER_FOR_MASK = 0x4,
	eWRF_ABOVE_FOR_MASK = 0x8
};