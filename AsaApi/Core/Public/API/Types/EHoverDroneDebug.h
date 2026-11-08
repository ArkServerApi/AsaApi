#pragma once


enum class EHoverDroneDebug:int
{
	Off = 0x0,
	Position = 0x1,
	Velocity = 0x4,
	RotationalVelocity = 0x8,
	Altitude = 0x10,
	ForceFacing = 0x20,
	FOV = 0x40,
	All = 0x7D
};