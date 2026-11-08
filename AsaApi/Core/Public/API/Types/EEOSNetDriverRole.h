#pragma once


enum class EEOSNetDriverRole:signed char
{
	DedicatedServer = 0x0,
	ListenServer = 0x1,
	ClientConnectedToDedicatedServer = 0x2,
	ClientConnectedToListenServer = 0x3
};