#pragma once
#include "BulkForward.h"
#include "UContextMenuItem.h"

struct UContextMenuItem_Sort : public UContextMenuItem
{
public:
	UContextMenuItem_Sort() = delete;
	~UContextMenuItem_Sort() = delete;
	UContextMenuItem_Sort(const UContextMenuItem_Sort&) = delete;
	UContextMenuItem_Sort& operator=(const UContextMenuItem_Sort&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContextMenuItem_Sort"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContextMenuItem_Sort"); }

	FName& SorDirSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem_Sort.SorDirSwitcherName"); }
	UWidgetSwitcher*& SortDirSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UContextMenuItem_Sort.SortDirSwitcher"); }
	bool& bIsSortDirSwitcherVisibleField() { return *GetNativePointerField<bool*>(this, "UContextMenuItem_Sort.bIsSortDirSwitcherVisible"); }
	bool& bSortDirSwitcherDirField() { return *GetNativePointerField<bool*>(this, "UContextMenuItem_Sort.bSortDirSwitcherDir"); }
	void SetSortDirSwitcherVisible(bool visible) { NativeCall<void, bool>(this, "UContextMenuItem_Sort.SetSortDirSwitcherVisible(bool)", visible); }
	void SetSortDirSwitcherDirection(bool asc) { NativeCall<void, bool>(this, "UContextMenuItem_Sort.SetSortDirSwitcherDirection(bool)", asc); }
};
