#pragma once


enum class EOS_EApplicationStatus:int
{
	EOS_AS_BackgroundConstrained = 0x0,
	EOS_AS_BackgroundUnconstrained = 0x1,
	EOS_AS_BackgroundSuspended = 0x2,
	EOS_AS_Foreground = 0x3
};