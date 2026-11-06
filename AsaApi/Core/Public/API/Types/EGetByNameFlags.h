#pragma once


enum class EGetByNameFlags:int
{
	None = 0x0,
	ErrorIfNotFound = 0x1,
	CaseSensitive = 0x2,
	CheckAuthoredName = 0x4
};