#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UTimelineTemplate : public UObject
{
public:
	UTimelineTemplate() = delete;
	~UTimelineTemplate() = delete;
	UTimelineTemplate(const UTimelineTemplate&) = delete;
	UTimelineTemplate& operator=(const UTimelineTemplate&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTimelineTemplate"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTimelineTemplate"); }
	float& TimelineLengthField() { return *GetNativePointerField<float*>(this, "UTimelineTemplate.TimelineLength"); }
	FGuid& TimelineGuidField() { return *GetNativePointerField<FGuid*>(this, "UTimelineTemplate.TimelineGuid"); }
	FName& VariableNameField() { return *GetNativePointerField<FName*>(this, "UTimelineTemplate.VariableName"); }
	FName& DirectionPropertyNameField() { return *GetNativePointerField<FName*>(this, "UTimelineTemplate.DirectionPropertyName"); }
	FName& UpdateFunctionNameField() { return *GetNativePointerField<FName*>(this, "UTimelineTemplate.UpdateFunctionName"); }
	FName& FinishedFunctionNameField() { return *GetNativePointerField<FName*>(this, "UTimelineTemplate.FinishedFunctionName"); }
	BitFieldValue<bool, unsigned char> bAutoPlay() { return { this, "UTimelineTemplate.bAutoPlay"}; }
	BitFieldValue<bool, unsigned char> bLoop() { return { this, "UTimelineTemplate.bLoop"}; }
	BitFieldValue<bool, unsigned char> bReplicated() { return { this, "UTimelineTemplate.bReplicated"}; }
	BitFieldValue<bool, unsigned char> bIgnoreTimeDilation() { return { this, "UTimelineTemplate.bIgnoreTimeDilation"}; }
	void PostLoad() { NativeCall<void>(this, "UTimelineTemplate.PostLoad()"); }
	void PostInitProperties() { NativeCall<void>(this, "UTimelineTemplate.PostInitProperties()"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UTimelineTemplate.PostDuplicate(bool)", bDuplicateForPIE); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UTimelineTemplate.Serialize(FArchive&)", Ar); }
	void PostEditImport() { NativeCall<void>(this, "UTimelineTemplate.PostEditImport()"); }
	void UpdateCachedNames() { NativeCall<void>(this, "UTimelineTemplate.UpdateCachedNames()"); }
	static FString* MakeUniqueCurveName(FString* result, UObject* Obj, UObject* InOuter) { return NativeCall<FString*, FString*, UObject*, UObject*>(nullptr, "UTimelineTemplate.MakeUniqueCurveName(UObject*,UObject*)", result, Obj, InOuter); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UTimelineTemplate.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
};
