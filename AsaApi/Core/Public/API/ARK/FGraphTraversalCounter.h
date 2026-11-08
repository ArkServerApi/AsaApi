#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FGraphTraversalCounter
{
public:
    unsigned __int64 LastSyncronizedFrame;
    short Counter;
    short SkipFrames;
    FGraphTraversalCounter()
		: LastSyncronizedFrame(INDEX_NONE)
		, Counter(INDEX_NONE)
		, SkipFrames(0)

	{}
    unsigned __int64& LastSyncronizedFrameField() { return *GetNativePointerField<unsigned __int64*>(this, "FGraphTraversalCounter.LastSyncronizedFrame"); }
    short& CounterField() { return *GetNativePointerField<short*>(this, "FGraphTraversalCounter.Counter"); }
    short& SkipFramesField() { return *GetNativePointerField<short*>(this, "FGraphTraversalCounter.SkipFrames"); }
    bool WasSynchronizedCounter(const FGraphTraversalCounter& InOtherCounter) { return NativeCall<bool, const FGraphTraversalCounter&>(this, "FGraphTraversalCounter.WasSynchronizedCounter(FGraphTraversalCounter&)", InOtherCounter); }
};
static_assert(sizeof(FGraphTraversalCounter) == 16);
static_assert(offsetof(FGraphTraversalCounter, LastSyncronizedFrame) == 0);
static_assert(offsetof(FGraphTraversalCounter, Counter) == 8);
static_assert(offsetof(FGraphTraversalCounter, SkipFrames) == 10);
static_assert(sizeof(((FGraphTraversalCounter*)nullptr)->LastSyncronizedFrame) == 8);
static_assert(sizeof(((FGraphTraversalCounter*)nullptr)->Counter) == 2);
static_assert(sizeof(((FGraphTraversalCounter*)nullptr)->SkipFrames) == 2);
static_assert(std::is_trivially_copyable_v<FGraphTraversalCounter>);
