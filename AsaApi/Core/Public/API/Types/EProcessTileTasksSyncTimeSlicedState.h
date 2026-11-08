#pragma once


enum class EProcessTileTasksSyncTimeSlicedState:unsigned char
{
	Init = 0x0,
	DoWork = 0x1,
	AddGeneratedTiles = 0x2,
	StoreCompessedTileCacheLayers = 0x3,
	AppendUpdateTiles = 0x4,
	Finish = 0x5
};