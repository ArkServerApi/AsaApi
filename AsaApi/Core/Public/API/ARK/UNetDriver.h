#pragma once


/*struct UNetConnection : UPlayer
{
	FUniqueNetIdRepl& UniqueIdField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "UNetConnection.PlayerId"); }
};*/

struct UNetDriver : UObject
{
	double& ElapsedTimeField() { return *GetNativePointerField<double*>(this, "UNetDriver.ElapsedTime"); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UNetDriver.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
};