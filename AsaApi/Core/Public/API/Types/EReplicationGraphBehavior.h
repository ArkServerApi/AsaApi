#pragma once


enum class EReplicationGraphBehavior:unsigned char
{
	Default = 0x0,
	NotRouted = 0x1,
	RelevantAllConnections = 0x2,
	RelevantOwnerConnection = 0x3,
	RelevantTeamConnection = 0x4,
	NetChild_Dynamic = 0x40,
	NetChild_Static = 0x41,
	NetChild_ForceStaticDormancy = 0x42,
	Spatialize_Static = 0x80,
	Spatialize_Dynamic = 0x81,
	Spatialize_Dormancy = 0x82,
	Spatialize_ForceStaticDormancy = 0x83
};