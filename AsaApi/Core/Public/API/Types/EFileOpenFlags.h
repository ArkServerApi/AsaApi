#pragma once


enum class EFileOpenFlags:int
{
	IO_READ = 0x1,
	IO_WRITE = 0x2,
	IO_APPEND = 0x40
};