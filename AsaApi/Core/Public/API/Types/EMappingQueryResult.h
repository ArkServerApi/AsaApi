#pragma once


enum class EMappingQueryResult:unsigned char
{
	Error_EnhancedInputNotEnabled = 0x0,
	Error_InputContextNotInActiveContexts = 0x1,
	Error_InvalidAction = 0x2,
	NotMappable = 0x3,
	MappingAvailable = 0x4
};