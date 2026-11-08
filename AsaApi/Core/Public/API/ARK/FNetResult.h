#pragma once


struct FNetResult
{
	unsigned __int64 Result;
	void* ResultEnumObj;
	const void* RawResultEnumObj;
	FString ErrorContext;
	void* NextResult;
};