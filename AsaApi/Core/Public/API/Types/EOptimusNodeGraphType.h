#pragma once


enum class EOptimusNodeGraphType:int
{
	Setup = 0x0,
	Update = 0x1,
	ExternalTrigger = 0x2,
	Function = 0x3,
	SubGraph = 0x4,
	Transient = 0x5
};