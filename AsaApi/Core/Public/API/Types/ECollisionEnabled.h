#pragma once


namespace ECollisionEnabled
{
	enum Type:int
	{
		NoCollision = 0x0,
		QueryOnly = 0x1,
		PhysicsOnly = 0x2,
		QueryAndPhysics = 0x3,
		ProbeOnly = 0x4,
		QueryAndProbe = 0x5
	};
}