#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalDinoEntry : UObject
{
public:
	UPrimalDinoEntry() = delete;
	~UPrimalDinoEntry() = delete;
	UPrimalDinoEntry(const UPrimalDinoEntry&) = delete;
	UPrimalDinoEntry& operator=(const UPrimalDinoEntry&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDinoEntry"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDinoEntry"); }

	bool& bRequiresKillField() { return *GetNativePointerField<bool*>(this, "UPrimalDinoEntry.bRequiresKill"); }

	UObject* GetObject() { return NativeCall<UObject*>(this, "UPrimalDinoEntry.GetObject()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimalDinoEntry._getUObject()"); }
	UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "UPrimalDinoEntry.GetEntryIcon(UObject*,bool)", AssociatedDataObject, bIsEnabled); }
	UTexture* BPGetDinoEntryIconFromDinoEntry() { return NativeCall<UTexture*>(this, "UPrimalDinoEntry.BPGetDinoEntryIconFromDinoEntry()"); }
	UMaterialInterface* GetEntryIconMaterial(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UMaterialInterface*, UObject*, bool>(this, "UPrimalDinoEntry.GetEntryIconMaterial(UObject*,bool)", AssociatedDataObject, bIsEnabled); }

	UTexture2D*& DinoIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalDinoEntry.DinoIcon"); }
	UMaterialInterface*& DinoMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalDinoEntry.DinoMaterial"); }

	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoEntry.DinoNameTag"); }
	FString& DinoDescriptiveNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoEntry.DinoDescriptiveName"); }
	FString* GetEntryString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalDinoEntry.GetEntryString()", result); }
};
