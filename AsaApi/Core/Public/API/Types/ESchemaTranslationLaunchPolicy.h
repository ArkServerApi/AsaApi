#pragma once


enum class ESchemaTranslationLaunchPolicy:int
{
	ExclusiveSync = 0x0,
	Sync = 0x1,
	Async = 0x2
};