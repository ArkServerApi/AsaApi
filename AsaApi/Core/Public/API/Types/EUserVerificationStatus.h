#pragma once


enum class EUserVerificationStatus:int
{
	NotStarted = 0x0,
	CheckingAccountExistsFromListenServer = 0x1,
	CheckingAccountExistsFromDedicatedServer = 0x2,
	CheckingSanctions = 0x3,
	EstablishingAntiCheatProof = 0x4,
	WaitingForAntiCheatIntegrity = 0x5,
	Verified = 0x6,
	Failed = 0x7
};