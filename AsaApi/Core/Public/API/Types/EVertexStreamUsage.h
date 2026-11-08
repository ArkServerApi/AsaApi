#pragma once


enum class EVertexStreamUsage:unsigned char
{
	Default = 0x0,
	Instancing = 0x1,
	Overridden = 0x2,
	ManualFetch = 0x4
};