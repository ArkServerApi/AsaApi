#pragma once


enum class ERPCDoSEscalateReason:unsigned char
{
	CountLimit = 0x0,
	TimeLimit = 0x1,
	AutoEscalate = 0x2,
	Deescalate = 0x3
};