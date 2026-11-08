#pragma once


struct FProperty : FField
{
	// Fields

	int& ArrayDimField() { return *GetNativePointerField<int*>(this, "FProperty.ArrayDim"); }
	int& ElementSizeField() { return *GetNativePointerField<int*>(this, "FProperty.ElementSize"); }
	EPropertyFlags& PropertyFlagsField() { return *GetNativePointerField<EPropertyFlags*>(this, "FProperty.PropertyFlags"); }
	unsigned __int16& RepIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FProperty.RepIndex"); }
	int& Offset_InternalField() { return *GetNativePointerField<int*>(this, "FProperty.Offset_Internal"); }
	FName& RepNotifyFuncField() { return *GetNativePointerField<FName*>(this, "FProperty.RepNotifyFunc"); }
	FProperty*& PropertyLinkNextField() { return *GetNativePointerField<FProperty**>(this, "FProperty.PropertyLinkNext"); }
	FProperty*& NextRefField() { return *GetNativePointerField<FProperty**>(this, "FProperty.NextRef"); }
	FProperty*& DestructorLinkNextField() { return *GetNativePointerField<FProperty**>(this, "FProperty.DestructorLinkNext"); }
	FProperty*& PostConstructLinkNextField() { return *GetNativePointerField<FProperty**>(this, "FProperty.PostConstructLinkNext"); }

	// Bitfields

	// Functions

