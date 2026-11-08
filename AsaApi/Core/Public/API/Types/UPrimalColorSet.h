#pragma once

struct UPrimalColorSet
{
	int GetRandomColorDefinitionIndex(int SetNum, int Level);
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalColorSet"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalColorSet"); }
};