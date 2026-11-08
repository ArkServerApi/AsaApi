#pragma once


enum class EOnlineProxyStoreOfferDiscountType:unsigned char
{
	NotOnSale = 0x0,
	Percentage = 0x1,
	DiscountAmount = 0x2,
	PayAmount = 0x3
};