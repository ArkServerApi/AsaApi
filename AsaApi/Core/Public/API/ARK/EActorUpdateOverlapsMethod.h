#pragma once
#include "../UE/CoreTypes.h"

enum class EActorUpdateOverlapsMethod : uint8
{
	// Use the default value specified by the native class or config value.
	UseConfigDefault,
	// Always update overlap state on initialization.
	AlwaysUpdate,
	// Only update if root component has Movable mobility.
	OnlyUpdateMovable,
	// Never update overlap state on initialization.
	NeverUpdate
};
