#pragma once


struct FUniqueNetIdRepl : FUniqueNetIdWrapper
{
	TArray<unsigned char, TSizedDefaultAllocator<32> > ReplicationBytes;
};