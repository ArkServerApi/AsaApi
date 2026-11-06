#pragma once


namespace EAssetSetManagerFlags
{
	enum Type:int
	{
		IsDirectSet = 0x1,
		TargetHasExistingManager = 0x2,
		TargetHasDirectManager = 0x4
	};
}