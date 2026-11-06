#pragma once
#include "BulkForward.h"
#include "APrimalPointNote.h"

struct AMissionServerSidePoint : public APrimalPointNote
{
public:
	AMissionServerSidePoint() = delete;
	~AMissionServerSidePoint() = delete;
	AMissionServerSidePoint(const AMissionServerSidePoint&) = delete;
	AMissionServerSidePoint& operator=(const AMissionServerSidePoint&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMissionServerSidePoint"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMissionServerSidePoint"); }

	FName& TriggerKeyField() { return *GetNativePointerField<FName*>(this, "AMissionServerSidePoint.TriggerKey"); }
	int& TriggerOrderField() { return *GetNativePointerField<int*>(this, "AMissionServerSidePoint.TriggerOrder"); }
	int& CustomDataIntField() { return *GetNativePointerField<int*>(this, "AMissionServerSidePoint.CustomDataInt"); }
	float& CustomDataFloatField() { return *GetNativePointerField<float*>(this, "AMissionServerSidePoint.CustomDataFloat"); }
	TArray<float, TSizedDefaultAllocator<32> >& CustomDataFloatArrayField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "AMissionServerSidePoint.CustomDataFloatArray"); }
	UE::Math::TVector<double>& CustomDataVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AMissionServerSidePoint.CustomDataVector"); }
	FString& CustomDataStringField() { return *GetNativePointerField<FString*>(this, "AMissionServerSidePoint.CustomDataString"); }
	void Destroyed() { NativeCall<void>(this, "AMissionServerSidePoint.Destroyed()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AMissionServerSidePoint.PostInitializeComponents()"); }
	void SetTriggerKey(FName NewTriggerKey) { NativeCall<void, FName>(this, "AMissionServerSidePoint.SetTriggerKey(FName)", NewTriggerKey); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AMissionServerSidePoint.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
