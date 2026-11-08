#pragma once


enum class OodleLZ_Decode_ThreadPhase:int
{
	OodleLZ_Decode_ThreadPhase1 = 0x1,
	OodleLZ_Decode_ThreadPhase2 = 0x2,
	OodleLZ_Decode_ThreadPhaseAll = 0x3,
	OodleLZ_Decode_Unthreaded = 0x3
};