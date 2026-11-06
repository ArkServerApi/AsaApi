#pragma once


enum class ETwitterIntegrationDelegate:int
{
	TID_AuthorizeComplete = 0x0,
	TID_TweetUIComplete = 0x1,
	TID_RequestComplete = 0x2,
	TID_MAX = 0x3
};