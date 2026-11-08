#pragma once


enum class EInstallBundleStatus:int
{
	Requested = 0x0,
	Updating = 0x1,
	Finishing = 0x2,
	Ready = 0x3,
	Count = 0x4
};