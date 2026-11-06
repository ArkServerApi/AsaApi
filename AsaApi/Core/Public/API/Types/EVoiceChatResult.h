#pragma once


enum class EVoiceChatResult:int
{
	Success = 0x0,
	InvalidState = 0x1,
	NotInitialized = 0x2,
	NotConnected = 0x3,
	NotLoggedIn = 0x4,
	NotPermitted = 0x5,
	Throttled = 0x6,
	InvalidArgument = 0x7,
	CredentialsInvalid = 0x8,
	CredentialsExpired = 0x9,
	ClientTimeout = 0xA,
	ServerTimeout = 0xB,
	DnsFailure = 0xC,
	ConnectionFailure = 0xD,
	ImplementationError = 0xE
};