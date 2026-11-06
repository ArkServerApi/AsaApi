#pragma once


enum class EHairInstanceCount:unsigned char
{
	HairInstanceCount_StrandsPrimaryView = 0x0,
	HairInstanceCount_StrandsShadowView = 0x1,
	HairInstanceCount_CardsOrMeshesPrimaryView = 0x2,
	HairInstanceCount_CardsOrMeshesShadowView = 0x3
};