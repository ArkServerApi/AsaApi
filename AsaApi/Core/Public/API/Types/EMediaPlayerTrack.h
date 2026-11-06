#pragma once


enum class EMediaPlayerTrack:unsigned char
{
	Audio = 0x0,
	Caption = 0x1,
	Metadata = 0x2,
	Script = 0x3,
	Subtitle = 0x4,
	Text = 0x5,
	Video = 0x6
};