#pragma once


enum class EXboxOrigin:int
{
	k_EXboxOrigin_A = 0x0,
	k_EXboxOrigin_B = 0x1,
	k_EXboxOrigin_X = 0x2,
	k_EXboxOrigin_Y = 0x3,
	k_EXboxOrigin_LeftBumper = 0x4,
	k_EXboxOrigin_RightBumper = 0x5,
	k_EXboxOrigin_Menu = 0x6,
	k_EXboxOrigin_View = 0x7,
	k_EXboxOrigin_LeftTrigger_Pull = 0x8,
	k_EXboxOrigin_LeftTrigger_Click = 0x9,
	k_EXboxOrigin_RightTrigger_Pull = 0xA,
	k_EXboxOrigin_RightTrigger_Click = 0xB,
	k_EXboxOrigin_LeftStick_Move = 0xC,
	k_EXboxOrigin_LeftStick_Click = 0xD,
	k_EXboxOrigin_LeftStick_DPadNorth = 0xE,
	k_EXboxOrigin_LeftStick_DPadSouth = 0xF,
	k_EXboxOrigin_LeftStick_DPadWest = 0x10,
	k_EXboxOrigin_LeftStick_DPadEast = 0x11,
	k_EXboxOrigin_RightStick_Move = 0x12,
	k_EXboxOrigin_RightStick_Click = 0x13,
	k_EXboxOrigin_RightStick_DPadNorth = 0x14,
	k_EXboxOrigin_RightStick_DPadSouth = 0x15,
	k_EXboxOrigin_RightStick_DPadWest = 0x16,
	k_EXboxOrigin_RightStick_DPadEast = 0x17,
	k_EXboxOrigin_DPad_North = 0x18,
	k_EXboxOrigin_DPad_South = 0x19,
	k_EXboxOrigin_DPad_West = 0x1A,
	k_EXboxOrigin_DPad_East = 0x1B,
	k_EXboxOrigin_Count = 0x1C
};