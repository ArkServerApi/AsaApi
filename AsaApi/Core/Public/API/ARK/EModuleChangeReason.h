#pragma once
#include "../UE/CoreTypes.h"

enum class EModuleChangeReason
{
	/** A module has been loaded and is ready to be used. */
	ModuleLoaded,

	/* A module has been unloaded and should no longer be used. */
	ModuleUnloaded,

	/** The paths controlling which plug-ins are loaded have been changed and the given module has been found, but not yet loaded. */
	PluginDirectoryChanged
};
