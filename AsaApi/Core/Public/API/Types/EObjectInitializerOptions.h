#pragma once


enum class EObjectInitializerOptions:int
{
	None = 0x0,
	CopyTransientsFromClassDefaults = 0x1,
	InitializeProperties = 0x2
};