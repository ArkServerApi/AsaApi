#pragma once


enum class EAttachmentRule:unsigned char
{
	KeepRelative = 0x0,
	KeepWorld = 0x1,
	SnapToTarget = 0x2,
	KeepWorldLegacy = 0x3
};