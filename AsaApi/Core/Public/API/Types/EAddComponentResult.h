#pragma once


enum class EAddComponentResult:unsigned char
{
	Fail = 0x0,
	Fail_UIDensityConstraint = 0x1,
	Success = 0x2
};