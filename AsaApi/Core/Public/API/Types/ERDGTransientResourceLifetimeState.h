#pragma once


enum class ERDGTransientResourceLifetimeState:int
{
	Deallocated = 0x0,
	Allocated = 0x1,
	PendingDeallocation = 0x2
};