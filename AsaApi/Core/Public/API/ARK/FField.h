#pragma once


struct FField
{
	// Fields

	//FField_vtbl*& __vftableField() { return *GetNativePointerField<FField_vtbl**>(this, "FField.__vftable"); }
	//FFieldClass*& ClassPrivateField() { return *GetNativePointerField<FFieldClass**>(this, "FField.ClassPrivate"); }
	//FFieldVariant& OwnerField() { return *GetNativePointerField<FFieldVariant*>(this, "FField.Owner"); }
	FField*& NextField() { return *GetNativePointerField<FField**>(this, "FField.Next"); }
	FName& NamePrivateField() { return *GetNativePointerField<FName*>(this, "FField.NamePrivate"); }
	EObjectFlags& FlagsPrivateField() { return *GetNativePointerField<EObjectFlags*>(this, "FField.FlagsPrivate"); }

	// Bitfields

	// Functions

	//bool IsA<class FBoolProperty>() { return NativeCall<bool>(this, "FField.IsA<class FBoolProperty>()"); }
	//bool IsA(const FFieldClass* FieldType) { return NativeCall<bool, const FFieldClass*>(this, "FField.IsA(FFieldClass*)", FieldType); }
	//bool IsA<class FDoubleProperty>() { return NativeCall<bool>(this, "FField.IsA<class FDoubleProperty>()"); }
	//bool IsA<class FIntProperty>() { return NativeCall<bool>(this, "FField.IsA<class FIntProperty>()"); }
	UObject* GetOwner() { return NativeCall<UObject*>(this, "FField.GetOwner<UObject>()"); }
	//UClass* GetOwnerClass() { return NativeCall<UClass*>(this, "FField.GetOwner<class UClass>()"); }
	//static FFieldClass* StaticClass() { return NativeCall<FFieldClass*>(nullptr, "FField.StaticClass()"); }
	UClass* GetOwnerClass() { return NativeCall<UClass*>(this, "FField.GetOwnerClass()"); }
	UStruct* GetOwnerStruct() { return NativeCall<UStruct*>(this, "FField.GetOwnerStruct()"); }
	UPackage* GetOutermost() { return NativeCall<UPackage*>(this, "FField.GetOutermost()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FField.Serialize(FArchive&)", Ar); }
	void AddReferencedObjects(FReferenceCollector* Collector) { NativeCall<void, FReferenceCollector*>(this, "FField.AddReferencedObjects(FReferenceCollector&)", Collector); }
	bool IsNative() { return NativeCall<bool>(this, "FField.IsNative()"); }
	FLinkerLoad* GetLinker() { return NativeCall<FLinkerLoad*>(this, "FField.GetLinker()"); }
	void AddCppProperty(FProperty* Property) { NativeCall<void, FProperty*>(this, "FField.AddCppProperty(FProperty*)", Property); }
	FString* GetPathName(FString* result, const UObject* StopOuter) { return NativeCall<FString*, FString*, const UObject*>(this, "FField.GetPathName(UObject*,TStringBuilderBase<wchar_t>&)", result, StopOuter); }
	void GetPathName(const UObject* StopOuter, TStringBuilderBase<wchar_t>* ResultString) { NativeCall<void, const UObject*, TStringBuilderBase<wchar_t>*>(this, "FField.GetPathName(UObject*,TStringBuilderBase<wchar_t>&)", StopOuter, ResultString); }
	FString* GetFullName(FString* result) { return NativeCall<FString*, FString*>(this, "FField.GetFullName()", result); }
	FString* GetAuthoredName(FString* result) { return NativeCall<FString*, FString*>(this, "FField.GetAuthoredName()", result); }
	//static FField* Construct(const FName* FieldTypeName, const FFieldVariant* InOwner, const FName* InName, EObjectFlags InFlags) { return NativeCall<FField*, const FName*, const FFieldVariant*, const FName*, EObjectFlags>(nullptr, "FField.Construct(FName*,FFieldVariant*,FName*,EObjectFlags)", FieldTypeName, InOwner, InName, InFlags); }
};