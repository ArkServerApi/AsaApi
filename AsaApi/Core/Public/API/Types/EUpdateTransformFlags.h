#pragma once


enum class EUpdateTransformFlags:int
{
	None = 0x0,
	SkipPhysicsUpdate = 0x1,
	PropagateFromParent = 0x2,
	OnlyUpdateIfUsingSocket = 0x4
};