#pragma once


enum class EDatasmithImportAssetConflictPolicy:unsigned char
{
	Replace = 0x0,
	Update = 0x1,
	Use = 0x2,
	Ignore = 0x3
};