	const wchar_t* ImportText_Direct(const wchar_t* Buffer, void* PropertyPtr, UObject* OwnerObject, int PortFlags, FOutputDevice* ErrorText) { return NativeCall<const wchar_t*, const wchar_t*, void*, UObject*, int, FOutputDevice*>(this, "FProperty.ImportText_Direct(wchar_t*,void*,UObject*,int,FOutputDevice*)", Buffer, PropertyPtr, OwnerObject, PortFlags, ErrorText); }
	// 	static void operator delete(void* InMem) { NativeCall<void, void*>(nullptr, "FProperty.operator delete(void*)", InMem); }
	// FUNCTION MISSING: FProperty.operator delete(void*)
	const wchar_t* ImportText_Internal(const wchar_t* Buffer, void* ContainerOrPropertyPtr, EPropertyPointerType PointerType, UObject* OwnerObject, int PortFlags, FOutputDevice* ErrorText) { return NativeCall<const wchar_t*, const wchar_t*, void*, EPropertyPointerType, UObject*, int, FOutputDevice*>(this, "FProperty.ImportText_Internal(wchar_t*,void*,EPropertyPointerType,UObject*,int,FOutputDevice*)", Buffer, ContainerOrPropertyPtr, PointerType, OwnerObject, PortFlags, ErrorText); }
	FString* GetCPPType(FString* result, FString* ExtendedTypeText, unsigned int CPPExportFlags) { return NativeCall<FString*, FString*, FString*, unsigned int>(this, "FProperty.GetCPPType(FString*,unsignedint)", result, ExtendedTypeText, CPPExportFlags); }
	bool Identical(const void* A, const void* B, unsigned int PortFlags) { return NativeCall<bool, const void*, const void*, unsigned int>(this, "FProperty.Identical(void*,void*,unsignedint)", A, B, PortFlags); }
	void SerializeItem(FStructuredArchiveSlot Slot, void* Value, const void* Defaults) { NativeCall<void, FStructuredArchiveSlot, void*, const void*>(this, "FProperty.SerializeItem(FStructuredArchiveSlot,void*,void*)", Slot, Value, Defaults); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FString* GetCPPTypeForwardDeclaration(FString* result);
	void ExportText_Internal(FString* ValueStr, const void* PropertyValueOrContainer, EPropertyPointerType PointerType, const void* DefaultValue, UObject* Parent, int PortFlags, UObject* ExportRootScope) { NativeCall<void, FString*, const void*, EPropertyPointerType, const void*, UObject*, int, UObject*>(this, "FProperty.ExportText_Internal(FString&,void*,EPropertyPointerType,void*,UObject*,int,UObject*)", ValueStr, PropertyValueOrContainer, PointerType, DefaultValue, Parent, PortFlags, ExportRootScope); }
	// 	void ExportTextItem(FString* ValueStr, const void* PropertyValue, const void* DefaultValue, UObject* Parent, int PortFlags, UObject* ExportRootScope) { NativeCall<void, FString*, const void*, const void*, UObject*, int, UObject*>(this, "FProperty.ExportTextItem(FString&,void*,void*,UObject*,int,UObject*)", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	// FUNCTION MISSING: FProperty.ExportTextItem(FString&,void*,void*,UObject*,int,UObject*)
	// 	const wchar_t* ImportText(const wchar_t* Buffer, void* Data, int PortFlags, UObject* OwnerObject, FOutputDevice* ErrorText) { return NativeCall<const wchar_t*, const wchar_t*, void*, int, UObject*, FOutputDevice*>(this, "FProperty.ImportText(wchar_t*,void*,int,UObject*,FOutputDevice*)", Buffer, Data, PortFlags, OwnerObject, ErrorText); }
	// FUNCTION MISSING: FProperty.ImportText(wchar_t*,void*,int,UObject*,FOutputDevice*)
	void SerializeBinProperty(FStructuredArchiveSlot Slot, void* Data, int ArrayIdx) { NativeCall<void, FStructuredArchiveSlot, void*, int>(this, "FProperty.SerializeBinProperty(FStructuredArchiveSlot,void*,int)", Slot, Data, ArrayIdx); }
	// 	int Link(FArchive* Ar) { return NativeCall<int, FArchive*>(this, "FProperty.Link(FArchive*)", Ar); }
	// FUNCTION MISSING: FProperty.Link(FArchive*)
	const wchar_t* ImportText_InContainer(const wchar_t* Buffer, void* Container, UObject* OwnerObject, int PortFlags, FOutputDevice* ErrorText) { return NativeCall<const wchar_t*, const wchar_t*, void*, UObject*, int, FOutputDevice*>(this, "FProperty.ImportText_InContainer(wchar_t*,void*,UObject*,int,FOutputDevice*)", Buffer, Container, OwnerObject, PortFlags, ErrorText); }
	//static FField* Construct(const FFieldVariant* InOwner, const FName* InName, EObjectFlags InFlags) { return NativeCall<FField*, const FFieldVariant*, const FName*, EObjectFlags>(nullptr, "FProperty.Construct(FFieldVariant*,FName*,EObjectFlags)", InOwner, InName, InFlags); }
	//static FFieldClass* StaticClass() { return NativeCall<FFieldClass*>(nullptr, "FProperty.StaticClass()"); }
	//static void FProperty() { NativeCall<void>(nullptr, "FProperty.FProperty()"); }
	//static void FProperty() { NativeCall<void>(nullptr, "FProperty.FProperty()"); }
	void Init() { NativeCall<void>(this, "FProperty.Init()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FProperty.Serialize(FArchive&)", Ar); }
	void PostDuplicate(const FField* InField) { NativeCall<void, const FField*>(this, "FProperty.PostDuplicate(FField&)", InField); }
	void CopyCompleteValueFromScriptVM(void* Dest, const void* Src) { NativeCall<void, void*, const void*>(this, "FProperty.CopyCompleteValueFromScriptVM(void*,void*)", Dest, Src); }
	void CopyCompleteValueToScriptVM_InContainer(void* OutValue, const void* InContainer) { NativeCall<void, void*, const void*>(this, "FProperty.CopyCompleteValueToScriptVM_InContainer(void*,void*)", OutValue, InContainer); }
	void CopyCompleteValueFromScriptVM_InContainer(void* OutContainer, const void* InValue) { NativeCall<void, void*, const void*>(this, "FProperty.CopyCompleteValueFromScriptVM_InContainer(void*,void*)", OutContainer, InValue); }
	bool ValidateImportFlags(unsigned int PortFlags, FOutputDevice* ErrorHandler) { return NativeCall<bool, unsigned int, FOutputDevice*>(this, "FProperty.ValidateImportFlags(unsignedint,FOutputDevice*)", PortFlags, ErrorHandler); }
	FString* GetNameCPP(FString* result) { return NativeCall<FString*, FString*>(this, "FProperty.GetNameCPP()", result); }
	FString* GetCPPMacroType(FString* result, FString* ExtendedTypeText) { return NativeCall<FString*, FString*, FString*>(this, "FProperty.GetCPPMacroType(FString&)", result, ExtendedTypeText); }
	bool ExportText_Direct(FString* ValueStr, const void* Data, const void* Delta, UObject* Parent, int PortFlags, UObject* ExportRootScope) { return NativeCall<bool, FString*, const void*, const void*, UObject*, int, UObject*>(this, "FProperty.ExportText_Direct(FString&,void*,void*,UObject*,int,UObject*)", ValueStr, Data, Delta, Parent, PortFlags, ExportRootScope); }
	bool ShouldSerializeValue(FArchive* Ar) { return NativeCall<bool, FArchive*>(this, "FProperty.ShouldSerializeValue(FArchive&)", Ar); }
	bool NetSerializeItem(FArchive* Ar, UPackageMap* Map, void* Data, TArray<unsigned char, TSizedDefaultAllocator<32> >* MetaData) { return NativeCall<bool, FArchive*, UPackageMap*, void*, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FProperty.NetSerializeItem(FArchive&,UPackageMap*,void*,TArray<unsignedchar,TSizedDefaultAllocator<32>>*)", Ar, Map, Data, MetaData); }
	bool ShouldPort(unsigned int PortFlags) { return NativeCall<bool, unsigned int>(this, "FProperty.ShouldPort(unsignedint)", PortFlags); }
	FName* GetID(FName* result) { return NativeCall<FName*, FName*>(this, "FProperty.GetID()", result); }
	bool SameType(const FProperty* Other) { return NativeCall<bool, const FProperty*>(this, "FProperty.SameType(FProperty*)", Other); }
	void* AllocateAndInitializeValue() { return NativeCall<void*>(this, "FProperty.AllocateAndInitializeValue()"); }
	void DestroyAndFreeValue(void* InMemory) { NativeCall<void, void*>(this, "FProperty.DestroyAndFreeValue(void*)", InMemory); }
	void* GetValueAddressAtIndex_Direct(const FProperty* Inner, void* InValueAddress, int Index) { return NativeCall<void*, const FProperty*, void*, int>(this, "FProperty.GetValueAddressAtIndex_Direct(FProperty*,void*,int)", Inner, InValueAddress, Index); }
	//static const wchar_t* ImportSingleProperty(const wchar_t* Str, void* DestData, UStruct* ObjectStruct, UObject* SubobjectOuter, int PortFlags, FOutputDevice* Warn, TArray<FDefinedProperty, TSizedDefaultAllocator<32> >* DefinedProperties) { return NativeCall<const wchar_t*, const wchar_t*, void*, UStruct*, UObject*, int, FOutputDevice*, TArray<FDefinedProperty, TSizedDefaultAllocator<32> >*>(nullptr, "FProperty.ImportSingleProperty(wchar_t*,void*,UStruct*,UObject*,int,FOutputDevice*,TArray<FDefinedProperty,TSizedDefaultAllocator<32>>*)", Str, DestData, ObjectStruct, SubobjectOuter, PortFlags, Warn, DefinedProperties); }
	static FName* FindRedirectedPropertyName(FName* result, UStruct* ObjectStruct, FName OldName) { return NativeCall<FName*, FName*, UStruct*, FName>(nullptr, "FProperty.FindRedirectedPropertyName(UStruct*,FName)", result, ObjectStruct, OldName); }

	template<typename T>
	T& Get(UObject* object)
	{
		if (!object->ClassPrivateField()->HasProperty(this))
			throw std::invalid_argument("Object does not contain this property.");
		if (sizeof(T) != this->ElementSizeField())
			throw std::invalid_argument(this->NamePrivateField().ToString().ToString() + " - " + "Expected size does not match property size.");
		return *((T*)(object + this->Offset_InternalField()));
	}

	template<typename T>
	void Set(UObject* object, T value)
	{
		if (!object->ClassPrivateField()->HasProperty(this))
			throw std::invalid_argument("Object does not contain this property.");
		if (sizeof(T) != this->ElementSizeField())
			throw std::invalid_argument(this->NamePrivateField().ToString().ToString() + " - " + "Expected size does not match property size.");
		*((T*)(object + this->Offset_InternalField())) = value;
	}
};