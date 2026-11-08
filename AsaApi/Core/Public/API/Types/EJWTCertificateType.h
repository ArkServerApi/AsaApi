#pragma once


enum class EJWTCertificateType:unsigned char
{
	HS256 = 0x0,
	HS384 = 0x1,
	HS512 = 0x2,
	RS256 = 0x3,
	RS384 = 0x4,
	RS512 = 0x5
};