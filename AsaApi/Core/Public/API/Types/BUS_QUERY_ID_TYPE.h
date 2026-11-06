#pragma once


enum class BUS_QUERY_ID_TYPE:int
{
	BusQueryDeviceID = 0x0,
	BusQueryHardwareIDs = 0x1,
	BusQueryCompatibleIDs = 0x2,
	BusQueryInstanceID = 0x3,
	BusQueryDeviceSerialNumber = 0x4,
	BusQueryContainerID = 0x5
};