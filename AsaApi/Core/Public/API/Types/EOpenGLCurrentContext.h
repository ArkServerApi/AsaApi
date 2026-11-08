#pragma once


enum class EOpenGLCurrentContext:int
{
	CONTEXT_Other = 0xFE,
	CONTEXT_Invalid = 0xFF,
	CONTEXT_Shared = 0x0,
	CONTEXT_Rendering = 0x1
};