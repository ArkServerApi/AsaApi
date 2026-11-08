#pragma once


enum class EChatRoomEnterResponse:int
{
	k_EChatRoomEnterResponseSuccess = 0x1,
	k_EChatRoomEnterResponseDoesntExist = 0x2,
	k_EChatRoomEnterResponseNotAllowed = 0x3,
	k_EChatRoomEnterResponseFull = 0x4,
	k_EChatRoomEnterResponseError = 0x5,
	k_EChatRoomEnterResponseBanned = 0x6,
	k_EChatRoomEnterResponseLimited = 0x7,
	k_EChatRoomEnterResponseClanDisabled = 0x8,
	k_EChatRoomEnterResponseCommunityBan = 0x9,
	k_EChatRoomEnterResponseMemberBlockedYou = 0xA,
	k_EChatRoomEnterResponseYouBlockedMember = 0xB,
	k_EChatRoomEnterResponseRatelimitExceeded = 0xF
};