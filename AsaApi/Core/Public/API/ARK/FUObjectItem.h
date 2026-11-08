#pragma once


class FUObjectItem
{
public:
	__int64 FlagsAndRefCount;
	UObject* Object;
	int SerialNumber;
	int ClusterRootIndex;
};