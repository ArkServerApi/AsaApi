#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FComponentSync
{
public:
    FName Name;
    ESyncOption SyncOption;
    FComponentSync()
	: SyncOption(ESyncOption::Drive)
	{}
    FComponentSync(const FName& InName, ESyncOption InSyncOption)
		: Name (InName)
		, SyncOption(InSyncOption)
	{}
    FName& NameField() { return *GetNativePointerField<FName*>(this, "FComponentSync.Name"); }
};
static_assert(sizeof(FComponentSync) == 12);
static_assert(offsetof(FComponentSync, Name) == 0);
static_assert(offsetof(FComponentSync, SyncOption) == 8);
static_assert(sizeof(((FComponentSync*)nullptr)->Name) == 8);
static_assert(sizeof(((FComponentSync*)nullptr)->SyncOption) == 1);
static_assert(std::is_trivially_copyable_v<FComponentSync>);
