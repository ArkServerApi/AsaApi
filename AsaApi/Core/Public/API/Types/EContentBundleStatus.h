#pragma once


enum class EContentBundleStatus:int
{
	Registered = 0x0,
	ReadyToInject = 0x1,
	FailedToInject = 0x2,
	ContentInjected = 0x3,
	Unknown = 0xFF
};