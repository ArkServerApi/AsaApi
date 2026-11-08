#pragma once

struct UPlayerInput {	static UClass* StaticClass() { return AsaApi::ResolveClass("UPlayerInput"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPlayerInput"); }
};