#pragma once


enum class ETextEntryType:unsigned char
{
	TextEntryCanceled = 0x0,
	TextEntryAccepted = 0x1,
	TextEntryUpdated = 0x2
};