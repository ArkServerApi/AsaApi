// ReSharper disable CppClangTidyCppcoreguidelinesProTypeStaticCastDowncast
#pragma once

#include <optional>

#include <API/ARK/Ark.h>
#include <../Private/Ark/Globals.h>
#include "MessagingManager.h"
#include "API/ARK/ExtensionsDefinition.h"
#include "API/Helpers/Helpers.h"

namespace AsaApi::IApiUtils_Next
{
	FORCEINLINE FString GetSteamName(AController& player_controller)
	{
		if (const auto& player_state = player_controller.PlayerStateField())
			return player_state->PlayerNamePrivateField();
		return "";
	}

	FORCEINLINE FString GetSteamName(AController* player_controller)
	{
		if (!player_controller)
			return "";
		return GetSteamName(*player_controller);
	}
}

namespace AsaApi
{
	enum class ServerStatus { Loading = 0, Ready = 1 };

	struct MapCoords
	{
		float x = 0.f;
		float y = 0.f;
	};

	class ARK_API IApiUtils
	{
	public:
		virtual ~IApiUtils() = default;
		/**
		* \brief Returns a pointer to UWorld
		*/
		virtual UWorld* GetWorld() const = 0;

		/**
		* \brief Returns a pointer to AShooterGameMode
		*/
		virtual AShooterGameMode* GetShooterGameMode() const = 0;

		/**
		* \brief Returns the current server status
		*/
		virtual ServerStatus GetStatus() const = 0;

		/**
		* \brief Returns a point to URCON CheatManager
		*/
		virtual UShooterCheatManager* GetCheatManager() const = 0;
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
			GetMessagingManager()->SendServerMessage(player_controller, msg_color, msg, std::forward<Args>(args)...);
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
			GetMessagingManager()->SendNotification(player_controller, color, display_scale, display_time, icon, msg, std::forward<Args>(args)...);
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
			GetMessagingManager()->SendChatMessage(player_controller, sender_name, msg, std::forward<Args>(args)...);
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
			GetMessagingManager()->SendServerMessageToAll(msg_color, msg, std::forward<Args>(args)...);
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
			GetMessagingManager()->SendNotificationToAll(color, display_scale, display_time, icon, msg, std::forward<Args>(args)...);
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
			GetMessagingManager()->SendChatMessageToAll(sender_name, msg, std::forward<Args>(args)...);
		}

		/**
		 * \brief Returns EOS ID from player controller
		 */
		static FORCEINLINE FString GetEOSIDFromController(AController& controller)
		{
			FString eos_id = "";
			static_cast<AShooterPlayerController&>(controller).GetUniqueNetIdAsString(&eos_id);
			return eos_id;
		}

		/**
		 * \brief Returns EOS ID from player controller
		 */
		static FORCEINLINE FString GetEOSIDFromController(AController* controller)
		{
			if (!controller)
				return "";
			return GetEOSIDFromController(*controller);
		}

		/**
		 * \brief Finds player from the given platform name (can be steam, Playstation, Xbox, etc...)
		 * \param steam_name Platform name
		 * \return Pointer to AShooterPlayerController
		 */
		FORCEINLINE AShooterPlayerController* FindPlayerFromPlatformName(const FString& steam_name) const
		{
			for (const auto& player_controllers = GetWorld()->PlayerControllerListField(); auto player_controller_weak : player_controllers)
			{
				APlayerController* player_controller = player_controller_weak.Get();

				if (!player_controller || !player_controller->PlayerStateField())
					continue;

				if (steam_name == player_controller->PlayerStateField()->PlayerNamePrivateField())
					return static_cast<AShooterPlayerController*>(player_controller);
			}

			return nullptr;
		}

		/**
		* \brief Finds player controller from the given player character
		* \param character Player character
		* \return Pointer to AShooterPlayerController
		*/
		FORCEINLINE AShooterPlayerController* FindControllerFromCharacter(AShooterCharacter& character) const
		{
			if (character.IsDead())
				return nullptr;
			return static_cast<AShooterPlayerController*>(character.GetOwnerController());

		}

