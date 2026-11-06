#pragma once


enum class EHttpConnectionContextState:int
{
	Continue = 0x0,
	Done = 0x1,
	Error = 0x2
};