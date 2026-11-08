#pragma once


enum class EMicroTransactionDelegate:int
{
	MTD_PurchaseQueryComplete = 0x0,
	MTD_PurchaseComplete = 0x1,
	MTD_MAX = 0x2
};