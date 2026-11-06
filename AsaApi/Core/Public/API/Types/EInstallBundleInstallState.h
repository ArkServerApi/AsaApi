#pragma once


enum class EInstallBundleInstallState:int
{
	NotInstalled = 0x0,
	NeedsUpdate = 0x1,
	UpToDate = 0x2,
	Count = 0x3
};