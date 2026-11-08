#pragma once

struct UChannel {	static UClass* StaticClass() { return AsaApi::ResolveClass("UChannel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChannel"); }
};