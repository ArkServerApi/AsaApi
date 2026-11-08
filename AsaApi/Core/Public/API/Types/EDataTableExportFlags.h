#pragma once


enum class EDataTableExportFlags:unsigned char
{
	None = 0x0,
	UseJsonObjectsForStructs = 0x1,
	UseSimpleText = 0x2,
	UsePrettyPropertyNames = 0x40,
	UsePrettyEnumNames = 0x80
};