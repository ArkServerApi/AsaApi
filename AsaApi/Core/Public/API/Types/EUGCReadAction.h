#pragma once


enum class EUGCReadAction:int
{
	k_EUGCRead_ContinueReadingUntilFinished = 0x0,
	k_EUGCRead_ContinueReading = 0x1,
	k_EUGCRead_Close = 0x2
};