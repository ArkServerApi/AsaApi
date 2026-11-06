#pragma once


enum class ETryParseTagResult:int
{
	Error = 0x0,
	None = 0x1,
	ParsedStartTag = 0x2,
	ParsedEmptyElementTag = 0x3,
	ParsedEndTag = 0x4,
	NotATag = 0x5
};