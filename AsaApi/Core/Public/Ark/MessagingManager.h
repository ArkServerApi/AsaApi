#pragma once

#include "API/ARK/Ark.h"

/**
* \brief Messaging manager. Allows to send server messages, notifications and chat messages.
* \brief Usage:
* \brief 1. Create a class that inherits from MessagingManager
* \brief 2. Redefine the functions needed. The default implementation is provided in the base class
* \brief 3. Register it with AsaApi::GetApiUtils().SetMessagingManager<YourMessagingManagerClass>();
*/
class ARK_API MessagingManager
{
public:
	/**
	* \brief Sends server message to the specific player. Using fmt::format.
	* \tparam T Either a a char or wchar_t
	* \tparam Args Optional arguments types
	* \param player_controller Player
	* \param msg_color Message color
	* \param msg Message
	* \param args Optional arguments
	*/
	template <typename T, typename... Args>
	FORCEINLINE void SendServerMessage(AShooterPlayerController* player_controller, FLinearColor msg_color, const T* msg, Args&&... args)
	{
		if (!player_controller)
			return;

		FString message = FString::Format(msg, std::forward<Args>(args)...);
		SendServerMessage_Impl(player_controller, msg_color, message);
	}

	/**
		* \brief Sends notification (on-screen message) to the specific player. Using fmt::format.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param player_controller Player
		* \param color Message color
		* \param display_scale Size of text
		* \param display_time Display time
		* \param icon Message icon (optional)
		* \param msg Message
		* \param args Optional arguments
		*/
	template <typename T, typename... Args>
	FORCEINLINE void SendNotification(AShooterPlayerController* player_controller, FLinearColor color, float display_scale,
		float display_time, UTexture2D* icon, const T* msg, Args&&... args)
	{
		if (!player_controller)
			return;

		FString text(FString::Format(msg, std::forward<Args>(args)...));
		SendNotification_Impl(player_controller, color, display_scale, display_time, icon, text);
	}

	/**
	 * \brief Sends chat message to the specific player. Using fmt::format.
	 * \tparam T Either a a char or wchar_t
	 * \tparam Args Optional arguments types
	 * \param player_controller Player
	 * \param sender_name Name of the sender
	 * \param msg Message
	 * \param args Optional arguments
	 */
	template <typename T, typename... Args>
	FORCEINLINE void SendChatMessage(AShooterPlayerController* player_controller, const FString& sender_name, const T* msg,
		Args&&... args)
	{
		if (!player_controller)
			return;

		const FString text(FString::Format(msg, std::forward<Args>(args)...));
		SendChatMessage_Impl(player_controller, sender_name, text);
	}

	/**
	* \brief Sends server message to all players. Using fmt::format.
	* \tparam T Either a a char or wchar_t
	* \tparam Args Optional arguments types
	* \param msg_color Message color
	* \param msg Message
	* \param args Optional arguments
	*/
	template <typename T, typename... Args>
	FORCEINLINE void SendServerMessageToAll(FLinearColor msg_color, const T* msg, Args&&... args)
	{
		FString text(FString::Format(msg, std::forward<Args>(args)...));

		const auto& player_controllers = WorldContext->PlayerControllerListField();
		for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			SendServerMessage_Impl(static_cast<AShooterPlayerController*>(player_controller.Get()), msg_color, text);
	}

	/**
	* \brief Sends notification (on-screen message) to all players. Using fmt::format.
	* \tparam T Either a a char or wchar_t
	* \tparam Args Optional arguments types
	* \param color Message color
	* \param display_scale Size of text
	* \param display_time Display time
	* \param icon Message icon (optional)
	* \param msg Message
	* \param args Optional arguments
	*/
	template <typename T, typename... Args>
	FORCEINLINE void SendNotificationToAll(FLinearColor color, float display_scale,
		float display_time, UTexture2D* icon, const T* msg, Args&&... args)
	{
		FString text(FString::Format(msg, std::forward<Args>(args)...));

		const auto& player_controllers = WorldContext->PlayerControllerListField();
		for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
		{
			AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());
			if (shooter_pc)
				SendNotification_Impl(shooter_pc, color, display_scale, display_time, icon, text);
		}
	}

	/**
	* \brief Sends chat message to all players. Using fmt::format.
	* \tparam T Either a a char or wchar_t
	* \tparam Args Optional arguments types
	* \param sender_name Name of the sender
	* \param msg Message
	* \param args Optional arguments
	*/
	template <typename T, typename... Args>
	FORCEINLINE void SendChatMessageToAll(const FString& sender_name, const T* msg, Args&&... args)
	{
		const FString text(FString::Format(msg, std::forward<Args>(args)...));

		FPrimalChatMessage chat_message;
		chat_message.SenderName = sender_name;
		chat_message.Message = text;

		const auto& player_controllers = WorldContext->PlayerControllerListField();
		for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
		{
			AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());
			if (shooter_pc)
			{
				SendChatMessage_Impl(shooter_pc, sender_name, text);
			}
		}
	}

	/**
	* \brief Returns wether this messaging manager is able to work in the current session.
	* \brief The default one does not depend in any mod or external service so it always returns true.
	* \brief Subclasses should redefine this function if they depend on any external service.
	* \brief If it returns an error, it will be removed and the plugin will fall back to the default API messaging manager.
	* \return Empty optional if no error, or optional filled with error string.
	*/
	virtual std::optional<std::string> MeetsRequirementsToWork()
	{
		return {}; // OK
	}

	// non virtual functions

	/**
	* \brief Sets the world context. This is called by the API automatically.
	* \param world_context World context
	*/
	void SetWorldContext(UWorld* world_context)
	{
		WorldContext = world_context;
	}

protected /*overridable functions*/: // these are to be redefined by the child classes
	// default implementations

	virtual void SendServerMessage_Impl(AShooterPlayerController* player_controller, FLinearColor msg_color, const FString& msg)
	{
		static const FString senderid = "Server";
		player_controller->ClientServerChatDirectMessage(&msg, msg_color, false, &senderid);
	}

	virtual void SendChatMessage_Impl(AShooterPlayerController* player_controller, const FString& sender_name, const FString& msg)
	{
		FPrimalChatMessage chat_message;
		chat_message.SenderName = sender_name;
		chat_message.Message = msg;
		chat_message.UserId = player_controller->GetEOSId();
		player_controller->ClientChatMessage(chat_message);
	}

	virtual void SendNotification_Impl(AShooterPlayerController* player_controller, FLinearColor color, float display_scale,
		float display_time, UTexture2D* icon, const FString& msg)
	{
		player_controller->ClientServerNotification(&msg, color, display_scale, display_time, icon, nullptr, 1);
	}

protected /*variables*/:
	UWorld* WorldContext = nullptr;
};
