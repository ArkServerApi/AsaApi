#pragma once


enum class EPrimitiveAddToSceneOps:int
{
	None = 0x0,
	AddStaticMeshes = 0x1,
	CacheMeshDrawCommands = 0x2,
	CreateLightPrimitiveInteractions = 0x4,
	All = 0x7
};