#pragma once


enum class EDataflowWaveFunctionType:unsigned char
{
	Dataflow_WaveFunctionType_Cosine = 0x0,
	Dataflow_WaveFunctionType_Gaussian = 0x1,
	Dataflow_WaveFunctionType_Falloff = 0x2,
	Dataflow_WaveFunctionType_Decay = 0x3,
	Dataflow_Max = 0x4
};