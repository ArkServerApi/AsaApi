#pragma once


enum class EModulationRouting:unsigned char
{
	Disable = 0x0,
	Inherit = 0x1,
	Override = 0x2,
	Union = 0x3
};