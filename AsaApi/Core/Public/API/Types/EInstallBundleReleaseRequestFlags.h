#pragma once


enum class EInstallBundleReleaseRequestFlags:unsigned int
{
	None = 0x0,
	RemoveFilesIfPossible = 0x1,
	ExplicitRemoveList = 0x2
};