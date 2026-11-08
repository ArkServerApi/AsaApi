#pragma once


namespace FBlueprintsObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		OverridenEventReferenceFixup = 0x1,
		CleanBlueprintFunctionFlags = 0x2,
		ArrayGetByRefUpgrade = 0x3,
		EdGraphPinOptimized = 0x4,
		AllowDeletionConformed = 0x5,
		AdvancedContainerSupport = 0x6,
		SCSHasComponentTemplateClass = 0x7,
		ComponentTemplateClassSupport = 0x8,
		ArrayGetFuncsReplacedByCustomNode = 0x9,
		DisallowObjectConfigVars = 0xA,
		VersionPlusOne = 0xB,
		LatestVersion = 0xA
	};
}