#pragma once
#include "UnrealString.h"
#include "StringConv.h"

class FUtf8String
{
    TArray<UTF8CHAR> Data;
    void Assign(const UTF8CHAR* value, int32 length)
    {
        Data.Empty();
        if (!value || length <= 0) return;
        Data.AddUninitialized(length + 1);
        FMemory::Memcpy(Data.GetData(), value, length);
        Data[length] = static_cast<UTF8CHAR>(0);
    }
public:
    FUtf8String() = default;
    FUtf8String(const FUtf8String&) = default;
    FUtf8String(FUtf8String&&) = default;
    FUtf8String& operator=(const FUtf8String&) = default;
    FUtf8String& operator=(FUtf8String&&) = default;
    FUtf8String(const FString& value)
    {
        FTCHARToUTF8 converted(*value, value.Len());
        Assign(reinterpret_cast<const UTF8CHAR*>(converted.Get()), converted.Length());
    }
    FUtf8String& operator=(const FString& value)
    {
        FUtf8String converted(value);
        *this = MoveTemp(converted);
        return *this;
    }
    int32 Len() const { return Data.Num() ? Data.Num() - 1 : 0; }
    bool IsEmpty() const { return Len() == 0; }
    const UTF8CHAR* GetData() const { return Data.GetData(); }
    UTF8CHAR* GetData() { return Data.GetData(); }
    FString ToWide() const { return IsEmpty() ? FString() : FString(Len(), Data.GetData()); }
    operator FString() const { return ToWide(); }
};
static_assert(sizeof(FUtf8String) == 16);
static_assert(alignof(FUtf8String) == 8);
