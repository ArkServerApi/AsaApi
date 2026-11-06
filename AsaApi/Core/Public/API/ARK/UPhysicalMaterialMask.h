#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UPhysicalMaterialMask : public UObject
{
public:
	UPhysicalMaterialMask() = delete;
	~UPhysicalMaterialMask() = delete;
	UPhysicalMaterialMask(const UPhysicalMaterialMask&) = delete;
	UPhysicalMaterialMask& operator=(const UPhysicalMaterialMask&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicalMaterialMask"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicalMaterialMask"); }
	int& UVChannelIndexField() { return *GetNativePointerField<int*>(this, "UPhysicalMaterialMask.UVChannelIndex"); }
	void PostLoad() { NativeCall<void>(this, "UPhysicalMaterialMask.PostLoad()"); }
	void FinishDestroy() { NativeCall<void>(this, "UPhysicalMaterialMask.FinishDestroy()"); }
	static unsigned int GetPhysMatIndex(const TArray<unsigned int, TSizedDefaultAllocator<32> >& MaskData, int SizeX, int SizeY, int AddressX, int AddressY, float U, float V) { return NativeCall<unsigned int, const TArray<unsigned int, TSizedDefaultAllocator<32> >&, int, int, int, int, float, float>(nullptr, "UPhysicalMaterialMask.GetPhysMatIndex(TArray<unsignedint,TSizedDefaultAllocator<32>>&,int,int,int,int,float,float)", MaskData, SizeX, SizeY, AddressX, AddressY, U, V); }
	void GenerateMaskData(TArray<unsigned int, TSizedDefaultAllocator<32> >& OutMaskData, int& OutSizeX, int& OutSizeY) { NativeCall<void, TArray<unsigned int, TSizedDefaultAllocator<32> >&, int&, int&>(this, "UPhysicalMaterialMask.GenerateMaskData(TArray<unsignedint,TSizedDefaultAllocator<32>>&,int&,int&)", OutMaskData, OutSizeX, OutSizeY); }
	void PostInitProperties() { NativeCall<void>(this, "UPhysicalMaterialMask.PostInitProperties()"); }
};
