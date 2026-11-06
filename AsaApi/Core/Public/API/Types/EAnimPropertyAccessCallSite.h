#pragma once


enum class EAnimPropertyAccessCallSite:int
{
	WorkerThread_Unbatched = 0x0,
	WorkerThread_Batched_PreEventGraph = 0x1,
	WorkerThread_Batched_PostEventGraph = 0x2,
	GameThread_Batched_PreEventGraph = 0x3,
	GameThread_Batched_PostEventGraph = 0x4
};