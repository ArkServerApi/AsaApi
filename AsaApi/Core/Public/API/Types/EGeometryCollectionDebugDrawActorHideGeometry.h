#pragma once


enum class EGeometryCollectionDebugDrawActorHideGeometry:unsigned char
{
	HideNone = 0x0,
	HideWithCollision = 0x1,
	HideSelected = 0x2,
	HideWholeCollection = 0x3,
	HideAll = 0x4
};