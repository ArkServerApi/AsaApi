#pragma once


enum class EIoDispatcherPriority:unsigned __int64
{
	IoDispatcherPriority_Min = 0x80000000,
	IoDispatcherPriority_Low = 0xC0000000,
	IoDispatcherPriority_Medium = 0x0,
	IoDispatcherPriority_High = 0x3FFFFFFF,
	IoDispatcherPriority_Max = 0x7FFFFFFF
};