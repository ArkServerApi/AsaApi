#pragma once

#define _CRT_SECURE_NO_WARNINGS

#ifndef _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#endif

#ifndef ARK_GAME
#define ARK_GAME
#endif

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport)
#else
#define ARK_API __declspec(dllimport)
#endif

#include "../Base.h"
#include "../Enums.h"
#include "../UE/GenericPlatform/GenericPlatformStricmp.h"
#include "../UE/Math/Vector.h"
#include "../UE/Math/Rotator.h"
//#include "../UE/NetSerialization.h"
#include "../UE/Math/ColorList.h"
#include "UE.h"

#include "ExtensionsDeclaration.h"
//#include "Tribe.h"
#include "Actor.h"
#include "Other.h"
#include "Inventory.h"
#include "GameMode.h"
//#include "GameState.h"
#include "PrimalStructure.h"
#include "Buff.h"
#include "ModParamStructs.h"

#include "../../IApiUtils.h"
#include "../../ICommands.h"
#include "IHooks.h"
#include "Tools.h"
#include "ExtensionsDefinition.h"
