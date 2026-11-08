#pragma once


enum class EWarpingVectorMode:unsigned char
{
	ComponentSpaceVector = 0x0,
	ActorSpaceVector = 0x1,
	WorldSpaceVector = 0x2,
	IKFootRootLocalSpaceVector = 0x3
};