#pragma once


enum class EGeometryScriptMorphologicalOpType:unsigned char
{
	Dilate = 0x0,
	Contract = 0x1,
	Close = 0x2,
	Open = 0x3
};