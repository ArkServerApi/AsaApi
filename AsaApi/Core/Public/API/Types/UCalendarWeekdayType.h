#pragma once


enum class UCalendarWeekdayType:int
{
	UCAL_WEEKDAY = 0x0,
	UCAL_WEEKEND = 0x1,
	UCAL_WEEKEND_ONSET = 0x2,
	UCAL_WEEKEND_CEASE = 0x3
};