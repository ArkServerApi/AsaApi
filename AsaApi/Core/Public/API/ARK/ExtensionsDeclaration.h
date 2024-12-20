#pragma once

#include "UE.h"
#include <Math/MathFwd.h>
#include <Containers/UnrealString.h>

struct ActorExtensions
{
    /**
    * \brief Returns the forward direction vector (length 1.0) from the actor's point of view.
    * \return The forward direction vector (length 1.0) from the actor's point of view.
    */
    FVector GetActorForwardVector();

    /**
    * \brief Returns if the actor is from SomeBase or a subclass of SomeBase.
    * \param SomeBase The base class to check against.
    * \return true if the actor is from SomeBase or a subclass of SomeBase.
    */
    bool IsA(UClass* SomeBase);

    /**
    * \brief Returns the actor's location in world space.
    * \return The actor's location in world space.
	*/
    FVector GetLocation();
};

struct PlayerControllerExtensions
{
    /**
    * \brief Returns the player's EOS id (platform unique identifier)
    * \return The player's EOS id (platform unique identifier)
	*/
    FString GetEOSId();

    /**
    * \brief Returns the player's character name.
    * \return The player's  character name.
    */
    FString GetCharacterName();

    /**
    * \brief Returns player's tribe name if they are in a tribe. Otherwise returns the empty string.
    * \return The player's tribe name if they are in a tribe. Otherwise returns the empty string.
	*/
    FString GetTribeName();
};