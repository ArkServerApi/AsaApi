#pragma once


namespace FControlRigObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		RemovalOfHierarchyRefPins = 0x1,
		OperatorsStoringPropertyPaths = 0x2,
		SwitchedToRigVM = 0x3,
		ControlOffsetTransform = 0x4,
		RigElementKeyCache = 0x5,
		BlueprintVariableSupport = 0x6,
		RigHierarchyV2 = 0x7,
		RigHierarchyMultiParentConstraints = 0x8,
		RigHierarchyControlSpaceFavorites = 0x9,
		StorageMinMaxValuesAsFloatStorage = 0xA,
		RenameGizmoToShape = 0xB,
		BoundVariableWithInjectionNode = 0xC,
		PerChannelLimits = 0xD,
		RemovedMultiParentParentCache = 0xE,
		RemoveParameters = 0xF,
		CurveElementValueStateFlag = 0x10,
		ControlAnimationType = 0x11,
		TemplatesPreferredPermutatation = 0x12,
		PreferredEulerAnglesForControls = 0x13,
		HierarchyElementMetadata = 0x14,
		LibraryNodeTemplates = 0x15,
		RestrictSpaceSwitchingForControls = 0x16,
		ControlTransformChannelFiltering = 0x17,
		StoreFunctionsInGeneratedClass = 0x18,
		RigHierarchyStoringPreviousNames = 0x19,
		VersionPlusOne = 0x1A,
		LatestVersion = 0x19
	};
}