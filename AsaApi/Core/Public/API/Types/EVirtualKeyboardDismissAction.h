#pragma once


enum class EVirtualKeyboardDismissAction:unsigned char
{
	TextChangeOnDismiss = 0x0,
	TextCommitOnAccept = 0x1,
	TextCommitOnDismiss = 0x2
};