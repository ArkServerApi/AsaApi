#pragma once


enum class EARObjectClassification:unsigned char
{
	NotApplicable = 0x0,
	Unknown = 0x1,
	Wall = 0x2,
	Ceiling = 0x3,
	Floor = 0x4,
	Table = 0x5,
	Seat = 0x6,
	Face = 0x7,
	Image = 0x8,
	World = 0x9,
	SceneObject = 0xA,
	HandMesh = 0xB,
	Door = 0xC,
	Window = 0xD
};