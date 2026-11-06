#pragma once


enum class EIoStoreTocReadOptions:int
{
	Default = 0x0,
	ReadDirectoryIndex = 0x1,
	ReadTocMeta = 0x2,
	ReadAll = 0x3
};