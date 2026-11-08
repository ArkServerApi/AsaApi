#pragma once
#include "Containers/UnrealString.h"
#include "Containers/StringView.h"
#include "CoreTypes.h"
class FName;
class FText;
struct FGuid;

struct FParse
{
    static ARK_API FString * Token(FString * result, const wchar_t * & Str, bool UseEscape);
    static ARK_API bool Token(const wchar_t * & Str, wchar_t * Result, int MaxLen, bool bUseEscape, wchar_t SingleCharacterDelimiter = TEXT ( '\0' ));
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, unsigned int & Value, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Token(const wchar_t * & Str, FString & Arg, bool bUseEscape, wchar_t SingleCharacterDelimiter = TEXT ( '\0' ));
    static ARK_API bool QuotedString(const wchar_t * Buffer, FString & Value, int * OutNumCharsRead = nullptr);
    static ARK_API bool Command(const wchar_t * * Stream, const wchar_t * Match, bool bParseMightTriggerExecution = true);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, wchar_t * Value, int MaxLen, bool bShouldStopOnSeparator = true, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, int & Value, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Line(const wchar_t * * Stream, FString & Result, bool bExact = false);
    static ARK_API bool Line(const wchar_t * * Stream, wchar_t * Result, int MaxLen, bool bExact = false);
    static ARK_API bool Param(const wchar_t * Stream, const wchar_t * Param);
    static ARK_API bool Bool(const wchar_t * Stream, const wchar_t * Match, bool & OnOff, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool AlnumToken(const wchar_t * & Str, FString & Arg);
    static ARK_API bool SchemeNameFromURI(const wchar_t * URI, FString & OutSchemeName);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, double & Value, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Expression(const wchar_t * & Str, FString & OutExpression, bool bUseEscape, wchar_t SingleCharacterDelimiter = TEXT ( '\0' ));
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, float & Value, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, unsigned char & Value, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, unsigned short & Value, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, FName & Name, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, FString & Value, bool bShouldStopOnSeparator = true, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, FText & Value, const wchar_t * Namespace = NULL);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, __int64 & Value, const wchar_t * * OptStreamGotTo = nullptr);
    static ARK_API bool Value(const wchar_t * Stream, const wchar_t * Match, unsigned __int64 & Value, const wchar_t * * OptStreamGotTo = nullptr);
};
