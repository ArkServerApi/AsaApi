#pragma once


struct FFunctionParams_NoArrays
{
	// Fields

	bool& BoolParam1Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam1"); }
	bool& BoolParam2Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam2"); }
	bool& BoolParam3Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam3"); }
	bool& BoolParam4Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam4"); }
	bool& BoolParam5Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam5"); }
	bool& BoolParam6Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam6"); }
	int& IntParam1Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam1"); }
	int& IntParam2Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam2"); }
	int& IntParam3Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam3"); }
	int& IntParam4Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam4"); }
	int& IntParam5Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam5"); }
	float& FloatParam1Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam1"); }
	float& FloatParam2Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam2"); }
	float& FloatParam3Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam3"); }
	float& FloatParam4Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam4"); }
	float& FloatParam5Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam5"); }
	float& FloatParam6Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam6"); }
	FString& StringParam1Field() { return *GetNativePointerField<FString*>(this, "FFunctionParams_NoArrays.StringParam1"); }
	FString& StringParam2Field() { return *GetNativePointerField<FString*>(this, "FFunctionParams_NoArrays.StringParam2"); }
	FString& StringParam3Field() { return *GetNativePointerField<FString*>(this, "FFunctionParams_NoArrays.StringParam3"); }
	FName& NameParam1Field() { return *GetNativePointerField<FName*>(this, "FFunctionParams_NoArrays.NameParam1"); }
	FName& NameParam2Field() { return *GetNativePointerField<FName*>(this, "FFunctionParams_NoArrays.NameParam2"); }
	FName& NameParam3Field() { return *GetNativePointerField<FName*>(this, "FFunctionParams_NoArrays.NameParam3"); }
	UObject*& ObjectParam1Field() { return *GetNativePointerField<UObject**>(this, "FFunctionParams_NoArrays.ObjectParam1"); }
	UObject*& ObjectParam2Field() { return *GetNativePointerField<UObject**>(this, "FFunctionParams_NoArrays.ObjectParam2"); }
	UObject*& ObjectParam3Field() { return *GetNativePointerField<UObject**>(this, "FFunctionParams_NoArrays.ObjectParam3"); }
	TSoftObjectPtr<UObject>& SoftObjectParam1Field() { return *GetNativePointerField<TSoftObjectPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftObjectParam1"); }
	TSoftObjectPtr<UObject>& SoftObjectParam2Field() { return *GetNativePointerField<TSoftObjectPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftObjectParam2"); }
	TSoftObjectPtr<UObject>& SoftObjectParam3Field() { return *GetNativePointerField<TSoftObjectPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftObjectParam3"); }
	UE::Math::TVector<double>& VectorParam1Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam1"); }
	UE::Math::TVector<double>& VectorParam2Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam2"); }
	UE::Math::TVector<double>& VectorParam3Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam3"); }
	UE::Math::TVector<double>& VectorParam4Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam4"); }
	UE::Math::TVector<double>& VectorParam5Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam5"); }
	UE::Math::TVector<double>& VectorParam6Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam6"); }
	UE::Math::TVector<double>& VectorParam7Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam7"); }
	UE::Math::TVector<double>& VectorParam8Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam8"); }
	UE::Math::TVector<double>& VectorParam9Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam9"); }
	UE::Math::TVector<double>& VectorParam10Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam10"); }
	UE::Math::TRotator<double>& RotatorParams1Field() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FFunctionParams_NoArrays.RotatorParams1"); }
	UE::Math::TRotator<double>& RotatorParams2Field() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FFunctionParams_NoArrays.RotatorParams2"); }
	UE::Math::TRotator<double>& RotatorParams3Field() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FFunctionParams_NoArrays.RotatorParams3"); }
	TSubclassOf<UObject>& ClassParam1Field() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "FFunctionParams_NoArrays.ClassParam1"); }
	TSubclassOf<UObject>& ClassParam2Field() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "FFunctionParams_NoArrays.ClassParam2"); }
	TSubclassOf<UObject>& ClassParam3Field() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "FFunctionParams_NoArrays.ClassParam3"); }
	TSoftClassPtr<UObject>& SoftClassParam1Field() { return *GetNativePointerField<TSoftClassPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftClassParam1"); }
	TSoftClassPtr<UObject>& SoftClassParam2Field() { return *GetNativePointerField<TSoftClassPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftClassParam2"); }
	TSoftClassPtr<UObject>& SoftClassParam3Field() { return *GetNativePointerField<TSoftClassPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftClassParam3"); }
	FText& TextParam1Field() { return *GetNativePointerField<FText*>(this, "FFunctionParams_NoArrays.TextParam1"); }
	FText& TextParam2Field() { return *GetNativePointerField<FText*>(this, "FFunctionParams_NoArrays.TextParam2"); }
	FText& TextParam3Field() { return *GetNativePointerField<FText*>(this, "FFunctionParams_NoArrays.TextParam3"); }
	unsigned char& ByteParam1Field() { return *GetNativePointerField<unsigned char*>(this, "FFunctionParams_NoArrays.ByteParam1"); }
	unsigned char& ByteParam2Field() { return *GetNativePointerField<unsigned char*>(this, "FFunctionParams_NoArrays.ByteParam2"); }
	unsigned char& ByteParam3Field() { return *GetNativePointerField<unsigned char*>(this, "FFunctionParams_NoArrays.ByteParam3"); }

	// Bitfields

	// Functions

	FFunctionParams_NoArrays& operator=(FFunctionParams_NoArrays* __that) { return NativeCall<FFunctionParams_NoArrays&, FFunctionParams_NoArrays*>(this, "FFunctionParams_NoArrays.operator=(FFunctionParams_NoArrays&&)", __that); }
	FFunctionParams_NoArrays& operator=(const FFunctionParams_NoArrays* __that) { return NativeCall<FFunctionParams_NoArrays&, const FFunctionParams_NoArrays*>(this, "FFunctionParams_NoArrays.operator=(FFunctionParams_NoArrays&)", __that); }
	void CopyFunctionParams(const FFunctionParams_NoArrays* InParams) { NativeCall<void, const FFunctionParams_NoArrays*>(this, "FFunctionParams_NoArrays.CopyFunctionParams(FFunctionParams_NoArrays&)", InParams); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FFunctionParams_NoArrays>(); }
};