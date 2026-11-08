#pragma once


enum class ETransformGizmoSubElements:unsigned __int64
{
	None = 0x0,
	TranslateAxisX = 0x2,
	TranslateAxisY = 0x4,
	TranslateAxisZ = 0x8,
	TranslateAllAxes = 0xE,
	TranslatePlaneXY = 0x10,
	TranslatePlaneXZ = 0x20,
	TranslatePlaneYZ = 0x40,
	TranslateAllPlanes = 0x70,
	RotateAxisX = 0x80,
	RotateAxisY = 0x100,
	RotateAxisZ = 0x200,
	RotateAllAxes = 0x380,
	ScaleAxisX = 0x400,
	ScaleAxisY = 0x800,
	ScaleAxisZ = 0x1000,
	ScaleAllAxes = 0x1C00,
	ScalePlaneYZ = 0x2000,
	ScalePlaneXZ = 0x4000,
	ScalePlaneXY = 0xFFFF8000,
	ScaleAllPlanes = 0xFFFFE000,
	ScaleUniform = 0x10000,
	StandardTranslateRotate = 0x3FE,
	TranslateRotateUniformScale = 0x103FE,
	FullTranslateRotateScale = 0x1FFFE
};