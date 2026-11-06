#pragma once


enum class dict_directive:int
{
	noDict = 0x0,
	withPrefix64k = 0x1,
	usingExtDict = 0x2,
	usingDictCtx = 0x3
};