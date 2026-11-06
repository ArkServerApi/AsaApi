#pragma once


enum class FAmazonS3GetObjectStatus:int
{
	GetObject_NotStarted = 0x0,
	GetObject_Downloading = 0x1,
	GetObject_Done = 0x2,
	GetObject_Errored = 0x3
};