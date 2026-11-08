#pragma once


enum class EARTextureType:unsigned char
{
	Unknown = 0x0,
	CameraImage = 0x1,
	CameraDepth = 0x2,
	EnvironmentCapture = 0x3,
	PersonSegmentationImage = 0x4,
	PersonSegmentationDepth = 0x5,
	SceneDepthMap = 0x6,
	SceneDepthConfidenceMap = 0x7
};