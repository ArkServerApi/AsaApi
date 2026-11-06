#pragma once


enum class EInstallBundlePauseFlags:unsigned int
{
	None = 0x0,
	OnCellularNetwork = 0x1,
	NoInternetConnection = 0x2,
	UserPaused = 0x4
};