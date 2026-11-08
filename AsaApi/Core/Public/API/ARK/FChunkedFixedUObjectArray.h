#pragma once


class FChunkedFixedUObjectArray
{
public:
	enum
	{
		ElementsPerChunk = 64 * 1024
	};

	FUObjectItem& GetByIndex(int Index)
	{
		return *GetObjectPtr(Index);
	}

	FUObjectItem* GetObjectPtr(int Index)
	{
		auto ChunkIndex = Index / ElementsPerChunk;
		auto WithinChunkIndex = Index % ElementsPerChunk;
		auto Chunk = Objects[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	FUObjectItem** Objects;
	int NumElements;
	int MaxElements;
	int NumChunks;
	int MaxChunks;
	FUObjectItem* PreAllocatedObjects;
};