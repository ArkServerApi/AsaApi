#pragma once


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

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_ApiUtils"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_ApiUtils"); }
};