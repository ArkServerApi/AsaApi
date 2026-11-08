#pragma once


enum class ELifetimeCondition :int
{
	COND_None = 0x0,
	COND_InitialOnly = 0x1,
	COND_OwnerOnly = 0x2,
	COND_SkipOwner = 0x3,
	COND_SimulatedOnly = 0x4,
	COND_AutonomousOnly = 0x5,
	COND_SimulatedOrPhysics = 0x6,
	COND_InitialOrOwner = 0x7,
	COND_Custom = 0x8,
	COND_ReplayOrOwner = 0x9,
	COND_ReplayOnly = 0x0A,
	COND_SimulatedOnlyNoReplay = 0x0B,
	COND_SimulatedOrPhysicsNoReplay = 0x0C,
	COND_SkipReplay = 0x0D,
	COND_Never = 0x0F,
	COND_NetGroup = 0x10,
	COND_Max = 0x11
};