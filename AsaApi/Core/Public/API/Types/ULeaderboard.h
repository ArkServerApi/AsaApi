#pragma once

struct ULeaderboard {	static UClass* StaticClass() { return AsaApi::ResolveClass("ULeaderboard"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULeaderboard"); }
};