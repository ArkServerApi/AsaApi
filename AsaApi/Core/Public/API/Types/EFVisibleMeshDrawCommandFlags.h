#pragma once


enum class EFVisibleMeshDrawCommandFlags:unsigned char
{
	Default = 0x0,
	MaterialUsesWorldPositionOffset = 0x1,
	MaterialMayModifyPosition = 0x1,
	HasPrimitiveIdStreamIndex = 0x2,
	ForceInstanceCulling = 0x4,
	PreserveInstanceOrder = 0x8,
	All = 0xF,
	NumBits = 0x4
};