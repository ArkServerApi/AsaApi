#pragma once


struct UObjectBase
{
	// Fields

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UObjectBase_vtbl*& __vftableField();
	EObjectFlags& ObjectFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "UObjectBase.ObjectFlags"); }
	int& InternalIndexField() { return *GetNativePointerField<int*>(this, "UObjectBase.InternalIndex"); }
	UClass*& ClassPrivateField() { return *GetNativePointerField<UClass**>(this, "UObjectBase.ClassPrivate"); }
	UClass*& ClassField() { return ClassPrivateField(); }
	FName& NamePrivateField() { return *GetNativePointerField<FName*>(this, "UObjectBase.NamePrivate"); }
	FName& NameField() { return NamePrivateField(); }
	UObject*& OuterPrivateField() { return *GetNativePointerField<UObject**>(this, "UObjectBase.OuterPrivate"); }

	// Bitfields

	// Functions

	//void AtomicallyClearFlags(EObjectFlags FlagsToClear) { NativeCall<void, EObjectFlags>(this, "UObjectBase.AtomicallyClearFlags(EObjectFlags)", FlagsToClear); }
	//void ~UObjectBase() { NativeCall<void>(this, "UObjectBase.~UObjectBase()"); }
	void DeferredRegister(UClass* UClassStaticClass, const wchar_t* PackageName, const wchar_t* InName) { NativeCall<void, UClass*, const wchar_t*, const wchar_t*>(this, "UObjectBase.DeferredRegister(UClass*,wchar_t*,wchar_t*)", UClassStaticClass, PackageName, InName); }
	//void AddObject(FName InName, EInternalObjectFlags InSetInternalFlags, int InInternalIndex, int InSerialNumber) { NativeCall<void, FName, EInternalObjectFlags, int, int>(this, "UObjectBase.AddObject(FName,EInternalObjectFlags,int,int)", InName, InSetInternalFlags, InInternalIndex, InSerialNumber); }
	UPackage* GetExternalPackageInternal() { return NativeCall<UPackage*>(this, "UObjectBase.GetExternalPackageInternal()"); }
	void SetExternalPackage(UPackage* InPackage) { NativeCall<void, UPackage*>(this, "UObjectBase.SetExternalPackage(UPackage*)", InPackage); }
	bool IsValidLowLevel() { return NativeCall<bool>(this, "UObjectBase.IsValidLowLevel()"); }
	bool IsValidLowLevelFast(bool bRecursive) { return NativeCall<bool, bool>(this, "UObjectBase.IsValidLowLevelFast(bool)", bRecursive); }
	void MarkAsReachable() { NativeCall<void>(this, "UObjectBase.MarkAsReachable()"); }
};