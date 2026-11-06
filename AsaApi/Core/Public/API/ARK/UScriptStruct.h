#pragma once


struct UScriptStruct : UStruct {
	static UClass* StaticClass() { return AsaApi::ResolveClass("UScriptStruct"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UScriptStruct"); }
};