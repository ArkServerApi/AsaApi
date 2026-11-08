#pragma once


enum class EReloadCompleteReason:int
{
	None = 0x0,
	HotReloadAutomatic = 0x1,
	HotReloadManual = 0x2
};