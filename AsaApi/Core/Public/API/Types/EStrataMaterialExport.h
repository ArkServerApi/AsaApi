#pragma once


enum class EStrataMaterialExport:unsigned char
{
	SME_None = 0x0,
	SME_Diffuse = 0x1,
	SME_Normal = 0x2,
	SME_Emissive = 0x3,
	SME_Transmittance = 0x4,
	SME_MaterialPreview = 0x5
};