#pragma once


enum class EUserHasLicenseForAppResult:int
{
	k_EUserHasLicenseResultHasLicense = 0x0,
	k_EUserHasLicenseResultDoesNotHaveLicense = 0x1,
	k_EUserHasLicenseResultNoAuth = 0x2
};