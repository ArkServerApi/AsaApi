#pragma once


enum class EAudioStreamingState:int
{
	AudioState_ReadyFor_Requests = 0x0,
	AudioState_ReadyFor_Finalization = 0x1,
	AudioState_InProgress_Loading = 0x2
};