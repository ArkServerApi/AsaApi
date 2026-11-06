#pragma once


/*struct UNetConnection : UPlayer
{
	FUniqueNetIdRepl& UniqueIdField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "UNetConnection.PlayerId"); }
};*/

struct UNetDriver : UObject
{
	double& ElapsedTimeField() { return *GetNativePointerField<double*>(this, "UNetDriver.ElapsedTime"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UNetDriver"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNetDriver"); }
};