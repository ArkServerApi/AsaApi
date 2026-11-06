#pragma once


enum class EFieldPhysicsType:int
{
	Field_None = 0x0,
	Field_DynamicState = 0x1,
	Field_LinearForce = 0x2,
	Field_ExternalClusterStrain = 0x3,
	Field_Kill = 0x4,
	Field_LinearVelocity = 0x5,
	Field_AngularVelociy = 0x6,
	Field_AngularTorque = 0x7,
	Field_InternalClusterStrain = 0x8,
	Field_DisableThreshold = 0x9,
	Field_SleepingThreshold = 0xA,
	Field_PositionStatic = 0xB,
	Field_PositionAnimated = 0xC,
	Field_PositionTarget = 0xD,
	Field_DynamicConstraint = 0xE,
	Field_CollisionGroup = 0xF,
	Field_ActivateDisabled = 0x10,
	Field_InitialLinearVelocity = 0x11,
	Field_InitialAngularVelocity = 0x12,
	Field_LinearImpulse = 0x13,
	Field_PhysicsType_Max = 0x14
};