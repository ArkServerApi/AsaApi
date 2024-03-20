#pragma once

#ifdef ARK_EXPORTS
#define ARK_API __declspec(dllexport)
#else
#define ARK_API __declspec(dllimport)
#endif

struct UStruct;

struct FWeakObjectPtr
{
	int ObjectIndex;
	int ObjectSerialNumber;

	void operator=(UObject const* __that) { return NativeCall<void, UObject const*>(this, "FWeakObjectPtr.operator=(UObject*)", __that); }
	UObject* Get(bool bEvenIfPendingKill = false) { return NativeCall<UObject*, bool>(this, "FWeakObjectPtr.Get(bool)", bEvenIfPendingKill); }
	bool IsValid() { return NativeCall<bool>(this, "FWeakObjectPtr.IsValid()"); }
};

template <typename T>
struct TWeakObjectPtr
{
	int ObjectIndex = 0;
	int ObjectSerialNumber = 0;

	FORCEINLINE T& operator*()
	{
		return *Get();
	}

	FORCEINLINE T* operator->()
	{
		return Get();
	}

	T* Get(bool bEvenIfPendingKill = false)
	{
		return NativeCall<T*, bool>(this, "FWeakObjectPtr.Get()", bEvenIfPendingKill);
	}

	FORCEINLINE operator bool()
	{
		return Get() != nullptr;
	}

	FORCEINLINE operator T* ()
	{
		return Get();
	}

	FORCEINLINE bool operator==(const TWeakObjectPtr<T>& __that) const
	{
		return this->ObjectIndex == __that.ObjectIndex
			&& this->ObjectSerialNumber == __that.ObjectSerialNumber;
	}

	TWeakObjectPtr()
	{}

	TWeakObjectPtr(int index, int serialnumber)
		:ObjectIndex(index),
		ObjectSerialNumber(serialnumber)
	{}
};

template <typename T>
TWeakObjectPtr<T> GetWeakReference(T* object)
{
	FWeakObjectPtr tempWeak;
	tempWeak.operator=(object);
	TWeakObjectPtr<T> tempTWeak(tempWeak.ObjectIndex, tempWeak.ObjectSerialNumber);
	return tempTWeak;
}
template <typename T>
using TAutoWeakObjectPtr = TWeakObjectPtr<T>;

template <typename T>
struct TSubclassOf
{
	TSubclassOf()
		: uClass(nullptr)
	{
	}

	TSubclassOf(UClass* uClass)
		: uClass(uClass)
	{
	}

	UClass* uClass;
};

struct FStaticConstructObjectParameters
{
	const UClass* Class;
	UObject* Outer;
	FName Name;
	EObjectFlags SetFlags;
	EInternalObjectFlags InternalSetFlags;
	bool bCopyTransientsFromClassDefaults;
	bool bAssumeTemplateIsArchetype;
	UObject* Template;
	FObjectInstancingGraph* InstanceGraph;
	UPackage* ExternalPackage;
	TFunction<void __cdecl(void)> PropertyInitCallback;
	void* SubobjectOverrides;
};

struct FObjectHandlePrivate
{
	//Stores either FPackedObjectRef or a UObject*
	UPTRINT PointerOrRef;

	explicit inline operator bool() const
	{
		return PointerOrRef != 0;
	}

};

template <typename T>
struct TObjectPtr
{
private:
	FObjectHandlePrivate Handle;
	FORCEINLINE UObject* RealGet() const { return reinterpret_cast<UObject*>(Handle.PointerOrRef); }
public:

	FORCEINLINE T* Get() const { return (T*)(RealGet()); }
	FORCEINLINE T* operator->() const { return Get(); }
	FORCEINLINE T& operator*() const { return *Get(); }
	FORCEINLINE operator bool() const { return Get() != nullptr; }
	FORCEINLINE operator T* () const { return Get(); }
};

template <typename T>
struct TSoftClassPtr
{
private:
	/*FORCEINLINE UClass* Retrieve() const
	{
		static UClass* resolvedClass =  NativeCall<UClass*>(this, "TSoftClassPtr<UObject>.LoadSynchronous()");
		return resolvedClass;
	}*/
public:

	FORCEINLINE UClass* Get() const { return NativeCall<UClass*>(this, "TSoftClassPtr<UObject>.LoadSynchronous()"); }
	FORCEINLINE UClass* operator->() const { return Get(); }
	FORCEINLINE UClass& operator*() const { return *Get(); }
	FORCEINLINE operator bool() const { return Get() != nullptr; }
	FORCEINLINE operator UClass* () const { return Get(); }
};

template <typename T>
struct TSoftObjectPtr
{
private:
	FORCEINLINE UObject* RealGet() const { return NativeCall<UObject*>(this, "TSoftObjectPtr<UObject>.Get()"); }
public:

	FORCEINLINE T* Get() const { return (T*)(RealGet()); }
	FORCEINLINE T* operator->() const { return Get(); }
	FORCEINLINE T& operator*() const { return *Get(); }
	FORCEINLINE operator bool() const { return Get() != nullptr; }
	FORCEINLINE operator T* () const { return Get(); }
};

struct FItemNetID
{
	// Fields

	unsigned int ItemID1;
	unsigned int ItemID2;

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemNetID.StaticStruct()"); }
};

struct UObjectBase
{
	// Fields

	UObjectBase_vtbl*& __vftableField() { return *GetNativePointerField<UObjectBase_vtbl**>(this, "UObjectBase.__vftable"); }
	EObjectFlags& ObjectFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "UObjectBase.ObjectFlags"); }
	int& InternalIndexField() { return *GetNativePointerField<int*>(this, "UObjectBase.InternalIndex"); }
	UClass*& ClassPrivateField() { return *GetNativePointerField<UClass**>(this, "UObjectBase.ClassPrivate"); }
	UClass*& ClassField() { return ClassPrivateField(); }
	FName& NamePrivateField() { return *GetNativePointerField<FName*>(this, "UObjectBase.NamePrivate"); }
	FName& NameField() { return NamePrivateField(); }
	UObject*& OuterPrivateField() { return *GetNativePointerField<UObject**>(this, "UObjectBase.OuterPrivate"); }

	// Bitfields


	// Functions

	//void AtomicallyClearFlags(EObjectFlags FlagsToClear) { NativeCall<void, EObjectFlags>(this, "UObjectBase.AtomicallyClearFlags(EObjectFlags)", FlagsToClear); }
	//void ~UObjectBase() { NativeCall<void>(this, "UObjectBase.~UObjectBase()"); }
	void DeferredRegister(UClass* UClassStaticClass, const wchar_t* PackageName, const wchar_t* InName) { NativeCall<void, UClass*, const wchar_t*, const wchar_t*>(this, "UObjectBase.DeferredRegister(UClass*,wchar_t*,wchar_t*)", UClassStaticClass, PackageName, InName); }
	//void AddObject(FName InName, EInternalObjectFlags InSetInternalFlags, int InInternalIndex, int InSerialNumber) { NativeCall<void, FName, EInternalObjectFlags, int, int>(this, "UObjectBase.AddObject(FName,EInternalObjectFlags,int,int)", InName, InSetInternalFlags, InInternalIndex, InSerialNumber); }
	UPackage* GetExternalPackageInternal() { return NativeCall<UPackage*>(this, "UObjectBase.GetExternalPackageInternal()"); }
	void SetExternalPackage(UPackage* InPackage) { NativeCall<void, UPackage*>(this, "UObjectBase.SetExternalPackage(UPackage*)", InPackage); }
	bool IsValidLowLevel() { return NativeCall<bool>(this, "UObjectBase.IsValidLowLevel()"); }
	bool IsValidLowLevelFast(bool bRecursive) { return NativeCall<bool, bool>(this, "UObjectBase.IsValidLowLevelFast(bool)", bRecursive); }
};

struct UObjectBaseUtility : UObjectBase
{
	// Fields


	  // Bitfields


	  // Functions

	//bool IsA<class UGameEngine>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UGameEngine>()"); }
	//bool IsA<class UClass>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UClass>()"); }
	//bool IsA<class AActor>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AActor>()"); }
	//bool IsA<class ACharacter>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ACharacter>()"); }
	//bool IsA<class ULevel>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ULevel>()"); }
	//bool IsA<class UCapsuleComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UCapsuleComponent>()"); }
	//UNiagaraSystem* GetTypedOuter<class UNiagaraSystem>() { return NativeCall<UNiagaraSystem*>(this, "UObjectBaseUtility.GetTypedOuter<class UNiagaraSystem>()"); }
	//bool IsA<class UActorComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UActorComponent>()"); }
	//bool IsA<class USceneComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USceneComponent>()"); }
	//bool IsA<class UPrimitiveComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimitiveComponent>()"); }
	//USkeletalMeshComponent* GetTypedOuter<class USkeletalMeshComponent>() { return NativeCall<USkeletalMeshComponent*>(this, "UObjectBaseUtility.GetTypedOuter<class USkeletalMeshComponent>()"); }
	//bool IsA<class USkeletalMeshComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USkeletalMeshComponent>()"); }
	//bool IsA<class UStaticMeshComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UStaticMeshComponent>()"); }
	//bool IsA<class UMaterialInterface>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMaterialInterface>()"); }
	//bool IsA<class UObject>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UObject>()"); }
	//bool IsA<class UNiagaraDataInterface>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UNiagaraDataInterface>()"); }
	//UNiagaraEmitter* GetTypedOuter<class UNiagaraEmitter>() { return NativeCall<UNiagaraEmitter*>(this, "UObjectBaseUtility.GetTypedOuter<class UNiagaraEmitter>()"); }
	//bool IsA<class UTextureRenderTarget2DArray>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTextureRenderTarget2DArray>()"); }
	//bool IsA<class UTextureRenderTargetCube>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTextureRenderTargetCube>()"); }
	//bool IsA<class UTexture>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTexture>()"); }
	//bool IsA<class UTextureRenderTarget2D>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTextureRenderTarget2D>()"); }
	//bool IsA<class UTextureRenderTargetVolume>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTextureRenderTargetVolume>()"); }
	//bool IsA<class UTexture2D>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTexture2D>()"); }
	//bool IsA<class UStaticMesh>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UStaticMesh>()"); }
	//bool IsA<class UMaterialInstanceDynamic>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMaterialInstanceDynamic>()"); }
	//bool IsA<class UPackage>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPackage>()"); }
	//bool IsA<class UAnimSequence>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UAnimSequence>()"); }
	//bool IsA<class UAnimMontage>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UAnimMontage>()"); }
	//UMovieScene* GetTypedOuter<class UMovieScene>() { return NativeCall<UMovieScene*>(this, "UObjectBaseUtility.GetTypedOuter<class UMovieScene>()"); }
	//UMovieSceneSequence* GetTypedOuter<class UMovieSceneSequence>() { return NativeCall<UMovieSceneSequence*>(this, "UObjectBaseUtility.GetTypedOuter<class UMovieSceneSequence>()"); }
	//bool IsA<class USkinnedMeshComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USkinnedMeshComponent>()"); }
	//bool IsA<class AVolume>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AVolume>()"); }
	//bool IsA<class UInstancedStaticMeshComponent const>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UInstancedStaticMeshComponent const>()"); }
	//bool IsA<class UBlueprintGeneratedClass>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UBlueprintGeneratedClass>()"); }
	//bool IsA<class USkeletalMesh>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USkeletalMesh>()"); }
	//bool IsA<class UBlueprint>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UBlueprint>()"); }
	//bool IsA<class UMeshComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMeshComponent>()"); }
	//AActor* GetTypedOuter<class AActor>() { return NativeCall<AActor*>(this, "UObjectBaseUtility.GetTypedOuter<class AActor>()"); }
	//bool IsA<class UActorChannel>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UActorChannel>()"); }
	//bool IsA<class UWorld>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UWorld>()"); }
	//bool IsA<class UMaterial>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMaterial>()"); }
	//bool IsA<class UMaterialInstance>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMaterialInstance>()"); }
	//bool IsA<class USkeleton>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USkeleton>()"); }
	//USceneComponent* GetTypedOuter<class USceneComponent>() { return NativeCall<USceneComponent*>(this, "UObjectBaseUtility.GetTypedOuter<class USceneComponent>()"); }
	//bool IsA<class UControlRig>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UControlRig>()"); }
	//bool IsA<class UMovieSceneControlRigParameterSection>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMovieSceneControlRigParameterSection>()"); }
	//bool IsA<class UUserDefinedStruct>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UUserDefinedStruct>()"); }
	//UMovieSceneControlRigParameterTrack* GetTypedOuter<class UMovieSceneControlRigParameterTrack>() { return NativeCall<UMovieSceneControlRigParameterTrack*>(this, "UObjectBaseUtility.GetTypedOuter<class UMovieSceneControlRigParameterTrack>()"); }
	//bool IsA<class UTickableConstraint>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTickableConstraint>()"); }
	//bool IsA<class UGeometryCacheComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UGeometryCacheComponent>()"); }
	//bool IsA<class UOptimusNodeGraph>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UOptimusNodeGraph>()"); }
	//bool IsA<class UMovieSceneSubTrack>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMovieSceneSubTrack>()"); }
	//bool IsA<class UMovieSceneCameraCutSection>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMovieSceneCameraCutSection>()"); }
	//bool IsA<class UMoviePipelineOutputSetting>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMoviePipelineOutputSetting>()"); }
	//bool IsA<class UBoxComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UBoxComponent>()"); }
	//bool IsA<class USphereComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USphereComponent>()"); }
	//bool IsA<class UPCGParamData>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPCGParamData>()"); }
	//bool IsA<class UPCGPointData>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPCGPointData>()"); }
	//bool IsA<class UPCGGraph>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPCGGraph>()"); }
	//bool IsA<class APlayerController>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APlayerController>()"); }
	//ULevelVariantSets* GetTypedOuter<class ULevelVariantSets>() { return NativeCall<ULevelVariantSets*>(this, "UObjectBaseUtility.GetTypedOuter<class ULevelVariantSets>()"); }
	//UWorld* GetTypedOuter<class UWorld>() { return NativeCall<UWorld*>(this, "UObjectBaseUtility.GetTypedOuter<class UWorld>()"); }
	//bool IsA<class APawn>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APawn>()"); }
	//UActorSequenceComponent* GetTypedOuter<class UActorSequenceComponent>() { return NativeCall<UActorSequenceComponent*>(this, "UObjectBaseUtility.GetTypedOuter<class UActorSequenceComponent>()"); }
	//bool IsA<class UScrollBox>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UScrollBox>()"); }
	//bool IsA<class UButton>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UButton>()"); }
	//bool IsA<class UCheckBox>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UCheckBox>()"); }
	//bool IsA<class UEditableTextBox>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UEditableTextBox>()"); }
	//bool IsA<class APrimalDinoAIController>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalDinoAIController>()"); }
	//bool IsA<class APrimalDinoCharacter>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalDinoCharacter>()"); }
	//bool IsA<class AShooterGameMode>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterGameMode>()"); }
	//bool IsA<class APrimalCharacter>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalCharacter>()"); }
	//bool IsA<class UShooterGameInstance>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UShooterGameInstance>()"); }
	//bool IsA<class APrimalWorldSettings>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalWorldSettings>()"); }
	//bool IsA<class UShooterGameUserSettings>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UShooterGameUserSettings>()"); }
	//bool IsA<class UUserWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UUserWidget>()"); }
	//bool IsA<class AShooterWeapon_Projectile>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterWeapon_Projectile>()"); }
	//bool IsA<class APrimalStructureItemContainer_SupplyCrate>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureItemContainer_SupplyCrate>()"); }
	//bool IsA<class AShooterCharacter>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterCharacter>()"); }
	//bool IsA<class APrimalBuff_Companion>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalBuff_Companion>()"); }
	//bool IsA<class AShooterPlayerController>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterPlayerController>()"); }
	//bool IsA<class USizeBox>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USizeBox>()"); }
	//bool IsA<class UTextBlock>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTextBlock>()"); }
	//bool IsA<class UCustomButtonWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UCustomButtonWidget>()"); }
	//bool IsA<class UWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UWidget>()"); }
	//bool IsA<class UImage>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UImage>()"); }
	//bool IsA<class UDinoListButtonWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UDinoListButtonWidget>()"); }
	//bool IsA<class APhysicsVolume>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APhysicsVolume>()"); }
	//bool IsA<class UDataListPanel>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UDataListPanel>()"); }
	//bool IsA<class APrimalStructure>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructure>()"); }
	//bool IsA<class AShooterProjectile>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterProjectile>()"); }
	//bool IsA<class UPanelWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPanelWidget>()"); }
	//bool IsA<class UProgressBar>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UProgressBar>()"); }
	//bool IsA<class UBorder>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UBorder>()"); }
	//bool IsA<class UPrimalItem>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalItem>()"); }
	//bool IsA<class AShooterHUD>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterHUD>()"); }
	//bool IsA<class APrimalBuff_MissionData>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalBuff_MissionData>()"); }
	//bool IsA<class UVerticalBox>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UVerticalBox>()"); }
	//bool IsA<class UPrimalUserWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalUserWidget>()"); }
	//bool IsA<class UPrimalRichTextBlock>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalRichTextBlock>()"); }
	//bool IsA<class UCanvasPanel>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UCanvasPanel>()"); }
	//bool IsA<class APrimalBuff>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalBuff>()"); }
	//bool IsA<class UProgressBarWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UProgressBarWidget>()"); }
	//bool IsA<class UWidgetSwitcher>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UWidgetSwitcher>()"); }
	//bool IsA<class UTrackedDinoListEntryWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UTrackedDinoListEntryWidget>()"); }
	//bool IsA<class AMissionType>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AMissionType>()"); }
	//bool IsA<class UHorizontalBox>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UHorizontalBox>()"); }
	//bool IsA<class AMissionDispatcher>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AMissionDispatcher>()"); }
	//bool IsA<class ADroppedItemMission>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ADroppedItemMission>()"); }
	//bool IsA<class UNavigationSystemV1>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UNavigationSystemV1>()"); }
	//bool IsA<class UMultiUseActionWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMultiUseActionWidget>()"); }
	//bool IsA<class ADroppedItem>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ADroppedItem>()"); }
	//bool IsA<class AController>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AController>()"); }
	//bool IsA<class UShooterDamageType>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UShooterDamageType>()"); }
	//bool IsA<class UParticleSystemComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UParticleSystemComponent>()"); }
	//bool IsA<class UBlendSpace>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UBlendSpace>()"); }
	//bool IsA<class ULevelStreamingDynamic>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ULevelStreamingDynamic>()"); }
	//bool IsA<class APrimalStructureBed>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureBed>()"); }
	//bool IsA<class APrimalStructureTripwire>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureTripwire>()"); }
	//bool IsA<class APrimalStructureItemContainer>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureItemContainer>()"); }
	//bool IsA<class APrimalStructureExplosive>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureExplosive>()"); }
	//bool IsA<class AShooterGameState>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterGameState>()"); }
	//bool IsA<class APrimalStructureItemContainer_CropPlot>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureItemContainer_CropPlot>()"); }
	//bool IsA<class ACustomGameState>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ACustomGameState>()"); }
	//bool IsA<class UPrimalItem_Dye>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalItem_Dye>()"); }
	//bool IsA<class AShooterPlayerState>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterPlayerState>()"); }
	//bool IsA<class AShooterSpectatorPawn>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterSpectatorPawn>()"); }
	//bool IsA<class AHordeCrateManager>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AHordeCrateManager>()"); }
	//bool IsA<class APrimalFoliageSolver>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalFoliageSolver>()"); }
	//bool IsA<class UPrimalPathFollowingComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalPathFollowingComponent>()"); }
	//bool IsA<class UPrimalInventoryComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalInventoryComponent>()"); }
	//bool IsA<class APrimalPawn>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalPawn>()"); }
	//bool IsA<class ANPCZoneManager>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ANPCZoneManager>()"); }
	//bool IsA<class UUI_TribeManager>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UUI_TribeManager>()"); }
	//bool IsA<class UPrimalStaticData_MissionCompanionData>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalStaticData_MissionCompanionData>()"); }
	//bool IsA<class ABasePlayerController>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ABasePlayerController>()"); }
	//bool IsA<class APrimalTargetableActor>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalTargetableActor>()"); }
	//bool IsA<class UPrimalDinoEntry>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalDinoEntry>()"); }
	//bool IsA<class UDataListEntryButton_ListSession>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UDataListEntryButton_ListSession>()"); }
	//bool IsA<class UDataListEntryWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UDataListEntryWidget>()"); }
	//bool IsA<class USlider>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USlider>()"); }
	//bool IsA<class UComboBoxString>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UComboBoxString>()"); }
	//bool IsA<class UMissionBiomeCompletionWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMissionBiomeCompletionWidget>()"); }
	//bool IsA<class UMissionRequirementEntryWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMissionRequirementEntryWidget>()"); }
	//bool IsA<class UMissionTimerWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMissionTimerWidget>()"); }
	//bool IsA<class UUI_PreviewWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UUI_PreviewWidget>()"); }
	//bool IsA<class UGenericDataListEntry>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UGenericDataListEntry>()"); }
	//bool IsA<class UPrimalHarvestingComponent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalHarvestingComponent>()"); }
	//bool IsA<class UDataListValueGeneric>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UDataListValueGeneric>()"); }
	//bool IsA<class APrimalRaft>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalRaft>()"); }
	//bool IsA<class APrimalStructureDoor>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureDoor>()"); }
	//bool IsA<class UPrimalEngramEntry>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UPrimalEngramEntry>()"); }
	//bool IsA<class UDataListEntryButton>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UDataListEntryButton>()"); }
	//bool IsA<class UDataListEntryButton_PrimalFolder>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UDataListEntryButton_PrimalFolder>()"); }
	//bool IsA<class UDataListEntryButton_PrimalItem>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UDataListEntryButton_PrimalItem>()"); }
	//bool IsA<class ABiomeZoneVolume>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ABiomeZoneVolume>()"); }
	//bool IsA<class APrimalStructureWaterPipe>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureWaterPipe>()"); }
	//bool IsA<class APrimalStructureElevatorTrack>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureElevatorTrack>()"); }
	//bool IsA<class APrimalStructureElevatorPlatform>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalStructureElevatorPlatform>()"); }
	//bool IsA<class UUI_MenuCarousel>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UUI_MenuCarousel>()"); }
	//bool IsA<class UAllPaintingsEntryButton>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UAllPaintingsEntryButton>()"); }
	//bool IsA<class USpawnMapWidget>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class USpawnMapWidget>()"); }
	//bool IsA<class AShooterWeapon_InstantPenetrating>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AShooterWeapon_InstantPenetrating>()"); }
	//bool IsA<class ULinkerPlaceholderClass>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ULinkerPlaceholderClass>()"); }
	//bool IsA<class ULinkerPlaceholderFunction>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ULinkerPlaceholderFunction>()"); }
	//bool IsA<class UFunction>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UFunction>()"); }
	//bool IsA<class UStruct>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UStruct>()"); }
	FPackageFileVersion* GetLinkerUEVersion(FPackageFileVersion* result) { return NativeCall<FPackageFileVersion*, FPackageFileVersion*>(this, "UObjectBaseUtility.GetLinkerUEVersion(FPackageFileVersion*)", result); }
	static __int64 GetLinkerCustomVersion() { return NativeCall<__int64>(nullptr, "UObjectBaseUtility.GetLinkerCustomVersion()"); }
	//bool IsA<class UField>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UField>()"); }
	//UClass* GetTypedOuter<class UClass>() { return NativeCall<UClass*>(this, "UObjectBaseUtility.GetTypedOuter<class UClass>()"); }
	FString* GetPathName(FString* result, const UObject* StopOuter) { return NativeCall<FString*, FString*, const UObject*>(this, "UObjectBaseUtility.GetPathName(FString&,UObject*)", result, StopOuter); }
	void GetPathName(const UObject* StopOuter, FString* ResultString) { NativeCall<void, const UObject*, FString*>(this, "UObjectBaseUtility.GetPathName(UObject*,FString&)", StopOuter, ResultString); }
	void GetPathName(const UObject* StopOuter, TStringBuilderBase<wchar_t>* ResultString) { NativeCall<void, const UObject*, TStringBuilderBase<wchar_t>*>(this, "UObjectBaseUtility.GetPathName(UObject*,TStringBuilderBase<wchar_t>*)", StopOuter, ResultString); }
	//FString* GetFullName(FString* result, const UObject* StopOuter, EObjectFullNameFlags Flags) { return NativeCall<FString*, FString*, const UObject*, EObjectFullNameFlags>(this, "UObjectBaseUtility.GetFullName(FString&,UObject*,EObjectFullNameFlags)", result, StopOuter, Flags); }
	//void GetFullName(const UObject* StopOuter, FString* ResultString, EObjectFullNameFlags Flags) { NativeCall<void, const UObject*, FString*, EObjectFullNameFlags>(this, "UObjectBaseUtility.GetFullName(UObject*,FString&,EObjectFullNameFlags)", StopOuter, ResultString, Flags); }
	FString* GetFullGroupName(FString* result, bool bStartWithOuter) { return NativeCall<FString*, FString*, bool>(this, "UObjectBaseUtility.GetFullGroupName(FString&,bool)", result, bStartWithOuter); }
	UObject* GetOutermostObject() { return NativeCall<UObject*>(this, "UObjectBaseUtility.GetOutermostObject()"); }
	UPackage* GetPackage() { return NativeCall<UPackage*>(this, "UObjectBaseUtility.GetPackage()"); }
	bool MarkPackageDirty() { return NativeCall<bool>(this, "UObjectBaseUtility.MarkPackageDirty()"); }
	//bool IsTemplate(EObjectFlags TemplateTypes) { return NativeCall<bool, EObjectFlags>(this, "UObjectBaseUtility.IsTemplate(EObjectFlags)", TemplateTypes); }
	UObject* GetTypedOuter(UClass* Target) { return NativeCall<UObject*, UClass*>(this, "UObjectBaseUtility.GetTypedOuter(UClass*)", Target); }
	bool IsIn(const UObject* SomeOuter) { return NativeCall<bool, const UObject*>(this, "UObjectBaseUtility.IsIn(UObject*)", SomeOuter); }
	bool IsInPackage(const UPackage* SomePackage) { return NativeCall<bool, const UPackage*>(this, "UObjectBaseUtility.IsInPackage(UPackage*)", SomePackage); }
	void* GetInterfaceAddress(UClass* InterfaceClass) { return NativeCall<void*, UClass*>(this, "UObjectBaseUtility.GetInterfaceAddress(UClass*)", InterfaceClass); }
	bool IsDefaultSubobject() { return NativeCall<bool>(this, "UObjectBaseUtility.IsDefaultSubobject()"); }
	void AddToCluster(UObjectBaseUtility* ClusterRootOrObjectFromCluster, bool bAddAsMutableObject) { NativeCall<void, UObjectBaseUtility*, bool>(this, "UObjectBaseUtility.AddToCluster(UObjectBaseUtility*,bool)", ClusterRootOrObjectFromCluster, bAddAsMutableObject); }
	bool CanBeInCluster() { return NativeCall<bool>(this, "UObjectBaseUtility.CanBeInCluster()"); }
	void CreateCluster() { NativeCall<void>(this, "UObjectBaseUtility.CreateCluster()"); }
	FLinkerLoad* GetLinker() { return NativeCall<FLinkerLoad*>(this, "UObjectBaseUtility.GetLinker()"); }
	int GetLinkerIndex() { return NativeCall<int>(this, "UObjectBaseUtility.GetLinkerIndex()"); }
	//UMovieSceneTrack* GetTypedOuter<class UMovieSceneTrack>() { return NativeCall<UMovieSceneTrack*>(this, "UObjectBaseUtility.GetTypedOuter<class UMovieSceneTrack>()"); }
	//IMovieSceneBlenderSystemSupport* GetImplementingOuter<class IMovieSceneBlenderSystemSupport>() { return NativeCall<IMovieSceneBlenderSystemSupport*>(this, "UObjectBaseUtility.GetImplementingOuter<class IMovieSceneBlenderSystemSupport>()"); }
	//UMovieScenePropertyTrack* GetTypedOuter<class UMovieScenePropertyTrack>() { return NativeCall<UMovieScenePropertyTrack*>(this, "UObjectBaseUtility.GetTypedOuter<class UMovieScenePropertyTrack>()"); }
	//UMovieSceneEventTrack* GetTypedOuter<class UMovieSceneEventTrack>() { return NativeCall<UMovieSceneEventTrack*>(this, "UObjectBaseUtility.GetTypedOuter<class UMovieSceneEventTrack>()"); }
	//UMovieSceneSkeletalAnimationTrack* GetTypedOuter<class UMovieSceneSkeletalAnimationTrack>() { return NativeCall<UMovieSceneSkeletalAnimationTrack*>(this, "UObjectBaseUtility.GetTypedOuter<class UMovieSceneSkeletalAnimationTrack>()"); }
	//bool IsA<class ALevelScriptActor>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ALevelScriptActor>()"); }
	//bool IsA<class UMaterialParameterCollectionInstance>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class UMaterialParameterCollectionInstance>()"); }
	//UMovieScene2DTransformTrack* GetTypedOuter<class UMovieScene2DTransformTrack>() { return NativeCall<UMovieScene2DTransformTrack*>(this, "UObjectBaseUtility.GetTypedOuter<class UMovieScene2DTransformTrack>()"); }
	//UUserWidget* GetTypedOuter<class UUserWidget>() { return NativeCall<UUserWidget*>(this, "UObjectBaseUtility.GetTypedOuter<class UUserWidget>()"); }
	//ULevel* GetTypedOuter<class ULevel>() { return NativeCall<ULevel*>(this, "UObjectBaseUtility.GetTypedOuter<class ULevel>()"); }
	//bool IsA<class APrimalGameMode>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class APrimalGameMode>()"); }
	//bool IsA<class ULevelStreamingPersistent>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class ULevelStreamingPersistent>()"); }
	//bool IsA<class AWorldSettings>() { return NativeCall<bool>(this, "UObjectBaseUtility.IsA<class AWorldSettings>()"); }
};

