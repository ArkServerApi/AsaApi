#pragma once


enum class ERepLayoutFlags:unsigned char
{
	None = 0x0,
	IsActor = 0x1,
	PartialPushSupport = 0x2,
	FullPushSupport = 0x4,
	HasObjectOrNetSerializeProperties = 0x8,
	NoReplicatedProperties = 0x10,
	FullPushProperties = 0x20,
	HasInitialOnlyProperties = 0x40
};