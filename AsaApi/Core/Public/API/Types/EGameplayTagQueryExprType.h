#pragma once


namespace EGameplayTagQueryExprType
{
	enum Type:int
	{
		Undefined = 0x0,
		AnyTagsMatch = 0x1,
		AllTagsMatch = 0x2,
		NoTagsMatch = 0x3,
		AnyExprMatch = 0x4,
		AllExprMatch = 0x5,
		NoExprMatch = 0x6
	};
}