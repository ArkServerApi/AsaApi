#pragma once


enum class EPropertyAccessIndirectionType:unsigned char
{
	Offset = 0x0,
	Object = 0x1,
	Array = 0x2,
	ScriptFunction = 0x3,
	NativeFunction = 0x4
};