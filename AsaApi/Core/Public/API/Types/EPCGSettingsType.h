#pragma once


enum class EPCGSettingsType:unsigned char
{
	InputOutput = 0x0,
	Spatial = 0x1,
	Density = 0x2,
	Blueprint = 0x3,
	Metadata = 0x4,
	Filter = 0x5,
	Sampler = 0x6,
	Spawner = 0x7,
	Subgraph = 0x8,
	Debug = 0x9,
	Generic = 0xA,
	Param = 0xB
};