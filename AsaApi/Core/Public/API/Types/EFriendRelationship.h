#pragma once


enum class EFriendRelationship:int
{
	k_EFriendRelationshipNone = 0x0,
	k_EFriendRelationshipBlocked = 0x1,
	k_EFriendRelationshipRequestRecipient = 0x2,
	k_EFriendRelationshipFriend = 0x3,
	k_EFriendRelationshipRequestInitiator = 0x4,
	k_EFriendRelationshipIgnored = 0x5,
	k_EFriendRelationshipIgnoredFriend = 0x6,
	k_EFriendRelationshipSuggested_DEPRECATED = 0x7,
	k_EFriendRelationshipMax = 0x8
};