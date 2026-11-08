#pragma once


struct FPrimalWirelessReferences
{
	TSet<APrimalStructureItemContainer*, DefaultKeyFuncs<APrimalStructureItemContainer*, 0>, FDefaultSetAllocator>& WirelessSourcesField() { return *GetNativePointerField<TSet<APrimalStructureItemContainer*, DefaultKeyFuncs<APrimalStructureItemContainer*, 0>, FDefaultSetAllocator>*>(this, "FPrimalWirelessReferences.WirelessSources"); }
	TSet<APrimalStructureItemContainer*, DefaultKeyFuncs<APrimalStructureItemContainer*, 0>, FDefaultSetAllocator>& WirelessConsumersField() { return *GetNativePointerField<TSet<APrimalStructureItemContainer*, DefaultKeyFuncs<APrimalStructureItemContainer*, 0>, FDefaultSetAllocator>*>(this, "FPrimalWirelessReferences.WirelessConsumers"); }

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalWirelessReferences>(); }
	~FPrimalWirelessReferences() { NativeCall<void>(this, "FPrimalWirelessReferences.~FPrimalWirelessReferences()"); }
};