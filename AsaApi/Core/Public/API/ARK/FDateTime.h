#pragma once


struct FDateTime
{
	// Fields

	int64 Ticks;
	FDateTime() : Ticks(0) {}
	FDateTime(int64 InTicks) : Ticks(InTicks) {}

	// Bitfields

	// Functions

	double ToUnixTimestampDecimal()const { return NativeCall<double>(this, "FDateTime.ToUnixTimestampDecimal()"); }
	int GetDayOfYear()const { return NativeCall<int>(this, "FDateTime.GetDayOfYear()"); }
	int GetHour12()const { return NativeCall<int>(this, "FDateTime.GetHour12()"); }
	void ToString(const wchar_t* Format, TStringBuilderBase<wchar_t>& Result) { NativeCall<void, const wchar_t*, TStringBuilderBase<wchar_t>&>(this, "FDateTime.ToString(wchar_t*,TStringBuilderBase<wchar_t>&)", Format, Result); }
	FString* ToString(FString* result, const wchar_t* Format) { return NativeCall<FString*, FString*, const wchar_t*>(this, "FDateTime.ToString(wchar_t*)", result, Format); }
	FString* ToString(FString* result) { return NativeCall<FString*, FString*>(this, "FDateTime.ToString()", result); }
	// Current counterpart already declared for: FString ToString()const;
	void ToString(const wchar_t* Format, class TStringBuilderBase<wchar_t>* Result) const { NativeCall<void, const wchar_t*, class TStringBuilderBase<wchar_t>*>(this, "FDateTime.ToString(wchar_t*,TStringBuilderBase<wchar_t>&)", Format, Result); }
	int GetMonth()const { return NativeCall<int>(this, "FDateTime.GetMonth()"); }
	bool ImportTextItem(const wchar_t** Buffer, int PortFlags, struct UObject* Parent, class FOutputDevice* ErrorText) { return NativeCall<bool, const wchar_t**, int, struct UObject*, class FOutputDevice*>(this, "FDateTime.ImportTextItem(wchar_t*&,int,UObject*,FOutputDevice*)", Buffer, PortFlags, Parent, ErrorText); }
	static FDateTime UtcNow() { return NativeCall<FDateTime>(nullptr, "FDateTime.UtcNow()"); }
	static bool Validate(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond) { return NativeCall<bool, int, int, int, int, int, int, int>(nullptr, "FDateTime.Validate(int,int,int,int,int,int,int)", Year, Month, Day, Hour, Minute, Second, Millisecond); }
	//bool NetSerialize(class FArchive* Ar, struct UPackageMap* Map, bool& bOutSuccess) { return NativeCall<bool, class FArchive*, struct UPackageMap*, bool&>(this, "FDateTime.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
	static bool ParseHttpDate(const class FString& HttpDate, struct FDateTime* OutDateTime) { return NativeCall<bool, const class FString&, struct FDateTime*>(nullptr, "FDateTime.ParseHttpDate(FString&,FDateTime&)", HttpDate, OutDateTime); }
	FString* ToIso8601(FString* result) { return NativeCall<FString*, FString*>(this, "FDateTime.ToIso8601()", result); }
	static bool Parse(const class FString& DateTimeString, struct FDateTime* OutDateTime) { return NativeCall<bool, const class FString&, struct FDateTime*>(nullptr, "FDateTime.Parse(FString&,FDateTime&)", DateTimeString, OutDateTime); }
	static bool IsLeapYear(int Year) { return NativeCall<bool, int>(nullptr, "FDateTime.IsLeapYear(int)", Year); }
	bool ExportTextItem(class FString& ValueStr, const struct FDateTime* DefaultValue, struct UObject* Parent, int PortFlags, struct UObject* ExportRootScope) const { return NativeCall<bool, class FString&, const struct FDateTime*, struct UObject*, int, struct UObject*>(this, "FDateTime.ExportTextItem(FString&,FDateTime&,UObject*,int,UObject*)", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	static int DaysInMonth(int Year, int Month) { return NativeCall<int, int, int>(nullptr, "FDateTime.DaysInMonth(int,int)", Year, Month); }
	EDayOfWeek GetDayOfWeek()const { return NativeCall<EDayOfWeek>(this, "FDateTime.GetDayOfWeek()"); }
	int GetYear()const { return NativeCall<int>(this, "FDateTime.GetYear()"); }
	static bool ParseIso8601(const wchar_t* DateTimeString, struct FDateTime* OutDateTime) { return NativeCall<bool, const wchar_t*, struct FDateTime*>(nullptr, "FDateTime.ParseIso8601(wchar_t*,FDateTime&)", DateTimeString, OutDateTime); }
	void GetDate(int& OutYear, int& OutMonth, int& OutDay) const { NativeCall<void, int&, int&, int&>(this, "FDateTime.GetDate(int&,int&,int&)", OutYear, OutMonth, OutDay); }
	bool Serialize(class FArchive* Ar) { return NativeCall<bool, class FArchive*>(this, "FDateTime.Serialize(FArchive&)", Ar); }
	static int DaysInYear(int Year) { return NativeCall<int, int>(nullptr, "FDateTime.DaysInYear(int)", Year); }
	FTimespan operator-(const struct FDateTime* Other) const { return NativeCall<FTimespan, const struct FDateTime*>(this, "FDateTime.operator-(FDateTime&)", Other); }
	__int64 ToUnixTimestamp()const { return NativeCall<__int64>(this, "FDateTime.ToUnixTimestamp()"); }
	static FDateTime Now() { return NativeCall<FDateTime>(nullptr, "FDateTime.Now()"); }
	int GetDay()const { return NativeCall<int>(this, "FDateTime.GetDay()"); }
};
static_assert(sizeof(FDateTime) == 8);
static_assert(alignof(FDateTime) == 8);
