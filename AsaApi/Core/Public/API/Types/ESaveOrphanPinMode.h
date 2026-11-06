#pragma once


enum class ESaveOrphanPinMode:unsigned char
{
	SaveNone = 0x0,
	SaveAll = 0x1,
	SaveAllButExec = 0x2
};