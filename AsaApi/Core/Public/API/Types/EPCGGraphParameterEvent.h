#pragma once


enum class EPCGGraphParameterEvent:int
{
	GraphChanged = 0x0,
	GraphPostLoad = 0x1,
	Added = 0x2,
	Removed = 0x3,
	PropertyModified = 0x4,
	ValueModifiedLocally = 0x5,
	ValueModifiedByParent = 0x6
};