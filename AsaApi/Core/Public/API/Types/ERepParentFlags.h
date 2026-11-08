#pragma once


enum class ERepParentFlags:unsigned int
{
	None = 0x0,
	IsLifetime = 0x1,
	IsConditional = 0x2,
	IsConfig = 0x4,
	IsCustomDelta = 0x8,
	IsNetSerialize = 0x10,
	IsStructProperty = 0x20,
	IsZeroConstructible = 0x40,
	IsFastArray = 0x80,
	HasObjectProperties = 0x100,
	HasNetSerializeProperties = 0x200,
	HasDynamicArrayProperties = 0x400
};