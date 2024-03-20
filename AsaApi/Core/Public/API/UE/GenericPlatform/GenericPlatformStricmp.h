// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreTypes.h"
#include "API/Fields.h"

/**
 * Optimized locale  and CRT independent case-insensitive string comparisons
 *
 * Only considers ASCII character casing, i.e. C locale semantics
 *
 * @return	Zero if strings are equal, greater than zero if first string is
 *			greater than the second one and less than zero otherwise.
 */
struct FGenericPlatformStricmp
{
	ARK_API static int32 Stricmp(const ANSICHAR* String1, const ANSICHAR* String2);
	static int32 Stricmp(const WIDECHAR* String1, const WIDECHAR* String2)
	{
		return NativeCall<int, wchar_t const*, wchar_t const*>(nullptr, "FGenericPlatformStricmp.Stricmp(wchar_t*,wchar_t*)", String1, String2);
	}
	ARK_API static int32 Stricmp(const UTF8CHAR* String1, const UTF8CHAR* String2);
	ARK_API static int32 Stricmp(const UTF16CHAR* String1, const UTF16CHAR* String2);
	ARK_API static int32 Stricmp(const UTF32CHAR* String1, const UTF32CHAR* String2);

	ARK_API static int32 Stricmp(const ANSICHAR* String1, const WIDECHAR* String2);
	ARK_API static int32 Stricmp(const ANSICHAR* String1, const UTF8CHAR* String2);
	ARK_API static int32 Stricmp(const ANSICHAR* String1, const UTF16CHAR* String2);
	ARK_API static int32 Stricmp(const ANSICHAR* String1, const UTF32CHAR* String2);

	static int32 Stricmp(const WIDECHAR* String1, const ANSICHAR* String2)
	{
		return NativeCall<int, wchar_t const*, char const*>(nullptr, "FGenericPlatformStricmp.Stricmp(wchar_t*,char*)", String1, String2);
	}
	ARK_API static int32 Stricmp(const UTF8CHAR* String1, const ANSICHAR* String2);
	ARK_API static int32 Stricmp(const UTF16CHAR* String1, const ANSICHAR* String2);
	ARK_API static int32 Stricmp(const UTF32CHAR* String1, const ANSICHAR* String2);

	ARK_API static int32 Strnicmp(const ANSICHAR* String1, const ANSICHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const WIDECHAR* String1, const WIDECHAR* String2, SIZE_T Count)
	{
		return NativeCall<int, wchar_t const*, wchar_t const*, unsigned __int64>(nullptr, "FGenericPlatformStricmp.Strnicmp(wchar_t*,wchar_t*,unsigned__int64)", String1, String2, Count);
	}
	ARK_API static int32 Strnicmp(const UTF8CHAR* String1, const UTF8CHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const UTF16CHAR* String1, const UTF16CHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const UTF32CHAR* String1, const UTF32CHAR* String2, SIZE_T Count);

	ARK_API static int32 Strnicmp(const ANSICHAR* String1, const WIDECHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const ANSICHAR* String1, const UTF8CHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const ANSICHAR* String1, const UTF16CHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const ANSICHAR* String1, const UTF32CHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const WIDECHAR* String1, const ANSICHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const UTF8CHAR* String1, const ANSICHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const UTF16CHAR* String1, const ANSICHAR* String2, SIZE_T Count);
	ARK_API static int32 Strnicmp(const UTF32CHAR* String1, const ANSICHAR* String2, SIZE_T Count);
};
