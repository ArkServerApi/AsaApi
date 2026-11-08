#pragma once


enum class ERepLayoutCmdType:unsigned char
{
	DynamicArray = 0x0,
	Return = 0x1,
	Property = 0x2,
	PropertyBool = 0x3,
	PropertyFloat = 0x4,
	PropertyInt = 0x5,
	PropertyByte = 0x6,
	PropertyName = 0x7,
	PropertyObject = 0x8,
	PropertyUInt32 = 0x9,
	PropertyVector = 0xA,
	PropertyRotator = 0xB,
	PropertyPlane = 0xC,
	PropertyVector100 = 0xD,
	PropertyNetId = 0xE,
	RepMovement = 0xF,
	PropertyVectorNormal = 0x10,
	PropertyVector10 = 0x11,
	PropertyVectorQ = 0x12,
	PropertyString = 0x13,
	PropertyUInt64 = 0x14,
	PropertyNativeBool = 0x15,
	PropertySoftObject = 0x16,
	PropertyWeakObject = 0x17,
	PropertyInterface = 0x18,
	NetSerializeStructWithObjectReferences = 0x19
};