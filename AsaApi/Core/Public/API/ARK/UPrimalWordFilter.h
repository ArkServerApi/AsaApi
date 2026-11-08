#pragma once
#include "BulkForward.h"
#include "UPrimalWordList.h"

struct UPrimalWordFilter : public UPrimalWordList
{
public:
	UPrimalWordFilter() = delete;
	~UPrimalWordFilter() = delete;
	UPrimalWordFilter(const UPrimalWordFilter&) = delete;
	UPrimalWordFilter& operator=(const UPrimalWordFilter&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalWordFilter"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalWordFilter"); }

	int& NumRootNodesField() { return *GetNativePointerField<int*>(this, "UPrimalWordFilter.NumRootNodes"); }
	bool& wordsNeedSpacesField() { return *GetNativePointerField<bool*>(this, "UPrimalWordFilter.wordsNeedSpaces"); }
	bool& dontCheckLetterRepeatsField() { return *GetNativePointerField<bool*>(this, "UPrimalWordFilter.dontCheckLetterRepeats"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CensoredWordsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalWordFilter.CensoredWords"); }
	bool SanitizeString(FString& ToSanitize) { return NativeCall<bool, FString&>(this, "UPrimalWordFilter.SanitizeString(FString&)", ToSanitize); }
	bool HasIllegalWord(const FString& ToCheck) { return NativeCall<bool, const FString&>(this, "UPrimalWordFilter.HasIllegalWord(FString&)", ToCheck); }
	void AddWordTrie(int LetterDepth, int StartWordIndex, int EndWordIndex, int& NumChildrenAdded) { NativeCall<void, int, int, int, int&>(this, "UPrimalWordFilter.AddWordTrie(int,int,int,int&)", LetterDepth, StartWordIndex, EndWordIndex, NumChildrenAdded); }
	bool BinSearchAtIndex(const FString& ForString, int AtIndex, const FLetterNode& CurNode, int& NumLetters, int CurDepth) { return NativeCall<bool, const FString&, int, const FLetterNode&, int&, int>(this, "UPrimalWordFilter.BinSearchAtIndex(FString&,int,FLetterNode&,int&,int)", ForString, AtIndex, CurNode, NumLetters, CurDepth); }
	void PostLoad() { NativeCall<void>(this, "UPrimalWordFilter.PostLoad()"); }
	int GetFirstCensoredIndex(const FString& InString, int StartChar, int* NumLetters) { return NativeCall<int, const FString&, int, int*>(this, "UPrimalWordFilter.GetFirstCensoredIndex(FString&,int,int*)", InString, StartChar, NumLetters); }
	static bool HasBadParseCharacter(const FString& ToCheck, bool allowMultiline) { return NativeCall<bool, const FString&, bool>(nullptr, "UPrimalWordFilter.HasBadParseCharacter(FString&,bool)", ToCheck, allowMultiline); }
	void Process() { NativeCall<void>(this, "UPrimalWordFilter.Process()"); }
};
