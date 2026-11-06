#pragma once


namespace EParticleSimulatePhase
{
	enum Type:int
	{
		Main = 0x0,
		CollisionDistanceField = 0x1,
		CollisionDepthBuffer = 0x2,
		First = 0x0,
		Last = 0x2
	};
}