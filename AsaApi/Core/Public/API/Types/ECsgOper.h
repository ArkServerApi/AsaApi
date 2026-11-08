#pragma once


enum class ECsgOper:int
{
	CSG_Active = 0x0,
	CSG_Add = 0x1,
	CSG_Subtract = 0x2,
	CSG_Intersect = 0x3,
	CSG_Deintersect = 0x4,
	CSG_None = 0x5,
	CSG_MAX = 0x6
};