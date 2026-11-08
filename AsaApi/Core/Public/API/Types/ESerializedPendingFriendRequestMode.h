#pragma once


enum class ESerializedPendingFriendRequestMode:unsigned char
{
	OutboundPendingSend = 0x0,
	OutboundPendingReceive = 0x1,
	OutboundPendingResponse = 0x2,
	InboundPendingResponse = 0x3,
	InboundPendingSendAcceptance = 0x4,
	InboundPendingSendRejection = 0x5,
	OutboundPendingSendDeletion = 0x6
};