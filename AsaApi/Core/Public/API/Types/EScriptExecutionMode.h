#pragma once


enum class EScriptExecutionMode:unsigned char
{
	EveryParticle = 0x0,
	SpawnedParticles = 0x1,
	SingleParticle = 0x2
};