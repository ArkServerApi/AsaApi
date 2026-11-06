#pragma once


/*enum class SCOPE_LEVEL :int
{
	ScopeLevelInterface = 0x1,
	ScopeLevelLink = 0x2,
	ScopeLevelSubnet = 0x3,
	ScopeLevelAdmin = 0x4,
	ScopeLevelSite = 0x5,
	ScopeLevelOrganization = 0x8,
	ScopeLevelGlobal = 0xE,
	ScopeLevelCount = 0x10
};*/

enum class IPSEC_TOKEN_TYPE_:int
{
	IPSEC_TOKEN_TYPE_MACHINE = 0x0,
	IPSEC_TOKEN_TYPE_IMPERSONATION = 0x1,
	IPSEC_TOKEN_TYPE_MAX = 0x2
};