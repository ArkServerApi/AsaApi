#pragma once


struct FBPNetExecParams
{
	// Fields

	int& IntParam1Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam1"); }
	int& IntParam2Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam2"); }
	int& IntParam3Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam3"); }
	TArray<int, TSizedDefaultAllocator<32> >& IntArrayParam1Field() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FBPNetExecParams.IntArrayParam1"); }
	float& FloatParam1Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam1"); }
	float& FloatParam2Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam2"); }
	float& FloatParam3Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam3"); }
	TArray<float, TSizedDefaultAllocator<32> >& FloatArrayParam1Field() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FBPNetExecParams.FloatArrayParam1"); }
	TObjectPtr<UObject>& ObjParam1Field() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FBPNetExecParams.ObjParam1"); }
	TObjectPtr<UObject>& ObjParam2Field() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FBPNetExecParams.ObjParam2"); }
	TObjectPtr<UObject>& ObjParam3Field() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FBPNetExecParams.ObjParam3"); }
	FString& StringParam1Field() { return *GetNativePointerField<FString*>(this, "FBPNetExecParams.StringParam1"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FBPNetExecParams>(); }
};