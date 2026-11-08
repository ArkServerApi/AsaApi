#pragma once


enum class EDecalDepthInputState:int
{
	DDS_Undefined = 0x0,
	DDS_Always = 0x1,
	DDS_DepthTest = 0x2,
	DDS_DepthAlways_StencilEqual1 = 0x3,
	DDS_DepthAlways_StencilEqual1_IgnoreMask = 0x4,
	DDS_DepthAlways_StencilEqual0 = 0x5,
	DDS_DepthTest_StencilEqual1 = 0x6,
	DDS_DepthTest_StencilEqual1_IgnoreMask = 0x7,
	DDS_DepthTest_StencilEqual0 = 0x8
};