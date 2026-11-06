#pragma once


enum class EPhysXFilterDataFlags:int
{
	EPDF_SimpleCollision = 0x1,
	EPDF_ComplexCollision = 0x2,
	EPDF_CCD = 0x4,
	EPDF_ContactNotify = 0x8,
	EPDF_StaticShape = 0x10,
	EPDF_ModifyContacts = 0x20,
	EPDF_KinematicKinematicPairs = 0x40
};