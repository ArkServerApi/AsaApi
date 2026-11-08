#pragma once


enum class ERemoteStorageLocalFileChange:int
{
	k_ERemoteStorageLocalFileChange_Invalid = 0x0,
	k_ERemoteStorageLocalFileChange_FileUpdated = 0x1,
	k_ERemoteStorageLocalFileChange_FileDeleted = 0x2
};