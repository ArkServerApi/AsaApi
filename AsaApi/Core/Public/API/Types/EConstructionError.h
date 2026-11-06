#pragma once


enum class EConstructionError:unsigned char
{
	None = 0x0,
	CannotCreateFile = 0x1,
	OutOfDiskSpace = 0x2,
	MissingChunk = 0x3,
	SerializeError = 0x4,
	TrackingError = 0x5,
	OutboundDataError = 0x6
};