#pragma once


namespace EClimbingAnimationType
{
	enum Type:int
	{
		Up = 0x0,
		Down = 0x1,
		Right = 0x2,
		Left = 0x3,
		MeleeUp = 0x4,
		MeleeRight = 0x5,
		MeleeLeft = 0x6,
		FinishUp = 0x7,
		FinishDown = 0x8,
		HangingFwd = 0x9,
		HangingMelee = 0xA,
		HangingFinishUp = 0xB,
		HangingFinishDown = 0xC,
		JumpUp = 0xD,
		JumpUpRight = 0xE,
		JumpUpLeft = 0xF,
		SlideDown = 0x10,
		AttachUp = 0x11,
		AttachDown = 0x12,
		AttachHangingUp = 0x13,
		AttachHangingDown = 0x14,
		FlipLeft = 0x15,
		FlipRight = 0x16,
		FlipUp = 0x17,
		FlipDown = 0x18,
		TurnUp = 0x19,
		TurnDown = 0x1A,
		TurnRight = 0x1B,
		TurnLeft = 0x1C,
		OpenInventory = 0x1D,
		OpenInventoryHanging = 0x1E,
		QuakeFall = 0x1F,
		MAX = 0x20
	};
}