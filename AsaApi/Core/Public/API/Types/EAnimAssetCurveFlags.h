#pragma once


enum class EAnimAssetCurveFlags:int
{
	AACF_NONE = 0x0,
	AACF_DriveMorphTarget_DEPRECATED = 0x1,
	AACF_DriveAttribute_DEPRECATED = 0x2,
	AACF_Editable = 0x4,
	AACF_DriveMaterial_DEPRECATED = 0x8,
	AACF_Metadata = 0x10,
	AACF_DriveTrack = 0x20,
	AACF_Disabled = 0x40
};