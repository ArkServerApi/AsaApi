#pragma once


enum class EPackageStoreEntryStatus:int
{
	None = 0x0,
	Missing = 0x1,
	Pending = 0x2,
	Ok = 0x3
};