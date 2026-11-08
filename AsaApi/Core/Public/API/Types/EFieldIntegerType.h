#pragma once


enum class EFieldIntegerType:int
{
	Integer_DynamicState = 0x0,
	Integer_ActivateDisabled = 0x1,
	Integer_CollisionGroup = 0x2,
	Integer_PositionAnimated = 0x3,
	Integer_PositionStatic = 0x4,
	Integer_TargetMax = 0x5
};