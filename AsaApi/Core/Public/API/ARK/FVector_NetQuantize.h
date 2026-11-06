#pragma once


struct FVector_NetQuantize : UE::Math::TVector<double>
{
	// Fields

	  // Bitfields

	  // Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FVector_NetQuantize>(); }
	bool NetSerialize(FArchive* Ar, UPackageMap* Map, bool* bOutSuccess) { return NativeCall<bool, FArchive*, UPackageMap*, bool*>(this, "FVector_NetQuantize.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
};