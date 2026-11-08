#pragma once


enum class _INTERFACE_TYPE:int
{
	InterfaceTypeUndefined = 0xFF,
	Internal = 0x0,
	Isa = 0x1,
	Eisa = 0x2,
	MicroChannel = 0x3,
	TurboChannel = 0x4,
	PCIBus = 0x5,
	VMEBus = 0x6,
	NuBus = 0x7,
	PCMCIABus = 0x8,
	CBus = 0x9,
	MPIBus = 0xA,
	MPSABus = 0xB,
	ProcessorInternal = 0xC,
	InternalPowerBus = 0xD,
	PNPISABus = 0xE,
	PNPBus = 0xF,
	Vmcs = 0x10,
	ACPIBus = 0x11,
	MaximumInterfaceType = 0x12
};