#pragma once


enum class ovrPlatformInitializeResult_:int
{
	ovrPlatformInitialize_Success = 0x0,
	ovrPlatformInitialize_Uninitialized = 0xFF,
	ovrPlatformInitialize_PreLoaded = 0xFE,
	ovrPlatformInitialize_FileInvalid = 0xFD,
	ovrPlatformInitialize_SignatureInvalid = 0xFC,
	ovrPlatformInitialize_UnableToVerify = 0xFB,
	ovrPlatformInitialize_VersionMismatch = 0xFA,
	ovrPlatformInitialize_Unknown = 0xF9,
	ovrPlatformInitialize_InvalidCredentials = 0xF8,
	ovrPlatformInitialize_NotEntitled = 0xF7
};