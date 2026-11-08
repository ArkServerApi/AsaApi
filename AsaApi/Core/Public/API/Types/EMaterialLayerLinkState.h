#pragma once


enum class EMaterialLayerLinkState:unsigned char
{
	Uninitialized = 0x0,
	LinkedToParent = 0x1,
	UnlinkedFromParent = 0x2,
	NotFromParent = 0x3
};