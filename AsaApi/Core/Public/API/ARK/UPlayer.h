#pragma once


struct UPlayer : UObject {
	TObjectPtr<APlayerController>& PlayerControllerField() { return *GetNativePointerField<TObjectPtr<APlayerController>*>(this, "UPlayer.PlayerController"); }
	// int CurrentNetSpeed;
	// int ConfiguredInternetSpeed;
	// int ConfiguredLanSpeed;
	// unsigned __int64 TransferringPlayerDataId;

	FString* ConsoleCommand(FString* result, const FString* Cmd, bool bWriteToLog) { return NativeCall<FString*, FString*, const FString*, bool>(this, "UPlayer.ConsoleCommand(FString&,bool)", result, Cmd, bWriteToLog); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPlayer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPlayer"); }
};