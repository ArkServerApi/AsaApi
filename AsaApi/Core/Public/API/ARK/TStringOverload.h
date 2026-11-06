#pragma once
#include "../UE/Containers/Utf8String.h"
#include <type_traits>
#include <utility>

template<typename StringType>
struct TStringOverload
{
    static_assert(std::is_same_v<StringType, FString> || std::is_same_v<StringType, FUtf8String>);
    template<class S = StringType, std::enable_if_t<std::is_same_v<S, FUtf8String>, int> = 0>
    TStringOverload() {}
    TStringOverload(const StringType& Value) : String(Value) {}
    TStringOverload(StringType&& Value) : String(std::move(Value)) {}
    StringType&& MoveTemp() { return std::move(String); }
    StringType String;
};
static_assert(sizeof(TStringOverload<FString>) == 16);
static_assert(sizeof(TStringOverload<FUtf8String>) == 16);
static_assert(offsetof(TStringOverload<FUtf8String>, String) == 0);
