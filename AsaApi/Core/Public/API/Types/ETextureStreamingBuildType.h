#pragma once


enum class ETextureStreamingBuildType:int
{
	TSB_MapBuild = 0x0,
	TSB_ActorBuild = 0x1,
	TSB_ValidationOnly = 0x2,
	TSB_ViewMode = 0x3
};