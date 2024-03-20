// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/ArrayView.h"
#include "Containers/ContainersFwd.h"
#include "Containers/StringFwd.h"
#include "CoreTypes.h"

namespace UE::String
{

/**
 * Convert an array of bytes to a non-null-terminated string of hex digits.
 *
 * @param Bytes Array of bytes to convert.
 * @param OutHex [out] Array of at least 2*Bytes.Len() output characters.
 */
void BytesToHex(TConstArrayView<uint8> Bytes, ANSICHAR* OutHex);
void BytesToHex(TConstArrayView<uint8> Bytes, WIDECHAR* OutHex);
void BytesToHex(TConstArrayView<uint8> Bytes, UTF8CHAR* OutHex);
void BytesToHexLower(TConstArrayView<uint8> Bytes, ANSICHAR* OutHex);
void BytesToHexLower(TConstArrayView<uint8> Bytes, WIDECHAR* OutHex);
void BytesToHexLower(TConstArrayView<uint8> Bytes, UTF8CHAR* OutHex);

/**
 * Append an array of bytes to a string builder as hex digits.
 *
 * @param Bytes Array of bytes to convert.
 * @param Builder Builder to append the converted string to.
 */
void BytesToHex(TConstArrayView<uint8> Bytes, FAnsiStringBuilderBase& Builder);
void BytesToHex(TConstArrayView<uint8> Bytes, FWideStringBuilderBase& Builder);
void BytesToHex(TConstArrayView<uint8> Bytes, FUtf8StringBuilderBase& Builder);
void BytesToHexLower(TConstArrayView<uint8> Bytes, FAnsiStringBuilderBase& Builder);
void BytesToHexLower(TConstArrayView<uint8> Bytes, FWideStringBuilderBase& Builder);
void BytesToHexLower(TConstArrayView<uint8> Bytes, FUtf8StringBuilderBase& Builder);

} // UE::String
