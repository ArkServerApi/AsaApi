#pragma once


enum class EInstallBundleRequestInfoFlags:int
{
	None = 0x0,
	EnqueuedBundles = 0x1,
	SkippedAlreadyMountedBundles = 0x2,
	SkippedAlreadyUpdatedBundles = 0x4,
	SkippedAlreadyReleasedBundles = 0x8,
	SkippedAlreadyRemovedBundles = 0x10,
	SkippedUnknownBundles = 0x20,
	SkippedInvalidBundles = 0x40,
	SkippedUnusableLanguageBundles = 0x80,
	SkippedBundlesDueToBundleSource = 0x100
};