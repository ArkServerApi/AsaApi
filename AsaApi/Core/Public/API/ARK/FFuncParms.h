#pragma once


struct FFuncParms
{
	// Fields

	UFunction*& FuncField() { return *GetNativePointerField<UFunction**>(this, "FFuncParms.Func"); }
	unsigned __int8*& ParmsField() { return *GetNativePointerField<unsigned __int8**>(this, "FFuncParms.Parms"); }

	// Bitfields

	// Functions
};