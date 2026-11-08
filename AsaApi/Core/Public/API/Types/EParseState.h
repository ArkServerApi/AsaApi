#pragma once


enum class EParseState:int
{
	Continue = 0x0,
	StopAfter = 0x1,
	StopBefore = 0x2,
	Cancel = 0x3
};