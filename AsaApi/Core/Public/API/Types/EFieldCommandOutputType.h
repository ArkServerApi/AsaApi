#pragma once


enum class EFieldCommandOutputType:unsigned char
{
	LinearForce = 0x0,
	LinearVelocity = 0x1,
	AngularTorque = 0x2,
	AngularVelocity = 0x3,
	NumOutputs = 0x4
};