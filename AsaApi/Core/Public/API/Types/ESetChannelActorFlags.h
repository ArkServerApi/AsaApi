#pragma once


enum class ESetChannelActorFlags:unsigned int
{
	None = 0x0,
	SkipReplicatorCreation = 0x1,
	SkipMarkActive = 0x2
};