#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UMaterialParameterCollection : public UObject
{
public:
	UMaterialParameterCollection() = delete;
	~UMaterialParameterCollection() = delete;
	UMaterialParameterCollection(const UMaterialParameterCollection&) = delete;
	UMaterialParameterCollection& operator=(const UMaterialParameterCollection&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialParameterCollection"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialParameterCollection"); }
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "UMaterialParameterCollection.StateId"); }
	FGuid& BaseStateIdField() { return *GetNativePointerField<FGuid*>(this, "UMaterialParameterCollection.BaseStateId"); }
	FThreadSafeBool& ReleasedByRTField() { return *GetNativePointerField<FThreadSafeBool*>(this, "UMaterialParameterCollection.ReleasedByRT"); }
	FMaterialParameterCollectionInstanceResource*& DefaultResourceField() { return *GetNativePointerField<FMaterialParameterCollectionInstanceResource**>(this, "UMaterialParameterCollection.DefaultResource"); }
	void BeginDestroy() { NativeCall<void>(this, "UMaterialParameterCollection.BeginDestroy()"); }
	FGuid* GetParameterId(FGuid* result, FName ParameterName) { return NativeCall<FGuid*, FGuid*, FName>(this, "UMaterialParameterCollection.GetParameterId(FName)", result, ParameterName); }
	void PostInitProperties() { NativeCall<void>(this, "UMaterialParameterCollection.PostInitProperties()"); }
	void PostLoad() { NativeCall<void>(this, "UMaterialParameterCollection.PostLoad()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMaterialParameterCollection.IsReadyForFinishDestroy()"); }
	UMaterialParameterCollection* GetBaseParameterCollection() { return NativeCall<UMaterialParameterCollection*>(this, "UMaterialParameterCollection.GetBaseParameterCollection()"); }
	void GetParameterNames(TArray<FName, TSizedDefaultAllocator<32> >& OutParameterNames, bool bVectorParameters) { NativeCall<void, TArray<FName, TSizedDefaultAllocator<32> >&, bool>(this, "UMaterialParameterCollection.GetParameterNames(TArray<FName,TSizedDefaultAllocator<32>>&,bool)", OutParameterNames, bVectorParameters); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetVectorParameterNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UMaterialParameterCollection.GetVectorParameterNames()", result); }
	float GetScalarParameterDefaultValue(FName ParameterName, bool& bParameterFound) { return NativeCall<float, FName, bool&>(this, "UMaterialParameterCollection.GetScalarParameterDefaultValue(FName,bool&)", ParameterName, bParameterFound); }
	bool CanBeInCluster() { return NativeCall<bool>(this, "UMaterialParameterCollection.CanBeInCluster()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetScalarParameterNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UMaterialParameterCollection.GetScalarParameterNames()", result); }
	FName GetParameterName(const FGuid& Id) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const FGuid &>(this, "UMaterialParameterCollection.GetParameterName(FGuid&)", AsaReturnPointer, Id); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void FinishDestroy() { NativeCall<void>(this, "UMaterialParameterCollection.FinishDestroy()"); }
	bool UpdateOverrides(UMaterialParameterCollection* BaseCollection) { return NativeCall<bool, UMaterialParameterCollection*>(this, "UMaterialParameterCollection.UpdateOverrides(UMaterialParameterCollection*)", BaseCollection); }
};
