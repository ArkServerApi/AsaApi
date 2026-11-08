#pragma once


enum class EActorMovementCompensationMode:unsigned char
{
	ComponentSpace = 0x0,
	WorldSpace = 0x1,
	SuddenMotionOnly = 0x2
};