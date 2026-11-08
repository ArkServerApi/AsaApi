#pragma once


enum class EInstallBundleManagerInitResult:int
{
	OK = 0x0,
	BuildMetaDataNotFound = 0x1,
	RemoteBuildMetaDataNotFound = 0x2,
	BuildMetaDataDownloadError = 0x3,
	BuildMetaDataParsingError = 0x4,
	DistributionRootParseError = 0x5,
	DistributionRootDownloadError = 0x6,
	ManifestArchiveError = 0x7,
	ManifestCreationError = 0x8,
	ManifestDownloadError = 0x9,
	BackgroundDownloadsIniDownloadError = 0xA,
	NoInternetConnectionError = 0xB,
	ConfigurationError = 0xC,
	ClientPatchRequiredError = 0xD,
	Count = 0xE
};