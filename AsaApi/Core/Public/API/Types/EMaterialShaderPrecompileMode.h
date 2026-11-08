#pragma once


enum class EMaterialShaderPrecompileMode:int
{
	None = 0x0,
	Background = 0x1,
	Synchronous = 0x2,
	Default = 0x1
};