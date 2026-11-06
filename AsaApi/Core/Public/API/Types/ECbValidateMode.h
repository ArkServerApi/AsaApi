#pragma once


enum class ECbValidateMode:unsigned int
{
	None = 0x0,
	Default = 0x1,
	Names = 0x2,
	Format = 0x4,
	Padding = 0x8,
	Package = 0x10,
	PackageHash = 0x20,
	All = 0x3F
};