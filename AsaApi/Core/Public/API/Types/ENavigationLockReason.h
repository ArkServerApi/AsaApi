#pragma once


namespace ENavigationLockReason
{
	enum Type:int
	{
		Unknown = 0x1,
		AllowUnregister = 0x2,
		MaterialUpdate = 0x4,
		LightingUpdate = 0x8,
		ContinuousEditorMove = 0x10,
		SpawnOnDragEnter = 0x20
	};
}