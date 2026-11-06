#pragma once


enum class EARCaptureType:unsigned char
{
	Camera = 0x0,
	QRCode = 0x1,
	SpatialMapping = 0x2,
	SceneUnderstanding = 0x3,
	HandMesh = 0x4
};