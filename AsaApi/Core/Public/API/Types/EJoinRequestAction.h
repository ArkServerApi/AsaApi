#pragma once


enum class EJoinRequestAction:unsigned char
{
	Manual = 0x0,
	AutoApprove = 0x1,
	AutoReject = 0x2
};