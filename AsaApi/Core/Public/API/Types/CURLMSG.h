#pragma once


enum class CURLMSG:int
{
	CURLMSG_NONE = 0x0,
	CURLMSG_DONE = 0x1,
	CURLMSG_LAST = 0x2
};