#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UTextBuffer : public UObject
{
public:
	UTextBuffer() = delete;
	~UTextBuffer() = delete;
	UTextBuffer(const UTextBuffer&) = delete;
	UTextBuffer& operator=(const UTextBuffer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextBuffer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextBuffer"); }
	int& PosField() { return *GetNativePointerField<int*>(this, "UTextBuffer.Pos"); }
	int& TopField() { return *GetNativePointerField<int*>(this, "UTextBuffer.Top"); }
	FString& TextField() { return *GetNativePointerField<FString*>(this, "UTextBuffer.Text"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UTextBuffer.Serialize(FArchive&)", Ar); }
};
