// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#ifndef WITH_SERVER_CODE
#define WITH_SERVER_CODE 0
#endif
/*----------------------------------------------------------------------------
	Low level includes.
----------------------------------------------------------------------------*/

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport)
#else
#define ARK_API __declspec(dllimport)
#endif

// IWYU pragma: begin_exports
#include "API/UE/HAL/Platform.h"
#include "API/UE/ProfilingDebugging/UMemoryDefines.h"
#include "API/UE/Misc/CoreMiscDefines.h"
#include "API/UE/Misc/CoreDefines.h"
// IWYU pragma: end_exports

