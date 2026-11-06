#pragma once


enum class EBoneControlSpace:int
{
	BCS_WorldSpace = 0x0,
	BCS_ComponentSpace = 0x1,
	BCS_ParentBoneSpace = 0x2,
	BCS_BoneSpace = 0x3,
	BCS_MAX = 0x4
};