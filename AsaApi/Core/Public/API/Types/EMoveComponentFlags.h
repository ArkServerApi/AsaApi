#pragma once


enum class EMoveComponentFlags:int
{
	MOVECOMP_NoFlags = 0x0,
	MOVECOMP_IgnoreBases = 0x1,
	MOVECOMP_SkipPhysicsMove = 0x2,
	MOVECOMP_NeverIgnoreBlockingOverlaps = 0x4,
	MOVECOMP_DisableBlockingOverlapDispatch = 0x8
};