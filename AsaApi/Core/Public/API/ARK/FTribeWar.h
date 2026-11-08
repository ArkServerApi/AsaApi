#pragma once


struct FTribeWar
{
	// Fields

	int& EnemyTribeIDField() { return *GetNativePointerField<int*>(this, "FTribeWar.EnemyTribeID"); }
	int& StartDayNumberField() { return *GetNativePointerField<int*>(this, "FTribeWar.StartDayNumber"); }
	int& EndDayNumberField() { return *GetNativePointerField<int*>(this, "FTribeWar.EndDayNumber"); }
	float& StartDayTimeField() { return *GetNativePointerField<float*>(this, "FTribeWar.StartDayTime"); }
	float& EndDayTimeField() { return *GetNativePointerField<float*>(this, "FTribeWar.EndDayTime"); }
	bool& bIsApprovedField() { return *GetNativePointerField<bool*>(this, "FTribeWar.bIsApproved"); }
	int& InitiatingTribeIDField() { return *GetNativePointerField<int*>(this, "FTribeWar.InitiatingTribeID"); }
	FString& EnemyTribeNameField() { return *GetNativePointerField<FString*>(this, "FTribeWar.EnemyTribeName"); }

	// Bitfields

	// Functions

	bool HasWarStarted(UWorld* ForWorld) { return NativeCall<bool, UWorld*>(this, "FTribeWar.HasWarStarted(UWorld*)", ForWorld); }
	bool CanBeRejected(UWorld* ForWorld) { return NativeCall<bool, UWorld*>(this, "FTribeWar.CanBeRejected(UWorld*)", ForWorld); }
	FString* GetWarTimeString(FString* result, int DayNumber, float DayTime) { return NativeCall<FString*, FString*, int, float>(this, "FTribeWar.GetWarTimeString(int,float)", result, DayNumber, DayTime); }
	bool IsCurrentlyActive(UWorld* ForWorld) const { return NativeCall<bool, UWorld*>(this, "FTribeWar.IsCurrentlyActive(UWorld*)", ForWorld); }
	bool IsTribeWarOn(UWorld* ForWorld) const { return NativeCall<bool, UWorld*>(this, "FTribeWar.IsTribeWarOn(UWorld*)", ForWorld); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FTribeWar>(); }
};