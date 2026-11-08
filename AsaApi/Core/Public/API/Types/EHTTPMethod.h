#pragma once


enum class EHTTPMethod:int
{
	k_EHTTPMethodInvalid = 0x0,
	k_EHTTPMethodGET = 0x1,
	k_EHTTPMethodHEAD = 0x2,
	k_EHTTPMethodPOST = 0x3,
	k_EHTTPMethodPUT = 0x4,
	k_EHTTPMethodDELETE = 0x5,
	k_EHTTPMethodOPTIONS = 0x6,
	k_EHTTPMethodPATCH = 0x7
};