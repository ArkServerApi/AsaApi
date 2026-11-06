#pragma once


struct UProperty
{
	static UClass* StaticClass() { return AsaApi::ResolveClass("UProperty"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UProperty"); }
};