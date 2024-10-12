// ReSharper disable CppInconsistentNaming
#pragma once
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
    * \param some_base The base class to check against.
    * \return true if the actor is from SomeBase or a subclass of SomeBase.
    */
    bool IsA(const UClass* some_base);

    /**
    * \brief Returns the actor's location in world space.
    * \return The actor's location in world space.
	*/
    FVector GetLocation();
};