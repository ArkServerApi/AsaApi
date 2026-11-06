#pragma once


struct FClassRemappingWeight
{
	TSoftClassPtr<UObject> FromClass;
	TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> > ToClasses;
	TArray<float, TSizedDefaultAllocator<32> > Weights;
	FName ActiveEvent;
	unsigned __int32 bExactMatch : 1;
};