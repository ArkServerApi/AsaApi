#pragma once


enum class EServerMode:int
{
	eServerModeInvalid = 0x0,
	eServerModeNoAuthentication = 0x1,
	eServerModeAuthentication = 0x2,
	eServerModeAuthenticationAndSecure = 0x3
};