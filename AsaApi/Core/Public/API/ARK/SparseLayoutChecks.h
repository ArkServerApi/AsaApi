#pragma once
#include <type_traits>
static_assert(sizeof(FName) == 8);
static_assert(sizeof(FString) == 16);
static_assert(sizeof(FColor) == 4);
static_assert(sizeof(FLinearColor) == 16);
static_assert(sizeof(FGuid) == 16);
static_assert(sizeof(TSubclassOf<UObject>) == 8);
static_assert(sizeof(TArray<int>) == 16);
