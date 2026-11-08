#pragma once


enum class EActorIteratorFlags:int
{
	AllActors = 0x0,
	SkipPendingKill = 0x1,
	OnlySelectedActors = 0x2,
	OnlyActiveLevels = 0x4
};