#pragma once


enum class EGeometryCollectionPhysicsTypeEnum:unsigned char
{
	Chaos_AngularVelocity = 0x0,
	Chaos_DynamicState = 0x1,
	Chaos_LinearVelocity = 0x2,
	Chaos_InitialAngularVelocity = 0x3,
	Chaos_InitialLinearVelocity = 0x4,
	Chaos_CollisionGroup = 0x5,
	Chaos_LinearForce = 0x6,
	Chaos_AngularTorque = 0x7,
	Chaos_DisableThreshold = 0x8,
	Chaos_SleepingThreshold = 0x9,
	Chaos_ExternalClusterStrain = 0xA,
	Chaos_InternalClusterStrain = 0xB,
	Chaos_LinearImpulse = 0xC,
	Chaos_Max = 0xD
};