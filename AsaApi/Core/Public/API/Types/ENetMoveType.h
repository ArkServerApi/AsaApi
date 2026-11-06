#pragma once


namespace ENetMoveType
{
	enum Type:int
	{
		ServerMove = 0x0,
		ServerMoveOld = 0x1,
		ServerMoveWithRotation = 0x2,
		ServerMoveOldWithRotation = 0x3,
		ServerMoveOnlyRotation = 0x4
	};
}