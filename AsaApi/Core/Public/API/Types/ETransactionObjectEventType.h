#pragma once


enum class ETransactionObjectEventType:unsigned char
{
	UndoRedo = 0x0,
	Finalized = 0x1,
	Snapshot = 0x2
};