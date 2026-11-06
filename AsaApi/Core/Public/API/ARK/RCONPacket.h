#pragma once

struct RCONPacket
{
	int Length;
	int Id;
	int Type;
	FString Body;
};