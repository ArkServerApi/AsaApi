#pragma once

struct UWaveWorksComponent;
struct UWeaponAttackData;
struct UWidget;
struct UWorld;
struct UWorldPartition;
struct FOverlappedFoliageElement;

// Address helpers
ARK_API DWORD64 GetAddress(const void* base, const std::string& name);
ARK_API LPVOID GetAddress(const std::string& name);

ARK_API LPVOID GetDataAddress(const std::string& name);

#include "ClassResolver.h"

ARK_API BitField GetBitField(const void* base, const std::string& name);
ARK_API BitField GetBitField(LPVOID base, const std::string& name);

#define DECLARE_HOOK(name, returnType, ...) typedef returnType(__fastcall * name ## _Func)(__VA_ARGS__); \
inline name ## _Func name ## _original; \
returnType __fastcall Hook_ ## name(__VA_ARGS__)
