#pragma once


enum class mi_delayed_e:int
{
	MI_USE_DELAYED_FREE = 0x0,
	MI_DELAYED_FREEING = 0x1,
	MI_NO_DELAYED_FREE = 0x2,
	MI_NEVER_DELAYED_FREE = 0x3
};