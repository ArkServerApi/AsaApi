#pragma once


enum class EMenuPlacement:int
{
	MenuPlacement_BelowAnchor = 0x0,
	MenuPlacement_CenteredBelowAnchor = 0x1,
	MenuPlacement_BelowRightAnchor = 0x2,
	MenuPlacement_ComboBox = 0x3,
	MenuPlacement_ComboBoxRight = 0x4,
	MenuPlacement_MenuRight = 0x5,
	MenuPlacement_AboveAnchor = 0x6,
	MenuPlacement_CenteredAboveAnchor = 0x7,
	MenuPlacement_AboveRightAnchor = 0x8,
	MenuPlacement_MenuLeft = 0x9,
	MenuPlacement_Center = 0xA,
	MenuPlacement_RightLeftCenter = 0xB,
	MenuPlacement_MatchBottomLeft = 0xC
};