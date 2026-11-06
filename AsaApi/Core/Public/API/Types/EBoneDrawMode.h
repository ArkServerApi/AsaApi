#pragma once


namespace EBoneDrawMode
{
	enum Type:int
	{
		None = 0x0,
		Selected = 0x1,
		SelectedAndParents = 0x2,
		SelectedAndChildren = 0x3,
		SelectedAndParentsAndChildren = 0x4,
		All = 0x5,
		NumDrawModes = 0x6
	};
}