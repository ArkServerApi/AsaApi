#pragma once


enum class EBinkMediaPlayerBinkDrawStyle:int
{
	BMASM_Bink_DS_RenderToTexture = 0x0,
	BMASM_Bink_DS_OverlayFillScreenWithAspectRatio = 0x1,
	BMASM_Bink_DS_OverlayOriginalMovieSize = 0x2,
	BMASM_Bink_DS_OverlayFillScreen = 0x3,
	BMASM_Bink_DS_OverlaySpecificDestinationRectangle = 0x4,
	BMASM_Bink_DS_MAX = 0x5
};