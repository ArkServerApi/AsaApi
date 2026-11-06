#pragma once
#include "BulkForward.h"
#include "ABrush.h"

struct ABrushShape : public ABrush
{
public:
	ABrushShape() = delete;
	~ABrushShape() = delete;
	ABrushShape(const ABrushShape&) = delete;
	ABrushShape& operator=(const ABrushShape&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool IsStaticBrush() { return NativeCall<bool>(this, "ABrushShape.IsStaticBrush()"); }
	bool IsBrushShape() { return NativeCall<bool>(this, "ABrushShape.IsBrushShape()"); }
};
