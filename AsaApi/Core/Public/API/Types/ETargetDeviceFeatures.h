#pragma once


enum class ETargetDeviceFeatures:int
{
	MultiLaunch = 0x0,
	PowerOff = 0x1,
	PowerOn = 0x2,
	ProcessSnapshot = 0x3,
	Reboot = 0x4
};