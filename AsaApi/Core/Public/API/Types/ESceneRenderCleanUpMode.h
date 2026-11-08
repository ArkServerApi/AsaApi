#pragma once


enum class ESceneRenderCleanUpMode:int
{
	Immediate = 0x0,
	Deferred = 0x1,
	DeferredAndAsync = 0x2
};