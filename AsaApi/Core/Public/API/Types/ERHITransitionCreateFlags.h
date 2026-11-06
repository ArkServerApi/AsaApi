#pragma once


enum class ERHITransitionCreateFlags:int
{
	None = 0x0,
	NoFence = 0x1,
	NoSplit = 0x2,
	BeginSimpleMode = 0x3
};