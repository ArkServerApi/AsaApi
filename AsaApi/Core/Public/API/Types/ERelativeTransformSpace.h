#pragma once


enum class ERelativeTransformSpace:int
{
	RTS_World = 0x0,
	RTS_Actor = 0x1,
	RTS_Component = 0x2,
	RTS_ParentBoneSpace = 0x3
};