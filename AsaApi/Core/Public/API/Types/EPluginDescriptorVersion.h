#pragma once


enum class EPluginDescriptorVersion:unsigned char
{
	Invalid = 0x0,
	Initial = 0x1,
	NameHash = 0x2,
	ProjectPluginUnification = 0x3,
	LatestPlusOne = 0x4,
	Latest = 0x3
};