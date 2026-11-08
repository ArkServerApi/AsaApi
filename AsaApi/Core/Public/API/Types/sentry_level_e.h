#pragma once


enum class sentry_level_e:int
{
	SENTRY_LEVEL_DEBUG = 0xFF,
	SENTRY_LEVEL_INFO = 0x0,
	SENTRY_LEVEL_WARNING = 0x1,
	SENTRY_LEVEL_ERROR = 0x2,
	SENTRY_LEVEL_FATAL = 0x3
};