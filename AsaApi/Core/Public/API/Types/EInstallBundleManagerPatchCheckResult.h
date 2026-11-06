#pragma once


enum class EInstallBundleManagerPatchCheckResult:unsigned int
{
	NoPatchRequired = 0x0,
	ClientPatchRequired = 0x1,
	ContentPatchRequired = 0x2,
	NoLoggedInUser = 0x3,
	PatchCheckFailure = 0x4,
	Count = 0x5
};