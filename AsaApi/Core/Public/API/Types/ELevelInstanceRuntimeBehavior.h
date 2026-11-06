#pragma once


enum class ELevelInstanceRuntimeBehavior:unsigned char
{
	None = 0x0,
	Embedded_Deprecated = 0x1,
	Partitioned = 0x2,
	LevelStreaming = 0x3
};