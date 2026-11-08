#pragma once


enum class EWidgetDesignFlags:unsigned char
{
	None = 0x0,
	Designing = 0x1,
	ShowOutline = 0x2,
	ExecutePreConstruct = 0x4,
	Previewing = 0x8
};