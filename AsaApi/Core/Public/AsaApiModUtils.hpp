#pragma once

#include "API/ARK/Ark.h"

namespace AsaApiModUtils
{
	/*Reference to the singleton actor of the mod*/
	TWeakObjectPtr<AActor> Singleton;

	/**
	* \brief Returns the actor singleton, and loads the weak reference to the singleton actor
	* \return The actor singleton
	*/
	FORCEINLINE AActor* GetSingleton()
	{
		if (!Singleton)
		{
			ACustomActorList* actorList = UVictoryCore::GetCustomActorList(AsaApi::GetApiUtils().GetWorld(), "ApiUtilsCCA");
			if (actorList != nullptr)
				Singleton = GetWeakReference(actorList->ActorListField()[0]);

			if (!Singleton)
			{
				TArray<AActor*> actors;
				UClass* SingletonClass = UVictoryCore::BPLoadClass("Blueprint'/AsaApiUtils/ApiUtilsSingleton.ApiUtilsSingleton'");
				if (SingletonClass != nullptr)
				{
					UGameplayStatics::GetAllActorsOfClass(AsaApi::GetApiUtils().GetWorld(), SingletonClass, &actors);
					Singleton = GetWeakReference(actors[0]);
				}
			}
		}

		return Singleton;
	}

	/**
	* \brief Draw a line in the world for all players to see
	* \param Start The start location of the line
	* \param End The end location of the line
	* \param Color The color of the line
	* \param Duration The duration of the line in seconds
	*/
	FORCEINLINE void DrawDebugLine(FVector Start, FVector End, FLinearColor Color, int Duration)
	{
		DrawDebugLine_Params params;
		params.Start = Start;
		params.End = End;
		params.Color = Color;
		params.Duration = Duration;

		if (GetSingleton() != nullptr)
		{
			Singleton->ProcessEvent(Singleton->FindFunctionChecked(FName("DrawDebugLine")), &params);
		}
	}

	/**
	* \brief Draw a sphere in the world
	* \brief It will be drawn for all players if ForPlayerID is -1, and for all tribes if ForTribeID is -1, otherwise it will only be drawn for the specified player or tribe
	* \brief Duration is in seconds, and set in Actor->SetLifeSpan(Duration)
	* \param Center The center of the sphere
	* \param Radius The radius of the sphere
	* \param ForPlayerID The player ID to draw the sphere for, -1 for all players
	* \param ForTribeID The tribe ID to draw the sphere for, -1 for all tribes
	* \param Color The color of the sphere
	* \param Duration The duration of the sphere in seconds
	* \param drawType The type of sphere to draw
	* \return The sphere actor
	*/
	FORCEINLINE TWeakObjectPtr<AActor> DrawSphere(const DrawDebugSphere_Params& params)
	{
		DrawDebugSphere_Params sentParams = params;

		if (GetSingleton() != nullptr)
		{
			Singleton->ProcessEvent(Singleton->FindFunctionChecked(FName("DrawSphere")), &sentParams);
			return GetWeakReference(sentParams.SphereActor);
		}

		return TWeakObjectPtr<AActor>();
	}

	/**
	* \brief Add a notification to the player's screen or to the chat box
	* \param Text The text to display
	* \param RecipientEOS The player IDs to display the notification to
	* \param BackgroundColor The background color of the notification
	* \param TextColor The text color of the notification
	* \param TextScale The scale of the text
	* \param Duration The duration of the notification in seconds
	* \param TextJustification The justification of the text
	* \param ScreenPosition The position of the notification on the screen
	* \param bAddToChat Whether or not to add the notification to the chat box
	* \return The notification ID
	*/
	FORCEINLINE FString AddNotification(const AsaApiUtilsNotification& notificationParams)
	{
		AddNotification_Params notification;
		notification.Notification = notificationParams;

		if (GetSingleton() != nullptr)
		{
			Singleton->ProcessEvent(Singleton->FindFunctionChecked(FName("AddNotification")), &notification);
			return notification.NotificationId;
		}

		return "";
	}

	/**
	* \brief This is a helper function to get the buff for the player
	* \param Character The character to get the buff for
	* \return The buff for the player
	*/
	FORCEINLINE APrimalBuff_ApiUtils* GetBuffForPlayer(AShooterCharacter* Character)
	{
		if (Character != nullptr)
		{
			TArray<APrimalBuff*> buffs;
			Character->GetBuffs(&buffs);
			for (APrimalBuff* buff : buffs)
			{
				if (buff->CustomTagField().Compare("ApiUtilsModBuff") == 0)
					return static_cast<APrimalBuff_ApiUtils*>(buff);
			}
		}

		return nullptr;
	}

	/**
	* \brief This is a helper function to get the buff for the player
	* \param PC The player controller to get the buff for
	* \return The buff for the player
	*/
	FORCEINLINE APrimalBuff_ApiUtils* GetBuffForPlayer(AShooterPlayerController* PC)
	{
		return GetBuffForPlayer(PC->GetPlayerCharacter());
	}

	/**
	* \brief This is a helper function to get the buff for the player
	* \param PC The player controller to get the buff for
	* \return The buff for the player
	*/
	FORCEINLINE APrimalBuff_ApiUtils* GetBuffForPlayer(APlayerController* PC)
	{
		return GetBuffForPlayer(static_cast<AShooterPlayerController*>(PC));
	}
}