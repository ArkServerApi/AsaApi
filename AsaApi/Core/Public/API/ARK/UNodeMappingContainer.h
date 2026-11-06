#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UNodeMappingContainer : public UObject
{
public:
	UNodeMappingContainer() = delete;
	~UNodeMappingContainer() = delete;
	UNodeMappingContainer(const UNodeMappingContainer&) = delete;
	UNodeMappingContainer& operator=(const UNodeMappingContainer&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	UE::Math::TTransform<double>* GetSourceToTargetTransform(UE::Math::TTransform<double>* result, const FName& SourceNode) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, const FName&>(this, "UNodeMappingContainer.GetSourceToTargetTransform(FName&)", result, SourceNode); }
};
