#pragma once


enum class ERPCDoSSeverityUpdate:unsigned char
{
	Escalate = 0x0,
	AutoEscalate = 0x1,
	Deescalate = 0x2
};