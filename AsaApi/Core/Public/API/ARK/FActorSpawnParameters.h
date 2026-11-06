#pragma once


struct FActorSpawnParameters
{
	enum ESpawnActorNameMode
	{
		Required_Fatal = 0x0,
		Required_ErrorAndReturnNull = 0x1,
		Required_ReturnNull = 0x2,
		Requested = 0x3,
	};

	FName Name;
	AActor* Template;
	AActor* Owner;
	APawn* Instigator;
	ULevel* OverrideLevel;
	UChildActorComponent* OverrideParentComponent;
	unsigned char SpawnCollisionHandlingOverride[1];
	ESpawnActorScaleMethod TransformScaleMethod;
	unsigned __int8 bRemoteOwned : 1;
	unsigned __int8 bNoFail : 1;
	unsigned __int8 bDeferConstruction : 1;
	unsigned __int8 bWillStasisAfterSpawn : 1;
	unsigned __int8 bDeferBeginPlay : 1;
	unsigned __int8 bAllowDuringConstructionScript : 1;
	FActorSpawnParameters::ESpawnActorNameMode NameMode;
	EObjectFlags ObjectFlags;
	TFunction<void __cdecl(AActor*)> CustomPreSpawnInitalization;
	USceneComponent* AttachToComponent;
	FName AttachToBoneName;
	bool bPrimalDeferConstruction;
	unsigned int ExtraSpawnData;

	FActorSpawnParameters()
		: Name(FName())
		, Template(nullptr)
		, Owner(nullptr)
		, Instigator(nullptr)
		, OverrideLevel(nullptr)
		, OverrideParentComponent(nullptr)
		, NameMode(ESpawnActorNameMode::Required_Fatal)
		, CustomPreSpawnInitalization(nullptr)
		, AttachToComponent(nullptr)
		, AttachToBoneName(FName())
		, bPrimalDeferConstruction(false)
		, SpawnCollisionHandlingOverride{ 0 }
		, TransformScaleMethod(ESpawnActorScaleMethod::MultiplyWithRoot)
		, ObjectFlags(EObjectFlags::RF_Transactional)
	{}
};