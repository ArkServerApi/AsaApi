#pragma once


enum class ENaniteMaterialPass:unsigned int
{
	EmitGBuffer = 0x0,
	EmitGBufferWithVelocity = 0x1,
	Max = 0x2
};