#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AMassVisualizer : public AActor
{
public:
	AMassVisualizer() = delete;
	~AMassVisualizer() = delete;
	AMassVisualizer(const AMassVisualizer&) = delete;
	AMassVisualizer& operator=(const AMassVisualizer&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
