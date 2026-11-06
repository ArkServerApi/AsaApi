#pragma once


enum class ERequestContentError:int
{
	NoError = 0x0,
	InvalidInstallationDirectory = 0x1,
	InvalidCloudURL = 0x2,
	InvalidManifestURL = 0x3,
	FailedToDownloadManifestNoResponse = 0x4,
	FailedToDownloadManifest = 0x5,
	FailedToReadManifest = 0x6
};