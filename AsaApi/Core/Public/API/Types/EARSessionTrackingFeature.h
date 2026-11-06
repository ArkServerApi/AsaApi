#pragma once


enum class EARSessionTrackingFeature:unsigned char
{
	None = 0x0,
	PoseDetection2D = 0x1,
	PersonSegmentation = 0x2,
	PersonSegmentationWithDepth = 0x3,
	SceneDepth = 0x4,
	SmoothedSceneDepth = 0x5
};