#pragma once

#include "../../IApiUtils.h"

// Actor extensions

FORCEINLINE FVector ActorExtensions::GetActorForwardVector()
{
    AActor* _this = static_cast<AActor*>(this);
    USceneComponent* RootComponent = _this->RootComponentField().Get();
    if (RootComponent)
    {
        return RootComponent->ComponentToWorldField().GetUnitAxis(EAxis::X);
    }

    return FVector::ZeroVector;
}

FORCEINLINE bool ActorExtensions::IsA(UClass* SomeBase)
{
    return static_cast<AActor*>(this)->ClassPrivateField()->IsChildOf(SomeBase);
}

FORCEINLINE FVector ActorExtensions::GetLocation()
{
    AActor* _this = static_cast<AActor*>(this);
    auto* root = _this->RootComponentField().Get();
    if (root)
    {
        UE::Math::TTransform<double> transform = root->ComponentToWorldField();
        return transform.GetLocation();
    }
    return FVector();
}

// Player Controller Extensions

FORCEINLINE FString PlayerControllerExtensions::GetEOSId()
{
    AShooterPlayerController* _this = static_cast<AShooterPlayerController*>(this);
    FString eos_id = "";
    _this->GetUniqueNetIdAsString(&eos_id);
    return eos_id;
}