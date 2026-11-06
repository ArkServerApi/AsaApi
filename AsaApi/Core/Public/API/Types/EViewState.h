#pragma once


enum class EViewState:unsigned char
{
	Store = 0x0,
	ModPage = 0x1,
	ScreenShot = 0x2,
	Dropdown = 0x3,
	ServerMods = 0x4,
	Popup = 0x5
};