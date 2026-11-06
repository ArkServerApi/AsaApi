#pragma once


enum class ENDIMeshRendererInfoVersion:unsigned int
{
	InitialVersion = 0x0,
	AddSizeToMeshLocalBounds = 0x1,
	VersionPlusOne = 0x2,
	LatestVersion = 0x1
};