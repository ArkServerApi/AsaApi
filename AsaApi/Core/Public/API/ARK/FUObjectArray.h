#pragma once


class FUObjectArray
{
public:
	FChunkedFixedUObjectArray ObjObjects;
	int ObjFirstGCIndex;
	int ObjLastNonGCIndex;
	int MaxObjectsNotConsideredByGC;
	bool OpenForDisregardForGC;
};