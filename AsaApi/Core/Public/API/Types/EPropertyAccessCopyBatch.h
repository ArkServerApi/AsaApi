#pragma once


enum class EPropertyAccessCopyBatch:unsigned char
{
	InternalUnbatched = 0x0,
	ExternalUnbatched = 0x1,
	InternalBatched = 0x2,
	ExternalBatched = 0x3,
	Count = 0x4
};