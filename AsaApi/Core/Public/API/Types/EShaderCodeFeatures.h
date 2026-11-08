#pragma once


enum class EShaderCodeFeatures:unsigned short
{
	None = 0x0,
	WaveOps = 0x1,
	SixteenBitTypes = 0x2,
	TypedUAVLoadsExtended = 0x4,
	Atomic64 = 0x8,
	DiagnosticBuffer = 0x10,
	BindlessResources = 0x20,
	BindlessSamplers = 0x40,
	StencilRef = 0x80
};