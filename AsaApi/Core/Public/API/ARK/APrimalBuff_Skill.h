#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalBuff.h"

struct APrimalBuff_Skill : APrimalBuff
{
public:
	APrimalBuff_Skill() = delete;
	~APrimalBuff_Skill() = delete;
	APrimalBuff_Skill(const APrimalBuff_Skill&) = delete;
	APrimalBuff_Skill& operator=(const APrimalBuff_Skill&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_Skill"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_Skill"); }

	int& SkillRankField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.SkillRank"); }

	void ActivateSkill() { NativeCall<void>(this, "APrimalBuff_Skill.ActivateSkill()"); }
	void OnSkillActivated(bool bInitialActivation) { NativeCall<void, bool>(this, "APrimalBuff_Skill.OnSkillActivated(bool)", bInitialActivation); }
	void SetBuffDurationToSkillDurationModifier(APrimalBuff* OverrideBuffToSetDuration) { NativeCall<void, APrimalBuff*>(this, "APrimalBuff_Skill.SetBuffDurationToSkillDurationModifier(APrimalBuff*)", OverrideBuffToSetDuration); }
	void OnSkillActivated_Implementation(bool bInitialActivation) { NativeCall<void, bool>(this, "APrimalBuff_Skill.OnSkillActivated_Implementation(bool)", bInitialActivation); }

	BitFieldValue<bool, unsigned char> bSkillActivated() { return { this, "APrimalBuff_Skill.bSkillActivated"}; }
	BitFieldValue<bool, unsigned char> bCheckBPCanSkillBeActivatedOnDefaultObject() { return { this, "APrimalBuff_Skill.bCheckBPCanSkillBeActivatedOnDefaultObject"}; }
	BitFieldValue<bool, unsigned char> bCheckBPCanSkillBeActivatedOnExistingBuff() { return { this, "APrimalBuff_Skill.bCheckBPCanSkillBeActivatedOnExistingBuff"}; }

	UObject*& SkillProviderObjectField() { return *GetNativePointerField<UObject**>(this, "APrimalBuff_Skill.SkillProviderObject"); }

	FName& SkillTagField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Skill.SkillTag"); }
	static void GetSkillTag_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_Skill.GetSkillTag_WrapperImpl(void*,void*)", Object, OutValue); }
	FString* BPGetFailureReasonFromActivationResult_Implementation(FString* result, int ActivationResult, FColor& FailureReasonColor) { return NativeCall<FString*, FString*, int, FColor&>(this, "APrimalBuff_Skill.BPGetFailureReasonFromActivationResult_Implementation(int,FColor&)", result, ActivationResult, FailureReasonColor); }
	int BPCanSkillBeActivated_Implementation(ABasePlayerController* RequestingPlayer, FName SkillName, int Rank) { return NativeCall<int, ABasePlayerController*, FName, int>(this, "APrimalBuff_Skill.BPCanSkillBeActivated_Implementation(ABasePlayerController*,FName,int)", RequestingPlayer, SkillName, Rank); }
	FName GetMySkillName_Implementation() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalBuff_Skill.GetMySkillName_Implementation()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	static void SetSkillTag_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_Skill.SetSkillTag_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetSkillProviderObject_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_Skill.SetSkillProviderObject_WrapperImpl(void*,void*)", Object, InValue); }
	bool LocalExecSkillBuffCommand(FName CommandName, const FFunctionParams& Params) { return NativeCall<bool, FName, const FFunctionParams&>(this, "APrimalBuff_Skill.LocalExecSkillBuffCommand(FName,FFunctionParams&)", CommandName, Params); }
	static void GetbSkillActivated_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_Skill.GetbSkillActivated_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetSkillProviderObject_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_Skill.GetSkillProviderObject_WrapperImpl(void*,void*)", Object, OutValue); }
	int BPCanSkillBeActivated(ABasePlayerController* RequestingPlayer, FName SkillName, int Rank) { return NativeCall<int, ABasePlayerController*, FName, int>(this, "APrimalBuff_Skill.BPCanSkillBeActivated(ABasePlayerController*,FName,int)", RequestingPlayer, SkillName, Rank); }
	static void GetSkillRank_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_Skill.GetSkillRank_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetbSkillActivated_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_Skill.SetbSkillActivated_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetSkillRank_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_Skill.SetSkillRank_WrapperImpl(void*,void*)", Object, InValue); }
	bool GetSkillModifier(FName ModifierName, float& OutModifier) { return NativeCall<bool, FName, float&>(this, "APrimalBuff_Skill.GetSkillModifier(FName,float&)", ModifierName, OutModifier); }
};
