#pragma once


enum class EMultiBlockType:unsigned char
{
	None = 0x0,
	ButtonRow = 0x1,
	EditableText = 0x2,
	Heading = 0x3,
	MenuEntry = 0x4,
	Separator = 0x5,
	ToolBarButton = 0x6,
	ToolBarComboButton = 0x7,
	Widget = 0x8
};