#pragma once


enum class ECreateModelingObjectResult:unsigned char
{
	Ok = 0x0,
	Cancelled = 0x1,
	Failed_Unknown = 0x2,
	Failed_NoAPIFound = 0x3,
	Failed_InvalidWorld = 0x4,
	Failed_InvalidMesh = 0x5,
	Failed_InvalidTexture = 0x6,
	Failed_AssetCreationFailed = 0x7,
	Failed_ActorCreationFailed = 0x8
};