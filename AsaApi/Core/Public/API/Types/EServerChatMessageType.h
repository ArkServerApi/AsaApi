#pragma once


namespace EServerChatMessageType
{
	enum Type:int
	{
		Chat = 0x0,
		ChatDirect = 0x1,
		HudNotification = 0x2,
		HudNotificationSingle = 0x3,
		Tutorial = 0x4
	};
}