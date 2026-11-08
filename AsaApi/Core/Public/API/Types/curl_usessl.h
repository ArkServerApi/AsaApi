#pragma once


enum class curl_usessl:int
{
	CURLUSESSL_NONE = 0x0,
	CURLUSESSL_TRY = 0x1,
	CURLUSESSL_CONTROL = 0x2,
	CURLUSESSL_ALL = 0x3,
	CURLUSESSL_LAST = 0x4
};