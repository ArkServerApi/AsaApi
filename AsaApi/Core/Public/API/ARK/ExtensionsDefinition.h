// ReSharper disable CppInconsistentNaming
#pragma once

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