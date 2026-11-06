#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UStereoLayerShape : public UObject
{
public:
	UStereoLayerShape() = delete;
	~UStereoLayerShape() = delete;
	UStereoLayerShape(const UStereoLayerShape&) = delete;
	UStereoLayerShape& operator=(const UStereoLayerShape&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UStereoLayerShape.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
};
