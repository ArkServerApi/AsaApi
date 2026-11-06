#pragma once


enum class ELobbyComparison:int
{
	k_ELobbyComparisonEqualToOrLessThan = 0xFE,
	k_ELobbyComparisonLessThan = 0xFF,
	k_ELobbyComparisonEqual = 0x0,
	k_ELobbyComparisonGreaterThan = 0x1,
	k_ELobbyComparisonEqualToOrGreaterThan = 0x2,
	k_ELobbyComparisonNotEqual = 0x3
};