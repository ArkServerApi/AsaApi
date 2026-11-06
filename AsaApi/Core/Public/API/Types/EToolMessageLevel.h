#pragma once


enum class EToolMessageLevel:int
{
	Internal = 0x0,
	UserMessage = 0x1,
	UserNotification = 0x2,
	UserWarning = 0x3,
	UserError = 0x4
};