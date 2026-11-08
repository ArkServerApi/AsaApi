#pragma once


enum class EToolContextTransformGizmoMode:unsigned char
{
	NoGizmo = 0x0,
	Translation = 0x1,
	Rotation = 0x2,
	Scale = 0x3,
	Combined = 0x8
};