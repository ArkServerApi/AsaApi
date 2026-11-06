#pragma once


enum class EItemPreviewType:int
{
	k_EItemPreviewType_Image = 0x0,
	k_EItemPreviewType_YouTubeVideo = 0x1,
	k_EItemPreviewType_Sketchfab = 0x2,
	k_EItemPreviewType_EnvironmentMap_HorizontalCross = 0x3,
	k_EItemPreviewType_EnvironmentMap_LatLong = 0x4,
	k_EItemPreviewType_ReservedMax = 0xFF
};