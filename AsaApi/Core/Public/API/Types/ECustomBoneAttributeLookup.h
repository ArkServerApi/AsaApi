#pragma once


enum class ECustomBoneAttributeLookup:unsigned char
{
	BoneOnly = 0x0,
	ImmediateParent = 0x1,
	ParentHierarchy = 0x2
};