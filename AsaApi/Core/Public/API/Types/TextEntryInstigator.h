#pragma once


enum class TextEntryInstigator:int
{
	RENAME_TRIBE = 0x0,
	RENAME_GROUP_RANK = 0x1,
	RENAME_ALLIANCE = 0x2,
	NEW_ALLIANCE = 0x3,
	NEW_GROUP_RANK = 0x4,
	NONE = 0x5
};