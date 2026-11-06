#pragma once


enum class EExportFilterFlags:unsigned char
{
	None = 0x0,
	NotForClient = 0x1,
	NotForServer = 0x2
};