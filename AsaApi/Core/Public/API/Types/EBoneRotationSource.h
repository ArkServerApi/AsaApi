#pragma once


enum class EBoneRotationSource:int
{
	BRS_KeepComponentSpaceRotation = 0x0,
	BRS_KeepLocalSpaceRotation = 0x1,
	BRS_CopyFromTarget = 0x2
};