#pragma once


enum class EMovementMode :int
{
	MOVE_None = 0x0,
	MOVE_Walking = 0x1,
	MOVE_NavWalking = 0x2,
	MOVE_Falling = 0x3,
	MOVE_Swimming = 0x4,
	MOVE_Flying = 0x5,
	MOVE_Custom = 0x6,
	MOVE_MAX = 0x7
};