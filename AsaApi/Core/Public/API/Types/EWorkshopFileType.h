#pragma once


enum class EWorkshopFileType:int
{
	k_EWorkshopFileTypeFirst = 0x0,
	k_EWorkshopFileTypeCommunity = 0x0,
	k_EWorkshopFileTypeMicrotransaction = 0x1,
	k_EWorkshopFileTypeCollection = 0x2,
	k_EWorkshopFileTypeArt = 0x3,
	k_EWorkshopFileTypeVideo = 0x4,
	k_EWorkshopFileTypeScreenshot = 0x5,
	k_EWorkshopFileTypeGame = 0x6,
	k_EWorkshopFileTypeSoftware = 0x7,
	k_EWorkshopFileTypeConcept = 0x8,
	k_EWorkshopFileTypeWebGuide = 0x9,
	k_EWorkshopFileTypeIntegratedGuide = 0xA,
	k_EWorkshopFileTypeMerch = 0xB,
	k_EWorkshopFileTypeControllerBinding = 0xC,
	k_EWorkshopFileTypeSteamworksAccessInvite = 0xD,
	k_EWorkshopFileTypeSteamVideo = 0xE,
	k_EWorkshopFileTypeGameManagedItem = 0xF,
	k_EWorkshopFileTypeMax = 0x10
};