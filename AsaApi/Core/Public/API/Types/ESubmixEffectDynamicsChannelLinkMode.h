#pragma once


enum class ESubmixEffectDynamicsChannelLinkMode:unsigned char
{
	Disabled = 0x0,
	Average = 0x1,
	Peak = 0x2,
	Count = 0x3
};