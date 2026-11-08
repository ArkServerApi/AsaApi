#pragma once

struct UFont {	static UClass* StaticClass() { return AsaApi::ResolveClass("UFont"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFont"); }
};