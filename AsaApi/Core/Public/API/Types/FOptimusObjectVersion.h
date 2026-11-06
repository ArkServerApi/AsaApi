#pragma once


namespace FOptimusObjectVersion
{
	enum Type:int
	{
		InitialVersion = 0x0,
		SwitchToMeshDeformerBase = 0x1,
		ReparentResourcesAndVariables = 0x2,
		SwitchToParameterBindingArrayStruct = 0x3,
		AddBindingsToGraph = 0x4,
		ComponentProviderSupport = 0x5,
		SetPrimaryBindingName = 0x6,
		DataDomainExpansion = 0x7,
		VersionPlusOne = 0x8,
		LatestVersion = 0x7
	};
}