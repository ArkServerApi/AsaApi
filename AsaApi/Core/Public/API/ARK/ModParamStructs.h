#pragma once

/*Enums*/

enum class DrawSphereType : unsigned char
{
	Wireframe,
	TekShield
};

enum class Position : unsigned char
{
	Left,
	Center,
	Right
};

struct DrawDebugLine_Params
{
	/*IN params*/
	FVector Start;
	FVector End;
	FLinearColor Color;
	int Duration;

	DrawDebugLine_Params()
		: Start(FVector(0,0,0))
		, End(FVector(0, 0, 0))
		, Color(FLinearColor(0, 0, 0, 0))
		, Duration(0)
	{
	}

	DrawDebugLine_Params(
		const FVector& Start,
		const FVector& End,
		const FLinearColor& Color,
		const int& Duration
	)
		: Start(Start)
		, End(End)
		, Color(Color)
		, Duration(Duration)
	{
	}
};

struct DrawDebugSphere_Params
{
	/*IN params*/
	FVector Center;
	double Radius;
	int ForPlayerID;
	int ForTribeID;
	FLinearColor Color;
	int Duration;
	DrawSphereType DrawType;
	/*OUT params (return)*/
	AActor* SphereActor;

	DrawDebugSphere_Params(
		const FVector& Center,
		const double& Radius,
		const int& ForPlayerID,
		const int& ForTribeID,
		const FLinearColor& Color,
		const int& Duration,
		const DrawSphereType& DrawType
	)
		: Center(Center)
		, Radius(Radius)
		, ForPlayerID(ForPlayerID)
		, ForTribeID(ForTribeID)
		, Color(Color)
		, Duration(Duration)
		, DrawType(DrawType)
	{
	}
};

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

struct AddNotification_Params
{
	/*IN params*/
	AsaApiUtilsNotification Notification;
	/*OUT params (return)*/
	FString NotificationId;
};

struct APrimalBuff_ApiUtils : APrimalBuff
{
	// Fields

	TArray<AsaApiUtilsNotification>& NotificationsField()
	{
		FProperty* NotificationsProperty = FindProperty("Notifications");
		return NotificationsProperty->Get<TArray<AsaApiUtilsNotification>>(this);
	}

	// Functions

	AsaApiUtilsNotification& GetNotificationForId(const FString& id)
	{
		auto& Notifications = NotificationsField();
		for (auto& Notification : Notifications)
		{
			if (Notification.NotificationId.Equals(id))
			{
				return Notification;
			}
		}

		static AsaApiUtilsNotification EmptyNotification;
		return EmptyNotification;
	}
};