#pragma once


enum class EOS_ELogLevel:int
{
	EOS_LOG_Off = 0x0,
	EOS_LOG_Fatal = 0x64,
	EOS_LOG_Error = 0xC8,
	EOS_LOG_Warning = 0x12C,
	EOS_LOG_Info = 0x190,
	EOS_LOG_Verbose = 0x1F4,
	EOS_LOG_VeryVerbose = 0x258
};