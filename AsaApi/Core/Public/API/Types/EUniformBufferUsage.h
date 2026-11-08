#pragma once


enum class EUniformBufferUsage:int
{
	UniformBuffer_SingleDraw = 0x0,
	UniformBuffer_SingleFrame = 0x1,
	UniformBuffer_MultiFrame = 0x2
};