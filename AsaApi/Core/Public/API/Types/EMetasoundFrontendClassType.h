#pragma once


enum class EMetasoundFrontendClassType:unsigned char
{
	External = 0x0,
	Graph = 0x1,
	Input = 0x2,
	Output = 0x3,
	Literal = 0x4,
	Variable = 0x5,
	VariableDeferredAccessor = 0x6,
	VariableAccessor = 0x7,
	VariableMutator = 0x8,
	Template = 0x9,
	Invalid = 0xA
};