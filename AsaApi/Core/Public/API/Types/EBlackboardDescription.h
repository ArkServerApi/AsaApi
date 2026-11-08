#pragma once


namespace EBlackboardDescription
{
	enum Type:int
	{
		OnlyValue = 0x0,
		KeyWithValue = 0x1,
		DetailedKeyWithValue = 0x2,
		Full = 0x3
	};
}