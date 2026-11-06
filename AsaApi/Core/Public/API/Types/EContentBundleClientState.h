#pragma once


enum class EContentBundleClientState:int
{
	Unregistered = 0x0,
	Registered = 0x1,
	ContentInjectionRequested = 0x2,
	ContentRemovalRequested = 0x3,
	RegistrationFailed = 0x4
};