#pragma once


enum class EInstanceCullingFlags:unsigned char
{
	None = 0x0,
	DrawOnlyVSMInvalidatingGeometry = 0x1,
	NoInstanceOrderPreservation = 0x2,
	CustomDataOutCull = 0x4,
	IgnoreFrustumCull = 0x8
};