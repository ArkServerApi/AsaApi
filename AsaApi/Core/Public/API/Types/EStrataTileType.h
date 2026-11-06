#pragma once


enum class EStrataTileType:unsigned int
{
	ESimple = 0x0,
	ESingle = 0x1,
	EComplex = 0x2,
	EOpaqueRoughRefraction = 0x3,
	EOpaqueRoughRefractionSSSWithout = 0x4,
	EDecalSimple = 0x5,
	EDecalSingle = 0x6,
	EDecalComplex = 0x7,
	ECount = 0x8
};