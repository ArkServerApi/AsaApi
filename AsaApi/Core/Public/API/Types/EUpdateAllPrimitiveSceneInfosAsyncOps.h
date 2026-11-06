#pragma once


enum class EUpdateAllPrimitiveSceneInfosAsyncOps:int
{
	None = 0x0,
	CacheMeshDrawCommands = 0x1,
	CreateLightPrimitiveInteractions = 0x2,
	All = 0x3
};