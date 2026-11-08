#pragma once


enum class EMediaFeature:int
{
	AudioSamples = 0x0,
	AudioTracks = 0x1,
	CaptionTracks = 0x2,
	MetadataTracks = 0x3,
	OverlaySamples = 0x4,
	SubtitleTracks = 0x5,
	TextTracks = 0x6,
	Video360 = 0x7,
	VideoSamples = 0x8,
	VideoStereo = 0x9,
	VideoTracks = 0xA
};