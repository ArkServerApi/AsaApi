#pragma once


enum class EToolChangeTrackingMode:int
{
	NoChangeTracking = 0x1,
	UndoToExit = 0x2,
	FullUndoRedo = 0x3
};