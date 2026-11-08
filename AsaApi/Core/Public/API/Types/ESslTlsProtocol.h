#pragma once


enum class ESslTlsProtocol:unsigned char
{
	Minimum = 0x0,
	SSLv2 = 0x0,
	SSLv3 = 0x1,
	TLSv1 = 0x2,
	TLSv1_1 = 0x3,
	TLSv1_2 = 0x4,
	Maximum = 0x4
};