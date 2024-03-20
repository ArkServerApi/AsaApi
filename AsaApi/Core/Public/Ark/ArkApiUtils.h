#pragma once

#include <optional>

#include <API/ARK/Ark.h>
#include <../Private/Ark/Globals.h>
#include "MessagingManager.h"
#include "API/Helpers/Helpers.h"

namespace AsaApi
{
	enum class ServerStatus { Loading, Ready };

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
		static FORCEINLINE FString GetEOSIDFromController(AController* controller)
		{
			FString eos_id = "";
			
			AShooterPlayerController* playerController = static_cast<AShooterPlayerController*>(controller);
			if (playerController != nullptr)
				playerController->GetUniqueNetIdAsString(&eos_id);

			return eos_id;
		}

		/**
		 * \brief Finds player from the given platform name (can be steam, Playstation, Xbox, etc...)
		 * \param steam_name Platform name
		 * \return Pointer to AShooterPlayerController
		 */
		FORCEINLINE AShooterPlayerController* FindPlayerFromPlatformName(const FString& steam_name) const
		{
			AShooterPlayerController* result = nullptr;
			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				const FString current_name = player_controller->PlayerStateField()->PlayerNamePrivateField();
				if (current_name == steam_name)
				{
					auto* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

					result = shooter_pc;
					break;
				}
			}

