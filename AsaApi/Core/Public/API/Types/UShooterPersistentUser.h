#pragma once
#include "../ARK/BulkForward.h"

struct UShooterPersistentUser {
	int& KillsField();
	int& DeathsField();
	int& WinsField();
	int& LossesField();
	int& BulletsFiredField();
	int& RocketsFiredField();
	int& BotsCountField();
	float& GammaField();
	float& AimSensitivityField();
	bool& bInvertedYAxisField();
	bool& bIsDirtyField();
	FString& SlotNameField();
	int& UserIndexField();
	void TellInputAboutKeybindings();
	int GetUserIndex();
	void SaveIfDirty();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterPersistentUser"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterPersistentUser"); }
};