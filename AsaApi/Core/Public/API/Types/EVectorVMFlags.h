#pragma once


enum class EVectorVMFlags:int
{
	VVMFlag_OptSaveIntermediateState = 0x1,
	VVMFlag_OptOmitStats = 0x2,
	VVMFlag_LargeScript = 0x4,
	VVMFlag_HasRandInstruction = 0x8,
	VVMFlag_DataMapCacheSetup = 0x10,
	VVMFlag_SupportsAVX = 0x20
};