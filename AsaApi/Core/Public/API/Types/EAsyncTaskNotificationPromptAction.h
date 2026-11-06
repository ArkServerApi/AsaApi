#pragma once


enum class EAsyncTaskNotificationPromptAction:unsigned char
{
	None = 0x0,
	Continue = 0x1,
	Cancel = 0x2,
	Unattended = 0x3
};