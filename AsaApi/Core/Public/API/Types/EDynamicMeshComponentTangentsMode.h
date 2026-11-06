#pragma once


enum class EDynamicMeshComponentTangentsMode:unsigned char
{
	NoTangents = 0x0,
	AutoCalculated = 0x1,
	ExternallyProvided = 0x2
};