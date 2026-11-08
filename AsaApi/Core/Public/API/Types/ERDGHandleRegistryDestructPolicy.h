#pragma once


enum class ERDGHandleRegistryDestructPolicy:int
{
	Registry = 0x0,
	Allocator = 0x1,
	Never = 0x2
};