#pragma once


enum class ETransactionStateEventType:unsigned char
{
	TransactionStarted = 0x0,
	TransactionCanceled = 0x1,
	PreTransactionFinalized = 0x2,
	TransactionFinalized = 0x3,
	PostTransactionFinalized = 0x4,
	UndoRedoStarted = 0x5,
	UndoRedoFinalized = 0x6
};