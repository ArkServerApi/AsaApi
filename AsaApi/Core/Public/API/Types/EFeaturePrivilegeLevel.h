#pragma once


namespace EFeaturePrivilegeLevel
{
	enum Type:int
	{
		Undefined = 0x0,
		Disabled = 0x1,
		EnabledFriendsOnly = 0x2,
		Enabled = 0x3
	};
}