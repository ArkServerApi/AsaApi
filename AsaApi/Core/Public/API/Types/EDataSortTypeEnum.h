#pragma once


enum class EDataSortTypeEnum:unsigned char
{
	ChaosNiagara_DataSortType_NoSorting = 0x0,
	ChaosNiagara_DataSortType_RandomShuffle = 0x1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 0x2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 0x3,
	ChaosNiagara_Max = 0x4
};