#pragma once


enum class EPolyFlags:unsigned __int64
{
	PF_Invisible = 0x1,
	PF_NotSolid = 0x8,
	PF_Semisolid = 0x20,
	PF_GeomMarked = 0x40,
	PF_TwoSided = 0x100,
	PF_Portal = 0x4000000,
	PF_Memorized = 0x1000000,
	PF_Selected = 0x2000000,
	PF_HiddenEd = 0x8000000,
	PF_Hovered = 0x10000000,
	PF_EdProcessed = 0x40000000,
	PF_EdCut = 0x80000000,
	PF_NoEdit = 0xD3000000,
	PF_NoImport = 0xD3000000,
	PF_AddLast = 0x28,
	PF_NoAddToBSP = 0xD3000000,
	PF_ModelComponentMask = 0x0,
	PF_DefaultFlags = 0x0
};