#pragma once


enum class AudioSessionDisconnectReason:int
{
	DisconnectReasonDeviceRemoval = 0x0,
	DisconnectReasonServerShutdown = 0x1,
	DisconnectReasonFormatChanged = 0x2,
	DisconnectReasonSessionLogoff = 0x3,
	DisconnectReasonSessionDisconnected = 0x4,
	DisconnectReasonExclusiveModeOverride = 0x5
};