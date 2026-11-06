#pragma once


enum class EPropertyAccessResultFlags:unsigned char
{
	Success = 0x0,
	PermissionDenied = 0x1,
	ConversionFailed = 0x2,
	AccessProtected = 0x10,
	CannotEditTemplate = 0x20,
	CannotEditInstance = 0x40,
	ReadOnly = 0x80
};