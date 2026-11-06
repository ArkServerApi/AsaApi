#pragma once


enum class EVoiceChatAttenuationModel:int
{
	None = 0x0,
	InverseByDistance = 0x1,
	LinearByDistance = 0x2,
	ExponentialByDistance = 0x3
};