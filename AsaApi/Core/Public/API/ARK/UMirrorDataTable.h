#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataTable.h"

class UMirrorDataTable : public UDataTable
{
public:
	UMirrorDataTable() = delete;
	~UMirrorDataTable() = delete;
	UMirrorDataTable(const UMirrorDataTable&) = delete;
	UMirrorDataTable& operator=(const UMirrorDataTable&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMirrorDataTable"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMirrorDataTable"); }
	bool& bMirrorRootMotionField() { return *GetNativePointerField<bool*>(this, "UMirrorDataTable.bMirrorRootMotion"); }
	void FillMirrorArrays() { NativeCall<void>(this, "UMirrorDataTable.FillMirrorArrays()"); }
	void PostLoad() { NativeCall<void>(this, "UMirrorDataTable.PostLoad()"); }
};
