#pragma once


struct FPrimalChatMessage {
	FString SenderName;
	FString SenderSteamName;
	FString SenderTribeName;
	unsigned int SenderId;
	FString Message;
	FString Receiver;
	int SenderTeamIndex;
	long double ReceivedTime;
	TEnumAsByte<enum EChatSendMode::Type> SendMode;
	unsigned int RadioFrequency;
	TEnumAsByte<enum EChatType::Type> ChatType;
	UTexture2D* SenderIcon;
	unsigned __int8 senderPlatform;
	FString UserId;
	unsigned __int8 SenderIsAdmin : 1;
	FPrimalChatMessage()
		: SenderName(""),
		SenderSteamName(""),
		SenderTribeName(""),
		SenderId(0),
		Message(""),
		Receiver(""),
		SenderTeamIndex(0),
		ReceivedTime(0),
		SendMode(EChatSendMode::GlobalChat),
		RadioFrequency(0),
		ChatType(EChatType::GlobalChat),
		SenderIcon(nullptr),
		UserId(""),
		senderPlatform((unsigned char)1)
	{}
	//     FPrimalChatMessage* operator=(FPrimalChatMessage* __that) { return NativeCall<FPrimalChatMessage*, FPrimalChatMessage*>(this, "FPrimalChatMessage.operator=(FPrimalChatMessage&)", __that); }
	// FUNCTION MISSING: FPrimalChatMessage.operator=(FPrimalChatMessage&)
};