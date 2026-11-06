#pragma once


enum class ECompressionError:unsigned char
{
	None = 0x0,
	FailedToReadZip = 0x1,
	FailedToExtractFile = 0x2,
	FailedToWriteFile = 0x3
};