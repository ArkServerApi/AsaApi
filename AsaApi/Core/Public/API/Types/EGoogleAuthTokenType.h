#pragma once


enum class EGoogleAuthTokenType:unsigned char
{
	ExchangeToken = 0x0,
	RefreshToken = 0x1,
	AccessToken = 0x2
};