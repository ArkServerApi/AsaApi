#pragma once


enum class EOnlineErrorResult:unsigned char
{
	Success = 0x0,
	NoConnection = 0x1,
	RequestFailure = 0x2,
	InvalidCreds = 0x3,
	InvalidUser = 0x4,
	InvalidAuth = 0x5,
	AccessDenied = 0x6,
	TooManyRequests = 0x7,
	AlreadyPending = 0x8,
	InvalidParams = 0x9,
	CantParse = 0xA,
	InvalidResults = 0xB,
	IncompatibleVersion = 0xC,
	NotConfigured = 0xD,
	NotImplemented = 0xE,
	MissingInterface = 0xF,
	Canceled = 0x10,
	FailExtended = 0x11,
	Unknown = 0x12
};