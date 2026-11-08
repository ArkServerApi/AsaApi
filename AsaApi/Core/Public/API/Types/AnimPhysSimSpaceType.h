#pragma once


enum class AnimPhysSimSpaceType:unsigned char
{
	Component = 0x0,
	Actor = 0x1,
	World = 0x2,
	RootRelative = 0x3,
	BoneRelative = 0x4
};