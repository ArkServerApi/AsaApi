#pragma once


enum class ERigHierarchyNotification:unsigned char
{
	ElementAdded = 0x0,
	ElementRemoved = 0x1,
	ElementRenamed = 0x2,
	ElementSelected = 0x3,
	ElementDeselected = 0x4,
	ParentChanged = 0x5,
	HierarchyReset = 0x6,
	ControlSettingChanged = 0x7,
	ControlVisibilityChanged = 0x8,
	ControlDrivenListChanged = 0x9,
	ControlShapeTransformChanged = 0xA,
	ParentWeightsChanged = 0xB,
	InteractionBracketOpened = 0xC,
	InteractionBracketClosed = 0xD,
	ElementReordered = 0xE,
	Max = 0xF
};