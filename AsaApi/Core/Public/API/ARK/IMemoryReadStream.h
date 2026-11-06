#pragma once


struct IMemoryReadStream
{
	// Fields

	FThreadSafeCounter& NumRefsField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "IMemoryReadStream.NumRefs"); }

	// Bitfields

	// Functions

	void EnsureReadNonBlocking() { NativeCall<void>(this, "IMemoryReadStream.EnsureReadNonBlocking()"); }
	void CopyTo(void* Buffer, long InOffset, long InSize) { NativeCall<void, void*, long, long>(this, "IMemoryReadStream.CopyTo(void*,__int64,__int64)", Buffer, InOffset, InSize); }
};