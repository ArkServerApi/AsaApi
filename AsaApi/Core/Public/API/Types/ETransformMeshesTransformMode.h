#pragma once


enum class ETransformMeshesTransformMode:unsigned char
{
	SharedGizmo = 0x0,
	SharedGizmoLocal = 0x1,
	PerObjectGizmo = 0x2,
	LastValue = 0x3
};