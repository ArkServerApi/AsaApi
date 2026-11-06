#pragma once


namespace EAssetRegistryDependencyType
{
	enum Type:int
	{
		Soft = 0x1,
		Hard = 0x2,
		SearchableName = 0x4,
		SoftManage = 0x8,
		HardManage = 0x10
	};
}