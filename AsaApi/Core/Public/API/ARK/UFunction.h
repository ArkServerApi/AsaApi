#pragma once


struct UFunction : UStruct
{
	unsigned int& FunctionFlagsField() { return *GetNativePointerField<unsigned int*>(this, "UFunction.FunctionFlags"); }
	unsigned __int8& NumParmsField() { return *GetNativePointerField<unsigned __int8*>(this, "UFunction.NumParms"); }
	unsigned __int16& ParmsSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "UFunction.ParmsSize"); }
	unsigned __int16& ReturnValueOffsetField() { return *GetNativePointerField<unsigned __int16*>(this, "UFunction.ReturnValueOffset"); }
	unsigned __int16& RPCIdField() { return *GetNativePointerField<unsigned __int16*>(this, "UFunction.RPCId"); }
	unsigned __int16& RPCResponseIdField() { return *GetNativePointerField<unsigned __int16*>(this, "UFunction.RPCResponseId"); }
	FProperty*& FirstPropertyToInitField() { return *GetNativePointerField<FProperty**>(this, "UFunction.FirstPropertyToInit"); }
	UFunction*& EventGraphFunctionField() { return *GetNativePointerField<UFunction**>(this, "UFunction.EventGraphFunction"); }
	int& EventGraphCallOffsetField() { return *GetNativePointerField<int*>(this, "UFunction.EventGraphCallOffset"); }
	void*& FuncField() { return *GetNativePointerField<void**>(this, "UFunction.Func"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UFunction"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFunction"); }
};