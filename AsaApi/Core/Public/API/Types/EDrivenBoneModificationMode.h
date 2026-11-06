#pragma once


enum class EDrivenBoneModificationMode:unsigned char
{
	AddToInput = 0x0,
	ReplaceComponent = 0x1,
	AddToRefPose = 0x2
};