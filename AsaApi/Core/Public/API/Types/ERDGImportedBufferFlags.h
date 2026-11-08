#pragma once


enum class ERDGImportedBufferFlags:int
{
	None = 0x0,
	CreateSRV = 0x1,
	CreateUAV = 0x2,
	CreateViews = 0x3
};