#pragma once


enum class EPCGSpawnActorGenerationTrigger:unsigned char
{
	Default = 0x0,
	ForceGenerate = 0x1,
	DoNotGenerateInEditor = 0x2,
	DoNotGenerate = 0x3
};