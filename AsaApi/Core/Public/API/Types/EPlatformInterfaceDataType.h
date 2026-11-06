#pragma once


enum class EPlatformInterfaceDataType:int
{
	PIDT_None = 0x0,
	PIDT_Int = 0x1,
	PIDT_Float = 0x2,
	PIDT_String = 0x3,
	PIDT_Object = 0x4,
	PIDT_Custom = 0x5,
	PIDT_MAX = 0x6
};