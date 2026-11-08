#pragma once


enum class ECbValidateError:unsigned int
{
	None = 0x0,
	OutOfBounds = 0x1,
	InvalidType = 0x2,
	DuplicateName = 0x4,
	MissingName = 0x8,
	ArrayName = 0x10,
	InvalidString = 0x20,
	InvalidInteger = 0x40,
	InvalidFloat = 0x80,
	NonUniformObject = 0x100,
	NonUniformArray = 0x200,
	Padding = 0x400,
	InvalidPackageFormat = 0x800,
	InvalidPackageHash = 0x1000,
	DuplicateAttachments = 0x2000,
	MultiplePackageObjects = 0x4000,
	NullPackageObject = 0xFFFF8000,
	NullPackageAttachment = 0x10000
};