#pragma once


enum class EOptimusGraphNotifyType:int
{
	NodeAdded = 0x0,
	NodeRemoved = 0x1,
	NodeDisplayNameChanged = 0x2,
	NodePositionChanged = 0x3,
	NodeDiagnosticLevelChanged = 0x4,
	LinkAdded = 0x5,
	LinkRemoved = 0x6,
	PinAdded = 0x7,
	PinRemoved = 0x8,
	PinMoved = 0x9,
	PinValueChanged = 0xA,
	PinRenamed = 0xB,
	PinTypeChanged = 0xC,
	PinDataDomainChanged = 0xD,
	PinExpansionChanged = 0xE
};