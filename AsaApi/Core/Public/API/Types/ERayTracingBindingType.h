#pragma once


enum class ERayTracingBindingType:unsigned char
{
	HitGroup = 0x0,
	CallableShader = 0x1,
	MissShader = 0x2
};