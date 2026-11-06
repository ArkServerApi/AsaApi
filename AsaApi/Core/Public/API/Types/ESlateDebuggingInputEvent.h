#pragma once


enum class ESlateDebuggingInputEvent:unsigned char
{
	MouseMove = 0x0,
	MouseEnter = 0x1,
	MouseLeave = 0x2,
	PreviewMouseButtonDown = 0x3,
	MouseButtonDown = 0x4,
	MouseButtonUp = 0x5,
	MouseButtonDoubleClick = 0x6,
	MouseWheel = 0x7,
	TouchStart = 0x8,
	TouchEnd = 0x9,
	TouchForceChanged = 0xA,
	TouchFirstMove = 0xB,
	TouchMoved = 0xC,
	DragDetected = 0xD,
	DragEnter = 0xE,
	DragLeave = 0xF,
	DragOver = 0x10,
	DragDrop = 0x11,
	DropMessage = 0x12,
	PreviewKeyDown = 0x13,
	KeyDown = 0x14,
	KeyUp = 0x15,
	KeyChar = 0x16,
	AnalogInput = 0x17,
	TouchGesture = 0x18,
	MotionDetected = 0x19,
	MAX = 0x1A
};