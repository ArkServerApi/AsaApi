#pragma once


enum class ESceneCapturePrimitiveRenderMode:unsigned char
{
	PRM_LegacySceneCapture = 0x0,
	PRM_RenderScenePrimitives = 0x1,
	PRM_UseShowOnlyList = 0x2
};