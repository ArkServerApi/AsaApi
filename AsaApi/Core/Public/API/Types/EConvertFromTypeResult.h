#pragma once


enum class EConvertFromTypeResult:int
{
	UseSerializeItem = 0x0,
	CannotConvert = 0x1,
	Converted = 0x2
};