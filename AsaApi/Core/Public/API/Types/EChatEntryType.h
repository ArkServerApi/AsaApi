#pragma once


enum class EChatEntryType:int
{
	k_EChatEntryTypeInvalid = 0x0,
	k_EChatEntryTypeChatMsg = 0x1,
	k_EChatEntryTypeTyping = 0x2,
	k_EChatEntryTypeInviteGame = 0x3,
	k_EChatEntryTypeEmote = 0x4,
	k_EChatEntryTypeLeftConversation = 0x6,
	k_EChatEntryTypeEntered = 0x7,
	k_EChatEntryTypeWasKicked = 0x8,
	k_EChatEntryTypeWasBanned = 0x9,
	k_EChatEntryTypeDisconnected = 0xA,
	k_EChatEntryTypeHistoricalChat = 0xB,
	k_EChatEntryTypeLinkBlocked = 0xE
};