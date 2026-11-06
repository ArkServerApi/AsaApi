#pragma once


enum class EMessageBusNotification:unsigned char
{
	Registered = 0x0,
	Unregistered = 0x1
};