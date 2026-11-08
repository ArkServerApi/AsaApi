#pragma once


enum class ENDISkeletalMesh_SkinningMode:unsigned char
{
	Invalid = 0xFF,
	None = 0x0,
	SkinOnTheFly = 0x1,
	PreSkin = 0x2
};