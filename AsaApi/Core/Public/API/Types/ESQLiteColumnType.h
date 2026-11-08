#pragma once


enum class ESQLiteColumnType:unsigned char
{
	Integer = 0x0,
	Float = 0x1,
	String = 0x2,
	Blob = 0x3,
	Null = 0x4
};