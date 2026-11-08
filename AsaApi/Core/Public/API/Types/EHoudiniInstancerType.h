#pragma once


enum class EHoudiniInstancerType:unsigned char
{
	Invalid = 0x0,
	ObjectInstancer = 0x1,
	PackedPrimitive = 0x2,
	AttributeInstancer = 0x3,
	OldSchoolAttributeInstancer = 0x4,
	GeometryCollection = 0x5
};