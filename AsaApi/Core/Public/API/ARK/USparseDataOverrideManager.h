#pragma once


struct USparseDataOverrideManager : UObject
{
	// Fields

	FName& ManagerIDField() { return *GetNativePointerField<FName*>(this, "USparseDataOverrideManager.ManagerID"); }

	// Bitfields

	// Functions

	float RiderFlyingRotationRateModifier_Override_Implementation(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.RiderFlyingRotationRateModifier_Override_Implementation(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	float MateBoostRange_Override(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.MateBoostRange_Override(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	bool bUseBabyGestation_Override(bool BaseValue, bool CurrentValue, const UObject* ForInstance) { return NativeCall<bool, bool, bool, const UObject*>(this, "USparseDataOverrideManager.bUseBabyGestation_Override(bool,bool,UObject*)", BaseValue, CurrentValue, ForInstance); }
	int CraftingGivesItemQuantityOverride_Override_Implementation(int BaseValue, int CurrentValue, const UObject* ForInstance) { return NativeCall<int, int, int, const UObject*>(this, "USparseDataOverrideManager.CraftingGivesItemQuantityOverride_Override_Implementation(int,int,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static bool Internal_OverridebUseBabyGestation(bool BaseValue, const UObject* ForInstance) { return NativeCall<bool, bool, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverridebUseBabyGestation(bool,UObject*)", BaseValue, ForInstance); }
	float FemaleMatingTime_Override_Implementation(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.FemaleMatingTime_Override_Implementation(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static int Internal_OverrideCraftingGivesItemQuantityOverride(int BaseValue, const UObject* ForInstance) { return NativeCall<int, int, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideCraftingGivesItemQuantityOverride(int,UObject*)", BaseValue, ForInstance); }
	float MateBoostDamageReceiveMultiplier_Override_Implementation(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.MateBoostDamageReceiveMultiplier_Override_Implementation(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static float Internal_OverrideMateBoostDamageReceiveMultiplier(float BaseValue, const UObject* ForInstance) { return NativeCall<float, float, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideMateBoostDamageReceiveMultiplier(float,UObject*)", BaseValue, ForInstance); }
	float RandomMutationChance_Override_Implementation(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.RandomMutationChance_Override_Implementation(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static TArray<USparseDataOverrideManager*, TSizedDefaultAllocator<32> > GetSparseDataOverrideManagers();
	int RandomMutationRolls_Override(int BaseValue, int CurrentValue, const UObject* ForInstance) { return NativeCall<int, int, int, const UObject*>(this, "USparseDataOverrideManager.RandomMutationRolls_Override(int,int,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static void GetSparseDataOverrideManager(FName SearchForManagerID, bool& bFound, USparseDataOverrideManager** SparseDataOverrideManager) { NativeCall<void, FName, bool&, USparseDataOverrideManager**>(nullptr, "USparseDataOverrideManager.GetSparseDataOverrideManager(FName,bool&,USparseDataOverrideManager*&)", SearchForManagerID, bFound, SparseDataOverrideManager); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUSparseDataOverrideManager();
	bool bUseBabyGestation_Override_Implementation(bool BaseValue, bool CurrentValue, const UObject* ForInstance) { return NativeCall<bool, bool, bool, const UObject*>(this, "USparseDataOverrideManager.bUseBabyGestation_Override_Implementation(bool,bool,UObject*)", BaseValue, CurrentValue, ForInstance); }
	void Init() { NativeCall<void>(this, "USparseDataOverrideManager.Init()"); }
	int CraftingGivesItemQuantityOverride_Override(int BaseValue, int CurrentValue, const UObject* ForInstance) { return NativeCall<int, int, int, const UObject*>(this, "USparseDataOverrideManager.CraftingGivesItemQuantityOverride_Override(int,int,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static float Internal_OverrideRiderFlyingRotationRateModifier(float BaseValue, const UObject* ForInstance) { return NativeCall<float, float, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideRiderFlyingRotationRateModifier(float,UObject*)", BaseValue, ForInstance); }
	float RandomMutationGivePoints_Override_Implementation(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.RandomMutationGivePoints_Override_Implementation(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static bool Internal_OverridebIsAlphaEliteMegaDino(bool BaseValue, const UObject* ForInstance) { return NativeCall<bool, bool, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverridebIsAlphaEliteMegaDino(bool,UObject*)", BaseValue, ForInstance); }
	static int Internal_OverrideRandomMutationRolls(int BaseValue, const UObject* ForInstance) { return NativeCall<int, int, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideRandomMutationRolls(int,UObject*)", BaseValue, ForInstance); }
	bool bIsAlphaEliteMegaDino_Override(bool BaseValue, bool CurrentValue, const UObject* ForInstance) { return NativeCall<bool, bool, bool, const UObject*>(this, "USparseDataOverrideManager.bIsAlphaEliteMegaDino_Override(bool,bool,UObject*)", BaseValue, CurrentValue, ForInstance); }
	float MateBoostDamageGiveMultiplier_Override_Implementation(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.MateBoostDamageGiveMultiplier_Override_Implementation(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	// Unavailable in UE 5.8.3: dependent factory unavailable
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USparseDataOverrideManager"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("USparseDataOverrideManager"); }
	static float Internal_OverrideMateBoostDamageGiveMultiplier(float BaseValue, const UObject* ForInstance) { return NativeCall<float, float, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideMateBoostDamageGiveMultiplier(float,UObject*)", BaseValue, ForInstance); }
	float MateBoostRange_Override_Implementation(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.MateBoostRange_Override_Implementation(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	float RandomMutationChance_Override(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.RandomMutationChance_Override(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static float Internal_OverrideFemaleMatingTime(float BaseValue, const UObject* ForInstance) { return NativeCall<float, float, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideFemaleMatingTime(float,UObject*)", BaseValue, ForInstance); }
	void Init_Implementation() { NativeCall<void>(this, "USparseDataOverrideManager.Init_Implementation()"); }
	float MateBoostDamageReceiveMultiplier_Override(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.MateBoostDamageReceiveMultiplier_Override(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	float FemaleMatingTime_Override(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.FemaleMatingTime_Override(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static float Internal_OverrideRandomMutationChance(float BaseValue, const UObject* ForInstance) { return NativeCall<float, float, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideRandomMutationChance(float,UObject*)", BaseValue, ForInstance); }
	float MateBoostDamageGiveMultiplier_Override(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.MateBoostDamageGiveMultiplier_Override(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	bool bIsAlphaEliteMegaDino_Override_Implementation(bool BaseValue, bool CurrentValue, const UObject* ForInstance) { return NativeCall<bool, bool, bool, const UObject*>(this, "USparseDataOverrideManager.bIsAlphaEliteMegaDino_Override_Implementation(bool,bool,UObject*)", BaseValue, CurrentValue, ForInstance); }
	int RandomMutationRolls_Override_Implementation(int BaseValue, int CurrentValue, const UObject* ForInstance) { return NativeCall<int, int, int, const UObject*>(this, "USparseDataOverrideManager.RandomMutationRolls_Override_Implementation(int,int,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static float Internal_OverrideRandomMutationGivePoints(float BaseValue, const UObject* ForInstance) { return NativeCall<float, float, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideRandomMutationGivePoints(float,UObject*)", BaseValue, ForInstance); }
	float RandomMutationGivePoints_Override(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.RandomMutationGivePoints_Override(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	float RiderFlyingRotationRateModifier_Override(float BaseValue, float CurrentValue, const UObject* ForInstance) { return NativeCall<float, float, float, const UObject*>(this, "USparseDataOverrideManager.RiderFlyingRotationRateModifier_Override(float,float,UObject*)", BaseValue, CurrentValue, ForInstance); }
	static float Internal_OverrideMateBoostRange(float BaseValue, const UObject* ForInstance) { return NativeCall<float, float, const UObject*>(nullptr, "USparseDataOverrideManager.Internal_OverrideMateBoostRange(float,UObject*)", BaseValue, ForInstance); }
};