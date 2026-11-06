#pragma once


enum class EUniformBufferBindingFlags:unsigned char
{
	Shader = 0x1,
	Static = 0x2,
	StaticAndShader = 0x3
};