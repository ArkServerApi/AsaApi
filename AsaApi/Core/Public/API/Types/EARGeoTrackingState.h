#pragma once


enum class EARGeoTrackingState:unsigned char
{
	Initializing = 0x0,
	Localized = 0x1,
	Localizing = 0x2,
	NotAvailable = 0x3
};