#pragma once


enum class EHttpConnectionState:int
{
	AwaitingRead = 0x0,
	Reading = 0x1,
	AwaitingProcessing = 0x2,
	Writing = 0x3,
	Destroyed = 0x4
};