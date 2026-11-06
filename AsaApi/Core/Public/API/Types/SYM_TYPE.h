#pragma once


enum class SYM_TYPE:int
{
	SymNone = 0x0,
	SymCoff = 0x1,
	SymCv = 0x2,
	SymPdb = 0x3,
	SymExport = 0x4,
	SymDeferred = 0x5,
	SymSym = 0x6,
	SymDia = 0x7,
	SymVirtual = 0x8,
	NumSymTypes = 0x9
};