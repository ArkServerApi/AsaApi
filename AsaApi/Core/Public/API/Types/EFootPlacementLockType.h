#pragma once


enum class EFootPlacementLockType:unsigned char
{
	Unlocked = 0x0,
	PivotAroundBall = 0x1,
	PivotAroundAnkle = 0x2,
	LockRotation = 0x3
};