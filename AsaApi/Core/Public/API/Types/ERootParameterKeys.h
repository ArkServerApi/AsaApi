#pragma once


enum class ERootParameterKeys:int
{
	PS_SRVs = 0x0,
	PS_CBVs = 0x1,
	PS_RootCBVs = 0x2,
	PS_Samplers = 0x3,
	VS_SRVs = 0x4,
	VS_CBVs = 0x5,
	VS_RootCBVs = 0x6,
	VS_Samplers = 0x7,
	GS_SRVs = 0x8,
	GS_CBVs = 0x9,
	GS_RootCBVs = 0xA,
	GS_Samplers = 0xB,
	MS_SRVs = 0xC,
	MS_CBVs = 0xD,
	MS_RootCBVs = 0xE,
	MS_Samplers = 0xF,
	AS_SRVs = 0x10,
	AS_CBVs = 0x11,
	AS_RootCBVs = 0x12,
	AS_Samplers = 0x13,
	ALL_SRVs = 0x14,
	ALL_CBVs = 0x15,
	ALL_RootCBVs = 0x16,
	ALL_Samplers = 0x17,
	ALL_UAVs = 0x18,
	RPK_RootParameterKeyCount = 0x19
};