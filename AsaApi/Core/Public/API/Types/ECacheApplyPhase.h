#pragma once


enum class ECacheApplyPhase:int
{
	PostSimpleConstructionScript = 0x0,
	PostUserConstructionScript = 0x1,
	NonConstructionScript = 0x2
};