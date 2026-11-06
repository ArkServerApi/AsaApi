#pragma once


enum class BodyInstanceSceneState:unsigned char
{
	NotAdded = 0x0,
	AwaitingAdd = 0x1,
	Added = 0x2,
	AwaitingRemove = 0x3,
	Removed = 0x4
};