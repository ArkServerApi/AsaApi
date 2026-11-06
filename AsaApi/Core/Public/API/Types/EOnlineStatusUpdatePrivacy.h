#pragma once


enum class EOnlineStatusUpdatePrivacy:unsigned char
{
	OnlyMe = 0x0,
	OnlyFriends = 0x1,
	Everyone = 0x2
};