#pragma once


namespace EChaosUserDataType
{
	enum Type:int
	{
		Invalid = 0x0,
		BodyInstance = 0x1,
		PhysicalMaterial = 0x2,
		PhysScene = 0x3,
		ConstraintInstance = 0x4,
		PrimitiveComponent = 0x5,
		AggShape = 0x6,
		CustomPayload = 0x7
	};
}