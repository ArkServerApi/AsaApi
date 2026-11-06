#pragma once


namespace EEnvQueryRunMode
{
	enum Type:int
	{
		SingleResult = 0x0,
		RandomBest5Pct = 0x1,
		RandomBest25Pct = 0x2,
		AllMatching = 0x3
	};
}