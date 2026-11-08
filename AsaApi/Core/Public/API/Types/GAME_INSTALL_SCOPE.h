#pragma once


enum class GAME_INSTALL_SCOPE:int
{
	GIS_NOT_INSTALLED = 0x1,
	GIS_CURRENT_USER = 0x2,
	GIS_ALL_USERS = 0x3
};