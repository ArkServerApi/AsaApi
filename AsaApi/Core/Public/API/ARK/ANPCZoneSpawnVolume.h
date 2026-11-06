#pragma once


struct ANPCZoneSpawnVolume : AVolume
{

	static UClass* StaticClass() { return AsaApi::ResolveClass("ANPCZoneSpawnVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANPCZoneSpawnVolume"); }
};