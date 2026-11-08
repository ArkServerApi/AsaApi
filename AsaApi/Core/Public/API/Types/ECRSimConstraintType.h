#pragma once


enum class ECRSimConstraintType:unsigned char
{
	Distance = 0x0,
	DistanceFromA = 0x1,
	DistanceFromB = 0x2,
	Plane = 0x3
};