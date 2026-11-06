#pragma once


struct ASwitchActor : AActor
{
	// Fields

	TMulticastDelegate<void __cdecl(int), FDefaultDelegateUserPolicy>& OnSwitchActorSwitchField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(int), FDefaultDelegateUserPolicy>*>(this, "ASwitchActor.OnSwitchActorSwitch"); }
	TObjectPtr<USceneComponent>& SceneComponentField() { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "ASwitchActor.SceneComponent"); }
	int& LastSelectedOptionField() { return *GetNativePointerField<int*>(this, "ASwitchActor.LastSelectedOption"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASwitchActor"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesASwitchActor();
	void SelectOption(int OptionIndex) { NativeCall<void, int>(this, "ASwitchActor.SelectOption(int)", OptionIndex); }
	void PostLoad() { NativeCall<void>(this, "ASwitchActor.PostLoad()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASwitchActor"); }
};