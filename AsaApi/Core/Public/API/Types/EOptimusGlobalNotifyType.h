#pragma once


enum class EOptimusGlobalNotifyType:int
{
	GraphAdded = 0x0,
	GraphRemoved = 0x1,
	GraphIndexChanged = 0x2,
	GraphRenamed = 0x3,
	ComponentBindingAdded = 0x4,
	ComponentBindingRemoved = 0x5,
	ComponentBindingIndexChanged = 0x6,
	ComponentBindingRenamed = 0x7,
	ComponentBindingSourceChanged = 0x8,
	ResourceAdded = 0x9,
	ResourceRemoved = 0xA,
	ResourceIndexChanged = 0xB,
	ResourceRenamed = 0xC,
	ResourceTypeChanged = 0xD,
	ResourceDomainChanged = 0xE,
	VariableAdded = 0xF,
	VariableRemoved = 0x10,
	VariableIndexChanged = 0x11,
	VariableRenamed = 0x12,
	VariableTypeChanged = 0x13,
	ConstantValueChanged = 0x14,
	NodeTypeAdded = 0x15,
	NodeTypeRemoved = 0x16,
	DataTypeChanged = 0x17
};