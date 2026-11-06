#pragma once
#include "BulkForward.h"
#include "UCheatManagerExtension.h"

struct UPrimalCheatManagerExtension : public UCheatManagerExtension
{
public:
	UPrimalCheatManagerExtension() = delete;
	~UPrimalCheatManagerExtension() = delete;
	UPrimalCheatManagerExtension(const UPrimalCheatManagerExtension&) = delete;
	UPrimalCheatManagerExtension& operator=(const UPrimalCheatManagerExtension&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalCheatManagerExtension"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalCheatManagerExtension"); }

	void JTNN() { NativeCall<void>(this, "UPrimalCheatManagerExtension.JTNN()"); }
	AActor* GetTargetActor() { return NativeCall<AActor*>(this, "UPrimalCheatManagerExtension.GetTargetActor()"); }
	void JTEN(int explorerNoteIndex, bool bOnlyIfUnopened) { NativeCall<void, int, bool>(this, "UPrimalCheatManagerExtension.JTEN(int,bool)", explorerNoteIndex, bOnlyIfUnopened); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllExplorerNoteActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "UPrimalCheatManagerExtension.GetAllExplorerNoteActors()", result); }
	void JumpToExplorerNoteByIndex(int explorerNoteIndex, bool bOnlyIfUnopened) { NativeCall<void, int, bool>(this, "UPrimalCheatManagerExtension.JumpToExplorerNoteByIndex(int,bool)", explorerNoteIndex, bOnlyIfUnopened); }
	void JumpToNextExplorerNote() { NativeCall<void>(this, "UPrimalCheatManagerExtension.JumpToNextExplorerNote()"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllActorsInRadius(TArray<AActor*, TSizedDefaultAllocator<32> >* result, ECheatActorType::Type category, float radius) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, ECheatActorType::Type, float>(this, "UPrimalCheatManagerExtension.GetAllActorsInRadius(ECheatActorType::Type,float)", result, category, radius); }
	AShooterCharacter* GetPlayerCharacter() { return NativeCall<AShooterCharacter*>(this, "UPrimalCheatManagerExtension.GetPlayerCharacter()"); }
	APrimalDinoCharacter* GetRidingDino() { return NativeCall<APrimalDinoCharacter*>(this, "UPrimalCheatManagerExtension.GetRidingDino()"); }
};
