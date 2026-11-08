#pragma once


enum class ERigVMUserWorkflowType:unsigned char
{
	Invalid = 0x0,
	NodeContext = 0x1,
	PinContext = 0x2,
	OnPinDefaultChanged = 0x4,
	All = 0x7
};