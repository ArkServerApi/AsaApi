#pragma once


struct FFrame : FOutputDevice
{
	// Fields

	UFunction*& NodeField() { return *GetNativePointerField<UFunction**>(this, "FFrame.Node"); }
	UObject*& ObjectField() { return *GetNativePointerField<UObject**>(this, "FFrame.Object"); }
	unsigned __int8*& CodeField() { return *GetNativePointerField<unsigned __int8**>(this, "FFrame.Code"); }
	unsigned __int8*& LocalsField() { return *GetNativePointerField<unsigned __int8**>(this, "FFrame.Locals"); }
	FProperty*& MostRecentPropertyField() { return *GetNativePointerField<FProperty**>(this, "FFrame.MostRecentProperty"); }
	unsigned __int8*& MostRecentPropertyAddressField() { return *GetNativePointerField<unsigned __int8**>(this, "FFrame.MostRecentPropertyAddress"); }
	unsigned __int8*& MostRecentPropertyContainerField() { return *GetNativePointerField<unsigned __int8**>(this, "FFrame.MostRecentPropertyContainer"); }
	TArray<unsigned int, TSizedInlineAllocator<8, 32, TSizedDefaultAllocator<32> > >& FlowStackField() { return *GetNativePointerField<TArray<unsigned int, TSizedInlineAllocator<8, 32, TSizedDefaultAllocator<32> > >*>(this, "FFrame.FlowStack"); }
	FFrame*& PreviousFrameField() { return *GetNativePointerField<FFrame**>(this, "FFrame.PreviousFrame"); }
	FOutParmRec*& OutParmsField() { return *GetNativePointerField<FOutParmRec**>(this, "FFrame.OutParms"); }
	FField*& PropertyChainForCompiledInField() { return *GetNativePointerField<FField**>(this, "FFrame.PropertyChainForCompiledIn"); }
	UFunction*& CurrentNativeFunctionField() { return *GetNativePointerField<UFunction**>(this, "FFrame.CurrentNativeFunction"); }
	FFrame*& PreviousTrackingFrameField() { return *GetNativePointerField<FFrame**>(this, "FFrame.PreviousTrackingFrame"); }
	bool& bAbortingExecutionField() { return *GetNativePointerField<bool*>(this, "FFrame.bAbortingExecution"); }

	// Bitfields

	// Functions

	void StepExplicitProperty(void* const Result, FProperty* Property) { NativeCall<void, void* const, FProperty*>(this, "FFrame.StepExplicitProperty(void*const,FProperty*)", Result, Property); }
	static void KismetExecutionMessage(const wchar_t* Message, ELogVerbosity::Type Verbosity, FName WarningId) { NativeCall<void, const wchar_t*, ELogVerbosity::Type, FName>(nullptr, "FFrame.KismetExecutionMessage(wchar_t*,ELogVerbosity::Type,FName)", Message, Verbosity, WarningId); }
	void Serialize(const wchar_t* V, ELogVerbosity::Type Verbosity, const FName* Category) { NativeCall<void, const wchar_t*, ELogVerbosity::Type, const FName*>(this, "FFrame.Serialize(wchar_t*,ELogVerbosity::Type,FName&)", V, Verbosity, Category); }
	// TODO: Might need manual analysis
	FString* GetStackTrace(FString* result) { return NativeCall<FString*, FString*>(this, "FFrame.GetStackTrace()", result); }
	void GetStackTrace(TStringBuilderBase<wchar_t>* Result) { NativeCall<void, TStringBuilderBase<wchar_t>*>(this, "FFrame.GetStackTrace()", Result); }
};