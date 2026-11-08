#pragma once


/*enum class MULTICAST_MODE_TYPE :int
{
	MCAST_INCLUDE = 0x0,
	MCAST_EXCLUDE = 0x1
};*/

enum class ESocketBSDReturn:unsigned char
{
	Yes = 0x0,
	No = 0x1,
	EncounteredError = 0x2
};