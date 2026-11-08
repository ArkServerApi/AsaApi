#pragma once


struct UField : UObject
{
	// Fields

	UField*& NextField() { return *GetNativePointerField<UField**>(this, "UField.Next"); }

	// Bitfields

	// Functions

	UClass* GetOwnerClass() { return NativeCall<UClass*>(this, "UField.GetOwnerClass()"); }
	UStruct* GetOwnerStruct() { return NativeCall<UStruct*>(this, "UField.GetOwnerStruct()"); }
	FString* GetAuthoredName(FString* result) { return NativeCall<FString*, FString*>(this, "UField.GetAuthoredName()", result); }
	void PostLoad() { NativeCall<void>(this, "UField.PostLoad()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UField.Serialize(FArchive&)", Ar); }
	void AddCppProperty(FProperty* Property) { NativeCall<void, FProperty*>(this, "UField.AddCppProperty(FProperty*)", Property); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UField"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UField"); }
};