			return result;
		}

		/**
		* \brief Finds player controller from the given player character
		* \param character Player character
		* \return Pointer to AShooterPlayerController
		*/
		FORCEINLINE AShooterPlayerController* FindControllerFromCharacter(AShooterCharacter* character) const
		{
			AShooterPlayerController* result = nullptr;

			if (character != nullptr && !character->IsDead())
				result = (AShooterPlayerController*)(character->GetOwnerController());

			return result;
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
		static FORCEINLINE FString GetCharacterName(AShooterPlayerController* player_controller)
		{
			if (player_controller != nullptr)
			{
				FString player_name("");
				player_controller->GetPlayerCharacterName(&player_name);
				return player_name;
			}

			return FString("");
		}

		/**
		* \brief Returns the steam name of player
		* \param player_controller Player
		*/
		static FORCEINLINE FString GetSteamName(AController* player_controller)
		{
			return player_controller != nullptr ? player_controller->PlayerStateField()->PlayerNamePrivateField() : "";
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
		 * \param pos Spawn position
		 * \param amount Quantity
		 * \param item_quality Quality
		 * \param force_blueprint Is blueprint
		 * \param life_span Life span
		 * \return Returns true if drop was spawned, false otherwise
		 */
		FORCEINLINE bool SpawnDrop(const wchar_t* blueprint, FVector pos, int amount, float item_quality = 0.0f,
			bool force_blueprint = false, float life_span = 0.0f) const
		{
			APlayerController* player = GetWorld()->GetFirstPlayerController();
			if (!player)
				return false;

			FString bpFstr(blueprint);

			TSubclassOf<UObject> archetype;
			UVictoryCore::StringReferenceToClass(&archetype, &bpFstr);

			UPrimalItem* item = UPrimalItem::AddNewItem(archetype.uClass, nullptr, false, false, item_quality, false, amount, force_blueprint, 0, false, nullptr, 0, 0, 0, true);

			if (!item)
				return false;

			FItemNetInfo* info = AllocateStruct<FItemNetInfo>();

			item->GetItemNetInfo(info, false);

			TSubclassOf<ADroppedItem> archetype_dropped;
			archetype_dropped.uClass = archetype.uClass;

			FVector zero_vector{ 0, 0, 0 };
			FRotator rot{ 0, 0, 0 };

			UPrimalInventoryComponent::StaticDropItem(player, info, archetype_dropped, &rot, true, &pos, &rot, true, false, false, true, nullptr, &zero_vector, nullptr, life_span);

			FreeStruct(info);
			return true;
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
		static FORCEINLINE bool IsRidingDino(AShooterPlayerController* player_controller)
		{
			return player_controller != nullptr && player_controller->GetPlayerCharacter() != nullptr
				&& player_controller->GetPlayerCharacter()->GetRidingDino() != nullptr;
		}

		/**
		* \brief Returns the dino the character is riding
		* \param player_controller Player
		* \return APrimalDinoCharacter*
		*/
		static FORCEINLINE APrimalDinoCharacter* GetRidingDino(AShooterPlayerController* player_controller)
		{
			return player_controller != nullptr && player_controller->GetPlayerCharacter() != nullptr
				? player_controller->GetPlayerCharacter()->GetRidingDino()
				: nullptr;
		}

		/**
		* \brief Returns the position of a player
		* \param player_controller Player
		* \return FVector
		*/
		static FORCEINLINE FVector GetPosition(APlayerController* player_controller)
		{
			return player_controller != nullptr && player_controller->PawnField() != nullptr ? player_controller->PawnField()->RootComponentField()->RelativeLocationField() : FVector{0, 0, 0};
		}

		/**
		* \brief Teleport one player to another
		* \param me Player
		* \param him Other Player
		* \param check_for_dino If set true prevents players teleporting with dino's or teleporting to a player on a dino
		* \param max_dist Is the max distance the characters can be away from each other -1 is disabled
		*/
		static FORCEINLINE std::optional<FString> TeleportToPlayer(AShooterPlayerController* me, AShooterPlayerController* him,
			bool check_for_dino, float max_dist)
		{
			FVector him_position = GetPosition(him);
			if (!(me != nullptr && him != nullptr && me->GetPlayerCharacter() != nullptr && him->
				GetPlayerCharacter()
				!= nullptr
				&& !me->GetPlayerCharacter()->IsDead() && !him->GetPlayerCharacter()->IsDead())
				)
			{
				return "One of players is dead";
			}

			if (check_for_dino && (IsRidingDino(me) || IsRidingDino(him)))
			{
				return "One of players is riding a dino";
			}

			if (max_dist != -1 && FVector::Distance(GetPosition(me), him_position) > max_dist)
			{
				return "Person is too far away";
			}

			if (him_position.IsNearlyZero())
			{
				return "Player location is invalid";
			}

			me->SetPlayerPos((float)him_position.X, (float)him_position.Y, (float)him_position.Z);

			return {};
		}

		/**
		* \brief Teleports player to the given position
		* \param player_controller Player
		* \param pos New position
		*/
		static FORCEINLINE bool TeleportToPos(AShooterPlayerController* player_controller, const FVector& pos)
		{
			if (player_controller != nullptr && !IsPlayerDead(player_controller))
			{				
				player_controller->SetPlayerPos((float)pos.X, (float)pos.Y, (float)pos.Z);
				return true;
			}

			return false;
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
		static FORCEINLINE FString GetIPAddress(AShooterPlayerController* player)
		{
			FString addr;
			if (player)
				player->GetPlayerNetworkAddress(&addr);
			return addr;
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
		static FORCEINLINE bool IsPlayerDead(AShooterPlayerController* player)
		{
			if (player == nullptr || player->GetPlayerCharacter() == nullptr)
			{
				return true;
			}

			return player->GetPlayerCharacter()->IsDead();
		}

		static FORCEINLINE uint64 GetPlayerID(APrimalCharacter* character)
		{
			auto* shooter_character = static_cast<AShooterCharacter*>(character);
			return shooter_character != nullptr && shooter_character->GetPlayerData() != nullptr
				? shooter_character->GetPlayerData()->MyDataField()->PlayerDataIDField()
				: 0;
		}

		static FORCEINLINE uint64 GetPlayerID(AController* controller)
		{
			auto* player = static_cast<AShooterPlayerController*>(controller);
			return player != nullptr ? player->LinkedPlayerIDField() : 0;
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

		/**
		 * \brief Returns blueprint path from any UObject
		 */
		static FORCEINLINE FString GetBlueprint(UObjectBase* object)
		{
			if (object != nullptr && object->ClassPrivateField() != nullptr)
			{
				FString path_name = GetClassBlueprint(object->ClassPrivateField());
				return path_name.Replace(L"Default__", L"", ESearchCase::CaseSensitive);
			}
				
			return FString("");
		}

		/**
		 * \brief Returns blueprint path from any UClass
		 */
		static FORCEINLINE FString GetClassBlueprint(UClass* the_class)
		{
			if (the_class != nullptr)
			{
				FString path;
				auto the_object = UVictoryCore::GetClassDefaultObject(the_class);
				the_object->GetPathName(nullptr, &path);
				if (path.EndsWith("_C"))
					return "Blueprint'" + path.LeftChop(2) + "'";
				else
					return "Blueprint'" + path + "'";
			}

			return FString("");
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

		/**
		* \brief Converts FVector into coords that are displayed when you view the ingame map
		*/
		FORCEINLINE MapCoords FVectorToCoords(FVector actor_position)
		{
			MapCoords coords;
			AWorldSettings* world_settings = GetWorld()->GetWorldSettings(false, true);
			APrimalWorldSettings* p_world_settings = static_cast<APrimalWorldSettings*>(world_settings);			

			float lat_scale = p_world_settings->LatitudeScaleField() != 0 ? p_world_settings->LatitudeScaleField() : 800.0f;
			float lon_scale = p_world_settings->LongitudeScaleField() != 0 ? p_world_settings->LongitudeScaleField() : 800.0f;

			float lat_origin = p_world_settings->LatitudeOriginField() != 0 ? p_world_settings->LatitudeOriginField() : -400000.0f;
			float lon_origin = p_world_settings->LongitudeOriginField() != 0 ? p_world_settings->LongitudeOriginField() : -400000.0f;

			float lat_div = 100.f / lat_scale;
			float lat = (lat_div * (float)actor_position.Y + lat_div * abs(lat_origin)) / 1000.f;

			float lon_div = 100.f / lon_scale;
			float lon = (lon_div * (float)actor_position.X + lon_div * abs(lon_origin)) / 1000.f;

			coords.x = std::floor(lon * 10.0f) / 10.0f;
			coords.y = std::floor(lat * 10.0f) / 10.0f;
			return coords;
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
		void RunHiddenCommand(AShooterPlayerController* _this, FString* Command)
		{
			FString result;
			HideCommand = true;
			_this->ConsoleCommand(&result, Command, false);
			HideCommand = false;
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
