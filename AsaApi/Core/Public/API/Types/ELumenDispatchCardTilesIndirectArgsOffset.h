#pragma once


enum class ELumenDispatchCardTilesIndirectArgsOffset:int
{
	OneThreadPerCardTile = 0x0,
	OneGroupPerCardTile = 0xC,
	Num = 0x2
};