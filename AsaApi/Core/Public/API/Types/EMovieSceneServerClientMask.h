#pragma once


enum class EMovieSceneServerClientMask:unsigned char
{
	None = 0x0,
	Server = 0x1,
	Client = 0x2,
	All = 0x3
};