#pragma once


struct FNetExecParams
{
	// Fields

	int& IntParam1Field() { return *GetNativePointerField<int*>(this, "FNetExecParams.IntParam1"); }
	int& IntParam2Field() { return *GetNativePointerField<int*>(this, "FNetExecParams.IntParam2"); }
	float& FloatParam1Field() { return *GetNativePointerField<float*>(this, "FNetExecParams.FloatParam1"); }
	TObjectPtr<UObject>& ObjParam1Field() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FNetExecParams.ObjParam1"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FNetExecParams>(); }
};