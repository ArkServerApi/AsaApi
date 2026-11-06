#pragma once
#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string>

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport)
#else
#define ARK_API __declspec(dllimport)
#endif

// Forward declarations
struct UClass;
namespace AsaApi
{
    ARK_API UClass* ResolveClass(const char* cppClassName);
}

struct AActor;
struct ABrush;
struct ACharacter;
struct AController;
struct ACustomActorList;
struct ACustomGameMode;
struct ADayCycleManager;
struct ADestroyedMeshActor;
struct ADirectionalLight;
struct ADroppedItem;
struct ADroppedItemEgg;
struct ADroppedItemLowQuality;
struct AEmitter;
struct AGameMode;
struct AGameModeBase;
struct AGameNetworkManager;
struct AGameSession;
struct AGameState;
struct AHibernationManager;
struct AHUD;
struct AInfo;
struct ALevelScriptActor;
struct AMatineeActor;
struct AMatineeActorManager;
struct AMissionDispatcher;
struct AMissionType;
struct ANPCZoneManager;
struct ANPCZoneVolume;
struct AOceanDinoManager;
struct AOceanHarvestManager;
struct AOceanVolume;
struct APawn;
struct APhysicsVolume;
struct APlayerCameraManager;
struct APlayerController;
struct APlayerStart;
struct APlayerState;
