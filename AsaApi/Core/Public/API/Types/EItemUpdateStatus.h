#pragma once


enum class EItemUpdateStatus:int
{
	k_EItemUpdateStatusInvalid = 0x0,
	k_EItemUpdateStatusPreparingConfig = 0x1,
	k_EItemUpdateStatusPreparingContent = 0x2,
	k_EItemUpdateStatusUploadingContent = 0x3,
	k_EItemUpdateStatusUploadingPreviewFile = 0x4,
	k_EItemUpdateStatusCommittingChanges = 0x5
};