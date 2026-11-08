#pragma once


enum class ERemoteStoragePublishedFileVisibility:int
{
	k_ERemoteStoragePublishedFileVisibilityPublic = 0x0,
	k_ERemoteStoragePublishedFileVisibilityFriendsOnly = 0x1,
	k_ERemoteStoragePublishedFileVisibilityPrivate = 0x2,
	k_ERemoteStoragePublishedFileVisibilityUnlisted = 0x3
};