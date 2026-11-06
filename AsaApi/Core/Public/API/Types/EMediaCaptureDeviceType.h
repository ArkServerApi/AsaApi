#pragma once


enum class EMediaCaptureDeviceType:unsigned int
{
	Unknown = 0x0,
	Audio = 0x1,
	AudioCard = 0x2,
	AudioSoftware = 0x3,
	DepthSensor = 0x4,
	Microphone = 0x5,
	Video = 0x6,
	VideoCard = 0x7,
	VideoSoftware = 0x8,
	Webcam = 0x9,
	WebcamFront = 0xA,
	WebcamRear = 0xB
};