#pragma once


enum class EBoneVisibilityStatus:int
{
	BVS_HiddenByParent = 0x0,
	BVS_Visible = 0x1,
	BVS_ExplicitlyHidden = 0x2,
	BVS_MAX = 0x3
};