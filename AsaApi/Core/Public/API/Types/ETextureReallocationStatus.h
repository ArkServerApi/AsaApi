#pragma once


enum class ETextureReallocationStatus:int
{
	TexRealloc_Succeeded = 0x0,
	TexRealloc_Failed = 0x1,
	TexRealloc_InProgress = 0x2
};