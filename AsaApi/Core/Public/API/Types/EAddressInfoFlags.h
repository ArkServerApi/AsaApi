#pragma once


enum class EAddressInfoFlags:unsigned short
{
	AllResults = 0x1,
	NoResolveHost = 0x2,
	NoResolveService = 0x4,
	OnlyUsableAddresses = 0x8,
	BindableAddress = 0x10,
	CanonicalName = 0x20,
	FQDomainName = 0x40,
	AllowV4MappedAddresses = 0x80,
	AllResultsWithMapping = 0x81,
	Default = 0x0
};