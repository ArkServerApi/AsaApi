#pragma once

struct UUserWidget {	static UClass* StaticClass() { return AsaApi::ResolveClass("UUserWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UUserWidget"); }
};