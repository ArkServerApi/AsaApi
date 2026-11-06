#pragma once


enum class EInstallBundleSourceType:int
{
	Bulk = 0x0,
	Launcher = 0x1,
	BuildPatchServices = 0x2,
	GameCustom = 0x3,
	Count = 0x4
};