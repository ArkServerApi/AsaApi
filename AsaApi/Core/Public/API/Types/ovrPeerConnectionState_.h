#pragma once


enum class ovrPeerConnectionState_:int
{
	ovrPeerState_Unknown = 0x0,
	ovrPeerState_Connected = 0x1,
	ovrPeerState_Timeout = 0x2,
	ovrPeerState_Closed = 0x3
};