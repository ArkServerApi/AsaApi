#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UBlueprintCore.h"

class UBlueprint : public UBlueprintCore
{
public:
	UBlueprint() = delete;
	~UBlueprint() = delete;
	UBlueprint(const UBlueprint&) = delete;
	UBlueprint& operator=(const UBlueprint&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBlueprint"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBlueprint"); }
	int& BlueprintSystemVersionField() { return *GetNativePointerField<int*>(this, "UBlueprint.BlueprintSystemVersion"); }
	BitFieldValue<bool, unsigned char> bRecompileOnLoad() { return { this, "UBlueprint.bRecompileOnLoad"}; }
	BitFieldValue<bool, unsigned char> bHasBeenRegenerated() { return { this, "UBlueprint.bHasBeenRegenerated"}; }
	BitFieldValue<bool, unsigned char> bIsRegeneratingOnLoad() { return { this, "UBlueprint.bIsRegeneratingOnLoad"}; }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UBlueprint.NeedsLoadForClient()"); }
	void GetInstanceActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) { NativeCall<void, FBlueprintActionDatabaseRegistrar&>(this, "UBlueprint.GetInstanceActions(FBlueprintActionDatabaseRegistrar&)", ActionRegistrar); }
	bool ShouldBeMarkedDirtyUponTransaction() { return NativeCall<bool>(this, "UBlueprint.ShouldBeMarkedDirtyUponTransaction()"); }
	bool NeedsLoadForEditorGame() { return NativeCall<bool>(this, "UBlueprint.NeedsLoadForEditorGame()"); }
	bool ShouldAutomaticallyRegisterInputOnConstruction() { return NativeCall<bool>(this, "UBlueprint.ShouldAutomaticallyRegisterInputOnConstruction()"); }
	bool IsValidForBytecodeOnlyRecompile() { return NativeCall<bool>(this, "UBlueprint.IsValidForBytecodeOnlyRecompile()"); }
	bool HasNonEditorOnlyReferences() { return NativeCall<bool>(this, "UBlueprint.HasNonEditorOnlyReferences()"); }
	void GetTypeActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) { NativeCall<void, FBlueprintActionDatabaseRegistrar&>(this, "UBlueprint.GetTypeActions(FBlueprintActionDatabaseRegistrar&)", ActionRegistrar); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UBlueprint.GetDesc()", result); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UBlueprint.NeedsLoadForServer()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UBlueprint.Serialize(FArchive&)", Ar); }
};
