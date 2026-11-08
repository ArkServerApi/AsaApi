#pragma once


enum class EInterpToBehaviourType:unsigned char
{
	OneShot = 0x0,
	OneShot_Reverse = 0x1,
	Loop_Reset = 0x2,
	PingPong = 0x3
};