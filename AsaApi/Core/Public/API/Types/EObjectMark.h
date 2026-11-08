#pragma once


enum class EObjectMark:int
{
	OBJECTMARK_NOMARKS = 0x0,
	OBJECTMARK_Saved = 0x4,
	OBJECTMARK_TagImp = 0x8,
	OBJECTMARK_TagExp = 0x10,
	OBJECTMARK_NotForClient = 0x20,
	OBJECTMARK_NotForServer = 0x40,
	OBJECTMARK_NotAlwaysLoadedForEditorGame = 0x80,
	OBJECTMARK_EditorOnly = 0x100,
	OBJECTMARK_NotForTargetPlatform = 0x200,
	OBJECTMARK_INHERITEDMARKS = 0x360,
	OBJECTMARK_ALLMARKS = 0xFF
};