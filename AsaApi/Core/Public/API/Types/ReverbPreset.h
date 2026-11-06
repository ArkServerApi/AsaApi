#pragma once


enum class ReverbPreset:int
{
	REVERB_Default = 0x0,
	REVERB_Bathroom = 0x1,
	REVERB_StoneRoom = 0x2,
	REVERB_Auditorium = 0x3,
	REVERB_ConcertHall = 0x4,
	REVERB_Cave = 0x5,
	REVERB_Hallway = 0x6,
	REVERB_StoneCorridor = 0x7,
	REVERB_Alley = 0x8,
	REVERB_Forest = 0x9,
	REVERB_City = 0xA,
	REVERB_Mountains = 0xB,
	REVERB_Quarry = 0xC,
	REVERB_Plain = 0xD,
	REVERB_ParkingLot = 0xE,
	REVERB_SewerPipe = 0xF,
	REVERB_Underwater = 0x10,
	REVERB_SmallRoom = 0x11,
	REVERB_MediumRoom = 0x12,
	REVERB_LargeRoom = 0x13,
	REVERB_MediumHall = 0x14,
	REVERB_LargeHall = 0x15,
	REVERB_Plate = 0x16,
	REVERB_MAX = 0x17
};