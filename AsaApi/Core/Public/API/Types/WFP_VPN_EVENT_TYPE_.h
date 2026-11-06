#pragma once


enum class WFP_VPN_EVENT_TYPE_:int
{
	WfpFilePathTriggerIncrement = 0x1,
	WfpFilePathTriggerDecrement = 0x2,
	WfpAppSidTriggerIncrement = 0x3,
	WfpAppSidTriggerDecrement = 0x4,
	WfpSecurityDescriptorTriggerIncrement = 0x5,
	WfpSecurityDescriptorTriggerDecrement = 0x6,
	WfpNrptTriggerIncrement = 0x7,
	WfpNrptTriggerDecrement = 0x8,
	WfpFlowTriggerIncrement = 0x9,
	WfpFlowTriggerDecrement = 0xA,
	WfpConnectFromDisconnect = 0xB,
	WfpDisconnectAfterDebounce = 0xC
};