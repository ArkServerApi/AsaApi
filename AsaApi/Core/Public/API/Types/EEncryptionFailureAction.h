#pragma once


enum class EEncryptionFailureAction:unsigned char
{
	Default = 0x0,
	RejectConnection = 0x1,
	AllowConnection = 0x2
};