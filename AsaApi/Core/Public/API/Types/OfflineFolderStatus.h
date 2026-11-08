#pragma once


enum class OfflineFolderStatus:int
{
	OFS_INACTIVE = 0xFF,
	OFS_ONLINE = 0x0,
	OFS_OFFLINE = 0x1,
	OFS_SERVERBACK = 0x2,
	OFS_DIRTYCACHE = 0x3
};