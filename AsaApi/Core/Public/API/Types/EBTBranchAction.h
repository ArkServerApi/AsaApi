#pragma once


enum class EBTBranchAction:unsigned short
{
	None = 0x0,
	DecoratorEvaluate = 0x1,
	DecoratorActivate_IfNotExecuting = 0x2,
	DecoratorActivate_EvenIfExecuting = 0x4,
	DecoratorActivate = 0x6,
	DecoratorDeactivate = 0x8,
	UnregisterAuxNodes = 0x10,
	StopTree_Safe = 0x20,
	StopTree_Forced = 0x40,
	ActiveNodeEvaluate = 0x80,
	SubTreeEvaluate = 0x100,
	ProcessPendingInitialize = 0x200,
	Cleanup = 0x400,
	UninitializeComponent = 0x800,
	StopTree = 0x60,
	Changing_Topology_Actions = 0xE70,
	All = 0xFFF
};