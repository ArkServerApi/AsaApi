#pragma once


namespace EAudioOutputTarget
{
	enum Type:int
	{
		Speaker = 0x0,
		Controller = 0x1,
		ControllerFallbackToSpeaker = 0x2
	};
}