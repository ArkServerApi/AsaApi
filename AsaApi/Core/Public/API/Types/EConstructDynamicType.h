#pragma once


enum class EConstructDynamicType:unsigned char
{
	OnlyAllocateClassObject = 0x0,
	CallZConstructor = 0x1
};