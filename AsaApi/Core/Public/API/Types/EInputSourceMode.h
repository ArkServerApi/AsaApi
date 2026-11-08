#pragma once


enum class EInputSourceMode:int
{
	k_EInputSourceMode_None = 0x0,
	k_EInputSourceMode_Dpad = 0x1,
	k_EInputSourceMode_Buttons = 0x2,
	k_EInputSourceMode_FourButtons = 0x3,
	k_EInputSourceMode_AbsoluteMouse = 0x4,
	k_EInputSourceMode_RelativeMouse = 0x5,
	k_EInputSourceMode_JoystickMove = 0x6,
	k_EInputSourceMode_JoystickMouse = 0x7,
	k_EInputSourceMode_JoystickCamera = 0x8,
	k_EInputSourceMode_ScrollWheel = 0x9,
	k_EInputSourceMode_Trigger = 0xA,
	k_EInputSourceMode_TouchMenu = 0xB,
	k_EInputSourceMode_MouseJoystick = 0xC,
	k_EInputSourceMode_MouseRegion = 0xD,
	k_EInputSourceMode_RadialMenu = 0xE,
	k_EInputSourceMode_SingleButton = 0xF,
	k_EInputSourceMode_Switches = 0x10
};