#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UCurveBase : public UObject
{
public:
	UCurveBase() = delete;
	~UCurveBase() = delete;
	UCurveBase(const UCurveBase&) = delete;
	UCurveBase& operator=(const UCurveBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCurveBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCurveBase"); }
	void GetValueRange(float& MinValue, float& MaxValue) { NativeCall<void, float&, float&>(this, "UCurveBase.GetValueRange(float&,float&)", MinValue, MaxValue); }
	void ImportFromJSONString(const FString& InString, TArray<FString, TSizedDefaultAllocator<32> >& OutProblems) { NativeCall<void, const FString&, TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UCurveBase.ImportFromJSONString(FString&,TArray<FString,TSizedDefaultAllocator<32>>&)", InString, OutProblems); }
	void GetTimeRange(float& MinTime, float& MaxTime) { NativeCall<void, float&, float&>(this, "UCurveBase.GetTimeRange(float&,float&)", MinTime, MaxTime); }
};
