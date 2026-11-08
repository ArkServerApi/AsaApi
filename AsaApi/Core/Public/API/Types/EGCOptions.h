#pragma once


enum class EGCOptions:unsigned int
{
	None = 0x0,
	Parallel = 0x1,
	AutogenerateTokenStream = 0x2,
	WithClusters = 0x4,
	ProcessWeakReferences = 0x8,
	WithPendingKill = 0x10
};