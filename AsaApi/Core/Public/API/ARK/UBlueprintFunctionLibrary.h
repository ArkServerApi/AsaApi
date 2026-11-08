#pragma once


struct UBlueprintFunctionLibrary
{
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBlueprintFunctionLibrary"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBlueprintFunctionLibrary"); }
};