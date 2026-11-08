#pragma once


enum class CHANNELOPTIONS:int
{
	SupportsReliableDelivery = 0x0,
	TypeOfService = 0x1,
	EnablePacing = 0x2,
	LastChannelOption = 0x32
};