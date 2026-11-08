#pragma once


namespace EAttachLocation
{
	enum Type:int
	{
		KeepRelativeOffset = 0x0,
		KeepWorldPosition = 0x1,
		SnapToTarget = 0x2,
		SnapToTargetIncludingScale = 0x3
	};
}