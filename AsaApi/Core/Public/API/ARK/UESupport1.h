#pragma once
#pragma once

#include <string_view>
#include <type_traits>

#include "../UE/Misc/GeneratedTypeName.h"

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport)
#else
#define ARK_API __declspec(dllimport)
#endif

struct UStruct;
struct UScriptStruct;

template <typename T>
UScriptStruct* FindScriptStruct();