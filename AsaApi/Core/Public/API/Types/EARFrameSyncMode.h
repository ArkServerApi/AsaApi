#pragma once


enum class EARFrameSyncMode:unsigned char
{
	SyncTickWithCameraImage = 0x0,
	SyncTickWithoutCameraImage = 0x1
};