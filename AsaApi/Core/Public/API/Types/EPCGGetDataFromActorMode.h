#pragma once


enum class EPCGGetDataFromActorMode:unsigned char
{
	ParseActorComponents = 0x0,
	GetSinglePoint = 0x1,
	GetDataFromProperty = 0x2,
	GetDataFromPCGComponent = 0x3,
	GetDataFromPCGComponentOrParseComponents = 0x4
};