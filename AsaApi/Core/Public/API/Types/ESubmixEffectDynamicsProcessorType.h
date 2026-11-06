#pragma once


enum class ESubmixEffectDynamicsProcessorType:unsigned char
{
	Compressor = 0x0,
	Limiter = 0x1,
	Expander = 0x2,
	Gate = 0x3,
	UpwardsCompressor = 0x4,
	Count = 0x5
};