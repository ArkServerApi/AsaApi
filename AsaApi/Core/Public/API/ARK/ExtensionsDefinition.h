// ReSharper disable CppInconsistentNaming
#pragma once

#define STRINGIFY(a) #a
#define Name_Persist(name) _Pragma( STRINGIFY( comment(linker, "/Export:AsaApi_" ## name ## "=" __FUNCDNAME__) ))

DLLEXPORT FORCEINLINE FString GetSteamName(AController& player_controller)
{
    Name_Persist("IApiUtils_GetSteamName_0");
    if (const auto& player_state = player_controller.PlayerStateField())
        return player_state->PlayerNamePrivateField();
    return "";
}

// Actor extensions
FORCEINLINE FVector ActorExtensions::GetActorForwardVector()
{
    if (USceneComponent* root_component = std::bit_cast<AActor*>(this)->RootComponentField().Get())
        return root_component->ComponentToWorldField().GetUnitAxis(EAxis::X);
    return FVector::ZeroVector;
}

FORCEINLINE bool ActorExtensions::IsA(const UClass* some_base)
{
    return std::bit_cast<AActor*>(this)->ClassPrivateField()->IsChildOf(some_base);
}

FORCEINLINE FVector ActorExtensions::GetLocation()
{
	if (const auto& root = std::bit_cast<AActor*>(this)->RootComponentField())
        return root->ComponentToWorldField().GetLocation();
    return FVector::ZeroVector;
}

// Player Controller Extensions

FORCEINLINE FString PlayerControllerExtensions::GetEOSId()
{
    FString eos_id = *std::bit_cast<AShooterPlayerController*>(this)->GetUniqueNetIdAsString(&eos_id);
    return eos_id;
}