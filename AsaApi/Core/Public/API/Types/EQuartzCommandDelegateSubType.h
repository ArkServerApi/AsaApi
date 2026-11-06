#pragma once


enum class EQuartzCommandDelegateSubType:unsigned char
{
	CommandOnFailedToQueue = 0x0,
	CommandOnQueued = 0x1,
	CommandOnCanceled = 0x2,
	CommandOnAboutToStart = 0x3,
	CommandOnStarted = 0x4,
	Count = 0x5
};