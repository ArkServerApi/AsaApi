// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

// HEADER_UNIT_SKIP - Included through UnrealString.h

#include "Containers/ContainersFwd.h"

/** An argument supplied to FString::Format */
struct FStringFormatArg
{
	enum EType { Int, UInt, Double, String, StringLiteralANSI, StringLiteralWIDE, StringLiteralUCS2, StringLiteralUTF8 };

	/** The type of this arg */
	EType Type;

	/* todo: convert this to a TVariant */
	union
	{
		/** Value as integer */
		int64 IntValue;
		/** Value as uint */
		uint64 UIntValue;
		/** Value as double */
		double DoubleValue;
		/** Value as an ANSI string literal */
		const ANSICHAR* StringLiteralANSIValue;
		/** Value as a WIDE string literal */
		const WIDECHAR* StringLiteralWIDEValue;
		/** Value as a UCS2 string literal */
		const UCS2CHAR* StringLiteralUCS2Value;
		/** Value as a UTF8 string literal */
		const UTF8CHAR* StringLiteralUTF8Value;
	};

	/** Value as an FString */
	FString StringValue;

	FStringFormatArg(const int32 Value) : Type(Int), IntValue(Value) {}
	FStringFormatArg(const uint32 Value) : Type(UInt), UIntValue(Value) {}
	FStringFormatArg(const int64 Value) : Type(Int), IntValue(Value) {}
	FStringFormatArg(const uint64 Value) : Type(UInt), UIntValue(Value) {}
	FStringFormatArg(const float Value) : Type(Double), DoubleValue(Value) {}
	FStringFormatArg(const double Value) : Type(Double), DoubleValue(Value) {}
	FStringFormatArg(FString Value) : Type(String), StringValue(MoveTemp(Value)) {}
	FStringFormatArg(FStringView Value);
	//FStringFormatArg(FStringView Value) : Type(String), StringValue(Value) {}
	FStringFormatArg(const ANSICHAR* Value) : Type(StringLiteralANSI), StringLiteralANSIValue(Value) {}
	FStringFormatArg(const WIDECHAR* Value) : Type(StringLiteralWIDE), StringLiteralWIDEValue(Value) {}
	FStringFormatArg(const UCS2CHAR* Value) : Type(StringLiteralUCS2), StringLiteralUCS2Value(Value) {}
	FStringFormatArg(const UTF8CHAR* Value) : Type(StringLiteralUTF8), StringLiteralUTF8Value(Value) {}

	/** Copyable */
	FStringFormatArg(const FStringFormatArg& RHS)
	{
		NativeCall<void, const FStringFormatArg&>(this, "FStringFormatArg.FStringFormatArg(FStringFormatArg&)", RHS);
	}
	
private:

	/** Not default constructible */
	FStringFormatArg();
};