		/**
		* \brief Finds player controller from the given player character
		* \param character Player character
		* \return Pointer to AShooterPlayerController
		*/
		FORCEINLINE AShooterPlayerController* FindControllerFromCharacter(AShooterCharacter* character) const
		{
			if (!character)
				return nullptr;
			return FindControllerFromCharacter(*character);
		}

		/**
		* \brief Finds all matching players from the given character name
		* \param character_name Character name
		* \param search Type Defaulted To ESearchCase::Type::IgnoreCase
		* \param full_match Will match the full length of the string if true
		* \return Array of AShooterPlayerController*
		*/
		FORCEINLINE TArray<AShooterPlayerController*> FindPlayerFromCharacterName(const FString& character_name,
			ESearchCase::Type search,
			bool full_match) const
		{
			TArray<AShooterPlayerController*> found_players;
			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				auto* shooter_player = static_cast<AShooterPlayerController*>(player_controller.Get());
				FString char_name = GetCharacterName(shooter_player);

				if (!char_name.IsEmpty() && (full_match
					? char_name.Equals(character_name, search)
					: char_name.StartsWith(character_name, search)))
				{
					found_players.Add(shooter_player);
				}
			}
			return found_players;
		}


		/**
		* \brief Returns the character name of player
		* \param player_controller Player
		*/
		static FORCEINLINE FString GetCharacterName(AShooterPlayerController& player_controller)
		{
			return player_controller.GetPlayerCharacterName();
		}

		/**
		* \brief Returns the character name of player
		* \param player_controller Player
		*/
		static FORCEINLINE FString GetCharacterName(AShooterPlayerController* player_controller)
		{
			if (!player_controller)
				return "";
			return GetCharacterName(*player_controller);
		}

		/**
		* \brief Returns the steam name of player
		* \param player_controller Player
		*/
		static FORCEINLINE FString GetSteamName(AController& player_controller)
		{
			if (const auto& player_state = player_controller.PlayerStateField())
				return player_state->PlayerNamePrivateField();
			return "";
		}

		/**
		* \brief Returns the steam name of player
		* \param player_controller Player
		*/
		static FORCEINLINE FString GetSteamName(AController* player_controller)
		{
			if (!player_controller)
				return "";
			return GetSteamName(*player_controller);
		}

		/**
		 * \brief Finds player from the given eos id
		 * \param eos_id EOS id
		 * \return Pointer to AShooterPlayerController
		 */
		FORCEINLINE AShooterPlayerController* FindPlayerFromEOSID(const FString& eos_id) const
		{
			return FindPlayerFromEOSID_Internal(eos_id);
		}


		/**
		 * \brief Spawns an item drop
		 * \param blueprint Item simplified BP
		 * Example: '/Game/PrimalEarth/CoreBlueprints/Items/Armor/Riot/PrimalItemArmor_RiotPants.PrimalItemArmor_RiotPants_C'
		 * \param position Spawn position
		 * \param amount Quantity
		 * \param item_quality Quality
		 * \param force_blueprint Is blueprint
		 * \param life_span Life span
		 * \return Returns true if drop was spawned, false otherwise
		 */
		FORCEINLINE bool SpawnDrop(const FString& blueprint, const FVector& position, const int amount, const float item_quality = 0.0f, const bool force_blueprint = false, const float life_span = 0.0f) const
		{
			const auto player = GetWorld()->GetFirstPlayerController();
			if (!player)
				return false;

			TSubclassOf<ADroppedItem> item_archetype;
												// This is ugly, we should properly ensure that T is convertible to UObject
			UVictoryCore::StringReferenceToClass(std::bit_cast<TSubclassOf<UObject>*>(&item_archetype), &blueprint);
			UPrimalItem* item = UPrimalItem::AddNewItem(item_archetype.uClass, nullptr, false, false, item_quality, false, amount, force_blueprint, 0, false, nullptr, 0, false, false, true);

			if (!item)
				return false;

			FItemNetInfo info;

			item->GetItemNetInfo(&info, false);

			UPrimalInventoryComponent::StaticDropItem(player, &info, item_archetype, &FRotator::ZeroRotator, true, &position, &FRotator::ZeroRotator, true, false, false, true, nullptr, &FVector::ZeroVector, nullptr, life_span);

			return true;
		}

		/**
		 * \brief Spawns an item drop
		 * \param blueprint Item simplified BP
		 * Example: '/Game/PrimalEarth/CoreBlueprints/Items/Armor/Riot/PrimalItemArmor_RiotPants.PrimalItemArmor_RiotPants_C'
		 * \param pos Spawn position
		 * \param amount Quantity
		 * \param item_quality Quality
		 * \param force_blueprint Is blueprint
		 * \param life_span Life span
		 * \return Returns true if drop was spawned, false otherwise
		 */
		FORCEINLINE bool SpawnDrop(const wchar_t* blueprint, FVector pos, int amount, float item_quality = 0.0f, bool force_blueprint = false, float life_span = 0.0f) const
		{
			return SpawnDrop(FString(blueprint), pos, amount, item_quality, force_blueprint, life_span);
		}



		/**
		 * \brief Spawns a dino near player or at specific coordinates
		 * \param player Player. If null, random player will be chosen. At least one player should be on the map
		 * \param blueprint Blueprint path
		 * \param location Spawn position. If null, dino will be spawned near player
		 * \param lvl Level of the dino
		 * \param force_tame Force tame
		 * \param neutered Neuter dino
		 * \return Spawned dino or null
		 */
		FORCEINLINE APrimalDinoCharacter* SpawnDino(AShooterPlayerController* player, FString blueprint, FVector* location, int lvl,
			bool force_tame, bool neutered) const
		{
			if (player == nullptr)
			{
				player = static_cast<AShooterPlayerController*>(GetWorld()->GetFirstPlayerController());
				if (player == nullptr)
				{
					return nullptr;
				}
			}

			AActor* actor = player->SpawnActor(&blueprint, 100, 0, 0, true);
			if (actor != nullptr && actor->IsA(APrimalDinoCharacter::GetPrivateStaticClass()))
			{
				auto* dino = static_cast<APrimalDinoCharacter*>(actor);

				if (location != nullptr && !location->IsZero())
				{
					FRotator rotation{ 0, 0, 0 };
					dino->TeleportTo(location, &rotation, true, false);
				}

				if (force_tame)
				{
					dino->TamingTeamIDField() = player->TargetingTeamField();

					auto* state = static_cast<AShooterPlayerState*>(player->PlayerStateField().Get());

					FString player_name;
					player->GetPlayerCharacterName(&player_name);

					dino->TamerStringField() = player_name;

					state->SetTribeTamingDinoSettings(dino);

					dino->TameDino(player, true, 0, true, true, false);
				}

				if (neutered)
				{
					dino->DoNeuter_Implementation();
				}

				dino->AbsoluteBaseLevelField() = lvl;

				dino->BeginPlay();

				return dino;
			}
			return nullptr;
		}

		/**
		* \brief Returns true if character is riding a dino, false otherwise
		* \param player_controller Player
		*/
		static FORCEINLINE bool IsRidingDino(AShooterPlayerController& player_controller)
		{
			return !!GetRidingDino(player_controller);
		}

		/**
		* \brief Returns true if character is riding a dino, false otherwise
		* \param player_controller Player
		*/
		static FORCEINLINE bool IsRidingDino(AShooterPlayerController* player_controller)
		{
			if (!player_controller)
				return false;
			return IsRidingDino(*player_controller);
		}

		/**
		* \brief Returns the dino the character is riding
		* \param player_controller AShooterPlayerController&
		* \return APrimalDinoCharacter*
		*/
		static FORCEINLINE APrimalDinoCharacter* GetRidingDino(AShooterPlayerController& player_controller)
		{
			const auto& player_character = player_controller.GetPlayerCharacter();
			return player_character ? player_character->GetRidingDino() : nullptr;
		}

		/**
		* \brief Returns the dino the character is riding
		* \param player_controller AShooterPlayerController*
		* \return APrimalDinoCharacter*
		*/
		static FORCEINLINE APrimalDinoCharacter* GetRidingDino(AShooterPlayerController* player_controller)
		{
			return player_controller ? GetRidingDino(*player_controller) : nullptr;
		}

		/**
		* \brief Returns the position of a player
		* \param player_controller APlayerController&
		* \return FVector
		*/
		static FORCEINLINE FVector GetPosition(APlayerController& player_controller)
		{
			const auto& player_pawn = player_controller.PawnField();
			if (!player_pawn)
				return FVector::ZeroVector;

			return player_pawn->RootComponentField()->RelativeLocationField();
		}

		/**
		* \brief Returns the position of a player
		* \param player_controller APlayerController*
		* \return FVector
		*/
		static FORCEINLINE FVector GetPosition(APlayerController* player_controller)
		{
			if (!player_controller)
				return FVector::ZeroVector;
			return GetPosition(*player_controller);
		}

		static FORCEINLINE bool TeleportToPos(AShooterPlayerController& player_controller, const FVector& position)
		{
			if (IsPlayerDead(player_controller))
				return false;
			player_controller.SetPlayerPos(position.X, position.Y, position.Z);
			return true;
		}

		/**
		* \brief Teleports player to the given position
		* \param player_controller Player
		* \param pos New position
		*/
		static FORCEINLINE bool TeleportToPos(AShooterPlayerController* player_controller, const FVector& pos)
		{
			if (!player_controller)
				return false;

			return TeleportToPos(*player_controller, pos);
		}

		/**
		* \brief Teleport one player to another
		* \param me Player
		* \param him Other Player
		* \param check_for_dino If set true prevents players teleporting with dino's or teleporting to a player on a dino
		* \param max_dist Is the max distance the characters can be away from each other -1 is disabled
		*/
		static FORCEINLINE std::optional<FString> TeleportToPlayer(AShooterPlayerController& source, AShooterPlayerController& destination, bool check_for_dino = false, float max_dist = -1)
		{
			if (IsPlayerDead(source))
				return "Source Player is dead.";

			if (IsPlayerDead(destination))
				return "Destination Player is dead.";

			if (check_for_dino && IsRidingDino(source))
				return "Source Player is riding a dino.";

			if (check_for_dino && IsRidingDino(destination))
				return "Destination Player is riding a dino.";

			const FVector source_position = GetPosition(source);
			const FVector destination_position = GetPosition(destination);

			if (destination_position.IsNearlyZero())
				return "Destination Location is invalid.";

			if (max_dist != -1 && FVector::Distance(source_position, destination_position) > max_dist)
				return "Distance between Players is too great.";

			TeleportToPos(source, destination_position);
			return {};
		}

		/**
		* \brief Teleport one player to another
		* \param me Player
		* \param him Other Player
		* \param check_for_dino If set true prevents players teleporting with dino's or teleporting to a player on a dino
		* \param max_dist Is the max distance the characters can be away from each other -1 is disabled
		*/
		static FORCEINLINE std::optional<FString> TeleportToPlayer(AShooterPlayerController* source, AShooterPlayerController* destination, bool check_for_dino, float max_dist)
		{

			if (!source)
				return "Source Player Controller is null.";

			if (!destination)
				return "Destination Player Controller is null.";
			return TeleportToPlayer(*source, *destination, check_for_dino, max_dist);
		}

		/**
		* \brief Counts a specific items quantity
		* \param player_controller Player
		* \param item_name The name of the item you want to count the quantity of
		 * \return On success, the function returns amount of items player has. Returns -1 if the function has failed.
		 */
		static FORCEINLINE int GetInventoryItemCount(AShooterPlayerController* player_controller, const FString& item_name)
		{
			if (player_controller == nullptr)
			{
				return -1;
			}

			UPrimalInventoryComponent* inventory_component =
				player_controller->GetPlayerCharacter()->MyInventoryComponentField();
			if (inventory_component == nullptr)
			{
				return -1;
			}

			FString name;
			int item_count = 0;

			for (UPrimalItem* item : inventory_component->InventoryItemsField())
			{
				item->GetItemName(&name, true, false, nullptr);

				if (name.Equals(item_name, ESearchCase::IgnoreCase))
				{
					item_count += item->GetItemQuantity();
				}
			}

			return item_count;
		}

		/**
		 * \brief Returns IP address of player
		 */
		static FORCEINLINE FString GetIPAddress(AShooterPlayerController& player)
		{
			FString address {};
			player.GetPlayerNetworkAddress(&address);
			return address;
		}

		/**
		 * \brief Returns IP address of player
		 */
		static FORCEINLINE FString GetIPAddress(AShooterPlayerController* player)
		{
			if (!player)
				return ""; // Should we replace this with a sane legal value, such as 255.255.255.255?
			return GetIPAddress(*player);
		}

		/**
		 * \brief Returns blueprint from UPrimalItem
		 */
		static FORCEINLINE FString GetItemBlueprint(UPrimalItem* item)
		{
			return GetBlueprint(item);
		}

		/**
		 * \brief Returns true if player is dead, false otherwise
		 */
		static FORCEINLINE bool IsPlayerDead(AShooterPlayerController& player)
		{
			const auto player_character = player.GetPlayerCharacter();
			if (!player_character)
				return true;
			return player_character->IsDead();
		}

		/**
		 * \brief Returns true if player is dead, false otherwise
		 */
		static FORCEINLINE bool IsPlayerDead(AShooterPlayerController* player)
		{
			if (!player)
				return true;
			return IsPlayerDead(*player);
		}

		static FORCEINLINE uint64 GetPlayerID(APrimalCharacter* character)
		{
			auto* shooter_character = static_cast<AShooterCharacter*>(character);
			return shooter_character != nullptr && shooter_character->GetPlayerData() != nullptr
				? shooter_character->GetPlayerData()->MyDataField()->PlayerDataIDField()
				: 0;
		}

		static FORCEINLINE uint64 GetPlayerID(AController& controller)
		{
			return static_cast<AShooterPlayerController&>(controller).LinkedPlayerIDField();
		}

		static FORCEINLINE uint64 GetPlayerID(AController* controller)
		{
			if (!controller)
				return 0;
			return GetPlayerID(*controller);
		}

		FORCEINLINE const FString GetEOSIDForPlayerID(int player_id)
		{
			FString eos_id;

			if (player_id == 0)
			{
				return eos_id;
			}

			GetShooterGameMode()->GetSteamIDStringForPlayerID(&eos_id, player_id);
			if (eos_id.IsEmpty())
			{
				const auto& player_controllers = GetWorld()->PlayerControllerListField();
				for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
				{
					auto* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());
					if (shooter_pc != nullptr && shooter_pc->LinkedPlayerIDField() == player_id)
					{
						shooter_pc->GetUniqueNetIdAsString(&eos_id);
						break;
					}
				}

				if (!eos_id.IsEmpty())
				{
					GetShooterGameMode()->AddPlayerID(player_id, &eos_id, false);
				}
			}

			return eos_id;
		}

		static FORCEINLINE FString GetBlueprint(UObjectBase& object)
		{
			const auto class_field = object.ClassPrivateField();
			if (!class_field)
				return "";
			return GetClassBlueprint(class_field).Replace(L"Default__", L"", ESearchCase::CaseSensitive);
		}

		/**
		 * \brief Returns blueprint path from any UObject
		 */
		static FORCEINLINE FString GetBlueprint(UObjectBase* object)
		{
			if (!object)
				return "";
			return GetBlueprint(*object);
		}

		/**
		 * \brief Returns blueprint path from any UClass
		 */
		static FORCEINLINE FString GetClassBlueprint(UClass& the_class)
		{
			FString path;
			UVictoryCore::GetClassDefaultObject(&the_class)->GetPathName(nullptr, &path);

			if (path.EndsWith("_C"))
				path = path.LeftChop(2);

			return "Blueprint'" + path + "'";
		}

		/**
		 * \brief Returns blueprint path from any UClass
		 */
		static FORCEINLINE FString GetClassBlueprint(UClass* the_class)
		{
			if (!the_class)
				return "";
			return GetClassBlueprint(*the_class);
		}

		/**
		* \brief Get Shooter Game State
		*/
		FORCEINLINE AShooterGameState* GetGameState()
		{
			return static_cast<AShooterGameState*>(GetWorld()->GameStateField().Get());
		}

		/**
		* \brief Get UShooterCheatManager* of player controller
		*/
		static FORCEINLINE UShooterCheatManager* GetCheatManagerByPC(AShooterPlayerController* SPC)
		{
			if (!SPC) return nullptr;

			UCheatManager* cheat = SPC->CheatManagerField().Get();

			if (cheat)
			{
				return static_cast<UShooterCheatManager*>(cheat);
			}

			return nullptr;
		}

		/**
		* \brief Get Tribe ID of player controller
		*/
		static FORCEINLINE int GetTribeID(AShooterPlayerController* player_controller)
		{
			int team = 0;

			if (player_controller)
			{
				team = player_controller->TargetingTeamField();
			}

			return team;
		}

		/**
		* \brief Get Tribe ID of character
		*/
		static FORCEINLINE int GetTribeID(AShooterCharacter* player_character)
		{
			int team = 0;

			if (player_character)
			{
				team = player_character->TargetingTeamField();
			}

			return team;
		}

		/**
		* \brief Returns pointer to Primal Game Data
		*/
		FORCEINLINE UPrimalGameData* GetGameData()
		{
			UPrimalGlobals* singleton = static_cast<UPrimalGlobals*>(Globals::GEngine()()->GameSingletonField().Get());
			return (singleton->PrimalGameDataOverrideField() != nullptr) ? singleton->PrimalGameDataOverrideField() : singleton->PrimalGameDataField();
		}

		/**
		* \brief Gets all actors in radius at location
		*/
		FORCEINLINE TArray<AActor*> GetAllActorsInRange(FVector location, float radius, EServerOctreeGroup::Type ActorType)
		{
			TArray<AActor*> out_actors;

			UVictoryCore::ServerOctreeOverlapActors(&out_actors, GetWorld(), &location, radius, ActorType, true);

			return out_actors;
		}

		/**
		* \brief Gets all actors in radius at location, with ignore actors
		*/
		FORCEINLINE TArray<AActor*> GetAllActorsInRange(FVector location, float radius, EServerOctreeGroup::Type ActorType, TArray<AActor*> ignores)
		{
			TArray<AActor*> out_actors;

			UVictoryCore::ServerOctreeOverlapActors(&out_actors, GetWorld(), &location, radius, ActorType, true);

			for (AActor* ignore : ignores)
				out_actors.Remove(ignore);

			return out_actors;
		}

		FORCEINLINE UMinimapData& GetMinimapData() const
		{
			constexpr auto default_path = "Blueprint'/Game/ASA/Minimap/Core/MinimapData_Base.MinimapData_Base'";
			APrimalWorldSettings& world_settings = *static_cast<APrimalWorldSettings*>(GetWorld()->GetWorldSettings(false, true));

			if(world_settings.CurrentMinimapDataField().uClass)
				return *static_cast<UMinimapData*>(world_settings.CurrentMinimapDataField().uClass->GetDefaultObject(true));

			return *static_cast<UMinimapData*>(UVictoryCore::BPLoadClass(default_path)->GetDefaultObject(true));
		}

		FORCEINLINE FMapData& GetMapDataFromMiniMap(UMinimapData& minimap_data, const FVector& reference_point = FVector::ZeroVector) const
		{
			if (minimap_data.MinimapDataField().Num() == 1)
				return *minimap_data.MinimapDataField().GetData();

			for (auto& data : minimap_data.MinimapDataField())
			{
				if (PointIntersectsRectangle(reference_point, data.PlayableMinField(), data.PlayableMaxField()))
					return data;
			}

			throw std::invalid_argument("Unable To Find MapData.");
		}

		/**
		* \brief Converts FVector into coords that are displayed when you view the ingame map
		*/
		FORCEINLINE MapCoords FVectorToCoords(const FVector& position) const
		{
			constexpr auto max = 100.f;
			constexpr auto min = 0.f;

			auto& minimap = GetMinimapData();
			auto& map_data = GetMapDataFromMiniMap(minimap, position);

			const auto& map_min = map_data.OriginMinField();
			const auto& map_max = map_data.OriginMaxField();
			const auto& projected = (map_max - position) / (map_max - map_min);

			return { FMath::Lerp(max, min, projected.X), FMath::Lerp(max, min, projected.Y) };
			
		}

		// N.B., we should use dot projection here as not all rects are axis aligned.
		FORCEINLINE bool PointIntersectsRectangle(const FVector& position, const FVector& start, const FVector& end) const
		{
			return
				start.X < position.X && position.X < end.X &&
				start.Y < position.Y && position.Y < end.Y;
		}

		/**
		* \brief obtains the steam ID of an attacker, meant to be used in hooks such as TakeDamage
		* \param tribe_check if set to true will return NULL if the target is from the same tribe as the attacker
		*/
		FORCEINLINE const FString GetAttackerEOSID(AActor* target, AController* killer, AActor* damage_causer, bool tribe_check = true)
		{
			FString eos_id = "";

			if (target)
			{
				if (killer && !killer->IsLocalController() && killer->IsA(AShooterPlayerController::GetPrivateStaticClass())
					&& (!tribe_check || (tribe_check && target->TargetingTeamField() != killer->TargetingTeamField())))
					eos_id = GetEOSIDFromController(static_cast<AShooterPlayerController*>(killer));
				else if (damage_causer && (!tribe_check || (tribe_check && target->TargetingTeamField() != damage_causer->TargetingTeamField()))
					&& damage_causer->IsA(APrimalStructureExplosive::StaticClass()))
				{
					APrimalStructureExplosive* explosive = static_cast<APrimalStructureExplosive*>(damage_causer);
					eos_id = GetEOSIDForPlayerID(explosive->ConstructorPlayerDataIDField());
				}
			}
			
			return eos_id;
		}

		/**
		* \brief Create a new object of T, with the correct size
		* \tparam T struct type. Must have ScriptStruct defined
		* \return Pointer to T
		*/
		template<class T>
		static FORCEINLINE T* AllocateStruct()
		{
			static int size = GetStructSize<T>();
			T* obj = static_cast<T*>(FMemory::Malloc(size));
			RtlSecureZeroMemory(obj, size);
			return obj;
		}

		/**
		* \brief Free a struct allocated
		* \param obj Pointer to struct
		*/
		static FORCEINLINE void FreeStruct(void* obj)
		{
			FMemory::Free(obj);
		}

		/**
		* \brief Runs a command that is not logged anywhere
		* \param _this Player controller
		* \param Command Command to run
		*/
		void RunHiddenCommand(AShooterPlayerController* _this, const FString* Command) const
		{
			FString result;
			HideCommand = true;
			_this->ConsoleCommand(&result, Command, false);
			HideCommand = false;
		}

		/**
		* \brief Runs a command that is not logged anywhere
		* \param _this Player controller
		* \param Command Command to run
		*/
		void RunHiddenCommand(AShooterPlayerController* _this, const FString& Command) const
		{
			RunHiddenCommand(_this, &Command);
		}

		/**
		* \brief Gets the current messaging manager for the plugin, without casting
		* \return MessagingManager
		*/
		FORCEINLINE std::shared_ptr<MessagingManager> GetMessagingManager() const
		{
			return GetMessagingManagerInternal(GetDllName());
		}

		/**
		* \brief Gets the current messaging manager for the plugin
		* \tparam T MessagingManager type
		* \return MessagingManager as T
		*/
		template <class T>
		FORCEINLINE std::shared_ptr<T> GetMessagingManagerCasted() const
		{
			static_assert(std::is_base_of<MessagingManager, T>::value, "T must inherit from MessagingManager");
			return std::static_pointer_cast<T>(GetMessagingManagerInternal(GetDllName()));
		}

		/**
		* \brief Sets the messaging manager for the current plugin
		* \tparam T MessagingManager type
		*/
		template <class T>
		void SetMessagingManager()
		{
			static_assert(std::is_base_of<MessagingManager, T>::value, "T must inherit from MessagingManager");
			SetMessagingManagerInternal(GetDllName(), std::make_shared<T>());
		}

	private:
		virtual AShooterPlayerController* FindPlayerFromEOSID_Internal(const FString& eos_id) const = 0;
		virtual std::shared_ptr<MessagingManager> GetMessagingManagerInternal(const FString& forPlugin) const = 0;
		virtual void SetMessagingManagerInternal(const FString& forPlugin, std::shared_ptr<MessagingManager> manager) = 0;
	};

	ARK_API IApiUtils& APIENTRY GetApiUtils();
} // namespace AsaApi
