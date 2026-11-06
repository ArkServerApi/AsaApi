#pragma once


enum class ESentryLevel:unsigned char
{
	Debug = 0x0,
	Info = 0x1,
	Warning = 0x2,
	Error = 0x3,
	Fatal = 0x4
};