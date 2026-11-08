#pragma once


namespace EKismetCompileType
{
	enum Type:int
	{
		SkeletonOnly = 0x0,
		Full = 0x1,
		StubAfterFailure = 0x2,
		BytecodeOnly = 0x3,
		Cpp = 0x4
	};
}