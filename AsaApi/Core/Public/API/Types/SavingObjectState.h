#pragma once


namespace SavingObjectState
{
	enum Type:int
	{
		SOS_Unknown = 0x0,
		SOS_New = 0x1,
		SOS_Changed = 0x2,
		SOS_Unchanged = 0x3
	};
}