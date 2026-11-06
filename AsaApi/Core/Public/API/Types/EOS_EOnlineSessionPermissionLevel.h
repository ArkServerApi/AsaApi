#pragma once


enum class EOS_EOnlineSessionPermissionLevel:int
{
	EOS_OSPF_PublicAdvertised = 0x0,
	EOS_OSPF_JoinViaPresence = 0x1,
	EOS_OSPF_InviteOnly = 0x2
};