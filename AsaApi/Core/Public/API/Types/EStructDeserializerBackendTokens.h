#pragma once


enum class EStructDeserializerBackendTokens:int
{
	ArrayEnd = 0x0,
	ArrayStart = 0x1,
	Comment = 0x2,
	Error = 0x3,
	None = 0x4,
	Property = 0x5,
	StructureEnd = 0x6,
	StructureStart = 0x7
};