struct UClass;
struct UProperty;

struct UObject : UObjectBaseUtility
{
	// Fields


	  // Bitfields


	  // Functions

	bool ProcessConsoleExec(const wchar_t* Cmd, FOutputDevice* Ar, UObject* Executor) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UObject*>(this, "UObject.ProcessConsoleExec(wchar_t*,FOutputDevice*,UObject*)", Cmd, Ar, Executor); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "UObject.GetDetailedInfoInternal(FString&)", result); }
	//void ~UObject() { NativeCall<void>(this, "UObject.~UObject()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UObject.StaticClass()"); }
	//unsigned __int64 GetResourceSizeBytes(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UObject.GetResourceSizeBytes(EResourceSizeMode::Type)", Mode); }
	bool AreAllOuterObjectsValid() { return NativeCall<bool>(this, "UObject.AreAllOuterObjectsValid()"); }
	bool IsInBlueprint() { return NativeCall<bool>(this, "UObject.IsInBlueprint()"); }
	bool IsBasedOnArchetype(const UObject* const SomeObject) { return NativeCall<bool, const UObject* const>(this, "UObject.IsBasedOnArchetype(UObject*const)", SomeObject); }
	UObject* CreateDefaultSubobject(FName SubobjectFName, UClass* ReturnType, UClass* ClassToCreateByDefault, bool bIsRequired, bool bIsTransient) { return NativeCall<UObject*, FName, UClass*, UClass*, bool, bool>(this, "UObject.CreateDefaultSubobject(FName,UClass*,UClass*,bool,bool)", SubobjectFName, ReturnType, ClassToCreateByDefault, bIsRequired, bIsTransient); }
	UObject* GetDefaultSubobjectByName(FName ToFind) { return NativeCall<UObject*, FName>(this, "UObject.GetDefaultSubobjectByName(FName)", ToFind); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UObject.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
	void PostLoad() { NativeCall<void>(this, "UObject.PostLoad()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UObject.NeedsLoadForServer()"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UObject.NeedsLoadForClient()"); }
	void BeginDestroy() { NativeCall<void>(this, "UObject.BeginDestroy()"); }
	void FinishDestroy() { NativeCall<void>(this, "UObject.FinishDestroy()"); }
	FString* GetDetailedInfo(FString* result) { return NativeCall<FString*, FString*>(this, "UObject.GetDetailedInfo()", result); }
	bool ConditionalBeginDestroy() { return NativeCall<bool>(this, "UObject.ConditionalBeginDestroy()"); }
	bool ConditionalFinishDestroy() { return NativeCall<bool>(this, "UObject.ConditionalFinishDestroy()"); }
	void ConditionalPostLoad() { NativeCall<void>(this, "UObject.ConditionalPostLoad()"); }
	void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph*>(this, "UObject.PostLoadSubobjects(FObjectInstancingGraph*)", OuterInstanceGraph); }
	void ConditionalPostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph*>(this, "UObject.ConditionalPostLoadSubobjects(FObjectInstancingGraph*)", OuterInstanceGraph); }
	//void PreSave(FObjectPreSaveContext SaveContext) { NativeCall<void, FObjectPreSaveContext>(this, "UObject.PreSave(FObjectPreSaveContext)", SaveContext); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >* OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UObject.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>*)", OutDeps); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UObject.Serialize(FStructuredArchiveRecord)", Record); }
	void SerializeScriptProperties(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UObject.SerializeScriptProperties(FArchive*)", Ar); }
	void SerializeScriptProperties(FStructuredArchiveSlot Slot) { NativeCall<void, FStructuredArchiveSlot>(this, "UObject.SerializeScriptProperties(FStructuredArchiveSlot)", Slot); }
	void BuildSubobjectMapping(UObject* OtherObject, TMap<UObject*, UObject*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UObject*, UObject*, 0> >* ObjectMapping) { NativeCall<void, UObject*, TMap<UObject*, UObject*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UObject*, UObject*, 0> >*>(this, "UObject.BuildSubobjectMapping(UObject*,TMap<UObject*,UObject*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject*,UObject*,0>>*)", OtherObject, ObjectMapping); }
	void CollectDefaultSubobjects(TArray<UObject*, TSizedDefaultAllocator<32> >* OutSubobjectArray, bool bIncludeNestedSubobjects) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*, bool>(this, "UObject.CollectDefaultSubobjects(TArray<UObject*,TSizedDefaultAllocator<32>>*,bool)", OutSubobjectArray, bIncludeNestedSubobjects); }
	bool CheckDefaultSubobjects(bool bForceCheck) { return NativeCall<bool, bool>(this, "UObject.CheckDefaultSubobjects(bool)", bForceCheck); }
	bool CheckDefaultSubobjectsInternal() { return NativeCall<bool>(this, "UObject.CheckDefaultSubobjectsInternal()"); }
	//void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag, TSizedDefaultAllocator<32> >* OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag, TSizedDefaultAllocator<32> >*>(this, "UObject.GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>>*)", OutTags); }
	void GetAssetRegistryTags(FAssetData* Out) { NativeCall<void, FAssetData*>(this, "UObject.GetAssetRegistryTags(FAssetData*)", Out); }
	static const FName* AssetVersePathTagName() { return NativeCall<const FName*>(nullptr, "UObject.AssetVersePathTagName()"); }
	void GetResourceSizeEx(FResourceSizeEx* CumulativeResourceSize) { NativeCall<void, FResourceSizeEx*>(this, "UObject.GetResourceSizeEx(FResourceSizeEx*)", CumulativeResourceSize); }
	bool IsAsset() { return NativeCall<bool>(this, "UObject.IsAsset()"); }
	FPrimaryAssetId* GetPrimaryAssetId(FPrimaryAssetId* result) { return NativeCall<FPrimaryAssetId*, FPrimaryAssetId*>(this, "UObject.GetPrimaryAssetId(FPrimaryAssetId*)", result); }
	bool IsLocalizedResource() { return NativeCall<bool>(this, "UObject.IsLocalizedResource()"); }
	bool IsSafeForRootSet() { return NativeCall<bool>(this, "UObject.IsSafeForRootSet()"); }
	//void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UObject.TagSubobjects(EObjectFlags)", NewFlags); }
	void LoadConfig(UClass* ConfigClass, const wchar_t* InFilename, unsigned int PropagationFlags, FProperty* PropertyToLoad) { NativeCall<void, UClass*, const wchar_t*, unsigned int, FProperty*>(this, "UObject.LoadConfig(UClass*,wchar_t*,unsignedint,FProperty*)", ConfigClass, InFilename, PropagationFlags, PropertyToLoad); }
	void SaveConfig(unsigned __int64 Flags, const wchar_t* InFilename, FConfigCacheIni* Config, bool bAllowCopyToDefaultObject) { NativeCall<void, unsigned __int64, const wchar_t*, FConfigCacheIni*, bool>(this, "UObject.SaveConfig(unsigned__int64,wchar_t*,FConfigCacheIni*,bool)", Flags, InFilename, Config, bAllowCopyToDefaultObject); }
	FString* GetDefaultConfigFilename(FString* result) { return NativeCall<FString*, FString*>(this, "UObject.GetDefaultConfigFilename(FString&)", result); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UObject.IsNameStableForNetworking()"); }
	bool IsFullNameStableForNetworking() { return NativeCall<bool>(this, "UObject.IsFullNameStableForNetworking()"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "UObject.IsSupportedForNetworking()"); }
	void LocalizeProperty(UObject* LocBase, TArray<FString, TSizedDefaultAllocator<32> >* PropertyTagChain, FProperty* const BaseProperty, FProperty* const Property, void* const ValueAddress) { NativeCall<void, UObject*, TArray<FString, TSizedDefaultAllocator<32> >*, FProperty* const, FProperty* const, void* const>(this, "UObject.LocalizeProperty(UObject*,TArray<FString,TSizedDefaultAllocator<32>>*,FProperty*const,FProperty*const,void*const)", LocBase, PropertyTagChain, BaseProperty, Property, ValueAddress); }
	void SkipFunction(FFrame* Stack, void* const Z_Param__Result, UFunction* Function) { NativeCall<void, FFrame*, void* const, UFunction*>(this, "UObject.SkipFunction(FFrame*,void*const,UFunction*)", Stack, Z_Param__Result, Function); }
	void CallFunction(FFrame* Stack, void* const Z_Param__Result, UFunction* Function) { NativeCall<void, FFrame*, void* const, UFunction*>(this, "UObject.CallFunction(FFrame*,void*const,UFunction*)", Stack, Z_Param__Result, Function); }
	static void ProcessInternal(UObject* Context, FFrame* Stack, void* const Z_Param__Result) { NativeCall<void, UObject*, FFrame*, void* const>(nullptr, "UObject.ProcessInternal(UObject*,FFrame*,void*const)", Context, Stack, Z_Param__Result); }
	bool CallFunctionByNameWithArguments(const wchar_t* Str, FOutputDevice* Ar, UObject* Executor, bool bForceCallWithNonExec) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UObject*, bool>(this, "UObject.CallFunctionByNameWithArguments(wchar_t*,FOutputDevice*,UObject*,bool)", Str, Ar, Executor, bForceCallWithNonExec); }
	UFunction* FindFunctionChecked(FName InName, EIncludeSuperFlag::Type a3 = EIncludeSuperFlag::IncludeSuper) { return NativeCall<UFunction*, FName, EIncludeSuperFlag::Type>(this, "UObject.FindFunctionChecked(FName)", InName, a3); }
	void ProcessEvent(UFunction* Function, void* Parms) { NativeCall<void, UFunction*, void*>(this, "UObject.ProcessEvent(UFunction*,void*)", Function, Parms); }
	void ProcessContextOpcode(FFrame* Stack, void* const Z_Param__Result, bool bCanFailSilently) { NativeCall<void, FFrame*, void* const, bool>(this, "UObject.ProcessContextOpcode(FFrame*,void*const,bool)", Stack, Z_Param__Result, bCanFailSilently); }
	//void execIntZero(FBehaviorTreeSearchData* SearchData, EBTNodeResult::Type* NodeResult) { NativeCall<void, FBehaviorTreeSearchData*, EBTNodeResult::Type*>(this, "UObject.execIntZero(FBehaviorTreeSearchData*,EBTNodeResult::Type*)", SearchData, NodeResult); }
	UObject* GetArchetype() { return NativeCall<UObject*>(this, "UObject.GetArchetype()"); }
	bool IsInOrOwnedBy(const UObject* SomeOuter) { return NativeCall<bool, const UObject*>(this, "UObject.IsInOrOwnedBy(UObject*)", SomeOuter); }
	//void UObject() { NativeCall<void>(this, "UObject.UObject()"); }
	void SetLinker(FLinkerLoad* LinkerLoad, int LinkerIndex, bool bShouldDetachExisting) { NativeCall<void, FLinkerLoad*, int, bool>(this, "UObject.SetLinker(FLinkerLoad*,int,bool)", LinkerLoad, LinkerIndex, bShouldDetachExisting); }

	ARK_API FProperty* FindProperty(FName name);
};

