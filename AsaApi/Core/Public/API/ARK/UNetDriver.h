#pragma once


/*struct UNetConnection : UPlayer
{
	FUniqueNetIdRepl& UniqueIdField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "UNetConnection.PlayerId"); }
};*/

struct UNetDriver : UObject
{
	double& ElapsedTimeField() { return *GetNativePointerField<double*>(this, "UNetDriver.ElapsedTime"); }

	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
};