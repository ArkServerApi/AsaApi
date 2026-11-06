#pragma once


enum class EMeshSelectionToolActions:int
{
	NoAction = 0x0,
	SelectAll = 0x1,
	SelectAllByMaterial = 0x2,
	ClearSelection = 0x3,
	InvertSelection = 0x4,
	GrowSelection = 0x5,
	ShrinkSelection = 0x6,
	ExpandToConnected = 0x7,
	SelectLargestComponentByTriCount = 0x8,
	SelectLargestComponentByArea = 0x9,
	OptimizeSelection = 0xA,
	DeleteSelected = 0xB,
	DisconnectSelected = 0xC,
	SeparateSelected = 0xD,
	DuplicateSelected = 0xE,
	FlipSelected = 0xF,
	CreateGroup = 0x10,
	SmoothBoundary = 0x11,
	CycleSelectionMode = 0x12,
	CycleViewMode = 0x13
};