struct UField : UObject
{
	// Fields

	UField*& NextField() { return *GetNativePointerField<UField**>(this, "UField.Next"); }

	// Bitfields


	// Functions

	UClass* GetOwnerClass() { return NativeCall<UClass*>(this, "UField.GetOwnerClass()"); }
	UStruct* GetOwnerStruct() { return NativeCall<UStruct*>(this, "UField.GetOwnerStruct()"); }
	FString* GetAuthoredName(FString* result) { return NativeCall<FString*, FString*>(this, "UField.GetAuthoredName(FString&)", result); }
	void PostLoad() { NativeCall<void>(this, "UField.PostLoad()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UField.Serialize(FArchive*)", Ar); }
	void AddCppProperty(FProperty* Property) { NativeCall<void, FProperty*>(this, "UField.AddCppProperty(FProperty*)", Property); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UField.GetPrivateStaticClass()"); }
};

struct UStruct : UField
{
	// Fields

	UStruct*& SuperStructField() { return *GetNativePointerField<UStruct**>(this, "UStruct.SuperStruct"); }
	UField*& ChildrenField() { return *GetNativePointerField<UField**>(this, "UStruct.Children"); }
	FField*& ChildPropertiesField() { return *GetNativePointerField<FField**>(this, "UStruct.ChildProperties"); }
	int& PropertiesSizeField() { return *GetNativePointerField<int*>(this, "UStruct.PropertiesSize"); }
	int& MinAlignmentField() { return *GetNativePointerField<int*>(this, "UStruct.MinAlignment"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& ScriptField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UStruct.Script"); }
	FProperty*& PropertyLinkField() { return *GetNativePointerField<FProperty**>(this, "UStruct.PropertyLink"); }
	FProperty*& RefLinkField() { return *GetNativePointerField<FProperty**>(this, "UStruct.RefLink"); }
	FProperty*& DestructorLinkField() { return *GetNativePointerField<FProperty**>(this, "UStruct.DestructorLink"); }
	FProperty*& PostConstructLinkField() { return *GetNativePointerField<FProperty**>(this, "UStruct.PostConstructLink"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& ScriptAndPropertyObjectReferencesField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UStruct.ScriptAndPropertyObjectReferences"); }

	// Bitfields


	// Functions

	bool IsChildOf(const UStruct* SomeBase) { return NativeCall<bool, const UStruct*>(this, "UStruct.IsChildOf(UStruct*)", SomeBase); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UStruct.StaticClass()"); }
	void SerializeTaggedProperties(FArchive* Ar, unsigned __int8* Data, UStruct* DefaultsStruct, unsigned __int8* Defaults, const UObject* BreakRecursionIfFullyLoad) { NativeCall<void, FArchive*, unsigned __int8*, UStruct*, unsigned __int8*, const UObject*>(this, "UStruct.SerializeTaggedProperties(FArchive*,unsigned__int8*,UStruct*,unsigned__int8*,UObject*)", Ar, Data, DefaultsStruct, Defaults, BreakRecursionIfFullyLoad); }
	void SerializeBin(FArchive* Ar, void* Data) { NativeCall<void, FArchive*, void*>(this, "UStruct.SerializeBin(FArchive*,void*)", Ar, Data); }
	const wchar_t* GetPrefixCPP() { return NativeCall<const wchar_t*>(this, "UStruct.GetPrefixCPP()"); }
	//bool IsChildOf<class UClass>() { return NativeCall<bool>(this, "UStruct.IsChildOf<class UClass>()"); }
	void AddCppProperty(FProperty* Property) { NativeCall<void, FProperty*>(this, "UStruct.AddCppProperty(FProperty*)", Property); }
	void StaticLink(bool bRelinkExistingProperties) { NativeCall<void, bool>(this, "UStruct.StaticLink(bool)", bRelinkExistingProperties); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >* OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UStruct.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>*)", OutDeps); }
	void CollectBytecodeReferencedObjects(TArray<UObject*, TSizedDefaultAllocator<32> >* OutReferencedObjects) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UStruct.CollectBytecodeReferencedObjects(TArray<UObject*,TSizedDefaultAllocator<32>>*)", OutReferencedObjects); }
	void PreloadChildren(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UStruct.PreloadChildren(FArchive*)", Ar); }
	void Link(FArchive* Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive*, bool>(this, "UStruct.Link(FArchive*,bool)", Ar, bRelinkExistingProperties); }
	void InitializeStruct(void* InDest, int ArrayDim) { NativeCall<void, void*, int>(this, "UStruct.InitializeStruct(void*,int)", InDest, ArrayDim); }
	void DestroyStruct(void* Dest, int ArrayDim) { NativeCall<void, void*, int>(this, "UStruct.DestroyStruct(void*,int)", Dest, ArrayDim); }
	void SerializeBin(FStructuredArchiveSlot Slot, void* Data) { NativeCall<void, FStructuredArchiveSlot, void*>(this, "UStruct.SerializeBin(FStructuredArchiveSlot,void*)", Slot, Data); }
	void SerializeBinEx(FStructuredArchiveSlot Slot, void* Data, const void* DefaultData, UStruct* DefaultStruct) { NativeCall<void, FStructuredArchiveSlot, void*, const void*, UStruct*>(this, "UStruct.SerializeBinEx(FStructuredArchiveSlot,void*,void*,UStruct*)", Slot, Data, DefaultData, DefaultStruct); }
	void SerializeTaggedProperties(FStructuredArchiveSlot Slot, unsigned __int8* Data, UStruct* DefaultsStruct, unsigned __int8* Defaults, const UObject* BreakRecursionIfFullyLoad) { NativeCall<void, FStructuredArchiveSlot, unsigned __int8*, UStruct*, unsigned __int8*, const UObject*>(this, "UStruct.SerializeTaggedProperties(FStructuredArchiveSlot,unsigned__int8*,UStruct*,unsigned__int8*,UObject*)", Slot, Data, DefaultsStruct, Defaults, BreakRecursionIfFullyLoad); }
	void SerializeVersionedTaggedProperties(FStructuredArchiveSlot Slot, unsigned __int8* Data, UStruct* DefaultsStruct, unsigned __int8* Defaults, const UObject* BreakRecursionIfFullyLoad) { NativeCall<void, FStructuredArchiveSlot, unsigned __int8*, UStruct*, unsigned __int8*, const UObject*>(this, "UStruct.SerializeVersionedTaggedProperties(FStructuredArchiveSlot,unsigned__int8*,UStruct*,unsigned__int8*,UObject*)", Slot, Data, DefaultsStruct, Defaults, BreakRecursionIfFullyLoad); }
	void FinishDestroy() { NativeCall<void>(this, "UStruct.FinishDestroy()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UStruct.Serialize(FStructuredArchiveRecord)", Record); }
	void SerializeProperties(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UStruct.SerializeProperties(FArchive*)", Ar); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UStruct.Serialize(FArchive*)", Ar); }
	void PostLoad() { NativeCall<void>(this, "UStruct.PostLoad()"); }
	void SetSuperStruct(UStruct* NewSuperStruct) { NativeCall<void, UStruct*>(this, "UStruct.SetSuperStruct(UStruct*)", NewSuperStruct); }
	FString* PropertyNameToDisplayName(FString* result, FName InName) { return NativeCall<FString*, FString*, FName>(this, "UStruct.PropertyNameToDisplayName(FString&,FName)", result, InName); }
	FString* GetAuthoredNameForField(FString* result, const UField* Field) { return NativeCall<FString*, FString*, const UField*>(this, "UStruct.GetAuthoredNameForField(FString&,UField*)", result, Field); }
	FString* GetAuthoredNameForField(FString* result, const FField* Field) { return NativeCall<FString*, FString*, const FField*>(this, "UStruct.GetAuthoredNameForField(FString&,FField*)", result, Field); }
	EExprToken SerializeExpr(int* iCode, FArchive* Ar) { return NativeCall<EExprToken, int*, FArchive*>(this, "UStruct.SerializeExpr(int*,FArchive*)", iCode, Ar); }
	FProperty* FindPropertyByName(FName InName) { return NativeCall<FProperty*, FName>(this, "UStruct.FindPropertyByName(FName)", InName); }
};

struct UFunction : UStruct
{
	unsigned int FunctionFlags;
	unsigned __int16 RepOffset;
	char NumParms;
	unsigned __int16 ParmsSize;
	unsigned __int16 ReturnValueOffset;
	unsigned __int16 RPCId;
	unsigned __int16 RPCResponseId;
	UProperty* FirstPropertyToInit;
};

struct UClass : UStruct
{
	// Fields
	int& ClassUniqueField() { return *GetNativePointerField<int*>(this, "UClass.ClassUnique"); }
	int& FirstOwnedClassRepField() { return *GetNativePointerField<int*>(this, "UClass.FirstOwnedClassRep"); }
	bool& bLayoutChangingField() { return *GetNativePointerField<bool*>(this, "UClass.bLayoutChanging"); }
	EClassFlags& ClassFlagsField() { return *GetNativePointerField<EClassFlags*>(this, "UClass.ClassFlags"); }
	EClassCastFlags& ClassCastFlagsField() { return *GetNativePointerField<EClassCastFlags*>(this, "UClass.ClassCastFlags"); }
	UClass*& ClassWithinField() { return *GetNativePointerField<UClass**>(this, "UClass.ClassWithin"); }
	FName& ClassConfigNameField() { return *GetNativePointerField<FName*>(this, "UClass.ClassConfigName"); }
	TArray<FRepRecord, TSizedDefaultAllocator<32> >& ClassRepsField() { return *GetNativePointerField<TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "UClass.ClassReps"); }
	TArray<UField*, TSizedDefaultAllocator<32> >& NetFieldsField() { return *GetNativePointerField<TArray<UField*, TSizedDefaultAllocator<32> >*>(this, "UClass.NetFields"); }
	UObject*& ClassDefaultObjectField() { return *GetNativePointerField<UObject**>(this, "UClass.ClassDefaultObject"); }
	void*& SparseClassDataField() { return *GetNativePointerField<void**>(this, "UClass.SparseClassData"); }
	UScriptStruct*& SparseClassDataStructField() { return *GetNativePointerField<UScriptStruct**>(this, "UClass.SparseClassDataStruct"); }
	TMap<FName, UFunction*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UFunction*, 0> >& FuncMapField() { return *GetNativePointerField<TMap<FName, UFunction*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UFunction*, 0> >*>(this, "UClass.FuncMap"); }
	FWindowsRWLock& FuncMapLockField() { return *GetNativePointerField<FWindowsRWLock*>(this, "UClass.FuncMapLock"); }
	TMap<FName, UFunction*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UFunction*, 0> >& SuperFuncMapField() { return *GetNativePointerField<TMap<FName, UFunction*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UFunction*, 0> >*>(this, "UClass.SuperFuncMap"); }
	FWindowsRWLock& SuperFuncMapLockField() { return *GetNativePointerField<FWindowsRWLock*>(this, "UClass.SuperFuncMapLock"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsGameClass() { return { this, "UClass.bIsGameClass" }; }
	BitFieldValue<bool, unsigned __int32> bCheckedForLocalize() { return { this, "UClass.bCheckedForLocalize" }; }
	BitFieldValue<bool, unsigned __int32> bHasLocalized() { return { this, "UClass.bHasLocalized" }; }

	// Functions

	UObject* GetDefaultObject(bool bCreateIfNeeded) { return NativeCall<UObject*, bool>(this, "UClass.GetDefaultObject(bool)", bCreateIfNeeded); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UClass.GetPrivateStaticClass()"); }
	void SerializeDefaultObject(UObject* Object, FArchive* Ar) { NativeCall<void, UObject*, FArchive*>(this, "UClass.SerializeDefaultObject(UObject*,FArchive*)", Object, Ar); }
	void PostLoadDefaultObject(UObject* Object) { NativeCall<void, UObject*>(this, "UClass.PostLoadDefaultObject(UObject*)", Object); }
	void PostInitProperties() { NativeCall<void>(this, "UClass.PostInitProperties()"); }
	UObject* GetDefaultSubobjectByName(FName ToFind) { return NativeCall<UObject*, FName>(this, "UClass.GetDefaultSubobjectByName(FName)", ToFind); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UClass.AddReferencedObjects(UObject*,FReferenceCollector*)", InThis, Collector); }
	UObject* CreateDefaultObject() { return NativeCall<UObject*>(this, "UClass.CreateDefaultObject()"); }
	static FFeedbackContext* GetDefaultPropertiesFeedbackContext() { return NativeCall<FFeedbackContext*>(nullptr, "UClass.GetDefaultPropertiesFeedbackContext()"); }
	FName* GetDefaultObjectName(FName* result) { return NativeCall<FName*, FName*>(this, "UClass.GetDefaultObjectName(FName*)", result); }
	void DeferredRegister(UClass* UClassStaticClass, const wchar_t* PackageName, const wchar_t* Name) { NativeCall<void, UClass*, const wchar_t*, const wchar_t*>(this, "UClass.DeferredRegister(UClass*,wchar_t*,wchar_t*)", UClassStaticClass, PackageName, Name); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UClass.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
	void Bind() { NativeCall<void>(this, "UClass.Bind()"); }
	const wchar_t* GetPrefixCPP() { return NativeCall<const wchar_t*>(this, "UClass.GetPrefixCPP()"); }
	void FinishDestroy() { NativeCall<void>(this, "UClass.FinishDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "UClass.PostLoad()"); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >* OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UClass.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>*)", OutDeps); }
	void Link(FArchive* Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive*, bool>(this, "UClass.Link(FArchive*,bool)", Ar, bRelinkExistingProperties); }
	void SetUpRuntimeReplicationData() { NativeCall<void>(this, "UClass.SetUpRuntimeReplicationData()"); }
	void ValidateRuntimeReplicationData() { NativeCall<void>(this, "UClass.ValidateRuntimeReplicationData()"); }
	void SetSuperStruct(UStruct* NewSuperStruct) { NativeCall<void, UStruct*>(this, "UClass.SetSuperStruct(UStruct*)", NewSuperStruct); }
	bool IsStructTrashed() { return NativeCall<bool>(this, "UClass.IsStructTrashed()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UClass.Serialize(FArchive*)", Ar); }
	bool ImplementsInterface(const UClass* SomeInterface) { return NativeCall<bool, const UClass*>(this, "UClass.ImplementsInterface(UClass*)", SomeInterface); }
	void SerializeDefaultObject(UObject* Object, FStructuredArchiveSlot Slot) { NativeCall<void, UObject*, FStructuredArchiveSlot>(this, "UClass.SerializeDefaultObject(UObject*,FStructuredArchiveSlot)", Object, Slot); }
	void SerializeSparseClassData(FStructuredArchiveSlot Slot) { NativeCall<void, FStructuredArchiveSlot>(this, "UClass.SerializeSparseClassData(FStructuredArchiveSlot)", Slot); }
	const void* GetArchetypeForSparseClassData() { return NativeCall<const void*>(this, "UClass.GetArchetypeForSparseClassData()"); }
	UObject* GetArchetypeForCDO() { return NativeCall<UObject*>(this, "UClass.GetArchetypeForCDO()"); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>(this, "UClass.PurgeClass(bool)", bRecompilingOnLoad); }
	bool HasProperty(FProperty* InProperty) { return NativeCall<bool, FProperty*>(this, "UClass.HasProperty(FProperty*)", InProperty); }
	void* CreateSparseClassData() { return NativeCall<void*>(this, "UClass.CreateSparseClassData()"); }
	void CleanupSparseClassData() { NativeCall<void>(this, "UClass.CleanupSparseClassData()"); }
	const void* GetSparseClassData(const EGetSparseClassDataMethod GetMethod) { return NativeCall<const void*, const EGetSparseClassDataMethod>(this, "UClass.GetSparseClassData(EGetSparseClassDataMethod)", GetMethod); }
	void SetSparseClassDataStruct(UScriptStruct* InSparseClassDataStruct) { NativeCall<void, UScriptStruct*>(this, "UClass.SetSparseClassDataStruct(UScriptStruct*)", InSparseClassDataStruct); }
	void ClearFunctionMapsCaches() { NativeCall<void>(this, "UClass.ClearFunctionMapsCaches()"); }
	UFunction* FindFunctionByName(FName InName, EIncludeSuperFlag::Type IncludeSuper) { return NativeCall<UFunction*, FName, EIncludeSuperFlag::Type>(this, "UClass.FindFunctionByName(FName,EIncludeSuperFlag::Type)", InName, IncludeSuper); }
	static void AssembleReferenceTokenStreams() { NativeCall<void>(nullptr, "UClass.AssembleReferenceTokenStreams()"); }
	const FString* GetConfigName(const FString* result) { return NativeCall<const FString*, const FString*>(this, "UClass.GetConfigName(FString&)", result); }
	//static UField* TryFindTypeSlow(UClass* TypeClass, const FString* InPathNameOrShortName, EFindFirstObjectOptions InOptions) { return NativeCall<UField*, UClass*, const FString*, EFindFirstObjectOptions>(nullptr, "UClass.TryFindTypeSlow(UClass*,FString&,EFindFirstObjectOptions)", TypeClass, InPathNameOrShortName, InOptions); }
	void AssembleReferenceTokenStream(bool bForce) { NativeCall<void, bool>(this, "UClass.AssembleReferenceTokenStream(bool)", bForce); }
	void AssembleReferenceTokenStreamInternal(bool bForce) { NativeCall<void, bool>(this, "UClass.AssembleReferenceTokenStreamInternal(bool)", bForce); }
};

struct UProperty
{

};

struct FField
{
	// Fields

	//FField_vtbl*& __vftableField() { return *GetNativePointerField<FField_vtbl**>(this, "FField.__vftable"); }
	//FFieldClass*& ClassPrivateField() { return *GetNativePointerField<FFieldClass**>(this, "FField.ClassPrivate"); }
	//FFieldVariant& OwnerField() { return *GetNativePointerField<FFieldVariant*>(this, "FField.Owner"); }
	FField*& NextField() { return *GetNativePointerField<FField**>(this, "FField.Next"); }
	FName& NamePrivateField() { return *GetNativePointerField<FName*>(this, "FField.NamePrivate"); }
	EObjectFlags& FlagsPrivateField() { return *GetNativePointerField<EObjectFlags*>(this, "FField.FlagsPrivate"); }

	// Bitfields


	// Functions

	//bool IsA<class FBoolProperty>() { return NativeCall<bool>(this, "FField.IsA<class FBoolProperty>()"); }
	//bool IsA(const FFieldClass* FieldType) { return NativeCall<bool, const FFieldClass*>(this, "FField.IsA(FFieldClass*)", FieldType); }
	//bool IsA<class FDoubleProperty>() { return NativeCall<bool>(this, "FField.IsA<class FDoubleProperty>()"); }
	//bool IsA<class FIntProperty>() { return NativeCall<bool>(this, "FField.IsA<class FIntProperty>()"); }
	UObject* GetOwner() { return NativeCall<UObject*>(this, "FField.GetOwner<class UObject>()"); }
	//UClass* GetOwnerClass() { return NativeCall<UClass*>(this, "FField.GetOwner<class UClass>()"); }
	//static FFieldClass* StaticClass() { return NativeCall<FFieldClass*>(nullptr, "FField.StaticClass()"); }
	UClass* GetOwnerClass() { return NativeCall<UClass*>(this, "FField.GetOwnerClass()"); }
	UStruct* GetOwnerStruct() { return NativeCall<UStruct*>(this, "FField.GetOwnerStruct()"); }
	UPackage* GetOutermost() { return NativeCall<UPackage*>(this, "FField.GetOutermost()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FField.Serialize(FArchive*)", Ar); }
	void AddReferencedObjects(FReferenceCollector* Collector) { NativeCall<void, FReferenceCollector*>(this, "FField.AddReferencedObjects(FReferenceCollector*)", Collector); }
	bool IsNative() { return NativeCall<bool>(this, "FField.IsNative()"); }
	FLinkerLoad* GetLinker() { return NativeCall<FLinkerLoad*>(this, "FField.GetLinker()"); }
	void AddCppProperty(FProperty* Property) { NativeCall<void, FProperty*>(this, "FField.AddCppProperty(FProperty*)", Property); }
	FString* GetPathName(FString* result, const UObject* StopOuter) { return NativeCall<FString*, FString*, const UObject*>(this, "FField.GetPathName(FString&,UObject*)", result, StopOuter); }
	void GetPathName(const UObject* StopOuter, TStringBuilderBase<wchar_t>* ResultString) { NativeCall<void, const UObject*, TStringBuilderBase<wchar_t>*>(this, "FField.GetPathName(UObject*,TStringBuilderBase<wchar_t>*)", StopOuter, ResultString); }
	FString* GetFullName(FString* result) { return NativeCall<FString*, FString*>(this, "FField.GetFullName(FString&)", result); }
	FString* GetAuthoredName(FString* result) { return NativeCall<FString*, FString*>(this, "FField.GetAuthoredName(FString&)", result); }
	//static FField* Construct(const FName* FieldTypeName, const FFieldVariant* InOwner, const FName* InName, EObjectFlags InFlags) { return NativeCall<FField*, const FName*, const FFieldVariant*, const FName*, EObjectFlags>(nullptr, "FField.Construct(FName*,FFieldVariant*,FName*,EObjectFlags)", FieldTypeName, InOwner, InName, InFlags); }
};

struct FProperty : FField
{
	// Fields

	int& ArrayDimField() { return *GetNativePointerField<int*>(this, "FProperty.ArrayDim"); }
	int& ElementSizeField() { return *GetNativePointerField<int*>(this, "FProperty.ElementSize"); }
	EPropertyFlags& PropertyFlagsField() { return *GetNativePointerField<EPropertyFlags*>(this, "FProperty.PropertyFlags"); }
	unsigned __int16& RepIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FProperty.RepIndex"); }
	int& Offset_InternalField() { return *GetNativePointerField<int*>(this, "FProperty.Offset_Internal"); }
	FName& RepNotifyFuncField() { return *GetNativePointerField<FName*>(this, "FProperty.RepNotifyFunc"); }
	FProperty*& PropertyLinkNextField() { return *GetNativePointerField<FProperty**>(this, "FProperty.PropertyLinkNext"); }
	FProperty*& NextRefField() { return *GetNativePointerField<FProperty**>(this, "FProperty.NextRef"); }
	FProperty*& DestructorLinkNextField() { return *GetNativePointerField<FProperty**>(this, "FProperty.DestructorLinkNext"); }
	FProperty*& PostConstructLinkNextField() { return *GetNativePointerField<FProperty**>(this, "FProperty.PostConstructLinkNext"); }

	// Bitfields


	// Functions

	const wchar_t* ImportText_Direct(const wchar_t* Buffer, void* PropertyPtr, UObject* OwnerObject, int PortFlags, FOutputDevice* ErrorText) { return NativeCall<const wchar_t*, const wchar_t*, void*, UObject*, int, FOutputDevice*>(this, "FProperty.ImportText_Direct(wchar_t*,void*,UObject*,int,FOutputDevice*)", Buffer, PropertyPtr, OwnerObject, PortFlags, ErrorText); }
	static void operator delete(void* InMem) { NativeCall<void, void*>(nullptr, "FProperty.operator delete(void*)", InMem); }
	const wchar_t* ImportText_Internal(const wchar_t* Buffer, void* ContainerOrPropertyPtr, EPropertyPointerType PointerType, UObject* OwnerObject, int PortFlags, FOutputDevice* ErrorText) { return NativeCall<const wchar_t*, const wchar_t*, void*, EPropertyPointerType, UObject*, int, FOutputDevice*>(this, "FProperty.ImportText_Internal(wchar_t*,void*,EPropertyPointerType,UObject*,int,FOutputDevice*)", Buffer, ContainerOrPropertyPtr, PointerType, OwnerObject, PortFlags, ErrorText); }
	FString* GetCPPType(FString* result, FString* ExtendedTypeText, unsigned int CPPExportFlags) { return NativeCall<FString*, FString*, FString*, unsigned int>(this, "FProperty.GetCPPType(FString&,FString&,unsignedint)", result, ExtendedTypeText, CPPExportFlags); }
	bool Identical(const void* A, const void* B, unsigned int PortFlags) { return NativeCall<bool, const void*, const void*, unsigned int>(this, "FProperty.Identical(void*,void*,unsignedint)", A, B, PortFlags); }
	void SerializeItem(FStructuredArchiveSlot Slot, void* Value, const void* Defaults) { NativeCall<void, FStructuredArchiveSlot, void*, const void*>(this, "FProperty.SerializeItem(FStructuredArchiveSlot,void*,void*)", Slot, Value, Defaults); }
	FString* GetCPPTypeForwardDeclaration(FString* result) { return NativeCall<FString*, FString*>(this, "FProperty.GetCPPTypeForwardDeclaration(FString&)", result); }
	void ExportText_Internal(FString* ValueStr, const void* PropertyValueOrContainer, EPropertyPointerType PointerType, const void* DefaultValue, UObject* Parent, int PortFlags, UObject* ExportRootScope) { NativeCall<void, FString*, const void*, EPropertyPointerType, const void*, UObject*, int, UObject*>(this, "FProperty.ExportText_Internal(FString&,void*,EPropertyPointerType,void*,UObject*,int,UObject*)", ValueStr, PropertyValueOrContainer, PointerType, DefaultValue, Parent, PortFlags, ExportRootScope); }
	void ExportTextItem(FString* ValueStr, const void* PropertyValue, const void* DefaultValue, UObject* Parent, int PortFlags, UObject* ExportRootScope) { NativeCall<void, FString*, const void*, const void*, UObject*, int, UObject*>(this, "FProperty.ExportTextItem(FString&,void*,void*,UObject*,int,UObject*)", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	const wchar_t* ImportText(const wchar_t* Buffer, void* Data, int PortFlags, UObject* OwnerObject, FOutputDevice* ErrorText) { return NativeCall<const wchar_t*, const wchar_t*, void*, int, UObject*, FOutputDevice*>(this, "FProperty.ImportText(wchar_t*,void*,int,UObject*,FOutputDevice*)", Buffer, Data, PortFlags, OwnerObject, ErrorText); }
	void SerializeBinProperty(FStructuredArchiveSlot Slot, void* Data, int ArrayIdx) { NativeCall<void, FStructuredArchiveSlot, void*, int>(this, "FProperty.SerializeBinProperty(FStructuredArchiveSlot,void*,int)", Slot, Data, ArrayIdx); }
	int Link(FArchive* Ar) { return NativeCall<int, FArchive*>(this, "FProperty.Link(FArchive*)", Ar); }
	const wchar_t* ImportText_InContainer(const wchar_t* Buffer, void* Container, UObject* OwnerObject, int PortFlags, FOutputDevice* ErrorText) { return NativeCall<const wchar_t*, const wchar_t*, void*, UObject*, int, FOutputDevice*>(this, "FProperty.ImportText_InContainer(wchar_t*,void*,UObject*,int,FOutputDevice*)", Buffer, Container, OwnerObject, PortFlags, ErrorText); }
	//static FField* Construct(const FFieldVariant* InOwner, const FName* InName, EObjectFlags InFlags) { return NativeCall<FField*, const FFieldVariant*, const FName*, EObjectFlags>(nullptr, "FProperty.Construct(FFieldVariant*,FName*,EObjectFlags)", InOwner, InName, InFlags); }
	//static FFieldClass* StaticClass() { return NativeCall<FFieldClass*>(nullptr, "FProperty.StaticClass()"); }
	//static void FProperty() { NativeCall<void>(nullptr, "FProperty.FProperty()"); }
	//static void FProperty() { NativeCall<void>(nullptr, "FProperty.FProperty()"); }
	void Init() { NativeCall<void>(this, "FProperty.Init()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FProperty.Serialize(FArchive*)", Ar); }
	void PostDuplicate(const FField* InField) { NativeCall<void, const FField*>(this, "FProperty.PostDuplicate(FField*)", InField); }
	void CopyCompleteValueFromScriptVM(void* Dest, const void* Src) { NativeCall<void, void*, const void*>(this, "FProperty.CopyCompleteValueFromScriptVM(void*,void*)", Dest, Src); }
	void CopyCompleteValueToScriptVM_InContainer(void* OutValue, const void* InContainer) { NativeCall<void, void*, const void*>(this, "FProperty.CopyCompleteValueToScriptVM_InContainer(void*,void*)", OutValue, InContainer); }
	void CopyCompleteValueFromScriptVM_InContainer(void* OutContainer, const void* InValue) { NativeCall<void, void*, const void*>(this, "FProperty.CopyCompleteValueFromScriptVM_InContainer(void*,void*)", OutContainer, InValue); }
	bool ValidateImportFlags(unsigned int PortFlags, FOutputDevice* ErrorHandler) { return NativeCall<bool, unsigned int, FOutputDevice*>(this, "FProperty.ValidateImportFlags(unsignedint,FOutputDevice*)", PortFlags, ErrorHandler); }
	FString* GetNameCPP(FString* result) { return NativeCall<FString*, FString*>(this, "FProperty.GetNameCPP(FString&)", result); }
	FString* GetCPPMacroType(FString* result, FString* ExtendedTypeText) { return NativeCall<FString*, FString*, FString*>(this, "FProperty.GetCPPMacroType(FString&,FString&)", result, ExtendedTypeText); }
	bool ExportText_Direct(FString* ValueStr, const void* Data, const void* Delta, UObject* Parent, int PortFlags, UObject* ExportRootScope) { return NativeCall<bool, FString*, const void*, const void*, UObject*, int, UObject*>(this, "FProperty.ExportText_Direct(FString&,void*,void*,UObject*,int,UObject*)", ValueStr, Data, Delta, Parent, PortFlags, ExportRootScope); }
	bool ShouldSerializeValue(FArchive* Ar) { return NativeCall<bool, FArchive*>(this, "FProperty.ShouldSerializeValue(FArchive*)", Ar); }
	bool NetSerializeItem(FArchive* Ar, UPackageMap* Map, void* Data, TArray<unsigned char, TSizedDefaultAllocator<32> >* MetaData) { return NativeCall<bool, FArchive*, UPackageMap*, void*, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FProperty.NetSerializeItem(FArchive*,UPackageMap*,void*,TArray<unsignedchar,TSizedDefaultAllocator<32>>*)", Ar, Map, Data, MetaData); }
	bool ShouldPort(unsigned int PortFlags) { return NativeCall<bool, unsigned int>(this, "FProperty.ShouldPort(unsignedint)", PortFlags); }
	FName* GetID(FName* result) { return NativeCall<FName*, FName*>(this, "FProperty.GetID(FName*)", result); }
	bool SameType(const FProperty* Other) { return NativeCall<bool, const FProperty*>(this, "FProperty.SameType(FProperty*)", Other); }
	void* AllocateAndInitializeValue() { return NativeCall<void*>(this, "FProperty.AllocateAndInitializeValue()"); }
	void DestroyAndFreeValue(void* InMemory) { NativeCall<void, void*>(this, "FProperty.DestroyAndFreeValue(void*)", InMemory); }
	void* GetValueAddressAtIndex_Direct(const FProperty* Inner, void* InValueAddress, int Index) { return NativeCall<void*, const FProperty*, void*, int>(this, "FProperty.GetValueAddressAtIndex_Direct(FProperty*,void*,int)", Inner, InValueAddress, Index); }
	//static const wchar_t* ImportSingleProperty(const wchar_t* Str, void* DestData, UStruct* ObjectStruct, UObject* SubobjectOuter, int PortFlags, FOutputDevice* Warn, TArray<FDefinedProperty, TSizedDefaultAllocator<32> >* DefinedProperties) { return NativeCall<const wchar_t*, const wchar_t*, void*, UStruct*, UObject*, int, FOutputDevice*, TArray<FDefinedProperty, TSizedDefaultAllocator<32> >*>(nullptr, "FProperty.ImportSingleProperty(wchar_t*,void*,UStruct*,UObject*,int,FOutputDevice*,TArray<FDefinedProperty,TSizedDefaultAllocator<32>>*)", Str, DestData, ObjectStruct, SubobjectOuter, PortFlags, Warn, DefinedProperties); }
	static FName* FindRedirectedPropertyName(FName* result, UStruct* ObjectStruct, FName OldName) { return NativeCall<FName*, FName*, UStruct*, FName>(nullptr, "FProperty.FindRedirectedPropertyName(FName*,UStruct*,FName)", result, ObjectStruct, OldName); }

	template<typename T>
	T& Get(UObject* object)
	{
		if (!object->ClassPrivateField()->HasProperty(this))
			throw std::invalid_argument("Object does not contain this property.");
		if (sizeof(T) != this->ElementSizeField())
			throw std::invalid_argument(this->NamePrivateField().ToString().ToString() + " - " + "Expected size does not match property size.");
		return *((T*)(object + this->Offset_InternalField()));
	}

	template<typename T>
	void Set(UObject* object, T value)
	{
		if (!object->ClassPrivateField()->HasProperty(this))
			throw std::invalid_argument("Object does not contain this property.");
		if (sizeof(T) != this->ElementSizeField())
			throw std::invalid_argument(this->NamePrivateField().ToString().ToString() + " - " + "Expected size does not match property size.");
		*((T*)(object + this->Offset_InternalField())) = value;
	}
};

struct UScriptStruct : UStruct {};

struct UStreamableRenderAsset : UObject
{
	// Fields

	//TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload, TSizedDefaultAllocator<32> >& MipChangeCallbacksField() { return *GetNativePointerField<TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload, TSizedDefaultAllocator<32> >*>(this, "UStreamableRenderAsset.MipChangeCallbacks"); }
	//TRefCountPtr<FRenderAssetUpdate>& PendingUpdateField() { return *GetNativePointerField<TRefCountPtr<FRenderAssetUpdate>*>(this, "UStreamableRenderAsset.PendingUpdate"); }
	long double& ForceMipLevelsToBeResidentTimestampField() { return *GetNativePointerField<long double*>(this, "UStreamableRenderAsset.ForceMipLevelsToBeResidentTimestamp"); }
	int& NumCinematicMipLevelsField() { return *GetNativePointerField<int*>(this, "UStreamableRenderAsset.NumCinematicMipLevels"); }
	//FPerQualityLevelInt& NoRefStreamingLODBiasField() { return *GetNativePointerField<FPerQualityLevelInt*>(this, "UStreamableRenderAsset.NoRefStreamingLODBias"); }
	int& StreamingIndexField() { return *GetNativePointerField<int*>(this, "UStreamableRenderAsset.StreamingIndex"); }
	//FStreamableRenderResourceState& CachedSRRStateField() { return *GetNativePointerField<FStreamableRenderResourceState*>(this, "UStreamableRenderAsset.CachedSRRState"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> NeverStream() { return { this, "UStreamableRenderAsset.NeverStream" }; }
	BitFieldValue<bool, unsigned __int32> bGlobalForceMipLevelsToBeResident() { return { this, "UStreamableRenderAsset.bGlobalForceMipLevelsToBeResident" }; }
	BitFieldValue<bool, unsigned __int32> bHasStreamingUpdatePending() { return { this, "UStreamableRenderAsset.bHasStreamingUpdatePending" }; }
	BitFieldValue<bool, unsigned __int32> bForceMiplevelsToBeResident() { return { this, "UStreamableRenderAsset.bForceMiplevelsToBeResident" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreStreamingMipBias() { return { this, "UStreamableRenderAsset.bIgnoreStreamingMipBias" }; }
	BitFieldValue<bool, unsigned __int32> bUseCinematicMipLevels() { return { this, "UStreamableRenderAsset.bUseCinematicMipLevels" }; }

	// Functions

	void ResizeGrow(int OldNum) { NativeCall<void, int>(this, "UStreamableRenderAsset.ResizeGrow(int)", OldNum); }
	bool StreamIn(int NewMipCount, bool bHighPrio) { return NativeCall<bool, int, bool>(this, "UStreamableRenderAsset.StreamIn(int,bool)", NewMipCount, bHighPrio); }
	bool StreamOut(int NewMipCount) { return NativeCall<bool, int>(this, "UStreamableRenderAsset.StreamOut(int)", NewMipCount); }
	int CalcCumulativeLODSize(int NumLODs) { return NativeCall<int, int>(this, "UStreamableRenderAsset.CalcCumulativeLODSize(int)", NumLODs); }
	bool ShouldMipLevelsBeForcedResident() { return NativeCall<bool>(this, "UStreamableRenderAsset.ShouldMipLevelsBeForcedResident()"); }
	float GetLastRenderTimeForStreaming() { return NativeCall<float>(this, "UStreamableRenderAsset.GetLastRenderTimeForStreaming()"); }
	bool DoesMipDataExist(const int MipIndex) { return NativeCall<bool, const int>(this, "UStreamableRenderAsset.DoesMipDataExist(int)", MipIndex); }
	unsigned int GetMipIoFilenameHash(const int MipIndex) { return NativeCall<unsigned int, const int>(this, "UStreamableRenderAsset.GetMipIoFilenameHash(int)", MipIndex); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UStreamableRenderAsset.StaticClass()"); }
	static void StaticRegisterNativesUStreamableRenderAsset() { NativeCall<void>(nullptr, "UStreamableRenderAsset.StaticRegisterNativesUStreamableRenderAsset()"); }
	//void UStreamableRenderAsset(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UStreamableRenderAsset.UStreamableRenderAsset(FObjectInitializer*)", ObjectInitializer); }
	//void ~UStreamableRenderAsset() { NativeCall<void>(this, "UStreamableRenderAsset.~UStreamableRenderAsset()"); }
	void TickMipLevelChangeCallbacks(TArray<UStreamableRenderAsset*, TSizedDefaultAllocator<32> >* DeferredTickCBAssets) { NativeCall<void, TArray<UStreamableRenderAsset*, TSizedDefaultAllocator<32> >*>(this, "UStreamableRenderAsset.TickMipLevelChangeCallbacks(TArray<UStreamableRenderAsset*,TSizedDefaultAllocator<32>>*)", DeferredTickCBAssets); }
	void TickStreaming(bool bSendCompletionEvents, TArray<UStreamableRenderAsset*, TSizedDefaultAllocator<32> >* DeferredTickCBAssets) { NativeCall<void, bool, TArray<UStreamableRenderAsset*, TSizedDefaultAllocator<32> >*>(this, "UStreamableRenderAsset.TickStreaming(bool,TArray<UStreamableRenderAsset*,TSizedDefaultAllocator<32>>*)", bSendCompletionEvents, DeferredTickCBAssets); }
	void SetForceMipLevelsToBeResident(float Seconds, int CinematicLODGroupMask) { NativeCall<void, float, int>(this, "UStreamableRenderAsset.SetForceMipLevelsToBeResident(float,int)", Seconds, CinematicLODGroupMask); }
	bool HasPendingInitOrStreaming(bool bWaitForLODTransition) { return NativeCall<bool, bool>(this, "UStreamableRenderAsset.HasPendingInitOrStreaming(bool)", bWaitForLODTransition); }
	void LinkStreaming() { NativeCall<void>(this, "UStreamableRenderAsset.LinkStreaming()"); }
	void UnlinkStreaming() { NativeCall<void>(this, "UStreamableRenderAsset.UnlinkStreaming()"); }
	void WaitForPendingInitOrStreaming(bool bWaitForLODTransition, bool bSendCompletionEvents) { NativeCall<void, bool, bool>(this, "UStreamableRenderAsset.WaitForPendingInitOrStreaming(bool,bool)", bWaitForLODTransition, bSendCompletionEvents); }
	void BeginDestroy() { NativeCall<void>(this, "UStreamableRenderAsset.BeginDestroy()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UStreamableRenderAsset.IsReadyForFinishDestroy()"); }
	//void FLODStreamingCallbackPayload, class TSizedDefaultAllocator<32 >> () { NativeCall<void>(this, "UStreamableRenderAsset.FLODStreamingCallbackPayload,class TSizedDefaultAllocator<32>>()"); }
	void RemoveAtSwapImpl(int Index, int Count, bool bAllowShrinking) { NativeCall<void, int, int, bool>(this, "UStreamableRenderAsset.RemoveAtSwapImpl(int,int,bool)", Index, Count, bAllowShrinking); }
	void RemoveAtImpl(int Index, int Count, bool bAllowShrinking) { NativeCall<void, int, int, bool>(this, "UStreamableRenderAsset.RemoveAtImpl(int,int,bool)", Index, Count, bAllowShrinking); }
};

struct UTexture : UStreamableRenderAsset
{
	// Fields

	FGuid& LightingGuidField() { return *GetNativePointerField<FGuid*>(this, "UTexture.LightingGuid"); }
	int& LevelIndexField() { return *GetNativePointerField<int*>(this, "UTexture.LevelIndex"); }
	//FPerPlatformInt& LODBiasField() { return *GetNativePointerField<FPerPlatformInt*>(this, "UTexture.LODBias"); }
	TEnumAsByte<enum TextureFilter>& FilterField() { return *GetNativePointerField<TEnumAsByte<enum TextureFilter>*>(this, "UTexture.Filter"); }
	TEnumAsByte<enum TextureCookPlatformTilingSettings>& CookPlatformTilingSettingsField() { return *GetNativePointerField<TEnumAsByte<enum TextureCookPlatformTilingSettings>*>(this, "UTexture.CookPlatformTilingSettings"); }
	//FPerPlatformFloat& DownscaleField() { return *GetNativePointerField<FPerPlatformFloat*>(this, "UTexture.Downscale"); }
	//TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >& AssetUserDataField() { return *GetNativePointerField<TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >*>(this, "UTexture.AssetUserData"); }
	//FTextureResource*& PrivateResourceField() { return *GetNativePointerField<FTextureResource**>(this, "UTexture.PrivateResource"); }
	//FTextureResource*& PrivateResourceRenderThreadField() { return *GetNativePointerField<FTextureResource**>(this, "UTexture.PrivateResourceRenderThread"); }
	//FTextureResource*& PrivateResourceToDeleteField() { return *GetNativePointerField<FTextureResource**>(this, "UTexture.PrivateResourceToDelete"); }
	//TFieldPtrAccessor<FTextureResource>& ResourceField() { return *GetNativePointerField<TFieldPtrAccessor<FTextureResource>*>(this, "UTexture.Resource"); }
	//FTextureReference*& TextureReferenceField() { return *GetNativePointerField<FTextureReference**>(this, "UTexture.TextureReference"); }
	FRenderCommandFence& ReleaseFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UTexture.ReleaseFence"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> SRGB() { return { this, "UTexture.SRGB" }; }
	BitFieldValue<bool, unsigned __int32> bNoTiling() { return { this, "UTexture.bNoTiling" }; }
	BitFieldValue<bool, unsigned __int32> VirtualTextureStreaming() { return { this, "UTexture.VirtualTextureStreaming" }; }
	BitFieldValue<bool, unsigned __int32> CompressionYCoCg() { return { this, "UTexture.CompressionYCoCg" }; }
	BitFieldValue<bool, unsigned __int32> bNotOfflineProcessed() { return { this, "UTexture.bNotOfflineProcessed" }; }
	BitFieldValue<bool, unsigned __int32> bAsyncResourceReleaseHasBeenStarted() { return { this, "UTexture.bAsyncResourceReleaseHasBeenStarted" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UTexture.GetPrivateStaticClass()"); }
	const FString* GetAssetUserDataArray() { return NativeCall<const FString*>(this, "UTexture.GetAssetUserDataArray()"); }
	EMaterialValueType GetMaterialType() { return NativeCall<EMaterialValueType>(this, "UTexture.GetMaterialType()"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTexture.CreateResource()"); }
	int GetCachedLODBias() { return NativeCall<int>(this, "UTexture.GetCachedLODBias()"); }
	static void StaticRegisterNativesUTexture() { NativeCall<void>(nullptr, "UTexture.StaticRegisterNativesUTexture()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UTexture.Serialize(FStructuredArchiveRecord)", Record); }
	//void UTexture(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UTexture.UTexture(FObjectInitializer*)", ObjectInitializer); }
	const FTextureResource* GetResource() { return NativeCall<const FTextureResource*>(this, "UTexture.GetResource()"); }
	//void ~UTexture() { NativeCall<void>(this, "UTexture.~UTexture()"); }
	void ReleaseResource() { NativeCall<void>(this, "UTexture.ReleaseResource()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UTexture.Serialize(FArchive*)", Ar); }
	void PostLoad() { NativeCall<void>(this, "UTexture.PostLoad()"); }
	void BeginFinalReleaseResource() { NativeCall<void>(this, "UTexture.BeginFinalReleaseResource()"); }
	void BeginDestroy() { NativeCall<void>(this, "UTexture.BeginDestroy()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UTexture.IsReadyForFinishDestroy()"); }
	void FinishDestroy() { NativeCall<void>(this, "UTexture.FinishDestroy()"); }
	//void PreSave(FObjectPreSaveContext ObjectSaveContext) { NativeCall<void, FObjectPreSaveContext>(this, "UTexture.PreSave(FObjectPreSaveContext)", ObjectSaveContext); }
	unsigned int GetMipIoFilenameHash(const int MipIndex) { return NativeCall<unsigned int, const int>(this, "UTexture.GetMipIoFilenameHash(int)", MipIndex); }
	bool DoesMipDataExist(const int MipIndex) { return NativeCall<bool, const int>(this, "UTexture.DoesMipDataExist(int)", MipIndex); }
	bool HasPendingRenderResourceInitialization() { return NativeCall<bool>(this, "UTexture.HasPendingRenderResourceInitialization()"); }
	bool HasPendingLODTransition() { return NativeCall<bool>(this, "UTexture.HasPendingLODTransition()"); }
	float GetLastRenderTimeForStreaming() { return NativeCall<float>(this, "UTexture.GetLastRenderTimeForStreaming()"); }
	void InvalidateLastRenderTimeForStreaming() { NativeCall<void>(this, "UTexture.InvalidateLastRenderTimeForStreaming()"); }
	bool ShouldMipLevelsBeForcedResident() { return NativeCall<bool>(this, "UTexture.ShouldMipLevelsBeForcedResident()"); }
	static void CancelPendingTextureStreaming() { NativeCall<void>(nullptr, "UTexture.CancelPendingTextureStreaming()"); }
	static const wchar_t* GetTextureGroupString(TextureGroup InGroup) { return NativeCall<const wchar_t*, TextureGroup>(nullptr, "UTexture.GetTextureGroupString(TextureGroup)", InGroup); }
	static UEnum* GetPixelFormatEnum() { return NativeCall<UEnum*>(nullptr, "UTexture.GetPixelFormatEnum()"); }
	void PostCDOContruct() { NativeCall<void>(this, "UTexture.PostCDOContruct()"); }
	void AddAssetUserData(UAssetUserData* InUserData) { NativeCall<void, UAssetUserData*>(this, "UTexture.AddAssetUserData(UAssetUserData*)", InUserData); }
	UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData*, TSubclassOf<UAssetUserData>>(this, "UTexture.GetAssetUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "UTexture.RemoveUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	FStreamableRenderResourceState* GetResourcePostInitState(FStreamableRenderResourceState* result, const FTexturePlatformData* PlatformData, bool bAllowStreaming, int MinRequestMipCount, int MaxMipCount, bool bSkipCanBeLoaded) { return NativeCall<FStreamableRenderResourceState*, FStreamableRenderResourceState*, const FTexturePlatformData*, bool, int, int, bool>(this, "UTexture.GetResourcePostInitState(FStreamableRenderResourceState*,FTexturePlatformData*,bool,int,int,bool)", result, PlatformData, bAllowStreaming, MinRequestMipCount, MaxMipCount, bSkipCanBeLoaded); }
	void GetVirtualTextureBuildSettings(FVirtualTextureBuildSettings* OutSettings) { NativeCall<void, FVirtualTextureBuildSettings*>(this, "UTexture.GetVirtualTextureBuildSettings(FVirtualTextureBuildSettings*)", OutSettings); }
	void SerializeCookedPlatformData(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UTexture.SerializeCookedPlatformData(FArchive*)", Ar); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UTexture.GetSurfaceArraySize()"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UTexture.GetSurfaceDepth()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture.GetSurfaceHeight()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture.GetSurfaceWidth()"); }
	ETextureClass GetTextureClass() { return NativeCall<ETextureClass>(this, "UTexture.GetTextureClass()"); }
};

struct UTexture2D : UTexture
{
	// Fields

	UE::Math::TIntPoint<int>& ImportedSizeField() { return *GetNativePointerField<UE::Math::TIntPoint<int>*>(this, "UTexture2D.ImportedSize"); }
	FTexturePlatformData*& PrivatePlatformDataField() { return *GetNativePointerField<FTexturePlatformData**>(this, "UTexture2D.PrivatePlatformData"); }
	//TFieldPtrAccessor<FTexturePlatformData>& PlatformDataField() { return *GetNativePointerField<TFieldPtrAccessor<FTexturePlatformData>*>(this, "UTexture2D.PlatformData"); }
	FTexture2DResourceMem*& ResourceMemField() { return *GetNativePointerField<FTexture2DResourceMem**>(this, "UTexture2D.ResourceMem"); }

	// Bitfields


	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UTexture2D.GetPrivateStaticClass()"); }
	TextureAddress GetTextureAddressY() { return NativeCall<TextureAddress>(this, "UTexture2D.GetTextureAddressY()"); }
	TextureAddress GetTextureAddressX() { return NativeCall<TextureAddress>(this, "UTexture2D.GetTextureAddressX()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture2D.GetSurfaceHeight()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture2D.GetSurfaceWidth()"); }
	int CalcCumulativeLODSize(int NumLODs) { return NativeCall<int, int>(this, "UTexture2D.CalcCumulativeLODSize(int)", NumLODs); }
	static void StaticRegisterNativesUTexture2D() { NativeCall<void>(nullptr, "UTexture2D.StaticRegisterNativesUTexture2D()"); }
	//void ~UTexture2D() { NativeCall<void>(this, "UTexture2D.~UTexture2D()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UTexture2D.Serialize(FStructuredArchiveRecord)", Record); }
	//void UTexture2D(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UTexture2D.UTexture2D(FObjectInitializer*)", ObjectInitializer); }
	FTexturePlatformData** GetRunningPlatformData() { return NativeCall<FTexturePlatformData**>(this, "UTexture2D.GetRunningPlatformData()"); }
	int GetNumMips() { return NativeCall<int>(this, "UTexture2D.GetNumMips()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UTexture2D.Serialize(FArchive*)", Ar); }
	int GetNumResidentMips() { return NativeCall<int>(this, "UTexture2D.GetNumResidentMips()"); }
	bool IsReadyForAsyncPostLoad() { return NativeCall<bool>(this, "UTexture2D.IsReadyForAsyncPostLoad()"); }
	//void PreSave(FObjectPreSaveContext ObjectSaveContext) { NativeCall<void, FObjectPreSaveContext>(this, "UTexture2D.PreSave(FObjectPreSaveContext)", ObjectSaveContext); }
	//void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag, TSizedDefaultAllocator<32> >* OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag, TSizedDefaultAllocator<32> >*>(this, "UTexture2D.GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>>*)", OutTags); }
	//void UpdateResource() { NativeCall<void>(this, "UTexture2D.UpdateResource()"); }
	void BeginDestroy() { NativeCall<void>(this, "UTexture2D.BeginDestroy()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UTexture2D.GetDesc(FString&)", result); }
	int CalcTextureMemorySize(int MipCount) { return NativeCall<int, int>(this, "UTexture2D.CalcTextureMemorySize(int)", MipCount); }
	int GetNumMipsAllowed(bool bIgnoreMinResidency) { return NativeCall<int, bool>(this, "UTexture2D.GetNumMipsAllowed(bool)", bIgnoreMinResidency); }
	//unsigned int CalcTextureMemorySizeEnum(ETextureMipCount Enum) { return NativeCall<unsigned int, ETextureMipCount>(this, "UTexture2D.CalcTextureMemorySizeEnum(ETextureMipCount)", Enum); }
	//FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTexture2D.CreateResource()"); }
	//EMaterialValueType GetMaterialType() { return NativeCall<EMaterialValueType>(this, "UTexture2D.GetMaterialType()"); }
	void GetResourceSizeEx(FResourceSizeEx* CumulativeResourceSize) { NativeCall<void, FResourceSizeEx*>(this, "UTexture2D.GetResourceSizeEx(FResourceSizeEx*)", CumulativeResourceSize); }
	//static UTexture2D* CreateTransient(int InSizeX, int InSizeY, EPixelFormat InFormat, const FName InName) { return NativeCall<UTexture2D*, int, int, EPixelFormat, const FName>(nullptr, "UTexture2D.CreateTransient(int,int,EPixelFormat,FName)", InSizeX, InSizeY, InFormat, InName); }
	static float GetGlobalMipMapLODBias() { return NativeCall<float>(nullptr, "UTexture2D.GetGlobalMipMapLODBias()"); }
	void RefreshSamplerStates() { NativeCall<void>(this, "UTexture2D.RefreshSamplerStates()"); }
	bool IsCurrentlyVirtualTextured() { return NativeCall<bool>(this, "UTexture2D.IsCurrentlyVirtualTextured()"); }
	bool StreamIn(int NewMipCount, bool bHighPrio) { return NativeCall<bool, int, bool>(this, "UTexture2D.StreamIn(int,bool)", NewMipCount, bHighPrio); }
	bool StreamOut(int NewMipCount) { return NativeCall<bool, int>(this, "UTexture2D.StreamOut(int)", NewMipCount); }
	void GetMipData(int FirstMipToLoad, void** OutMipData) { NativeCall<void, int, void**>(this, "UTexture2D.GetMipData(int,void**)", FirstMipToLoad, OutMipData); }
};

class FUObjectItem
{
public:
	UObject* Object;
	int Flags;
	int ClusterRootIndex;
	int SerialNumber;
};

class FChunkedFixedUObjectArray
{
public:
	enum
	{
		ElementsPerChunk = 64 * 1024
	};

	FUObjectItem& GetByIndex(int Index)
	{
		return *GetObjectPtr(Index);
	}

	FUObjectItem* GetObjectPtr(int Index)
	{
		auto ChunkIndex = Index / ElementsPerChunk;
		auto WithinChunkIndex = Index % ElementsPerChunk;
		auto Chunk = Objects[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int MaxElements;
	int NumElements;
	int MaxChunks;
	int NumChunks;
};

class FUObjectArray
{
public:
	int ObjFirstGCIndex;
	int ObjLastNonGCIndex;
	int MaxObjectsNotConsideredByGC;
	bool OpenForDisregardForGC;
	FChunkedFixedUObjectArray ObjObjects;
};

struct Globals
{
	static UObject* StaticLoadObject(UClass* ObjectClass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename,
		unsigned int LoadFlags, DWORD64 Sandbox, bool bAllowObjectReconciliation)
	{
		return NativeCall<UObject*, UClass*, UObject*, const wchar_t*, const wchar_t*, unsigned int, DWORD64, bool, void*>(
			nullptr, "Global.StaticLoadObject(UClass*,UObject*,wchar_t*,wchar_t*,unsignedint,UPackageMap*,bool,FLinkerInstancingContext*)",
			ObjectClass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation, nullptr);
	}

	static UObject* StaticConstructObject(FStaticConstructObjectParameters& Params)
	{
		return NativeCall<UObject*, FStaticConstructObjectParameters&>(nullptr, "Global.StaticConstructObject_Internal(FStaticConstructObjectParameters&)", Params);
	}

	static DataValue<struct UEngine*> GEngine() { return { "Global.GEngine" }; }
	static DataValue<class FString*> GGameUserSettingsIni() { return { "Global.GGameUserSettingsIni" }; }
	static DataValue<struct FConfigCacheIni*> GConfig() { return { "Global.GConfig" }; }
	static DataValue<FUObjectArray> GUObjectArray() { return { "Global.GUObjectArray" }; }
};

struct UEngine : UObject
{
	// Fields

	TObjectPtr<UFont>& TinyFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.TinyFont"); }
	FSoftObjectPath& TinyFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.TinyFontName"); }
	TObjectPtr<UFont>& SmallFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.SmallFont"); }
	FSoftObjectPath& SmallFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.SmallFontName"); }
	TObjectPtr<UFont>& MediumFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.MediumFont"); }
	FSoftObjectPath& MediumFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.MediumFontName"); }
	TObjectPtr<UFont>& LargeFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.LargeFont"); }
	FSoftObjectPath& LargeFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.LargeFontName"); }
	TObjectPtr<UFont>& SubtitleFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.SubtitleFont"); }
	FSoftObjectPath& SubtitleFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.SubtitleFontName"); }
	TArray<TObjectPtr<UFont>, TSizedDefaultAllocator<32> >& AdditionalFontsField() { return *GetNativePointerField<TArray<TObjectPtr<UFont>, TSizedDefaultAllocator<32> >*>(this, "UEngine.AdditionalFonts"); }
	TArray<FString, TSizedDefaultAllocator<32> >& AdditionalFontNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UEngine.AdditionalFontNames"); }
	TSubclassOf<UConsole>& ConsoleClassField() { return *GetNativePointerField<TSubclassOf<UConsole>*>(this, "UEngine.ConsoleClass"); }
	FSoftClassPath& ConsoleClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.ConsoleClassName"); }
	//TSubclassOf<UGameViewportClient>& GameViewportClientClassField() { return *GetNativePointerField<TSubclassOf<UGameViewportClient>*>(this, "UEngine.GameViewportClientClass"); }
	FSoftClassPath& GameViewportClientClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.GameViewportClientClassName"); }
	TSubclassOf<ULocalPlayer>& LocalPlayerClassField() { return *GetNativePointerField<TSubclassOf<ULocalPlayer>*>(this, "UEngine.LocalPlayerClass"); }
	FSoftClassPath& LocalPlayerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.LocalPlayerClassName"); }
	TSubclassOf<AWorldSettings>& WorldSettingsClassField() { return *GetNativePointerField<TSubclassOf<AWorldSettings>*>(this, "UEngine.WorldSettingsClass"); }
	FSoftClassPath& WorldSettingsClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.WorldSettingsClassName"); }
	FSoftClassPath& NavigationSystemClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.NavigationSystemClassName"); }
	//TSubclassOf<UNavigationSystemBase>& NavigationSystemClassField() { return *GetNativePointerField<TSubclassOf<UNavigationSystemBase>*>(this, "UEngine.NavigationSystemClass"); }
	FSoftClassPath& NavigationSystemConfigClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.NavigationSystemConfigClassName"); }
	TSubclassOf<UNavigationSystemConfig>& NavigationSystemConfigClassField() { return *GetNativePointerField<TSubclassOf<UNavigationSystemConfig>*>(this, "UEngine.NavigationSystemConfigClass"); }
	FSoftClassPath& AvoidanceManagerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.AvoidanceManagerClassName"); }
	//TSubclassOf<UAvoidanceManager>& AvoidanceManagerClassField() { return *GetNativePointerField<TSubclassOf<UAvoidanceManager>*>(this, "UEngine.AvoidanceManagerClass"); }
	FSoftClassPath& AIControllerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.AIControllerClassName"); }
	//TSubclassOf<UPhysicsCollisionHandler>& PhysicsCollisionHandlerClassField() { return *GetNativePointerField<TSubclassOf<UPhysicsCollisionHandler>*>(this, "UEngine.PhysicsCollisionHandlerClass"); }
	FSoftClassPath& PhysicsCollisionHandlerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.PhysicsCollisionHandlerClassName"); }
	FSoftClassPath& GameUserSettingsClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.GameUserSettingsClassName"); }
	TSubclassOf<UGameUserSettings>& GameUserSettingsClassField() { return *GetNativePointerField<TSubclassOf<UGameUserSettings>*>(this, "UEngine.GameUserSettingsClass"); }
	TObjectPtr<UGameUserSettings>& GameUserSettingsField() { return *GetNativePointerField<TObjectPtr<UGameUserSettings>*>(this, "UEngine.GameUserSettings"); }
	TSubclassOf<ALevelScriptActor>& LevelScriptActorClassField() { return *GetNativePointerField<TSubclassOf<ALevelScriptActor>*>(this, "UEngine.LevelScriptActorClass"); }
	FSoftClassPath& LevelScriptActorClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.LevelScriptActorClassName"); }
	FSoftClassPath& DefaultBlueprintBaseClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.DefaultBlueprintBaseClassName"); }
	FSoftClassPath& GameSingletonClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.GameSingletonClassName"); }
	TObjectPtr<UObject>& GameSingletonField() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "UEngine.GameSingleton"); }
	FSoftClassPath& AssetManagerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.AssetManagerClassName"); }
	//TObjectPtr<UAssetManager>& AssetManagerField() { return *GetNativePointerField<TObjectPtr<UAssetManager>*>(this, "UEngine.AssetManager"); }
	TObjectPtr<UTexture2D>& DefaultTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultTexture"); }
	FSoftObjectPath& DefaultTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultTextureName"); }
	TObjectPtr<UTexture>& DefaultDiffuseTextureField() { return *GetNativePointerField<TObjectPtr<UTexture>*>(this, "UEngine.DefaultDiffuseTexture"); }
	FSoftObjectPath& DefaultDiffuseTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultDiffuseTextureName"); }
	TObjectPtr<UTexture2D>& DefaultBSPVertexTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBSPVertexTexture"); }
	FSoftObjectPath& DefaultBSPVertexTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultBSPVertexTextureName"); }
	TObjectPtr<UTexture2D>& HighFrequencyNoiseTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.HighFrequencyNoiseTexture"); }
	FSoftObjectPath& HighFrequencyNoiseTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.HighFrequencyNoiseTextureName"); }
	TObjectPtr<UTexture2D>& DefaultBokehTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBokehTexture"); }
	FSoftObjectPath& DefaultBokehTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultBokehTextureName"); }
	TObjectPtr<UTexture2D>& DefaultBloomKernelTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBloomKernelTexture"); }
	FSoftObjectPath& DefaultBloomKernelTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultBloomKernelTextureName"); }
	TObjectPtr<UTexture2D>& DefaultFilmGrainTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultFilmGrainTexture"); }
	FSoftObjectPath& DefaultFilmGrainTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultFilmGrainTextureName"); }
	TObjectPtr<UMaterial>& WireframeMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.WireframeMaterial"); }
	FString& WireframeMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.WireframeMaterialName"); }
	TObjectPtr<UMaterial>& DebugMeshMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.DebugMeshMaterial"); }
	FSoftObjectPath& DebugMeshMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DebugMeshMaterialName"); }
	TObjectPtr<UMaterial>& NaniteHiddenSectionMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.NaniteHiddenSectionMaterial"); }
	FString& NaniteHiddenSectionMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.NaniteHiddenSectionMaterialName"); }
	TObjectPtr<UMaterial>& EmissiveMeshMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.EmissiveMeshMaterial"); }
	FSoftObjectPath& EmissiveMeshMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.EmissiveMeshMaterialName"); }
	TObjectPtr<UMaterial>& LevelColorationLitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LevelColorationLitMaterial"); }
	FString& LevelColorationLitMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.LevelColorationLitMaterialName"); }
	TObjectPtr<UMaterial>& LevelColorationUnlitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LevelColorationUnlitMaterial"); }
	FString& LevelColorationUnlitMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.LevelColorationUnlitMaterialName"); }
	TObjectPtr<UMaterial>& LightingTexelDensityMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LightingTexelDensityMaterial"); }
	FString& LightingTexelDensityNameField() { return *GetNativePointerField<FString*>(this, "UEngine.LightingTexelDensityName"); }
	TObjectPtr<UMaterial>& ShadedLevelColorationLitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ShadedLevelColorationLitMaterial"); }
	FString& ShadedLevelColorationLitMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.ShadedLevelColorationLitMaterialName"); }
	TObjectPtr<UMaterial>& ShadedLevelColorationUnlitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ShadedLevelColorationUnlitMaterial"); }
	FString& ShadedLevelColorationUnlitMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.ShadedLevelColorationUnlitMaterialName"); }
	TObjectPtr<UMaterial>& RemoveSurfaceMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.RemoveSurfaceMaterial"); }
	FSoftObjectPath& RemoveSurfaceMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.RemoveSurfaceMaterialName"); }
	TObjectPtr<UMaterial>& VertexColorMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorMaterial"); }
	FString& VertexColorMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorMaterialName"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_ColorOnlyField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_ColorOnly"); }
	FString& VertexColorViewModeMaterialName_ColorOnlyField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_ColorOnly"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_AlphaAsColorField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_AlphaAsColor"); }
	FString& VertexColorViewModeMaterialName_AlphaAsColorField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_AlphaAsColor"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_RedOnlyField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_RedOnly"); }
	FString& VertexColorViewModeMaterialName_RedOnlyField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_RedOnly"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_GreenOnlyField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_GreenOnly"); }
	FString& VertexColorViewModeMaterialName_GreenOnlyField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_GreenOnly"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_BlueOnlyField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_BlueOnly"); }
	FString& VertexColorViewModeMaterialName_BlueOnlyField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_BlueOnly"); }
	FSoftObjectPath& DebugEditorMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DebugEditorMaterialName"); }
	TObjectPtr<UMaterial>& ConstraintLimitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ConstraintLimitMaterial"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialXField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialX"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialXAxisField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialXAxis"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialYField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialY"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialYAxisField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialYAxis"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialZField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialZ"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialZAxisField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialZAxis"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialPrismaticField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialPrismatic"); }
	TObjectPtr<UMaterial>& InvalidLightmapSettingsMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.InvalidLightmapSettingsMaterial"); }
	FSoftObjectPath& InvalidLightmapSettingsMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.InvalidLightmapSettingsMaterialName"); }
	TObjectPtr<UMaterial>& PreviewShadowsIndicatorMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.PreviewShadowsIndicatorMaterial"); }
	FSoftObjectPath& PreviewShadowsIndicatorMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.PreviewShadowsIndicatorMaterialName"); }
	TObjectPtr<UMaterial>& ArrowMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ArrowMaterial"); }
	TObjectPtr<UMaterialInstanceDynamic>& ArrowMaterialYellowField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ArrowMaterialYellow"); }
	FSoftObjectPath& ArrowMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.ArrowMaterialName"); }
	FLinearColor& LightingOnlyBrightnessField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightingOnlyBrightness"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& ShaderComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.ShaderComplexityColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& QuadComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.QuadComplexityColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& LightComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.LightComplexityColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& StationaryLightOverlapColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.StationaryLightOverlapColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& LODColorationColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.LODColorationColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& HLODColorationColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.HLODColorationColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& StreamingAccuracyColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.StreamingAccuracyColors"); }
	FLinearColor& GPUSkinCacheVisualizationExcludedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationExcludedColor"); }
	FLinearColor& GPUSkinCacheVisualizationIncludedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationIncludedColor"); }
	FLinearColor& GPUSkinCacheVisualizationRecomputeTangentsColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationRecomputeTangentsColor"); }
	float& GPUSkinCacheVisualizationLowMemoryThresholdInMBField() { return *GetNativePointerField<float*>(this, "UEngine.GPUSkinCacheVisualizationLowMemoryThresholdInMB"); }
	float& GPUSkinCacheVisualizationHighMemoryThresholdInMBField() { return *GetNativePointerField<float*>(this, "UEngine.GPUSkinCacheVisualizationHighMemoryThresholdInMB"); }
	FLinearColor& GPUSkinCacheVisualizationLowMemoryColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationLowMemoryColor"); }
	FLinearColor& GPUSkinCacheVisualizationMidMemoryColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationMidMemoryColor"); }
	FLinearColor& GPUSkinCacheVisualizationHighMemoryColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationHighMemoryColor"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& GPUSkinCacheVisualizationRayTracingLODOffsetColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.GPUSkinCacheVisualizationRayTracingLODOffsetColors"); }
	float& MaxPixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxPixelShaderAdditiveComplexityCount"); }
	float& MaxES3PixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxES3PixelShaderAdditiveComplexityCount"); }
	float& MinLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MinLightMapDensity"); }
	float& IdealLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.IdealLightMapDensity"); }
	float& MaxLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MaxLightMapDensity"); }
	float& RenderLightMapDensityGrayscaleScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityGrayscaleScale"); }
	float& RenderLightMapDensityColorScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityColorScale"); }
	FLinearColor& LightMapDensityVertexMappedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensityVertexMappedColor"); }
	FLinearColor& LightMapDensitySelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensitySelectedColor"); }
	TArray<FStatColorMapping, TSizedDefaultAllocator<32> >& StatColorMappingsField() { return *GetNativePointerField<TArray<FStatColorMapping, TSizedDefaultAllocator<32> >*>(this, "UEngine.StatColorMappings"); }
	TObjectPtr<UPhysicalMaterial>& DefaultPhysMaterialField() { return *GetNativePointerField<TObjectPtr<UPhysicalMaterial>*>(this, "UEngine.DefaultPhysMaterial"); }
	FSoftObjectPath& DefaultPhysMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultPhysMaterialName"); }
	TObjectPtr<UPhysicalMaterial>& DefaultDestructiblePhysMaterialField() { return *GetNativePointerField<TObjectPtr<UPhysicalMaterial>*>(this, "UEngine.DefaultDestructiblePhysMaterial"); }
	FSoftObjectPath& DefaultDestructiblePhysMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultDestructiblePhysMaterialName"); }
	TArray<FGameNameRedirect, TSizedDefaultAllocator<32> >& ActiveGameNameRedirectsField() { return *GetNativePointerField<TArray<FGameNameRedirect, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActiveGameNameRedirects"); }
	TArray<FClassRedirect, TSizedDefaultAllocator<32> >& ActiveClassRedirectsField() { return *GetNativePointerField<TArray<FClassRedirect, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActiveClassRedirects"); }
	TArray<FPluginRedirect, TSizedDefaultAllocator<32> >& ActivePluginRedirectsField() { return *GetNativePointerField<TArray<FPluginRedirect, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActivePluginRedirects"); }
	TArray<FStructRedirect, TSizedDefaultAllocator<32> >& ActiveStructRedirectsField() { return *GetNativePointerField<TArray<FStructRedirect, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActiveStructRedirects"); }
	TObjectPtr<UTexture2D>& PreIntegratedSkinBRDFTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.PreIntegratedSkinBRDFTexture"); }
	FSoftObjectPath& PreIntegratedSkinBRDFTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.PreIntegratedSkinBRDFTextureName"); }
	TObjectPtr<UTexture2D>& BlueNoiseScalarTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.BlueNoiseScalarTexture"); }
	TObjectPtr<UTexture2D>& BlueNoiseVec2TextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.BlueNoiseVec2Texture"); }
	FSoftObjectPath& BlueNoiseScalarTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.BlueNoiseScalarTextureName"); }
	FSoftObjectPath& BlueNoiseVec2TextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.BlueNoiseVec2TextureName"); }
	TObjectPtr<UTexture2D>& MiniFontTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.MiniFontTexture"); }
	FSoftObjectPath& MiniFontTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.MiniFontTextureName"); }
	TObjectPtr<UTexture>& WeightMapPlaceholderTextureField() { return *GetNativePointerField<TObjectPtr<UTexture>*>(this, "UEngine.WeightMapPlaceholderTexture"); }
	FSoftObjectPath& WeightMapPlaceholderTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.WeightMapPlaceholderTextureName"); }
	TObjectPtr<UTexture2D>& LightMapDensityTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.LightMapDensityTexture"); }
	FSoftObjectPath& LightMapDensityTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.LightMapDensityTextureName"); }
	IEngineLoop*& EngineLoopField() { return *GetNativePointerField<IEngineLoop**>(this, "UEngine.EngineLoop"); }
	//TObjectPtr<UGameViewportClient>& GameViewportField() { return *GetNativePointerField<TObjectPtr<UGameViewportClient>*>(this, "UEngine.GameViewport"); }
	TArray<FString, TSizedDefaultAllocator<32> >& DeferredCommandsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UEngine.DeferredCommands"); }
	float& NearClipPlaneField() { return *GetNativePointerField<float*>(this, "UEngine.NearClipPlane"); }
	int& MaximumLoopIterationCountField() { return *GetNativePointerField<int*>(this, "UEngine.MaximumLoopIterationCount"); }
	float& FixedFrameRateField() { return *GetNativePointerField<float*>(this, "UEngine.FixedFrameRate"); }
	//FFloatRange& SmoothedFrameRateRangeField() { return *GetNativePointerField<FFloatRange*>(this, "UEngine.SmoothedFrameRateRange"); }
	//TObjectPtr<UEngineCustomTimeStep>& CustomTimeStepField() { return *GetNativePointerField<TObjectPtr<UEngineCustomTimeStep>*>(this, "UEngine.CustomTimeStep"); }
	//TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& CustomTimeStepChangedEventField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "UEngine.CustomTimeStepChangedEvent"); }
	FSoftClassPath& CustomTimeStepClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.CustomTimeStepClassName"); }
	//TObjectPtr<UTimecodeProvider>& TimecodeProviderField() { return *GetNativePointerField<TObjectPtr<UTimecodeProvider>*>(this, "UEngine.TimecodeProvider"); }
	//TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& TimecodeProviderChangedEventField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "UEngine.TimecodeProviderChangedEvent"); }
	FSoftClassPath& TimecodeProviderClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.TimecodeProviderClassName"); }
	//FFrameRate& GenerateDefaultTimecodeFrameRateField() { return *GetNativePointerField<FFrameRate*>(this, "UEngine.GenerateDefaultTimecodeFrameRate"); }
	float& GenerateDefaultTimecodeFrameDelayField() { return *GetNativePointerField<float*>(this, "UEngine.GenerateDefaultTimecodeFrameDelay"); }
	int& NumPawnsAllowedToBeSpawnedInAFrameField() { return *GetNativePointerField<int*>(this, "UEngine.NumPawnsAllowedToBeSpawnedInAFrame"); }
	FColor& C_WorldBoxField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WorldBox"); }
	FColor& C_BrushWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushWire"); }
	FColor& C_AddWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_AddWire"); }
	FColor& C_SubtractWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SubtractWire"); }
	FColor& C_SemiSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SemiSolidWire"); }
	FColor& C_NonSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_NonSolidWire"); }
	FColor& C_WireBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WireBackground"); }
	FColor& C_ScaleBoxHiField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_ScaleBoxHi"); }
	FColor& C_VolumeCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_VolumeCollision"); }
	FColor& C_BSPCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BSPCollision"); }
	FColor& C_OrthoBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_OrthoBackground"); }
	FColor& C_VolumeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_Volume"); }
	FColor& C_BrushShapeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushShape"); }
	float& StreamingDistanceFactorField() { return *GetNativePointerField<float*>(this, "UEngine.StreamingDistanceFactor"); }
	//FDirectoryPath& GameScreenshotSaveDirectoryField() { return *GetNativePointerField<FDirectoryPath*>(this, "UEngine.GameScreenshotSaveDirectory"); }
	bool& UseSkeletalMeshMinLODPerQualityLevelsField() { return *GetNativePointerField<bool*>(this, "UEngine.UseSkeletalMeshMinLODPerQualityLevels"); }
	FString& TransitionDescriptionField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionDescription"); }
	FString& TransitionGameModeField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionGameMode"); }
	float& CameraRotationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraRotationThreshold"); }
	float& CameraTranslationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraTranslationThreshold"); }
	float& PrimitiveProbablyVisibleTimeField() { return *GetNativePointerField<float*>(this, "UEngine.PrimitiveProbablyVisibleTime"); }
	float& MaxOcclusionPixelsFractionField() { return *GetNativePointerField<float*>(this, "UEngine.MaxOcclusionPixelsFraction"); }
	int& MaxParticleResizeField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResize"); }
	int& MaxParticleResizeWarnField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResizeWarn"); }
	TArray<FDropNoteInfo, TSizedDefaultAllocator<32> >& PendingDroppedNotesField() { return *GetNativePointerField<TArray<FDropNoteInfo, TSizedDefaultAllocator<32> >*>(this, "UEngine.PendingDroppedNotes"); }
	float& NetClientTicksPerSecondField() { return *GetNativePointerField<float*>(this, "UEngine.NetClientTicksPerSecond"); }
	float& DisplayGammaField() { return *GetNativePointerField<float*>(this, "UEngine.DisplayGamma"); }
	float& MinDesiredFrameRateField() { return *GetNativePointerField<float*>(this, "UEngine.MinDesiredFrameRate"); }
	FLinearColor& DefaultSelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.DefaultSelectedMaterialColor"); }
	FLinearColor& SelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColor"); }
	FLinearColor& SelectionOutlineColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectionOutlineColor"); }
	FLinearColor& SubduedSelectionOutlineColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SubduedSelectionOutlineColor"); }
	FLinearColor& SelectedMaterialColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColorOverride"); }
	unsigned int& bEnableVisualLogRecordingOnStartField() { return *GetNativePointerField<unsigned int*>(this, "UEngine.bEnableVisualLogRecordingOnStart"); }
	int& ScreenSaverInhibitorSemaphoreField() { return *GetNativePointerField<int*>(this, "UEngine.ScreenSaverInhibitorSemaphore"); }
	FString& ParticleEventManagerClassPathField() { return *GetNativePointerField<FString*>(this, "UEngine.ParticleEventManagerClassPath"); }
	float& SelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensity"); }
	float& BSPSelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.BSPSelectionHighlightIntensity"); }
	float& SelectionHighlightIntensityBillboardsField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensityBillboards"); }
	//UEngine::FOnTravelFailure& TravelFailureEventField() { return *GetNativePointerField<UEngine::FOnTravelFailure*>(this, "UEngine.TravelFailureEvent"); }
	//UEngine::FOnNetworkFailure& NetworkFailureEventField() { return *GetNativePointerField<UEngine::FOnNetworkFailure*>(this, "UEngine.NetworkFailureEvent"); }
	//UEngine::FOnNetworkLagStateChanged& NetworkLagStateChangedEventField() { return *GetNativePointerField<UEngine::FOnNetworkLagStateChanged*>(this, "UEngine.NetworkLagStateChangedEvent"); }
	//UEngine::FOnNetworkDDoSEscalation& NetworkDDoSEscalationEventField() { return *GetNativePointerField<UEngine::FOnNetworkDDoSEscalation*>(this, "UEngine.NetworkDDoSEscalationEvent"); }
	unsigned __int64& LastGCFrameField() { return *GetNativePointerField<unsigned __int64*>(this, "UEngine.LastGCFrame"); }
	float& TimeSinceLastPendingKillPurgeField() { return *GetNativePointerField<float*>(this, "UEngine.TimeSinceLastPendingKillPurge"); }
	bool& bShouldDelayGarbageCollectField() { return *GetNativePointerField<bool*>(this, "UEngine.bShouldDelayGarbageCollect"); }
	//FAudioDeviceManager*& AudioDeviceManagerField() { return *GetNativePointerField<FAudioDeviceManager**>(this, "UEngine.AudioDeviceManager"); }
	//FAudioDeviceHandle& MainAudioDeviceHandleField() { return *GetNativePointerField<FAudioDeviceHandle*>(this, "UEngine.MainAudioDeviceHandle"); }
	TArray<FScreenMessageString, TSizedDefaultAllocator<32> >& PriorityScreenMessagesField() { return *GetNativePointerField<TArray<FScreenMessageString, TSizedDefaultAllocator<32> >*>(this, "UEngine.PriorityScreenMessages"); }
	TMap<int, FScreenMessageString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FScreenMessageString, 0> >& ScreenMessagesField() { return *GetNativePointerField<TMap<int, FScreenMessageString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FScreenMessageString, 0> >*>(this, "UEngine.ScreenMessages"); }
	TSharedPtr<IStereoRendering>& StereoRenderingDeviceField() { return *GetNativePointerField<TSharedPtr<IStereoRendering>*>(this, "UEngine.StereoRenderingDevice"); }
	//TSharedPtr<IXRTrackingSystem, 1>& XRSystemField() { return *GetNativePointerField<TSharedPtr<IXRTrackingSystem, 1>*>(this, "UEngine.XRSystem"); }
	//TSharedPtr<FSceneViewExtensions, 1>& ViewExtensionsField() { return *GetNativePointerField<TSharedPtr<FSceneViewExtensions, 1>*>(this, "UEngine.ViewExtensions"); }
	//TSharedPtr<IEyeTracker, 1>& EyeTrackingDeviceField() { return *GetNativePointerField<TSharedPtr<IEyeTracker, 1>*>(this, "UEngine.EyeTrackingDevice"); }
	//TMulticastDelegate<void __cdecl(enum EFrameHitchType, float), FDefaultDelegateUserPolicy>& OnHitchDetectedDelegateField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(enum EFrameHitchType, float), FDefaultDelegateUserPolicy>*>(this, "UEngine.OnHitchDetectedDelegate"); }
	//TSharedPtr<IMessageRpcClient, 1>& PortalRpcClientField() { return *GetNativePointerField<TSharedPtr<IMessageRpcClient, 1>*>(this, "UEngine.PortalRpcClient"); }
	//TSharedPtr<IPortalRpcLocator, 1>& PortalRpcLocatorField() { return *GetNativePointerField<TSharedPtr<IPortalRpcLocator, 1>*>(this, "UEngine.PortalRpcLocator"); }
	//TSharedPtr<FTypeContainer, 1>& ServiceDependenciesField() { return *GetNativePointerField<TSharedPtr<FTypeContainer, 1>*>(this, "UEngine.ServiceDependencies"); }
	//TSharedPtr<IPortalServiceLocator, 1>& ServiceLocatorField() { return *GetNativePointerField<TSharedPtr<IPortalServiceLocator, 1>*>(this, "UEngine.ServiceLocator"); }
	//TSharedPtr<FPerformanceTrackingChart, 1>& ActivePerformanceChartField() { return *GetNativePointerField<TSharedPtr<FPerformanceTrackingChart, 1>*>(this, "UEngine.ActivePerformanceChart"); }
	//TArray<TSharedPtr<IPerformanceDataConsumer, 1>, TSizedDefaultAllocator<32> >& ActivePerformanceDataConsumersField() { return *GetNativePointerField<TArray<TSharedPtr<IPerformanceDataConsumer, 1>, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActivePerformanceDataConsumers"); }
	float& RunningAverageDeltaTimeField() { return *GetNativePointerField<float*>(this, "UEngine.RunningAverageDeltaTime"); }
	//UEngine::FWorldAddedEvent& WorldAddedEventField() { return *GetNativePointerField<UEngine::FWorldAddedEvent*>(this, "UEngine.WorldAddedEvent"); }
	//UEngine::FWorldDestroyedEvent& WorldDestroyedEventField() { return *GetNativePointerField<UEngine::FWorldDestroyedEvent*>(this, "UEngine.WorldDestroyedEvent"); }
	FRunnableThread*& ScreenSaverInhibitorField() { return *GetNativePointerField<FRunnableThread**>(this, "UEngine.ScreenSaverInhibitor"); }
	FScreenSaverInhibitor*& ScreenSaverInhibitorRunnableField() { return *GetNativePointerField<FScreenSaverInhibitor**>(this, "UEngine.ScreenSaverInhibitorRunnable"); }
	unsigned int& GlobalNetTravelCountField() { return *GetNativePointerField<unsigned int*>(this, "UEngine.GlobalNetTravelCount"); }
	TArray<FNetDriverDefinition, TSizedDefaultAllocator<32> >& NetDriverDefinitionsField() { return *GetNativePointerField<TArray<FNetDriverDefinition, TSizedDefaultAllocator<32> >*>(this, "UEngine.NetDriverDefinitions"); }
	//TArray<FIrisNetDriverConfig, TSizedDefaultAllocator<32> >& IrisNetDriverConfigsField() { return *GetNativePointerField<TArray<FIrisNetDriverConfig, TSizedDefaultAllocator<32> >*>(this, "UEngine.IrisNetDriverConfigs"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ServerActorsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UEngine.ServerActors"); }
	TArray<FString, TSizedDefaultAllocator<32> >& RuntimeServerActorsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UEngine.RuntimeServerActors"); }
	float& NetErrorLogIntervalField() { return *GetNativePointerField<float*>(this, "UEngine.NetErrorLogInterval"); }
	//TIndirectArray<FWorldContext, TSizedDefaultAllocator<32> >& WorldListField() { return *GetNativePointerField<TIndirectArray<FWorldContext, TSizedDefaultAllocator<32> >*>(this, "UEngine.WorldList"); }
	int& NextWorldContextHandleField() { return *GetNativePointerField<int*>(this, "UEngine.NextWorldContextHandle"); }
	//FObjectSubsystemCollection<UEngineSubsystem>& EngineSubsystemCollectionField() { return *GetNativePointerField<FObjectSubsystemCollection<UEngineSubsystem>*>(this, "UEngine.EngineSubsystemCollection"); }
	//TArray<UEngine::FEngineStatFuncs, TSizedDefaultAllocator<32> >& EngineStatsField() { return *GetNativePointerField<TArray<UEngine::FEngineStatFuncs, TSizedDefaultAllocator<32> >*>(this, "UEngine.EngineStats"); }
	//TPimplPtr<UEngine::FErrorsAndWarningsCollector, 0>& ErrorsAndWarningsCollectorField() { return *GetNativePointerField<TPimplPtr<UEngine::FErrorsAndWarningsCollector, 0>*>(this, "UEngine.ErrorsAndWarningsCollector"); }
	FDelegateHandle& HandleScreenshotCapturedDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UEngine.HandleScreenshotCapturedDelegateHandle"); }
	FString& LastModDownloadTextField() { return *GetNativePointerField<FString*>(this, "UEngine.LastModDownloadText"); }
	float& NetworkStressTestClientMode_MinFPSField() { return *GetNativePointerField<float*>(this, "UEngine.NetworkStressTestClientMode_MinFPS"); }
	float& NetworkStressTestClientMode_MaxFPSField() { return *GetNativePointerField<float*>(this, "UEngine.NetworkStressTestClientMode_MaxFPS"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bRenderLightMapDensityGrayscale() { return { this, "UEngine.bRenderLightMapDensityGrayscale" }; }
	BitFieldValue<bool, unsigned __int32> bSubtitlesEnabled() { return { this, "UEngine.bSubtitlesEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bSubtitlesForcedOff() { return { this, "UEngine.bSubtitlesForcedOff" }; }
	BitFieldValue<bool, unsigned __int32> bCanBlueprintsTickByDefault() { return { this, "UEngine.bCanBlueprintsTickByDefault" }; }
	BitFieldValue<bool, unsigned __int32> bOptimizeAnimBlueprintMemberVariableAccess() { return { this, "UEngine.bOptimizeAnimBlueprintMemberVariableAccess" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMultiThreadedAnimationUpdate() { return { this, "UEngine.bAllowMultiThreadedAnimationUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bEnableEditorPSysRealtimeLOD() { return { this, "UEngine.bEnableEditorPSysRealtimeLOD" }; }
	BitFieldValue<bool, unsigned __int32> bForceDisableFrameRateSmoothing() { return { this, "UEngine.bForceDisableFrameRateSmoothing" }; }
	BitFieldValue<bool, unsigned __int32> bSmoothFrameRate() { return { this, "UEngine.bSmoothFrameRate" }; }
	BitFieldValue<bool, unsigned __int32> bUseFixedFrameRate() { return { this, "UEngine.bUseFixedFrameRate" }; }
	BitFieldValue<bool, unsigned __int32> bCheckForMultiplePawnsSpawnedInAFrame() { return { this, "UEngine.bCheckForMultiplePawnsSpawnedInAFrame" }; }
	BitFieldValue<bool, unsigned __int32> bShouldGenerateLowQualityLightmaps_DEPRECATED() { return { this, "UEngine.bShouldGenerateLowQualityLightmaps_DEPRECATED" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMatureLanguage() { return { this, "UEngine.bAllowMatureLanguage" }; }
	BitFieldValue<bool, unsigned __int32> bPauseOnLossOfFocus() { return { this, "UEngine.bPauseOnLossOfFocus" }; }
	BitFieldValue<bool, unsigned __int32> bEnableOnScreenDebugMessages() { return { this, "UEngine.bEnableOnScreenDebugMessages" }; }
	BitFieldValue<bool, unsigned __int32> bEnableOnScreenDebugMessagesDisplay() { return { this, "UEngine.bEnableOnScreenDebugMessagesDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bSuppressMapWarnings() { return { this, "UEngine.bSuppressMapWarnings" }; }
	BitFieldValue<bool, unsigned __int32> bDisableAILogging() { return { this, "UEngine.bDisableAILogging" }; }
	BitFieldValue<bool, unsigned __int32> bLockReadOnlyLevels() { return { this, "UEngine.bLockReadOnlyLevels" }; }
	BitFieldValue<bool, unsigned __int32> bStartedLoadMapMovie() { return { this, "UEngine.bStartedLoadMapMovie" }; }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UEngine.StaticClass()"); }
	//UThreadNodeSubsystem* GetEngineSubsystem<class UThreadNodeSubsystem>() { return NativeCall<UThreadNodeSubsystem*>(this, "UEngine.GetEngineSubsystem<class UThreadNodeSubsystem>()"); }
	FString* GetLastModDownloadText(FString* result) { return NativeCall<FString*, FString*>(this, "UEngine.GetLastModDownloadText(FString&)", result); }
	bool IsInitialized() { return NativeCall<bool>(this, "UEngine.IsInitialized()"); }
	UWorld* GetWorldFromContextObject(const UObject* Object, bool bChecked) { return NativeCall<UWorld*, const UObject*, bool>(this, "UEngine.GetWorldFromContextObject(UObject*,bool)", Object, bChecked); }
	void BroadcastTravelFailure(UWorld* InWorld, ETravelFailure::Type FailureType, const FString* ErrorString) { NativeCall<void, UWorld*, ETravelFailure::Type, const FString*>(this, "UEngine.BroadcastTravelFailure(UWorld*,ETravelFailure::Type,FString&)", InWorld, FailureType, ErrorString); }
	//USteelShieldSubsystem* GetEngineSubsystem<class USteelShieldSubsystem>() { return NativeCall<USteelShieldSubsystem*>(this, "UEngine.GetEngineSubsystem<class USteelShieldSubsystem>()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UEngine.Serialize(FStructuredArchiveRecord)", Record); }
	void LoadMapRedrawViewports() { NativeCall<void>(this, "UEngine.LoadMapRedrawViewports()"); }
	void Tick(float DeltaSeconds, bool bIdleMode) { NativeCall<void, float, bool>(this, "UEngine.Tick(float,bool)", DeltaSeconds, bIdleMode); }
	static void AddPerformanceDataConsumer() { NativeCall<void>(nullptr, "UEngine.AddPerformanceDataConsumer()"); }
	static void RemovePerformanceDataConsumer() { NativeCall<void>(nullptr, "UEngine.RemovePerformanceDataConsumer()"); }
	void StartFPSChart(const FString* Label, bool bRecordPerFrameTimes) { NativeCall<void, const FString*, bool>(this, "UEngine.StartFPSChart(FString&,bool)", Label, bRecordPerFrameTimes); }
	void StopFPSChart(const FString* InMapName) { NativeCall<void, const FString*>(this, "UEngine.StopFPSChart(FString&)", InMapName); }
	void BroadcastNetworkLagStateChanged(UWorld* World, UNetDriver* NetDriver, ENetworkLagState::Type LagType) { NativeCall<void, UWorld*, UNetDriver*, ENetworkLagState::Type>(this, "UEngine.BroadcastNetworkLagStateChanged(UWorld*,UNetDriver*,ENetworkLagState::Type)", World, NetDriver, LagType); }
	static void PreGarbageCollect() { NativeCall<void>(nullptr, "UEngine.PreGarbageCollect()"); }
	float GetTimeBetweenGarbageCollectionPasses() { return NativeCall<float>(this, "UEngine.GetTimeBetweenGarbageCollectionPasses()"); }
	float GetTimeBetweenGarbageCollectionPasses(bool bHasPlayersConnected) { return NativeCall<float, bool>(this, "UEngine.GetTimeBetweenGarbageCollectionPasses(bool)", bHasPlayersConnected); }
	void ConditionalCollectGarbage() { NativeCall<void>(this, "UEngine.ConditionalCollectGarbage()"); }
	void PerformGarbageCollectionAndCleanupActors() { NativeCall<void>(this, "UEngine.PerformGarbageCollectionAndCleanupActors()"); }
	void Init(IEngineLoop* InEngineLoop) { NativeCall<void, IEngineLoop*>(this, "UEngine.Init(IEngineLoop*)", InEngineLoop); }
	void OnExternalUIChange(bool bInIsOpening) { NativeCall<void, bool>(this, "UEngine.OnExternalUIChange(bool)", bInIsOpening); }
	void ReleaseAudioDeviceManager() { NativeCall<void>(this, "UEngine.ReleaseAudioDeviceManager()"); }
	void PreExit() { NativeCall<void>(this, "UEngine.PreExit()"); }
	void ShutdownHMD() { NativeCall<void>(this, "UEngine.ShutdownHMD()"); }
	void TickDeferredCommands() { NativeCall<void>(this, "UEngine.TickDeferredCommands()"); }
	long double CorrectNegativeTimeDelta(long double DeltaRealTime) { return NativeCall<long double, long double>(this, "UEngine.CorrectNegativeTimeDelta(longdouble)", DeltaRealTime); }
	void UpdateTimeAndHandleMaxTickRate() { NativeCall<void>(this, "UEngine.UpdateTimeAndHandleMaxTickRate()"); }
	bool SetCustomTimeStep(struct UEngineCustomTimeStep* InCustomTimeStep) { return NativeCall<bool, UEngineCustomTimeStep*>(this, "UEngine.SetCustomTimeStep(UEngineCustomTimeStep*)", InCustomTimeStep); }
	bool SetTimecodeProvider(struct UTimecodeProvider* InTimecodeProvider) { return NativeCall<bool, UTimecodeProvider*>(this, "UEngine.SetTimecodeProvider(UTimecodeProvider*)", InTimecodeProvider); }
	void UpdateTimecode() { NativeCall<void>(this, "UEngine.UpdateTimecode()"); }
	void ParseCommandline() { NativeCall<void>(this, "UEngine.ParseCommandline()"); }
	void InitializeObjectReferences() { NativeCall<void>(this, "UEngine.InitializeObjectReferences()"); }
	void InitializePortalServices() { NativeCall<void>(this, "UEngine.InitializePortalServices()"); }
	void FinishDestroy() { NativeCall<void>(this, "UEngine.FinishDestroy()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UEngine.Serialize(FArchive*)", Ar); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UEngine.AddReferencedObjects(UObject*,FReferenceCollector*)", InThis, Collector); }
	struct FAudioDeviceHandle* GetMainAudioDevice(FAudioDeviceHandle* result) { return NativeCall<FAudioDeviceHandle*, FAudioDeviceHandle*>(this, "UEngine.GetMainAudioDevice(FAudioDeviceHandle*)", result); }
	void InitializeAudioDeviceManager() { NativeCall<void>(this, "UEngine.InitializeAudioDeviceManager()"); }
	bool UseSound() { return NativeCall<bool>(this, "UEngine.UseSound()"); }
	bool InitializeHMDDevice() { return NativeCall<bool>(this, "UEngine.InitializeHMDDevice()"); }
	bool InitializeEyeTrackingDevice() { return NativeCall<bool>(this, "UEngine.InitializeEyeTrackingDevice()"); }
	void RecordHMDAnalytics() { NativeCall<void>(this, "UEngine.RecordHMDAnalytics()"); }
	bool IsSplitScreen(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UEngine.IsSplitScreen(UWorld*)", InWorld); }
	bool HasMultipleLocalPlayers(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UEngine.HasMultipleLocalPlayers(UWorld*)", InWorld); }
	ULocalPlayer* GetLocalPlayerFromControllerId(const struct UGameViewportClient* InViewport, const int ControllerId) { return NativeCall<ULocalPlayer*, const UGameViewportClient*, const int>(this, "UEngine.GetLocalPlayerFromControllerId(UGameViewportClient*,int)", InViewport, ControllerId); }
	ULocalPlayer* GetLocalPlayerFromControllerId(UWorld* InWorld, const int ControllerId) { return NativeCall<ULocalPlayer*, UWorld*, const int>(this, "UEngine.GetLocalPlayerFromControllerId(UWorld*,int)", InWorld, ControllerId); }
	ULocalPlayer* GetLocalPlayerFromInputDevice(const UGameViewportClient* InViewport, const FInputDeviceId InputDevice) { return NativeCall<ULocalPlayer*, const UGameViewportClient*, const FInputDeviceId>(this, "UEngine.GetLocalPlayerFromInputDevice(UGameViewportClient*,FInputDeviceId)", InViewport, InputDevice); }
	APlayerController* GetFirstLocalPlayerController(const UWorld* InWorld) { return NativeCall<APlayerController*, const UWorld*>(this, "UEngine.GetFirstLocalPlayerController(UWorld*)", InWorld); }
	void GetAllLocalPlayerControllers(TArray<APlayerController*, TSizedDefaultAllocator<32> >* PlayerList) { NativeCall<void, TArray<APlayerController*, TSizedDefaultAllocator<32> >*>(this, "UEngine.GetAllLocalPlayerControllers(TArray<APlayerController*,TSizedDefaultAllocator<32>>*)", PlayerList); }
	bool Exec(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UEngine.Exec(UWorld*,wchar_t*,FOutputDevice*)", InWorld, Cmd, Ar); }
	bool HandleCeCommand(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UEngine.HandleCeCommand(UWorld*,wchar_t*,FOutputDevice*)", InWorld, Cmd, Ar); }
	bool HandleDumpTicksCommand(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UEngine.HandleDumpTicksCommand(UWorld*,wchar_t*,FOutputDevice*)", InWorld, Cmd, Ar); }
	bool HandleGammaCommand(const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, const wchar_t*, FOutputDevice*>(this, "UEngine.HandleGammaCommand(wchar_t*,FOutputDevice*)", Cmd, Ar); }
	void OnLostFocusPause(bool EnablePause) { NativeCall<void, bool>(this, "UEngine.OnLostFocusPause(bool)", EnablePause); }
	void InitializeRunningAverageDeltaTime() { NativeCall<void>(this, "UEngine.InitializeRunningAverageDeltaTime()"); }
	void UpdateRunningAverageDeltaTime(float DeltaTime, bool bAllowFrameRateSmoothing) { NativeCall<void, float, bool>(this, "UEngine.UpdateRunningAverageDeltaTime(float,bool)", DeltaTime, bAllowFrameRateSmoothing); }
	float GetMaxTickRate(float DeltaTime, bool bAllowFrameRateSmoothing) { return NativeCall<float, float, bool>(this, "UEngine.GetMaxTickRate(float,bool)", DeltaTime, bAllowFrameRateSmoothing); }
	float GetMaxFPS() { return NativeCall<float>(this, "UEngine.GetMaxFPS()"); }
	void SetMaxFPS(const float MaxFPS) { NativeCall<void, const float>(this, "UEngine.SetMaxFPS(float)", MaxFPS); }
	void EnableScreenSaver(bool bEnable) { NativeCall<void, bool>(this, "UEngine.EnableScreenSaver(bool)", bEnable); }
	//void GetDynamicResolutionCurrentStateInfos(FDynamicResolutionStateInfos* OutInfos) { NativeCall<void, FDynamicResolutionStateInfos*>(this, "UEngine.GetDynamicResolutionCurrentStateInfos(FDynamicResolutionStateInfos*)", OutInfos); }
	void WorldAdded(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.WorldAdded(UWorld*)", InWorld); }
	void WorldDestroyed(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.WorldDestroyed(UWorld*)", InWorld); }
	void BroadcastNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString* ErrorString) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type, const FString*>(this, "UEngine.BroadcastNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", World, NetDriver, FailureType, ErrorString); }
	UWorld* GetWorldFromContextObject(const UObject* Object, EGetWorldErrorMode ErrorMode) { return NativeCall<UWorld*, const UObject*, EGetWorldErrorMode>(this, "UEngine.GetWorldFromContextObject(UObject*,EGetWorldErrorMode)", Object, ErrorMode); }
	const TArray<ULocalPlayer*, TSizedDefaultAllocator<32> >* GetGamePlayers(UWorld* World) { return NativeCall<const TArray<ULocalPlayer*, TSizedDefaultAllocator<32> >*, UWorld*>(this, "UEngine.GetGamePlayers(UWorld*)", World); }
	const TArray<ULocalPlayer*, TSizedDefaultAllocator<32> >* GetGamePlayers(const UGameViewportClient* Viewport) { return NativeCall<const TArray<ULocalPlayer*, TSizedDefaultAllocator<32> >*, const UGameViewportClient*>(this, "UEngine.GetGamePlayers(UGameViewportClient*)", Viewport); }
	ULocalPlayer* FindFirstLocalPlayerFromControllerId(int ControllerId) { return NativeCall<ULocalPlayer*, int>(this, "UEngine.FindFirstLocalPlayerFromControllerId(int)", ControllerId); }
	ULocalPlayer* GetFirstGamePlayer(UWorld* InWorld) { return NativeCall<ULocalPlayer*, UWorld*>(this, "UEngine.GetFirstGamePlayer(UWorld*)", InWorld); }
	ULocalPlayer* GetFirstGamePlayer(UPendingNetGame* PendingNetGame) { return NativeCall<ULocalPlayer*, UPendingNetGame*>(this, "UEngine.GetFirstGamePlayer(UPendingNetGame*)", PendingNetGame); }
	void ShutdownWorldNetDriver(UWorld* World) { NativeCall<void, UWorld*>(this, "UEngine.ShutdownWorldNetDriver(UWorld*)", World); }
	UNetDriver* FindNamedNetDriver(const UWorld* InWorld, FName NetDriverName) { return NativeCall<UNetDriver*, const UWorld*, FName>(this, "UEngine.FindNamedNetDriver(UWorld*,FName)", InWorld, NetDriverName); }
	bool CreateNamedNetDriver(UWorld* InWorld, FName NetDriverName, FName NetDriverDefinition) { return NativeCall<bool, UWorld*, FName, FName>(this, "UEngine.CreateNamedNetDriver(UWorld*,FName,FName)", InWorld, NetDriverName, NetDriverDefinition); }
	void DestroyNamedNetDriver(UWorld* InWorld, FName NetDriverName) { NativeCall<void, UWorld*, FName>(this, "UEngine.DestroyNamedNetDriver(UWorld*,FName)", InWorld, NetDriverName); }
	void DestroyNamedNetDriver(UPendingNetGame* PendingNetGame, FName NetDriverName) { NativeCall<void, UPendingNetGame*, FName>(this, "UEngine.DestroyNamedNetDriver(UPendingNetGame*,FName)", PendingNetGame, NetDriverName); }
	void HandleTravelFailure(UWorld* InWorld, ETravelFailure::Type FailureType, const FString* ErrorString) { NativeCall<void, UWorld*, ETravelFailure::Type, const FString*>(this, "UEngine.HandleTravelFailure(UWorld*,ETravelFailure::Type,FString&)", InWorld, FailureType, ErrorString); }
	void HandleNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString* ErrorString) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type, const FString*>(this, "UEngine.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", World, NetDriver, FailureType, ErrorString); }
	void HandleNetworkFailure_NotifyGameInstance(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type>(this, "UEngine.HandleNetworkFailure_NotifyGameInstance(UWorld*,UNetDriver*,ENetworkFailure::Type)", World, NetDriver, FailureType); }
	void HandleTravelFailure_NotifyGameInstance(UWorld* World, ETravelFailure::Type FailureType) { NativeCall<void, UWorld*, ETravelFailure::Type>(this, "UEngine.HandleTravelFailure_NotifyGameInstance(UWorld*,ETravelFailure::Type)", World, FailureType); }
	void SpawnServerActors(UWorld* World) { NativeCall<void, UWorld*>(this, "UEngine.SpawnServerActors(UWorld*)", World); }
	bool HandleOpenCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleOpenCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleTravelCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleTravelCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleStreamMapCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleStreamMapCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleServerTravelCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleServerTravelCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleDisconnectCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleDisconnectCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	void HandleDisconnect(UWorld* InWorld, UNetDriver* NetDriver) { NativeCall<void, UWorld*, UNetDriver*>(this, "UEngine.HandleDisconnect(UWorld*,UNetDriver*)", InWorld, NetDriver); }
	bool HandleReconnectCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleReconnectCommand(wchar_t*,FOutputDevice*,UWorld*)", Cmd, Ar, InWorld); }
	bool MakeSureMapNameIsValid(FString* InOutMapName) { return NativeCall<bool, FString*>(this, "UEngine.MakeSureMapNameIsValid(FString&)", InOutMapName); }
	//void SetClientTravel(UWorld* InWorld, const wchar_t* NextURL, ETravelType InTravelType) { NativeCall<void, UWorld*, const wchar_t*, ETravelType>(this, "UEngine.SetClientTravel(UWorld*,wchar_t*,ETravelType)", InWorld, NextURL, InTravelType); }
	void CancelPending(UNetDriver* PendingNetGameDriver) { NativeCall<void, UNetDriver*>(this, "UEngine.CancelPending(UNetDriver*)", PendingNetGameDriver); }
	void CancelPending(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.CancelPending(FWorldContext*)", Context); }
	void CancelPending(UWorld* InWorld, UPendingNetGame* NewPendingNetGame) { NativeCall<void, UWorld*, UPendingNetGame*>(this, "UEngine.CancelPending(UWorld*,UPendingNetGame*)", InWorld, NewPendingNetGame); }
	void CancelAllPending() { NativeCall<void>(this, "UEngine.CancelAllPending()"); }
	void BrowseToDefaultMap(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.BrowseToDefaultMap(FWorldContext*)", Context); }
	void HandleBrowseToDefaultMapFailure(FWorldContext* Context, const FString* TextURL, const FString* Error) { NativeCall<void, FWorldContext*, const FString*, const FString*>(this, "UEngine.HandleBrowseToDefaultMapFailure(FWorldContext*,FString&,FString&)", Context, TextURL, Error); }
	void TickWorldTravel(FWorldContext* Context, float DeltaSeconds) { NativeCall<void, FWorldContext*, float>(this, "UEngine.TickWorldTravel(FWorldContext*,float)", Context, DeltaSeconds); }
	static char LoadMap() { return NativeCall<char>(nullptr, "UEngine.LoadMap()"); }
	void CleanupPackagesToFullyLoad(FWorldContext* Context, EFullyLoadPackageType FullyLoadType, const FString* Tag) { NativeCall<void, FWorldContext*, EFullyLoadPackageType, const FString*>(this, "UEngine.CleanupPackagesToFullyLoad(FWorldContext*,EFullyLoadPackageType,FString&)", Context, FullyLoadType, Tag); }
	void CancelPendingMapChange(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.CancelPendingMapChange(FWorldContext*)", Context); }
	void ClearDebugDisplayProperties() { NativeCall<void>(this, "UEngine.ClearDebugDisplayProperties()"); }
	void MovePendingLevel(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.MovePendingLevel(FWorldContext*)", Context); }
	void LoadPackagesFully(UWorld* InWorld, EFullyLoadPackageType FullyLoadType, const FString* Tag) { NativeCall<void, UWorld*, EFullyLoadPackageType, const FString*>(this, "UEngine.LoadPackagesFully(UWorld*,EFullyLoadPackageType,FString&)", InWorld, FullyLoadType, Tag); }
	FWorldContext* CreateNewWorldContext(EWorldType::Type WorldType) { return NativeCall<FWorldContext*, EWorldType::Type>(this, "UEngine.CreateNewWorldContext(EWorldType::Type)", WorldType); }
	FWorldContext* GetWorldContextFromWorld(const UWorld* InWorld) { return NativeCall<FWorldContext*, const UWorld*>(this, "UEngine.GetWorldContextFromWorld(UWorld*)", InWorld); }
	FWorldContext* GetWorldContextFromWorldChecked(const UWorld* InWorld) { return NativeCall<FWorldContext*, const UWorld*>(this, "UEngine.GetWorldContextFromWorldChecked(UWorld*)", InWorld); }
	void DestroyWorldContext(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.DestroyWorldContext(UWorld*)", InWorld); }
	bool IsWorldDuplicate(const UWorld* const InWorld) { return NativeCall<bool, const UWorld* const>(this, "UEngine.IsWorldDuplicate(UWorld*const)", InWorld); }
	void CheckAndHandleStaleWorldObjectReferences(FWorldContext* WorldContext) { NativeCall<void, FWorldContext*>(this, "UEngine.CheckAndHandleStaleWorldObjectReferences(FWorldContext*)", WorldContext); }
	static wchar_t*** FindAndPrintStaleReferencesToObjects() { return NativeCall<wchar_t***>(nullptr, "UEngine.FindAndPrintStaleReferencesToObjects()"); }
	bool PrepareMapChange(FWorldContext* Context, const TArray<FName, TSizedDefaultAllocator<32> >* LevelNames) { return NativeCall<bool, FWorldContext*, const TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UEngine.PrepareMapChange(FWorldContext*,TArray<FName,TSizedDefaultAllocator<32>>*)", Context, LevelNames); }
	void ConditionalCommitMapChange(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.ConditionalCommitMapChange(FWorldContext*)", Context); }
	bool CommitMapChange(FWorldContext* Context) { return NativeCall<bool, FWorldContext*>(this, "UEngine.CommitMapChange(FWorldContext*)", Context); }
	FSeamlessTravelHandler* SeamlessTravelHandlerForWorld(UWorld* World) { return NativeCall<FSeamlessTravelHandler*, UWorld*>(this, "UEngine.SeamlessTravelHandlerForWorld(UWorld*)", World); }
	struct FURL* LastURLFromWorld(UWorld* World) { return NativeCall<FURL*, UWorld*>(this, "UEngine.LastURLFromWorld(UWorld*)", World); }
	void CreateGameUserSettings() { NativeCall<void>(this, "UEngine.CreateGameUserSettings()"); }
	UGameUserSettings* GetGameUserSettings() { return NativeCall<UGameUserSettings*>(this, "UEngine.GetGameUserSettings()"); }
	static void CopyPropertiesForUnrelatedObjects() { NativeCall<void>(nullptr, "UEngine.CopyPropertiesForUnrelatedObjects()"); }
	int GetGlobalFunctionCallspace(UFunction* Function, UObject* FunctionTarget, FFrame* Stack) { return NativeCall<int, UFunction*, UObject*, FFrame*>(this, "UEngine.GetGlobalFunctionCallspace(UFunction*,UObject*,FFrame*)", Function, FunctionTarget, Stack); }
	//void ExecEngineStat(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* InName) { NativeCall<void, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ExecEngineStat(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, InName); }
	//void SetEngineStat(UWorld* World, FCommonViewportClient* ViewportClient, const FString* InName, const bool bShow) { NativeCall<void, UWorld*, FCommonViewportClient*, const FString*, const bool>(this, "UEngine.SetEngineStat(UWorld*,FCommonViewportClient*,FString&,bool)", World, ViewportClient, InName, bShow); }
	//bool ToggleStatDetailed(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatDetailed(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//bool ToggleStatFPS(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatFPS(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//int RenderStatFPS(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatFPS(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//bool ToggleStatHitches(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatHitches(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//int RenderStatHitches(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatHitches(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatSummary(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatSummary(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//bool ToggleStatNamedEvents(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatNamedEvents(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//bool ToggleStatVerboseNamedEvents(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatVerboseNamedEvents(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//int RenderNamedEventsEnabled(FCanvas* Canvas, int X, int Y) { return NativeCall<int, FCanvas*, int, int>(this, "UEngine.RenderNamedEventsEnabled(FCanvas*,int,int)", Canvas, X, Y); }
	//int RenderStatColorList(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatColorList(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatLevels(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatLevels(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//bool ToggleStatUnit(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatUnit(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//int RenderStatUnit(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatUnit(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatDrawCount(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatDrawCount(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatAI(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatAI(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatTimecode(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatTimecode(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatFrameCounter(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatFrameCounter(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//void FEngineStatFuncs(UEngine::FEngineStatFuncs* __that) { NativeCall<void, UEngine::FEngineStatFuncs*>(this, "UEngine.FEngineStatFuncs(UEngine::FEngineStatFuncs*)", __that); }
	//static void FEngineStatFuncs() { NativeCall<void>(nullptr, "UEngine.FEngineStatFuncs()"); }
	struct UContentBundleEngineSubsystem* GetEngineSubsystem() { return NativeCall<UContentBundleEngineSubsystem*>(this, "UEngine.GetEngineSubsystem<class UContentBundleEngineSubsystem>()"); }
};

/*
* \brief Gets the size in bytes of an Object class. Example: GetObjectClassSize<AActor>()
*
* tparam T - Object class
* \return The size of the class in bytes
*/
template <typename T>
int GetObjectClassSize()
{
	// Credits to Substitute#0001 for the idea
	UClass* objClass = T::StaticClass();
	if (objClass)
	{
		return objClass->PropertiesSizeField();
	}

	return 0;
}

/*
* \brief Gets the size in bytes of an struct class. Example: GetObjectClassSize<FTribeData>()
*
* \tparam T - Struct class
* \return The size in bytes
*/
template <typename T>
int GetStructSize()
{
	// Credits to Substitute#0001 for the idea
	int size = 0;
	UScriptStruct* staticStruct = T::StaticStruct();
	if (staticStruct)
	{
		return staticStruct->PropertiesSizeField();
	}
	return 0;
}