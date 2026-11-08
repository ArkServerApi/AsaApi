#pragma once


enum class EDataSourceTypeEnum:unsigned char
{
	ChaosNiagara_DataSourceType_Collision = 0x0,
	ChaosNiagara_DataSourceType_Breaking = 0x1,
	ChaosNiagara_DataSourceType_Trailing = 0x2,
	ChaosNiagara_Max = 0x3
};