#pragma once


enum class ERigVMNodeCreatedReason:unsigned char
{
	NodeSpawner = 0x0,
	ScriptedEvent = 0x1,
	Paste = 0x2,
	BackwardsCompatibility = 0x3,
	Unknown = 0x4
};