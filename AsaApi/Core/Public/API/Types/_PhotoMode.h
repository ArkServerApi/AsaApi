#pragma once


enum class _PhotoMode:int
{
	PhotoMode_Normal = 0x0,
	PhotoMode_PhotoSequence = 0x1,
	PhotoMode_VariablePhotoSequence = 0x2,
	PhotoMode_AdvancedPhoto = 0x3,
	PhotoMode_Undefined = 0x4
};