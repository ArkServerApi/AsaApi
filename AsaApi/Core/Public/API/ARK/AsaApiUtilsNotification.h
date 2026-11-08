#pragma once


struct AsaApiUtilsNotification
{
	FString NotificationId; /*leave blank always*/
	FString Text;
	TArray<FString> RecipientEOS;
	FLinearColor BackgroundColor;
	FLinearColor TextColor;
	double DisplayScale;
	double DisplayTime;
	Position TextJustification;
	Position NotificationScreenPosition;
	bool bAddToChat;

	// default constructor
	AsaApiUtilsNotification()
		: NotificationId("")
		, Text("")
		, RecipientEOS(TArray<FString>())
		, BackgroundColor(FLinearColor(0,0,0,0))
		, TextColor(FLinearColor(0, 1, 0, 1))
		, DisplayScale(1.0)
		, DisplayTime(5.0)
		, TextJustification(Position::Center)
		, NotificationScreenPosition(Position::Center)
		, bAddToChat(false)
	{
	}
	
	AsaApiUtilsNotification(
		const FString& Text,
		const TArray<FString>& RecipientEOS,
		const FLinearColor& BackgroundColor,
		const FLinearColor& TextColor,
		const double& DisplayScale,
		const double& DisplayTime,
		const Position& TextJustification,
		const Position& NotificationScreenPosition,
		const bool& bAddToChat
	)
		: NotificationId("")
		, Text(Text)
		, RecipientEOS(RecipientEOS)
		, BackgroundColor(BackgroundColor)
		, TextColor(TextColor)
		, DisplayScale(DisplayScale)
		, DisplayTime(DisplayTime)
		, TextJustification(TextJustification)
		, NotificationScreenPosition(NotificationScreenPosition)
		, bAddToChat(bAddToChat)
	{
	}

	AsaApiUtilsNotification(
		const FString& Notificationid,
		const FString& Text,
		const TArray<FString>& RecipientEOS,
		const FLinearColor& BackgroundColor,
		const FLinearColor& TextColor,
		const double& DisplayScale,
		const double& DisplayTime,
		const Position& TextJustification,
		const Position& NotificationScreenPosition,
		const bool& bAddToChat
	) : AsaApiUtilsNotification(Text, RecipientEOS, BackgroundColor, TextColor, DisplayScale, DisplayTime, TextJustification, NotificationScreenPosition, bAddToChat)
	{
		NotificationId = Notificationid;
	}
};