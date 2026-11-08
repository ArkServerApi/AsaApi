#pragma once


enum class EModuleLoadResult:int
{
	Success = 0x0,
	FileNotFound = 0x1,
	FileIncompatible = 0x2,
	CouldNotBeLoadedByOS = 0x3,
	FailedToInitialize = 0x4
};