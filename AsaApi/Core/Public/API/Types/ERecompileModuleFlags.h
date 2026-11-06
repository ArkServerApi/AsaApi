#pragma once


enum class ERecompileModuleFlags:unsigned char
{
	None = 0x0,
	ReloadAfterRecompile = 0x1,
	FailIfGeneratedCodeChanges = 0x2,
	ForceCodeProject = 0x4
};