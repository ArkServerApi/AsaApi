#pragma once


enum class EThreadQueryContext:int
{
	GTData = 0x0,
	PTDataWithGTObjects = 0x1,
	PTOnlyData = 0x2
};