#pragma once


enum class EReferenceChainSearchMode:int
{
	Default = 0x0,
	ExternalOnly = 0x1,
	Shortest = 0x2,
	Longest = 0x4,
	Direct = 0x8,
	FullChain = 0x10,
	ShortestToGarbage = 0x20,
	Minimal = 0x40,
	GCOnly = 0x80,
	PrintResults = 0x10000,
	PrintAllResults = 0x20000
};