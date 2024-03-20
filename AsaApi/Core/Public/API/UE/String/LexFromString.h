// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreTypes.h"
#include "Containers/StringFwd.h"

void LexFromString(int8& OutValue,   const FStringView& InString);
void LexFromString(int16& OutValue,  const FStringView& InString);
void LexFromString(int32& OutValue,  const FStringView& InString);
void LexFromString(int64& OutValue,  const FStringView& InString);
void LexFromString(uint8& OutValue,  const FStringView& InString);
void LexFromString(uint16& OutValue, const FStringView& InString);
void LexFromString(uint32& OutValue, const FStringView& InString);
void LexFromString(uint64& OutValue, const FStringView& InString);
void LexFromString(float& OutValue,  const FStringView& InString);
void LexFromString(double& OutValue, const FStringView& InString);
void LexFromString(bool& OutValue,   const FStringView& InString);
