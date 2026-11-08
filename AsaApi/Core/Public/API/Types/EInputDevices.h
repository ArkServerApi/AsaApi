#pragma once


enum class EInputDevices:int
{
	None = 0x0,
	Keyboard = 0x1,
	Mouse = 0x2,
	Gamepad = 0x4,
	OculusTouch = 0x8,
	HTCViveWands = 0x10,
	AnySpatialDevice = 0x18,
	TabletFingers = 0x400
};