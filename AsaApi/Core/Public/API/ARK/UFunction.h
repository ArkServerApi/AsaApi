#pragma once


struct UFunction : UStruct
{
	unsigned int FunctionFlags;
	unsigned __int16 RepOffset;
	char NumParms;
	unsigned __int16 ParmsSize;
	unsigned __int16 ReturnValueOffset;
	unsigned __int16 RPCId;
	unsigned __int16 RPCResponseId;
	UProperty* FirstPropertyToInit;

	static UClass* StaticClass() { return AsaApi::ResolveClass("UFunction"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFunction"); }
};