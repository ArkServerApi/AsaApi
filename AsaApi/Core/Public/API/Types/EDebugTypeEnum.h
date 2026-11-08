#pragma once


enum class EDebugTypeEnum:unsigned char
{
	ChaosNiagara_DebugType_NoDebug = 0x0,
	ChaosNiagara_DebugType_ColorBySolver = 0x1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 0x2,
	ChaosNiagara_Max = 0x3
};