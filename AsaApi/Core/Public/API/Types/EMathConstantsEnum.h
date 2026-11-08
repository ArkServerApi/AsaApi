#pragma once


enum class EMathConstantsEnum:unsigned char
{
	Dataflow_MathConstants_Pi = 0x0,
	Dataflow_MathConstants_HalfPi = 0x1,
	Dataflow_MathConstants_TwoPi = 0x2,
	Dataflow_MathConstants_FourPi = 0x3,
	Dataflow_MathConstants_InvPi = 0x4,
	Dataflow_MathConstants_InvTwoPi = 0x5,
	Dataflow_MathConstants_Sqrt2 = 0x6,
	Dataflow_MathConstants_InvSqrt2 = 0x7,
	Dataflow_MathConstants_Sqrt3 = 0x8,
	Dataflow_MathConstants_InvSqrt3 = 0x9,
	Dataflow_FloatToInt_Function_E = 0xA,
	Dataflow_FloatToInt_Function_Gamma = 0xB,
	Dataflow_FloatToInt_Function_GoldenRatio = 0xC,
	Dataflow_FloatToInt_Function_ZeroTolerance = 0xD,
	Dataflow_Max = 0xE
};