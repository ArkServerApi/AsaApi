#pragma once


enum class EPropertyValueCategory:unsigned char
{
	Undefined = 0x0,
	Generic = 0x1,
	RelativeLocation = 0x2,
	RelativeRotation = 0x4,
	RelativeScale3D = 0x8,
	Visibility = 0x10,
	Material = 0x20,
	Color = 0x40,
	Option = 0x80
};