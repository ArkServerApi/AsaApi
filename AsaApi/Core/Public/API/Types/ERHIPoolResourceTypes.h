#pragma once


enum class ERHIPoolResourceTypes:int
{
	Buffers = 0x1,
	RTDSTextures = 0x2,
	NonRTDSTextures = 0x4,
	All = 0x7
};