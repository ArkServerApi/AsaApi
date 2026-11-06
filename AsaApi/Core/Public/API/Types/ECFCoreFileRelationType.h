#pragma once


enum class ECFCoreFileRelationType:unsigned char
{
	None = 0x0,
	EmbeddedLibrary = 0x1,
	OptionalDependency = 0x2,
	RequiredDependency = 0x3,
	Tool = 0x4,
	Incompatible = 0x5,
	Include = 0x6
};