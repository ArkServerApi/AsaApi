#pragma once


enum class EInstancePropertyValueFlags:int
{
	None = 0x0,
	CausesInstancing = 0x1,
	AllowSelfReference = 0x2,
	DoNotCreateNewInstance = 0x4
};