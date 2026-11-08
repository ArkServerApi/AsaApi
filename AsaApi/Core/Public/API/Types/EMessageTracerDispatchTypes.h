#pragma once


enum class EMessageTracerDispatchTypes:int
{
	Direct = 0x0,
	Pending = 0x1,
	TaskGraph = 0x2
};