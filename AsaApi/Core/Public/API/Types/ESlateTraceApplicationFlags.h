#pragma once


enum class ESlateTraceApplicationFlags:unsigned char
{
	None = 0x0,
	GlobalInvalidation = 0x1,
	FastWidgetPath = 0x2
};