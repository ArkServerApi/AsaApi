#pragma once


enum class ECollisionTraceFlag:int
{
	CTF_UseDefault = 0x0,
	CTF_UseSimpleAndComplex = 0x1,
	CTF_UseSimpleAsComplex = 0x2,
	CTF_UseComplexAsSimple = 0x3,
	CTF_MAX = 0x4
};