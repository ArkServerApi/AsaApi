#pragma once


enum class EParentalFeature:int
{
	k_EFeatureInvalid = 0x0,
	k_EFeatureStore = 0x1,
	k_EFeatureCommunity = 0x2,
	k_EFeatureProfile = 0x3,
	k_EFeatureFriends = 0x4,
	k_EFeatureNews = 0x5,
	k_EFeatureTrading = 0x6,
	k_EFeatureSettings = 0x7,
	k_EFeatureConsole = 0x8,
	k_EFeatureBrowser = 0x9,
	k_EFeatureParentalSetup = 0xA,
	k_EFeatureLibrary = 0xB,
	k_EFeatureTest = 0xC,
	k_EFeatureSiteLicense = 0xD,
	k_EFeatureMax = 0xE
};