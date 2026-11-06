#pragma once


enum class EVoiceResult:int
{
	k_EVoiceResultOK = 0x0,
	k_EVoiceResultNotInitialized = 0x1,
	k_EVoiceResultNotRecording = 0x2,
	k_EVoiceResultNoData = 0x3,
	k_EVoiceResultBufferTooSmall = 0x4,
	k_EVoiceResultDataCorrupted = 0x5,
	k_EVoiceResultRestricted = 0x6,
	k_EVoiceResultUnsupportedCodec = 0x7,
	k_EVoiceResultReceiverOutOfDate = 0x8,
	k_EVoiceResultReceiverDidNotAnswer = 0x9
};