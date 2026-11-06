#pragma once


struct FEngramCustomFolder
{
	// Fields

	FString& FolderNameField() { return *GetNativePointerField<FString*>(this, "FEngramCustomFolder.FolderName"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& EngramCustomFolderItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FEngramCustomFolder.EngramCustomFolderItemClasses"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FEngramCustomFolder>(); }
};