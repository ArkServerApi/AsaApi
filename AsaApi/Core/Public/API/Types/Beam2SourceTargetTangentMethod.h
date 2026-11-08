#pragma once


enum class Beam2SourceTargetTangentMethod:int
{
	PEB2STTM_Direct = 0x0,
	PEB2STTM_UserSet = 0x1,
	PEB2STTM_Distribution = 0x2,
	PEB2STTM_Emitter = 0x3,
	PEB2STTM_MAX = 0x4
};