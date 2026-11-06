#pragma once


enum class ESetCollisionGeometryInputMode:int
{
	CombineAll = 0x0,
	PerInputObject = 0x1,
	PerMeshComponent = 0x2,
	PerMeshGroup = 0x3
};