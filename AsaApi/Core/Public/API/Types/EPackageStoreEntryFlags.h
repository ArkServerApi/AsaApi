#pragma once


enum class EPackageStoreEntryFlags:unsigned int
{
	None = 0x0,
	Redirected = 0x1,
	AutoOptional = 0x2
};