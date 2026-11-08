#pragma once


enum class EFieldVectorType:int
{
	Vector_LinearForce = 0x0,
	Vector_LinearVelocity = 0x1,
	Vector_AngularVelocity = 0x2,
	Vector_AngularTorque = 0x3,
	Vector_PositionTarget = 0x4,
	Vector_InitialLinearVelocity = 0x5,
	Vector_InitialAngularVelocity = 0x6,
	Vector_LinearImpulse = 0x7,
	Vector_TargetMax = 0x8
};