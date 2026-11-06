#pragma once


enum class EGizmoElementState:unsigned char
{
	None = 0x0,
	Visible = 0x2,
	Hittable = 0x4,
	VisibleAndHittable = 0x6
};