#pragma once


enum class EConstraintsManagerNotifyType:int
{
	ConstraintAdded = 0x0,
	ConstraintRemoved = 0x1,
	ConstraintRemovedWithCompensation = 0x2,
	ManagerUpdated = 0x3
};