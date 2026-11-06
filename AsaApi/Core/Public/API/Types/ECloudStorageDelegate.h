#pragma once


enum class ECloudStorageDelegate:int
{
	CSD_KeyValueReadComplete = 0x0,
	CSD_KeyValueWriteComplete = 0x1,
	CSD_ValueChanged = 0x2,
	CSD_DocumentQueryComplete = 0x3,
	CSD_DocumentReadComplete = 0x4,
	CSD_DocumentWriteComplete = 0x5,
	CSD_DocumentConflictDetected = 0x6,
	CSD_MAX = 0x7
};