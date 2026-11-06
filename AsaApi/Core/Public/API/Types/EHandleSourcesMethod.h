#pragma once


enum class EHandleSourcesMethod:unsigned char
{
	DeleteSources = 0x0,
	HideSources = 0x1,
	KeepSources = 0x2,
	KeepFirstSource = 0x3,
	KeepLastSource = 0x4
};