#pragma once


enum class EStructSerializerReferenceLoopPolicies:int
{
	Error = 0x0,
	Ignore = 0x1,
	Serialize = 0x2
};