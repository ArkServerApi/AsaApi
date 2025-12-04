#pragma once
#include "..\Base.h"

enum class ESocketType
{
	SOCKTYPE_Unknown = 0x0,
	SOCKTYPE_Datagram = 0x1,
	SOCKTYPE_Streaming = 0x2,
};
struct RCONPacket
{
	int Length;
	int Id;
	int Type;
	FString Body;
};
struct FSocket
{
	ESocketType& SocketTypeField() { return *GetNativePointerField<ESocketType*>(this, "FSocket.SocketType"); }
	FString& SocketDescriptionField() { return *GetNativePointerField<FString*>(this, "FSocket.SocketDescription"); }
};
struct RCONClientConnection
{
	FSocket* SocketField() { return *GetNativePointerField<FSocket**>(this, "RCONClientConnection.Socket"); }
	UShooterCheatManager* CheatManagerField() { return *GetNativePointerField<UShooterCheatManager**>(this, "RCONClientConnection.CheatManager"); }
	bool& IsAuthenticatedField() { return *GetNativePointerField<bool*>(this, "RCONClientConnection.IsAuthenticated"); }
	bool& IsClosedField() { return *GetNativePointerField<bool*>(this, "RCONClientConnection.IsClosed"); }
	TArray<signed char>& DataBufferField() { return *GetNativePointerField<TArray<signed char>*>(this, "RCONClientConnection.DataBuffer"); }
	unsigned int& CurrentPacketSizeField() { return *GetNativePointerField<unsigned int*>(this, "RCONClientConnection.CurrentPacketSize"); }
	long double& LastReceiveTimeField() { return *GetNativePointerField<long double*>(this, "RCONClientConnection.LastReceiveTime"); }
	long double& LastSendKeepAliveTimeField() { return *GetNativePointerField<long double*>(this, "RCONClientConnection.LastSendKeepAliveTime"); }
	FString& ServerPasswordField() { return *GetNativePointerField<FString*>(this, "RCONClientConnection.ServerPassword"); }

	// Functions

	void Tick(long double WorldTime, UWorld* InWorld) { NativeCall<void, long double, UWorld*>(this, "RCONClientConnection.Tick(double,UWorld*)", WorldTime, InWorld); }
	void ProcessRCONPacket(RCONPacket* Packet, UWorld* InWorld) { NativeCall<void, RCONPacket*, UWorld*>(this, "RCONClientConnection.ProcessRCONPacket(RCONPacket&,UWorld*)", Packet, InWorld); }
	void SendMessageW(int Id, int Type, FString* OutGoingMessage) { NativeCall<void, int, int, FString*>(this, "RCONClientConnection.SendMessage(int,int,FString&)", Id, Type, OutGoingMessage); }
	void Close() { NativeCall<void>(this, "RCONClientConnection.Close()"); }
};
struct UVictoryCoreHighest : UObject
{
	// Fields


	  // Bitfields


	  // Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UVictoryCoreHighest.StaticClass()"); }
};

struct FTrackedActorOverallContainer
{
	// Fields

	TMap<int, FTrackedActorPlusInfoStruct, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FTrackedActorPlusInfoStruct, 0> >& TrackedActorEntriesAsPerCategoryField() { return *GetNativePointerField<TMap<int, FTrackedActorPlusInfoStruct, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FTrackedActorPlusInfoStruct, 0> >*>(this, "FTrackedActorOverallContainer.TrackedActorEntriesAsPerCategory"); }

	// Bitfields


	// Functions

	UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FTrackedActorOverallContainer.StaticStruct()"); }

};

struct UFoliageBaseType : UObject
{
	// Fields

	TSoftObjectPtr<UGeometryCollection>& SoftDestructionAssetField() { return *GetNativePointerField<TSoftObjectPtr<UGeometryCollection>*>(this, "UFoliageBaseType.SoftDestructionAsset"); }
	bool& bEmissiveLightSourceField() { return *GetNativePointerField<bool*>(this, "UFoliageBaseType.bEmissiveLightSource"); }
	float& LDMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UFoliageBaseType.LDMaxDrawDistance"); }

	// Bitfields


	// Functions

	TArray<TObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> > getOverrideMaterials() { return NativeCall<TArray<TObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >>(this, "UFoliageBaseType.getOverrideMaterials()"); }
	UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UFoliageBaseType.GetPrivateStaticClass()"); }
	void StaticRegisterNativesUFoliageBaseType() { NativeCall<void>(nullptr, "UFoliageBaseType.StaticRegisterNativesUFoliageBaseType()"); }
	UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UFoliageBaseType.StaticClass()"); }

};

struct FSortingTask
{
	// Fields

	struct AActor*& ContainerField() { return *GetNativePointerField<struct AActor**>(this, "FSortingTask.Container"); }
	TEnumAsByte<enum ESortingTaskAction::Type>& ActionField() { return *GetNativePointerField<TEnumAsByte<enum ESortingTaskAction::Type>*>(this, "FSortingTask.Action"); }
	TSubclassOf<UPrimalItem>& ItemTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FSortingTask.ItemType"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FSortingTask.Quantity"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FSortingTask.Weight"); }
	int& PairIdField() { return *GetNativePointerField<int*>(this, "FSortingTask.PairId"); }

	// Bitfields


	// Functions

	UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FSortingTask.StaticStruct()"); }

};

struct FContainerTasks
{
	// Fields

	struct AActor*& ContainerField() { return *GetNativePointerField<struct AActor**>(this, "FContainerTasks.Container"); }
	TArray<FSortingTask, TSizedDefaultAllocator<32> >& TasksField() { return *GetNativePointerField<TArray<FSortingTask, TSizedDefaultAllocator<32> >*>(this, "FContainerTasks.Tasks"); }

	// Bitfields


	// Functions

	UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FContainerTasks.StaticStruct()"); }

};

struct FLootTableEntry
{
	// Fields

	TEnumAsByte<enum ELootItemType::Type>& LootItemTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELootItemType::Type>*>(this, "FLootTableEntry.LootItemType"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& LootItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FLootTableEntry.LootItemClasses"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FLootTableEntry.Weight"); }
	TEnumAsByte<enum ESimpleCurve::Type>& QuantityCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "FLootTableEntry.QuantityCurve"); }
	int& MinQuantityField() { return *GetNativePointerField<int*>(this, "FLootTableEntry.MinQuantity"); }
	int& MaxQuantityField() { return *GetNativePointerField<int*>(this, "FLootTableEntry.MaxQuantity"); }
	TEnumAsByte<enum ESimpleCurve::Type>& QualityCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "FLootTableEntry.QualityCurve"); }
	UE::Math::TVector2<double>& QualityRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FLootTableEntry.QualityRange"); }

	// Bitfields


	// Functions

	UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FLootTableEntry.StaticStruct()"); }

};

struct FDateTime
{
	// Fields

	long Ticks;

	// Bitfields


	// Functions

	double ToUnixTimestampDecimal()const { return NativeCall<double>(this, "FDateTime.ToUnixTimestampDecimal()"); }
	int GetDayOfYear()const { return NativeCall<int>(this, "FDateTime.GetDayOfYear()"); }
	int GetHour12()const { return NativeCall<int>(this, "FDateTime.GetHour12()"); }
	FString ToString(const wchar_t* Format) const { return NativeCall<FString, const wchar_t*>(this, "FDateTime.ToString(wchar_t*)", Format); }
	FString ToString()const { return NativeCall<FString>(this, "FDateTime.ToString()"); }
	void ToString(const wchar_t* Format, class TStringBuilderBase<wchar_t>* Result) const { NativeCall<void, const wchar_t*, class TStringBuilderBase<wchar_t>*>(this, "FDateTime.ToString(wchar_t*,TStringBuilderBase<wchar_t>&)", Format, Result); }
	int GetMonth()const { return NativeCall<int>(this, "FDateTime.GetMonth()"); }
	bool ImportTextItem(const wchar_t** Buffer, int PortFlags, struct UObject* Parent, class FOutputDevice* ErrorText) { return NativeCall<bool, const wchar_t**, int, struct UObject*, class FOutputDevice*>(this, "FDateTime.ImportTextItem(wchar_t*&,int,UObject*,FOutputDevice*)", Buffer, PortFlags, Parent, ErrorText); }
	static FDateTime UtcNow() { return NativeCall<FDateTime>(nullptr, "FDateTime.UtcNow()"); }
	static bool Validate(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond) { return NativeCall<bool, int, int, int, int, int, int, int>(nullptr, "FDateTime.Validate(int,int,int,int,int,int,int)", Year, Month, Day, Hour, Minute, Second, Millisecond); }
	//bool NetSerialize(class FArchive* Ar, struct UPackageMap* Map, bool& bOutSuccess) { return NativeCall<bool, class FArchive*, struct UPackageMap*, bool&>(this, "FDateTime.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
	static bool ParseHttpDate(const class FString& HttpDate, struct FDateTime* OutDateTime) { return NativeCall<bool, const class FString&, struct FDateTime*>(nullptr, "FDateTime.ParseHttpDate(FString&,FDateTime&)", HttpDate, OutDateTime); }
	FString ToIso8601()const { return NativeCall<FString>(this, "FDateTime.ToIso8601()"); }
	static bool Parse(const class FString& DateTimeString, struct FDateTime* OutDateTime) { return NativeCall<bool, const class FString&, struct FDateTime*>(nullptr, "FDateTime.Parse(FString&,FDateTime&)", DateTimeString, OutDateTime); }
	static bool IsLeapYear(int Year) { return NativeCall<bool, int>(nullptr, "FDateTime.IsLeapYear(int)", Year); }
	bool ExportTextItem(class FString& ValueStr, const struct FDateTime* DefaultValue, struct UObject* Parent, int PortFlags, struct UObject* ExportRootScope) const { return NativeCall<bool, class FString&, const struct FDateTime*, struct UObject*, int, struct UObject*>(this, "FDateTime.ExportTextItem(FString&,FDateTime&,UObject*,int,UObject*)", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	static int DaysInMonth(int Year, int Month) { return NativeCall<int, int, int>(nullptr, "FDateTime.DaysInMonth(int,int)", Year, Month); }
	EDayOfWeek GetDayOfWeek()const { return NativeCall<EDayOfWeek>(this, "FDateTime.GetDayOfWeek()"); }
	int GetYear()const { return NativeCall<int>(this, "FDateTime.GetYear()"); }
	static bool ParseIso8601(const wchar_t* DateTimeString, struct FDateTime* OutDateTime) { return NativeCall<bool, const wchar_t*, struct FDateTime*>(nullptr, "FDateTime.ParseIso8601(wchar_t*,FDateTime&)", DateTimeString, OutDateTime); }
	void GetDate(int& OutYear, int& OutMonth, int& OutDay) const { NativeCall<void, int&, int&, int&>(this, "FDateTime.GetDate(int&,int&,int&)", OutYear, OutMonth, OutDay); }
	bool Serialize(class FArchive* Ar) { return NativeCall<bool, class FArchive*>(this, "FDateTime.Serialize(FArchive&)", Ar); }
	static int DaysInYear(int Year) { return NativeCall<int, int>(nullptr, "FDateTime.DaysInYear(int)", Year); }
	FTimespan operator-(const struct FDateTime* Other) const { return NativeCall<FTimespan, const struct FDateTime*>(this, "FDateTime.operator-(FDateTime&)", Other); }
	__int64 ToUnixTimestamp()const { return NativeCall<__int64>(this, "FDateTime.ToUnixTimestamp()"); }
	static FDateTime Now() { return NativeCall<FDateTime>(nullptr, "FDateTime.Now()"); }
	int GetDay()const { return NativeCall<int>(this, "FDateTime.GetDay()"); }

};

struct UVictoryCore : UVictoryCoreHighest
{
	// Fields


	// Bitfields


	// Functions

	static UObject* PureDefaultObject(struct UObject* FromObjectInstance) { return NativeCall<UObject*, struct UObject*>(nullptr, "UVictoryCore.PureDefaultObject(UObject*)", FromObjectInstance); }
	static void UnPauseTimer(struct UObject* Object, class FString* FunctionName) { NativeCall<void, struct UObject*, class FString*>(nullptr, "UVictoryCore.UnPauseTimer(UObject*,FString)", Object, FunctionName); }
	static FName GetMontageGroupName(struct UAnimMontage* GivenMontage) { return NativeCall<FName, struct UAnimMontage*>(nullptr, "UVictoryCore.GetMontageGroupName(UAnimMontage*)", GivenMontage); }
	static APrimalStructure* IsInsideTekBunker(UE::Math::TVector<double>* AtLoc, struct UObject* WorldContextObject) { return NativeCall<APrimalStructure*, UE::Math::TVector<double>*, struct UObject*>(nullptr, "UVictoryCore.IsInsideTekBunker(UE::Math::TVector<double>,UObject*)", AtLoc, WorldContextObject); }
	static UClass* GetItemClassFromItemSetup(const struct FItemSetup* ItemSetup) { return NativeCall<UClass*, const struct FItemSetup*>(nullptr, "UVictoryCore.GetItemClassFromItemSetup(FItemSetup&)", ItemSetup); }
	static bool NetIDOwnsBobsTallTales(const struct UObject* WorldContextObject, const struct FUniqueNetIdRepl* OwnerNetID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, const struct FUniqueNetIdRepl*, bool>(nullptr, "UVictoryCore.NetIDOwnsBobsTallTales(UObject*,FUniqueNetIdRepl&,bool)", WorldContextObject, OwnerNetID, CheckOffline); }
	static bool AddNetworkActorFromWorld_StartsReplication(struct UObject* WorldContextObject, struct AActor* ActorToRemove) { return NativeCall<bool, struct UObject*, struct AActor*>(nullptr, "UVictoryCore.AddNetworkActorFromWorld_StartsReplication(UObject*,AActor*)", WorldContextObject, ActorToRemove); }
	static bool ReallySupportsShaderModel5() { return NativeCall<bool>(nullptr, "UVictoryCore.ReallySupportsShaderModel5()"); }
	static bool CalculateInterceptPosition(const struct UE::Math::TVector<double>* StartPosition, const struct UE::Math::TVector<double>* StartVelocity, float ProjectileVelocity, const struct UE::Math::TVector<double>* TargetPosition, const struct UE::Math::TVector<double>* TargetVelocity, struct UE::Math::TVector<double>* InterceptPosition) { return NativeCall<bool, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, float, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.CalculateInterceptPosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", StartPosition, StartVelocity, ProjectileVelocity, TargetPosition, TargetVelocity, InterceptPosition); }
	static TSubclassOf<UPrimalItem>* GenerateRandomLootItem(TSubclassOf<UPrimalItem>* result, TEnumAsByte<enum ELootItemType::Type> LootItemType) { return NativeCall<TSubclassOf<UPrimalItem>*, TSubclassOf<UPrimalItem>*, TEnumAsByte<enum ELootItemType::Type>>(nullptr, "UVictoryCore.GenerateRandomLootItem(TEnumAsByte<ELootItemType::Type>)", result, LootItemType); }
	static int IsChildOfClassesT(struct TSubclassOf<UObject>* childClass, const class TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesT<UPrimalItem>(TSubclassOf<UObject>,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static bool CanSpawnClassInMap(struct UObject* worldContextObject, struct UClass* spawnClass) { return NativeCall<bool, struct UObject*, struct UClass*>(nullptr, "UVictoryCore.CanSpawnClassInMap(UObject*,UClass*)", worldContextObject, spawnClass); }
	static int IsChildOfClassesSoftRefT(struct TSubclassOf<UObject>* childClass, const class TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<UObject>(TSubclassOf<UObject>,TArray<TSoftClassPtr<UObject>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static UE::Math::TIntPoint<int> CalculateGPSCoordinates(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* WorldPos) { return NativeCall<UE::Math::TIntPoint<int>, struct UObject*, const struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.CalculateGPSCoordinates(UObject*,UE::Math::TVector<double>&)", WorldContextObject, WorldPos); }
	static bool OwnsDarkPegasus() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsDarkPegasus()"); }
	static bool BPFastTrace(struct UObject* WorldContextObject, UE::Math::TVector<double>* TraceEnd, UE::Math::TVector<double>* TraceStart, struct AActor* ActorToIgnore, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct AActor*, float>(nullptr, "UVictoryCore.BPFastTrace(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,AActor*,float)", WorldContextObject, TraceEnd, TraceStart, ActorToIgnore, DebugDrawDuration); }
	static FString* GetDLCNameFromSelector(FString* result, EDLCSelector SelectedDLC) { return NativeCall<FString*, FString*, EDLCSelector>(nullptr, "UVictoryCore.GetDLCNameFromSelector(EDLCSelector)", result, SelectedDLC); }
	static EDLCSelector GetDLCSelectorFromName(class FString* Name) { return NativeCall<EDLCSelector, class FString*>(nullptr, "UVictoryCore.GetDLCSelectorFromName(FString)", Name); }
	static FName GetKeybindName(FName Keybind) { return NativeCall<FName, FName>(nullptr, "UVictoryCore.GetKeybindName(FName)", Keybind); }
	static UE::Math::TRotator<double>* ConvertRotatorFromLocalToWorld(UE::Math::TRotator<double>* result, const struct UE::Math::TRotator<double>* ConvertRot, const struct UE::Math::TRotator<double>* FromParentRotation) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*>(nullptr, "UVictoryCore.ConvertRotatorFromLocalToWorld(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", result, ConvertRot, FromParentRotation); }
	static void TrimArray_Float(class TArray<float, TSizedDefaultAllocator<32> >* InOutArray, int MaxLength, bool bRemoveFromEnd) { NativeCall<void, class TArray<float, TSizedDefaultAllocator<32> >*, int, bool>(nullptr, "UVictoryCore.TrimArray_Float(TArray<float,TSizedDefaultAllocator<32>>&,int,bool)", InOutArray, MaxLength, bRemoveFromEnd); }
	static double GetMissionNetworkStartTime(struct UObject* WorldContextObject, FName MissionTag) { return NativeCall<double, struct UObject*, FName>(nullptr, "UVictoryCore.GetMissionNetworkStartTime(UObject*,FName)", WorldContextObject, MissionTag); }
	static bool IsPointStuckWithinMesh(struct UObject* WorldContextObject, UE::Math::TVector<double>* TestPoint, int hemisphereSubdivisions, float rayDistance, float percentageConsideredStuck, struct AActor* ActorToIgnore, bool bDrawPrintDebug, bool bForceCheckUnderwater) { return NativeCall<bool, struct UObject*, UE::Math::TVector<double>*, int, float, float, struct AActor*, bool, bool>(nullptr, "UVictoryCore.IsPointStuckWithinMesh(UObject*,UE::Math::TVector<double>,int,float,float,AActor*,bool,bool)", WorldContextObject, TestPoint, hemisphereSubdivisions, rayDistance, percentageConsideredStuck, ActorToIgnore, bDrawPrintDebug, bForceCheckUnderwater); }
	static bool CapsuleSweepProjectileArc(struct UObject* WorldContextObject, const struct FProjectileArc* Arc, const struct UE::Math::TRotator<double>* CapsuleRotation, float CapsuleRadius, float CapsuleHalfHeight, bool bRotateCapsuleAlongPath, bool bTraceComplex, struct FHitResult* OutHitResult, struct UE::Math::TVector<double>* OutEndLocation, float* OutEndArcTime, float MaxArcLength, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, bool bIgnoreSelf, float ArcTimeStep, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bDrawDebug, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, const struct FProjectileArc*, const struct UE::Math::TRotator<double>*, float, float, bool, bool, struct FHitResult*, struct UE::Math::TVector<double>*, float*, float, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, float, TEnumAsByte<enum ECollisionChannel>, bool, float>(nullptr, "UVictoryCore.CapsuleSweepProjectileArc(UObject*,FProjectileArc&,UE::Math::TRotator<double>&,float,float,bool,bool,FHitResult&,UE::Math::TVector<double>&,float&,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,float,TEnumAsByte<ECollisionChannel>,bool,float)", WorldContextObject, Arc, CapsuleRotation, CapsuleRadius, CapsuleHalfHeight, bRotateCapsuleAlongPath, bTraceComplex, OutHitResult, OutEndLocation, OutEndArcTime, MaxArcLength, ActorsToIgnore, bIgnoreSelf, ArcTimeStep, CollisionChannel, bDrawDebug, DebugDrawDuration); }
	static void StopCompanionEventForPlayer(struct APrimalCharacter* Player) { NativeCall<void, struct APrimalCharacter*>(nullptr, "UVictoryCore.StopCompanionEventForPlayer(APrimalCharacter*)", Player); }
	static float StaticGetTimeSince(struct UObject* WorldContextObject, double time) { return NativeCall<float, struct UObject*, double>(nullptr, "UVictoryCore.StaticGetTimeSince(UObject*,double)", WorldContextObject, time); }
	static void ResetCharacterBoneModifiersToPreset(struct UObject* WorldContextObject, struct UPrimalPlayerData* playerData, struct AShooterPlayerState* UsedPlayerState, int PresetIndex) { NativeCall<void, struct UObject*, struct UPrimalPlayerData*, struct AShooterPlayerState*, int>(nullptr, "UVictoryCore.ResetCharacterBoneModifiersToPreset(UObject*,UPrimalPlayerData*,AShooterPlayerState*,int)", WorldContextObject, playerData, UsedPlayerState, PresetIndex); }
	static bool BPProjectWorldToScreenPositionRaw(struct APlayerController* ThePC, UE::Math::TVector<double>* WorldLocation, struct UE::Math::TVector2<double>* Out_ScreenLocation, struct UE::Math::TVector<double>* Out_ViewLocation, bool* Out_bIsScreenLocationInsideViewRect, bool bIgnoreScreenProjectionGlobalTransform) { return NativeCall<bool, struct APlayerController*, UE::Math::TVector<double>*, struct UE::Math::TVector2<double>*, struct UE::Math::TVector<double>*, bool*, bool>(nullptr, "UVictoryCore.BPProjectWorldToScreenPositionRaw(APlayerController*,UE::Math::TVector<double>,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,bool&,bool)", ThePC, WorldLocation, Out_ScreenLocation, Out_ViewLocation, Out_bIsScreenLocationInsideViewRect, bIgnoreScreenProjectionGlobalTransform); }
	static bool IntersectsBox(const struct UE::Math::TVector<double>* Origin, const struct UE::Math::TVector<double>* Extents, const struct UShapeComponent* shapeComponent) { return NativeCall<bool, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UShapeComponent*>(nullptr, "UVictoryCore.IntersectsBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShapeComponent*)", Origin, Extents, shapeComponent); }
	static bool IsAstraeosInstalled() { return NativeCall<bool>(nullptr, "UVictoryCore.IsAstraeosInstalled()"); }
	static bool IsAudioComponentFadingIn(struct UAudioComponent* AudioComponent) { return NativeCall<bool, struct UAudioComponent*>(nullptr, "UVictoryCore.IsAudioComponentFadingIn(UAudioComponent*)", AudioComponent); }
	static UE::Math::TVector<double>* FlattenDirectionVector(UE::Math::TVector<double>* result, UE::Math::TVector<double>* Direction) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.FlattenDirectionVector(UE::Math::TVector<double>)", result, Direction); }
	static void AddCombinedFoliageFluidCapsuleInteractionEffect(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* ExtraCapsuleLocation, float Radius, UE::Math::TVector<double>* Velocity, float FoliageInteractionStrength, float FoliagePlasticity, bool bSplash, bool bRipple, struct UNiagaraSystem* FluidSimSplashTemplateOverride, bool PlaySplashSound, UE::Math::TVector<double>* SplashLocation, float SplashRadius) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, float, bool, bool, struct UNiagaraSystem*, bool, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.AddCombinedFoliageFluidCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", WorldContextObject, Location, ExtraCapsuleLocation, Radius, Velocity, FoliageInteractionStrength, FoliagePlasticity, bSplash, bRipple, FluidSimSplashTemplateOverride, PlaySplashSound, SplashLocation, SplashRadius); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* SortActorsByTag(TArray<AActor*, TSizedDefaultAllocator<32> >* result, int tagIndex, const class TArray<AActor*, TSizedDefaultAllocator<32> >* actors) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, int, const class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortActorsByTag(int,TArray<AActor*,TSizedDefaultAllocator<32>>&)", result, tagIndex, actors); }
	static UObject* PureClassDefaultObject(struct UClass* FromClass) { return NativeCall<UObject*, struct UClass*>(nullptr, "UVictoryCore.PureClassDefaultObject(UClass*)", FromClass); }
	static float BPFLerp(float InMin, float InMax, float InPercent, bool bClampToMin, bool bClampToMax) { return NativeCall<float, float, float, float, bool, bool>(nullptr, "UVictoryCore.BPFLerp(float,float,float,bool,bool)", InMin, InMax, InPercent, bClampToMin, bClampToMax); }
	static void UpdateTaskTags(class TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>* TaggedContainers, const class TArray<FContainerTasks, TSizedDefaultAllocator<32> >* CurrentSortingTasks, FName TaskTag, bool bClearAll) { NativeCall<void, class TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>*, const class TArray<FContainerTasks, TSizedDefaultAllocator<32> >*, FName, bool>(nullptr, "UVictoryCore.UpdateTaskTags(TSet<AActor*,DefaultKeyFuncs<AActor*,0>,FDefaultSetAllocator>&,TArray<FContainerTasks,TSizedDefaultAllocator<32>>&,FName,bool)", TaggedContainers, CurrentSortingTasks, TaskTag, bClearAll); }
	static bool PlayerOwnsExtinctionServer(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsExtinctionServer(AShooterPlayerController*)", controller); }
	static void GetFoliageScaleFromSettings(bool* Succeeded, EFoliageScaling* ScalingType, float* OutScaleX, float* OutScaleXMin, float* OutScaleXMax, float* OutScaleY, float* OutScaleYMin, float* OutScaleYMax, float* OutScaleZ, float* OutScaleZMin, float* OutScaleZMax, struct UFoliageType_InstancedStaticMesh* Settings) { NativeCall<void, bool*, EFoliageScaling*, float*, float*, float*, float*, float*, float*, float*, float*, float*, struct UFoliageType_InstancedStaticMesh*>(nullptr, "UVictoryCore.GetFoliageScaleFromSettings(bool&,EFoliageScaling&,float&,float&,float&,float&,float&,float&,float&,float&,float&,UFoliageType_InstancedStaticMesh*)", Succeeded, ScalingType, OutScaleX, OutScaleXMin, OutScaleXMax, OutScaleY, OutScaleYMin, OutScaleYMax, OutScaleZ, OutScaleZMin, OutScaleZMax, Settings); }
	static int GetDinoSetupPointsPerStat(const struct FDinoSetup* DinoSetup, TEnumAsByte<enum EPrimalCharacterStatusValue::Type> StatusType, bool bGetPlayerAdded) { return NativeCall<int, const struct FDinoSetup*, TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, bool>(nullptr, "UVictoryCore.GetDinoSetupPointsPerStat(FDinoSetup&,TEnumAsByte<EPrimalCharacterStatusValue::Type>,bool)", DinoSetup, StatusType, bGetPlayerAdded); }
	static FName GetClassFName(struct UClass* ForClass) { return NativeCall<FName, struct UClass*>(nullptr, "UVictoryCore.GetClassFName(UClass*)", ForClass); }
	static TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >* GetAllLocalPlayerControllers(TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >*, TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllLocalPlayerControllers(UObject*)", result, WorldContextObject); }
	static FString* SimpleFloatString(FString* result, float inputVal) { return NativeCall<FString*, FString*, float>(nullptr, "UVictoryCore.SimpleFloatString(float)", result, inputVal); }
	static UE::Math::TRotator<double>* BPRTransform(UE::Math::TRotator<double>* result, const struct UE::Math::TRotator<double>* R, const struct UE::Math::TRotator<double>* RBasis) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*>(nullptr, "UVictoryCore.BPRTransform(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", result, R, RBasis); }
	static bool AreRotatorsNearlyEqual(const struct UE::Math::TRotator<double>* RotatorA, const struct UE::Math::TRotator<double>* RotatorB, float WithinError) { return NativeCall<bool, const struct UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*, float>(nullptr, "UVictoryCore.AreRotatorsNearlyEqual(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float)", RotatorA, RotatorB, WithinError); }
	static bool IsGameWorld(struct UObject* WorldContextObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.IsGameWorld(UObject*)", WorldContextObject); }
	static void LogStackTrace() { NativeCall<void>(nullptr, "UVictoryCore.LogStackTrace()"); }
	static void FindSortingSourceAndDestinationContainers(struct UWorld* World, const struct UE::Math::TVector<double>* FromPosition, float InRadius, int OctreeTypeBitMask, struct FContainerSortingInfo* OutSortingInfo, int TargetingTeamToCheck, struct UPrimalInventoryComponent* OptionalSourceInventory, bool bOnlyUseOptionalSource) { NativeCall<void, struct UWorld*, const struct UE::Math::TVector<double>*, float, int, struct FContainerSortingInfo*, int, struct UPrimalInventoryComponent*, bool>(nullptr, "UVictoryCore.FindSortingSourceAndDestinationContainers(UWorld*,UE::Math::TVector<double>&,float,int,FContainerSortingInfo&,int,UPrimalInventoryComponent*,bool)", World, FromPosition, InRadius, OctreeTypeBitMask, OutSortingInfo, TargetingTeamToCheck, OptionalSourceInventory, bOnlyUseOptionalSource); }
	static bool OverlappingActorsTraceBP(struct UObject* WorldContextObject, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >* Overlaps, UE::Math::TVector<double>* Origin, float Radius, ECollisionChannel TraceChannel, struct AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, struct UObject*, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, float, ECollisionChannel, struct AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingActorsTraceBP(UObject*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,ECollisionChannel,AActor*,FName,bool)", WorldContextObject, Overlaps, Origin, Radius, TraceChannel, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static bool IsDLCInstalled(class FString* DLCName) { return NativeCall<bool, class FString*>(nullptr, "UVictoryCore.IsDLCInstalled(FString)", DLCName); }
	static bool OwnsShoulderDragon() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsShoulderDragon()"); }
	static TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >* FindNearbyCharactersOfClass(TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject, UE::Math::TVector<double>* AtLoc, float Radius, struct TSubclassOf<APrimalCharacter>* CharacterClass, bool bTamedDinosOnly, bool bWildDinosOnly) { return NativeCall<TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*, struct UObject*, UE::Math::TVector<double>*, float, struct TSubclassOf<APrimalCharacter>*, bool, bool>(nullptr, "UVictoryCore.FindNearbyCharactersOfClass(UObject*,UE::Math::TVector<double>,float,TSubclassOf<APrimalCharacter>,bool,bool)", result, WorldContextObject, AtLoc, Radius, CharacterClass, bTamedDinosOnly, bWildDinosOnly); }
	static UE::Math::TVector<double>* GetVelocityDeltaBetweenChars(UE::Math::TVector<double>* result, struct APrimalCharacter* CharA, struct APrimalCharacter* CharB) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct APrimalCharacter*, struct APrimalCharacter*>(nullptr, "UVictoryCore.GetVelocityDeltaBetweenChars(APrimalCharacter*,APrimalCharacter*)", result, CharA, CharB); }
	static void MarkGen2IntroAsSeen(struct UObject* WorldContextObject) { NativeCall<void, struct UObject*>(nullptr, "UVictoryCore.MarkGen2IntroAsSeen(UObject*)", WorldContextObject); }
	static TArray<AShooterCharacter*, TSizedDefaultAllocator<32> >* GetAllLocalPlayerCharacters(TArray<AShooterCharacter*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<AShooterCharacter*, TSizedDefaultAllocator<32> >*, TArray<AShooterCharacter*, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllLocalPlayerCharacters(UObject*)", result, WorldContextObject); }
	static ABrush* SpawnBoxBrushActorFast(struct TSubclassOf<ABrush>* BrushType, const struct UE::Math::TTransform<double>* BrushTransform, UE::Math::TVector<double>* BoxExtent) { return NativeCall<ABrush*, struct TSubclassOf<ABrush>*, const struct UE::Math::TTransform<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.SpawnBoxBrushActorFast(TSubclassOf<ABrush>,UE::Math::TTransform<double>&,UE::Math::TVector<double>)", BrushType, BrushTransform, BoxExtent); }
	static void VisualLog_Print(struct AActor* Actor, class FString* Message, bool bIsError) { NativeCall<void, struct AActor*, class FString*, bool>(nullptr, "UVictoryCore.VisualLog_Print(AActor*,FString,bool)", Actor, Message, bIsError); }
	static FString* GetObjectString(FString* result, struct UObject* ForObject) { return NativeCall<FString*, FString*, struct UObject*>(nullptr, "UVictoryCore.GetObjectString(UObject*)", result, ForObject); }
	static UE::Math::TVector<double>* ClampLocation(UE::Math::TVector<double>* result, UE::Math::TVector<double>* BaseLocation, UE::Math::TVector<double>* DesiredLocation, float MaxDiff, bool bTraceClampLocation, struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* TraceFromLocation) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, bool, struct UObject*, const struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.ClampLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,float,bool,UObject*,UE::Math::TVector<double>&)", result, BaseLocation, DesiredLocation, MaxDiff, bTraceClampLocation, WorldContextObject, TraceFromLocation); }
	static void PlaceStructure(struct AShooterCharacter* placingPawn, struct TSubclassOf<APrimalStructure>* StructureToPlace, FItemNetID itemID, bool DisplayFailMessage) { NativeCall<void, struct AShooterCharacter*, struct TSubclassOf<APrimalStructure>*, FItemNetID, bool>(nullptr, "UVictoryCore.PlaceStructure(AShooterCharacter*,TSubclassOf<APrimalStructure>,FItemNetID,bool)", placingPawn, StructureToPlace, itemID, DisplayFailMessage); }
	static bool AreVectorsNearlyEqual(const struct UE::Math::TVector<double>* VectorA, const struct UE::Math::TVector<double>* VectorB, float WithinError) { return NativeCall<bool, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.AreVectorsNearlyEqual(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", VectorA, VectorB, WithinError); }
	static bool ServerAllowLineOfSightInteraction(struct AShooterCharacter* FromCharacter, struct AActor* ToActor, ECollisionChannel Channel) { return NativeCall<bool, struct AShooterCharacter*, struct AActor*, ECollisionChannel>(nullptr, "UVictoryCore.ServerAllowLineOfSightInteraction(AShooterCharacter*,AActor*,ECollisionChannel)", FromCharacter, ToActor, Channel); }
	static TSubclassOf<UPrimalItem>* GenerateRandomLootItemFromLootTable(TSubclassOf<UPrimalItem>* result, const class TArray<FLootTableEntry, TSizedDefaultAllocator<32> >* Entries, int* OutItemQuantity, float* OutItemQuality) { return NativeCall<TSubclassOf<UPrimalItem>*, TSubclassOf<UPrimalItem>*, const class TArray<FLootTableEntry, TSizedDefaultAllocator<32> >*, int*, float*>(nullptr, "UVictoryCore.GenerateRandomLootItemFromLootTable(TArray<FLootTableEntry,TSizedDefaultAllocator<32>>&,int&,float&)", result, Entries, OutItemQuantity, OutItemQuality); }
	static void MulticastDrawDebugString(struct AActor* ReplicatedActor, UE::Math::TVector<double>* TextLocation, const class FString* Text, struct AActor* TestBaseActor, FLinearColor* TextColor, float Duration) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, const class FString*, struct AActor*, FLinearColor*, float>(nullptr, "UVictoryCore.MulticastDrawDebugString(AActor*,UE::Math::TVector<double>,FString&,AActor*,FLinearColor,float)", ReplicatedActor, TextLocation, Text, TestBaseActor, TextColor, Duration); }
	static bool OwnsScorchedEarth() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsScorchedEarth()"); }
	static bool IsUnderMesh(struct APrimalCharacter* Character, struct UE::Math::TVector<double>* CheckSevenHitLocation, bool* bOverlapping, struct UActorComponent** CheckSevenResult, bool DebugDraw, float DebugDrawSeconds) { return NativeCall<bool, struct APrimalCharacter*, struct UE::Math::TVector<double>*, bool*, struct UActorComponent**, bool, float>(nullptr, "UVictoryCore.IsUnderMesh(APrimalCharacter*,UE::Math::TVector<double>&,bool&,UActorComponent*&,bool,float)", Character, CheckSevenHitLocation, bOverlapping, CheckSevenResult, DebugDraw, DebugDrawSeconds); }
	static void StartCompanionEventForPlayer(struct APrimalCharacter* Player, struct FCompanionEventData* EventData, struct AActor* EventActor) { NativeCall<void, struct APrimalCharacter*, struct FCompanionEventData*, struct AActor*>(nullptr, "UVictoryCore.StartCompanionEventForPlayer(APrimalCharacter*,FCompanionEventData&,AActor*)", Player, EventData, EventActor); }
	static double PersistentToUtcTime(struct UObject* WorldContextObject, double PersistentTime) { return NativeCall<double, struct UObject*, double>(nullptr, "UVictoryCore.PersistentToUtcTime(UObject*,double)", WorldContextObject, PersistentTime); }
	static bool OverlappingActorsTrace(struct UWorld* theWorld, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >* Overlaps, UE::Math::TVector<double>* Origin, float Radius, ECollisionChannel TraceChannel, struct AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, struct UWorld*, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, float, ECollisionChannel, struct AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingActorsTrace(UWorld*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,ECollisionChannel,AActor*,FName,bool)", theWorld, Overlaps, Origin, Radius, TraceChannel, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static UFoliageBaseType* GetFoliageTypeRefFromFoliageStaticMeshComp(struct UHierarchicalInstancedStaticMeshComponent* Component) { return NativeCall<UFoliageBaseType*, struct UHierarchicalInstancedStaticMeshComponent*>(nullptr, "UVictoryCore.GetFoliageTypeRefFromFoliageStaticMeshComp(UHierarchicalInstancedStaticMeshComponent*)", Component); }
	static bool BPIsValidLowLevelFast(struct UObject* Object) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.BPIsValidLowLevelFast(UObject*)", Object); }
	static bool GetDinoSetupGroup_ByName(FName GroupName, const class TArray<FDinoSetupGroup, TSizedDefaultAllocator<32> >* DinoSetupGroups, struct FDinoSetupGroup* OutGroup) { return NativeCall<bool, FName, const class TArray<FDinoSetupGroup, TSizedDefaultAllocator<32> >*, struct FDinoSetupGroup*>(nullptr, "UVictoryCore.GetDinoSetupGroup_ByName(FName,TArray<FDinoSetupGroup,TSizedDefaultAllocator<32>>&,FDinoSetupGroup&)", GroupName, DinoSetupGroups, OutGroup); }
	static FString* GetKeyNameFromActionName(FString* result, FName ActionName) { return NativeCall<FString*, FString*, FName>(nullptr, "UVictoryCore.GetKeyNameFromActionName(FName)", result, ActionName); }
	static FString* LeaderboardColumnNameToString(FString* result, TEnumAsByte<enum ELeaderboardColumnName::Type> ColumnType) { return NativeCall<FString*, FString*, TEnumAsByte<enum ELeaderboardColumnName::Type>>(nullptr, "UVictoryCore.LeaderboardColumnNameToString(TEnumAsByte<ELeaderboardColumnName::Type>)", result, ColumnType); }
	static void GetEnabledModsMount(class TMap<__int64, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<__int64, FString, 0> >* EnabledMods, bool bIncludClientCosmetics) { NativeCall<void, class TMap<__int64, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<__int64, FString, 0> >*, bool>(nullptr, "UVictoryCore.GetEnabledModsMount(TMap<__int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FString,0>>&,bool)", EnabledMods, bIncludClientCosmetics); }
	static void BlockTillAllStreamingRequestsFinished() { NativeCall<void>(nullptr, "UVictoryCore.BlockTillAllStreamingRequestsFinished()"); }
	static bool SetStringCVarValue(const class FString* CVarName, const class FString* NewValue) { return NativeCall<bool, const class FString*, const class FString*>(nullptr, "UVictoryCore.SetStringCVarValue(FString&,FString&)", CVarName, NewValue); }
	static UE::Math::TVector2<double>* BPProjectWorldToScreenPosition(UE::Math::TVector2<double>* result, const struct UE::Math::TVector<double>* WorldLocation, struct APlayerController* ThePC) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, const struct UE::Math::TVector<double>*, struct APlayerController*>(nullptr, "UVictoryCore.BPProjectWorldToScreenPosition(UE::Math::TVector<double>&,APlayerController*)", result, WorldLocation, ThePC); }
	static bool DoesOwnSelectedDLC(EDLCSelector SelectedDLC) { return NativeCall<bool, EDLCSelector>(nullptr, "UVictoryCore.DoesOwnSelectedDLC(EDLCSelector)", SelectedDLC); }
	static float GetScreenFramePerfScalar() { return NativeCall<float>(nullptr, "UVictoryCore.GetScreenFramePerfScalar()"); }
	static bool IsDistanceGreaterThan(UE::Math::TVector<double>* A, UE::Math::TVector<double>* B, float Distance) { return NativeCall<bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.IsDistanceGreaterThan(UE::Math::TVector<double>,UE::Math::TVector<double>,float)", A, B, Distance); }
	static bool IsPointInCone(const struct UE::Math::TVector<double>* Point, const struct UE::Math::TVector<double>* ConeOrigin, const struct UE::Math::TVector<double>* ConeDir, float ConeLength, float ConeHalfAngle) { return NativeCall<bool, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, float, float>(nullptr, "UVictoryCore.IsPointInCone(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float)", Point, ConeOrigin, ConeDir, ConeLength, ConeHalfAngle); }
	static bool RemoveActorFromCustomActorList(struct UObject* WorldContextObject, FName SearchCustomTag, struct AActor* ActorToRemove) { return NativeCall<bool, struct UObject*, FName, struct AActor*>(nullptr, "UVictoryCore.RemoveActorFromCustomActorList(UObject*,FName,AActor*)", WorldContextObject, SearchCustomTag, ActorToRemove); }
	static void SetBoolArrayElemTrue(class TArray<bool, TSizedDefaultAllocator<32> >* TheArray, int TheIndex) { NativeCall<void, class TArray<bool, TSizedDefaultAllocator<32> >*, int>(nullptr, "UVictoryCore.SetBoolArrayElemTrue(TArray<bool,TSizedDefaultAllocator<32>>&,int)", TheArray, TheIndex); }
	static bool IsDinoDuped(struct UObject* WorldContextObject, int id1, int id2) { return NativeCall<bool, struct UObject*, int, int>(nullptr, "UVictoryCore.IsDinoDuped(UObject*,int,int)", WorldContextObject, id1, id2); }
	static double FloatToDouble(float val) { return NativeCall<double, float>(nullptr, "UVictoryCore.FloatToDouble(float)", val); }
	static APrimalDinoCharacter* GetDinoCharacterByID(struct UObject* WorldContextObject, int DinoID1, int DinoID2, bool bSearchTamedOnly) { return NativeCall<APrimalDinoCharacter*, struct UObject*, int, int, bool>(nullptr, "UVictoryCore.GetDinoCharacterByID(UObject*,int,int,bool)", WorldContextObject, DinoID1, DinoID2, bSearchTamedOnly); }
	static TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GiveItemToCharacter(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result, struct APrimalCharacter* Character, struct TSubclassOf<UPrimalItem>* ItemType, int NumItems, float Quality, bool bAutoEquip) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, struct APrimalCharacter*, struct TSubclassOf<UPrimalItem>*, int, float, bool>(nullptr, "UVictoryCore.GiveItemToCharacter(APrimalCharacter*,TSubclassOf<UPrimalItem>,int,float,bool)", result, Character, ItemType, NumItems, Quality, bAutoEquip); }
	static void DeferredSpawnAndFireProjectile_Finish(struct AShooterProjectile* TheProjectile, UE::Math::TTransform<double>* SpawnTransform) { NativeCall<void, struct AShooterProjectile*, UE::Math::TTransform<double>*>(nullptr, "UVictoryCore.DeferredSpawnAndFireProjectile_Finish(AShooterProjectile*,UE::Math::TTransform<double>)", TheProjectile, SpawnTransform); }
	static void StaticRegisterNativesUVictoryCore() { NativeCall<void>(nullptr, "UVictoryCore.StaticRegisterNativesUVictoryCore()"); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllMissionDispatchers(TArray<AActor*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllMissionDispatchers(UObject*)", result, WorldContextObject); }
	static bool PlayerOwnsAberrationServer(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsAberrationServer(AShooterPlayerController*)", controller); }
	static UE::Math::TVector<double>* GetPlaneNormal(UE::Math::TVector<double>* result, const struct UE::Math::TPlane<double>* ForPlane) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const struct UE::Math::TPlane<double>*>(nullptr, "UVictoryCore.GetPlaneNormal(UE::Math::TPlane<double>&)", result, ForPlane); }
	static bool EnsureNumericAndCharsEx(class FString* text, int maxChars, bool bAllowSpace) { return NativeCall<bool, class FString*, int, bool>(nullptr, "UVictoryCore.EnsureNumericAndCharsEx(FString&,int,bool)", text, maxChars, bAllowSpace); }
	static bool IsDistanceLessThan(UE::Math::TVector<double>* A, UE::Math::TVector<double>* B, float Distance) { return NativeCall<bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.IsDistanceLessThan(UE::Math::TVector<double>,UE::Math::TVector<double>,float)", A, B, Distance); }
	static UE::Math::TVector<double>* GetCustomDinoSpawnLocation(UE::Math::TVector<double>* result, struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* SpawnLocation, const struct UE::Math::TRotator<double>* SpawnRotation, const struct FDinoSetup* DinoSetup, float DebugDrawDuration, bool bApplyRotationToSpawnOffset) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, const struct FDinoSetup*, float, bool>(nullptr, "UVictoryCore.GetCustomDinoSpawnLocation(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FDinoSetup&,float,bool)", result, WorldContextObject, SpawnLocation, SpawnRotation, DinoSetup, DebugDrawDuration, bApplyRotationToSpawnOffset); }
	static UE::Math::TVector2<double>* GetControllerMovementInputs(UE::Math::TVector2<double>* result, const struct APlayerController* ForPC) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, const struct APlayerController*>(nullptr, "UVictoryCore.GetControllerMovementInputs(APlayerController*)", result, ForPC); }
	static void RegisterComponentBP(struct UActorComponent* component) { NativeCall<void, struct UActorComponent*>(nullptr, "UVictoryCore.RegisterComponentBP(UActorComponent*)", component); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UVictoryCore.GetPrivateStaticClass()"); }
	static bool NetIDHashOwnsBobsTallTales(const struct UObject* WorldContextObject, unsigned int OwnerHashedUniqueID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, unsigned int, bool>(nullptr, "UVictoryCore.NetIDHashOwnsBobsTallTales(UObject*,unsignedint,bool)", WorldContextObject, OwnerHashedUniqueID, CheckOffline); }
	static void OpenStorePageForDLC(class FString* DLCName) { NativeCall<void, class FString*>(nullptr, "UVictoryCore.OpenStorePageForDLC(FString)", DLCName); }
	static bool IsThereANonObstructedTraceToTheLocation(struct UObject* WorldContextObject, UE::Math::TVector<double>* StartingLocation, UE::Math::TVector<double>* DesiredLocation, const class TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* ReturnPathToTarget, float TraceCapsuleRadius, float TraceCapsuleHalfHeight, float RadiusOfPointsAroundCheckedLoc, int NumCirclePointsAroundLocation, int NumVerticalPoints, float VerticalSpacing, bool bDebug, float DebugTraceDuration) { return NativeCall<bool, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, float, float, float, int, int, float, bool, float>(nullptr, "UVictoryCore.IsThereANonObstructedTraceToTheLocation(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,float,float,float,int,int,float,bool,float)", WorldContextObject, StartingLocation, DesiredLocation, IgnoreActors, ReturnPathToTarget, TraceCapsuleRadius, TraceCapsuleHalfHeight, RadiusOfPointsAroundCheckedLoc, NumCirclePointsAroundLocation, NumVerticalPoints, VerticalSpacing, bDebug, DebugTraceDuration); }
	static float GetScreenPercentage() { return NativeCall<float>(nullptr, "UVictoryCore.GetScreenPercentage()"); }
	static UClass* GetDinoStaticClass(const struct FDinoSetup* DinoSetup) { return NativeCall<UClass*, const struct FDinoSetup*>(nullptr, "UVictoryCore.GetDinoStaticClass(FDinoSetup&)", DinoSetup); }
	static FName GetHitBoneNameFromDamageEvent(struct APrimalCharacter* Character, struct AController* HitInstigator, const struct FDamageEvent* DamageEvent, bool bIsPointDamage, const struct FHitResult* PointHitResult, FName MatchCollisionPresetName) { return NativeCall<FName, struct APrimalCharacter*, struct AController*, const struct FDamageEvent*, bool, const struct FHitResult*, FName>(nullptr, "UVictoryCore.GetHitBoneNameFromDamageEvent(APrimalCharacter*,AController*,FDamageEvent&,bool,FHitResult&,FName)", Character, HitInstigator, DamageEvent, bIsPointDamage, PointHitResult, MatchCollisionPresetName); }
	static void GetSpecialActorList(struct UObject* WorldContextObject, TEnumAsByte<enum EActorListsBP::Type> ActorListType, class TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, struct UObject*, TEnumAsByte<enum EActorListsBP::Type>, class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetSpecialActorList(UObject*,TEnumAsByte<EActorListsBP::Type>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, ActorListType, OutActors); }
	static void WebSocketSendMessage(long SocketID, class FString* Message, struct UObject* Caller) { NativeCall<void, long, class FString*, struct UObject*>(nullptr, "UVictoryCore.WebSocketSendMessage(__int64,FString,UObject*)", SocketID, Message, Caller); }
	static void SetDinoSetupPointsPerStat(struct FDinoSetup* DinoSetup, TEnumAsByte<enum EPrimalCharacterStatusValue::Type> StatusType, int Value, bool bIsPlayerAdded, bool bAddInsteadOfSet) { NativeCall<void, struct FDinoSetup*, TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, int, bool, bool>(nullptr, "UVictoryCore.SetDinoSetupPointsPerStat(FDinoSetup&,TEnumAsByte<EPrimalCharacterStatusValue::Type>,int,bool,bool)", DinoSetup, StatusType, Value, bIsPlayerAdded, bAddInsteadOfSet); }
	static UShooterGameUserSettings* GetShooterGameUserSettings() { return NativeCall<UShooterGameUserSettings*>(nullptr, "UVictoryCore.GetShooterGameUserSettings()"); }
	static AActor* SpawnActorDeferred(struct UClass* Class, struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Location, const struct UE::Math::TRotator<double>* Rotation, struct AActor* Owner, struct APawn* Instigator, bool bNoCollisionFail) { return NativeCall<AActor*, struct UClass*, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, struct AActor*, struct APawn*, bool>(nullptr, "UVictoryCore.SpawnActorDeferred(UClass*,UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*,APawn*,bool)", Class, WorldContextObject, Location, Rotation, Owner, Instigator, bNoCollisionFail); }
	static TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* SortPointsByDistance(TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* result, const struct UE::Math::TVector<double>* fromLoc, const class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* points) { return NativeCall<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, const class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortPointsByDistance(UE::Math::TVector<double>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", result, fromLoc, points); }
	static void StopAllMusicTracks(const struct UObject* WorldContextObject) { NativeCall<void, const struct UObject*>(nullptr, "UVictoryCore.StopAllMusicTracks(UObject*)", WorldContextObject); }
	static bool IsTimeSince(struct UObject* WorldContextObject, double OldTime, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, struct UObject*, double, float, bool>(nullptr, "UVictoryCore.IsTimeSince(UObject*,double,float,bool)", WorldContextObject, OldTime, CheckTimeSince, bForceTrueAtZeroTime); }
	static AActor* GetNearestAlliedPlayer(struct UObject* WorldContextObject, int TargetingTeam, const struct UE::Math::TVector<double>* location, class TArray<AActor*, TSizedDefaultAllocator<32> >* ignoreActors) { return NativeCall<AActor*, struct UObject*, int, const struct UE::Math::TVector<double>*, class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetNearestAlliedPlayer(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>)", WorldContextObject, TargetingTeam, location, ignoreActors); }
	static void WebSocketConnect(long SocketID, struct UObject* Caller) { NativeCall<void, long, struct UObject*>(nullptr, "UVictoryCore.WebSocketConnect(__int64,UObject*)", SocketID, Caller); }
	static bool ProjectWorldToScreenPositionRaw(struct APlayerController* ThePC, UE::Math::TVector<double>* WorldLocation, struct UE::Math::TVector2<double>* Out_ScreenLocation, struct UE::Math::TVector<double>* Out_ViewLocation, struct UE::Math::TBox2<double>* Out_ViewRect, bool* Out_bIsScreenLocationInsideViewRect, bool bIgnoreScreenProjectionGlobalTransform) { return NativeCall<bool, struct APlayerController*, UE::Math::TVector<double>*, struct UE::Math::TVector2<double>*, struct UE::Math::TVector<double>*, struct UE::Math::TBox2<double>*, bool*, bool>(nullptr, "UVictoryCore.ProjectWorldToScreenPositionRaw(APlayerController*,UE::Math::TVector<double>,UE::Math::TVector2<double>*,UE::Math::TVector<double>*,UE::Math::TBox2<double>*,bool*,bool)", ThePC, WorldLocation, Out_ScreenLocation, Out_ViewLocation, Out_ViewRect, Out_bIsScreenLocationInsideViewRect, bIgnoreScreenProjectionGlobalTransform); }
	static int GetWeightedRandomIndexFromArray(class TArray<float, TSizedDefaultAllocator<32> >* pArray, float ForceRand) { return NativeCall<int, class TArray<float, TSizedDefaultAllocator<32> >*, float>(nullptr, "UVictoryCore.GetWeightedRandomIndexFromArray(TArray<float,TSizedDefaultAllocator<32>>,float)", pArray, ForceRand); }
	static UE::Math::TVector<double>* RandomPointInBoundingBoxFromStream(UE::Math::TVector<double>* result, const struct UE::Math::TVector<double>* Origin, const struct UE::Math::TVector<double>* BoxExtent, const struct FRandomStream* Stream) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct FRandomStream*>(nullptr, "UVictoryCore.RandomPointInBoundingBoxFromStream(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FRandomStream&)", result, Origin, BoxExtent, Stream); }
	static int IsChildOfClassesSoftRefT(struct TSubclassOf<UObject>* childClass, const class TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<APrimalDinoCharacter>(TSubclassOf<UObject>,TArray<TSoftClassPtr<APrimalDinoCharacter>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static bool PlayerOwnsCurrentMap(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsCurrentMap(AShooterPlayerController*)", controller); }
	static FColor GetStatusColorForPlayerTetherDistance(struct UObject* WorldContextObject, float distance) { return NativeCall<FColor, struct UObject*, float>(nullptr, "UVictoryCore.GetStatusColorForPlayerTetherDistance(UObject*,float)", WorldContextObject, distance); }
	static float GetMatineeLength(const struct AMatineeActor* MatineeActor) { return NativeCall<float, const struct AMatineeActor*>(nullptr, "UVictoryCore.GetMatineeLength(AMatineeActor*)", MatineeActor); }
	static bool PlayerStateOwnsBobsTallTales(struct AShooterPlayerState* playerState) { return NativeCall<bool, struct AShooterPlayerState*>(nullptr, "UVictoryCore.PlayerStateOwnsBobsTallTales(AShooterPlayerState*)", playerState); }
	static UClass* ObjectRefToClassRef(struct UObject* InObject) { return NativeCall<UClass*, struct UObject*>(nullptr, "UVictoryCore.ObjectRefToClassRef(UObject*)", InObject); }
	static bool IsShipping() { return NativeCall<bool>(nullptr, "UVictoryCore.IsShipping()"); }
	static void ExitToARKGlobalMainMenu() { NativeCall<void>(nullptr, "UVictoryCore.ExitToARKGlobalMainMenu()"); }
	static FString* GetClassString(FString* result, struct UClass* ForClass) { return NativeCall<FString*, FString*, struct UClass*>(nullptr, "UVictoryCore.GetClassString(UClass*)", result, ForClass); }
	static bool IsSOTFLobby() { return NativeCall<bool>(nullptr, "UVictoryCore.IsSOTFLobby()"); }
	static void SetAnimBPDisableIK(struct UAnimInstance* ForAnimInstance, bool bDisable, bool bDisableClimb, bool DisableFall, bool* bHasIK, bool* bIKWasEnabled, bool* bClimbIKWasEnabled, bool* bFallIKWasEnabled) { NativeCall<void, struct UAnimInstance*, bool, bool, bool, bool*, bool*, bool*, bool*>(nullptr, "UVictoryCore.SetAnimBPDisableIK(UAnimInstance*,bool,bool,bool,bool&,bool&,bool&,bool&)", ForAnimInstance, bDisable, bDisableClimb, DisableFall, bHasIK, bIKWasEnabled, bClimbIKWasEnabled, bFallIKWasEnabled); }
	static float GetTimeSince(struct APawn* pawn, float time) { return NativeCall<float, struct APawn*, float>(nullptr, "UVictoryCore.GetTimeSince(APawn*,float)", pawn, time); }
	static bool IsVerboseDisplayEnabled(const struct UObject* WorldContextObject) { return NativeCall<bool, const struct UObject*>(nullptr, "UVictoryCore.IsVerboseDisplayEnabled(UObject*)", WorldContextObject); }
	static UE::Math::TVector<double>* GetRandomNavigatablePointAroundLocationWithinMinAndMaxRadius(UE::Math::TVector<double>* result, struct UObject* WorldContextObject, UE::Math::TVector<double>* AroundLocation, float MinRadius, float MaxRadius) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct UObject*, UE::Math::TVector<double>*, float, float>(nullptr, "UVictoryCore.GetRandomNavigatablePointAroundLocationWithinMinAndMaxRadius(UObject*,UE::Math::TVector<double>,float,float)", result, WorldContextObject, AroundLocation, MinRadius, MaxRadius); }
	static int IsStringContainedInArray(const class FString* StringToFind, const class TArray<FString, TSizedDefaultAllocator<32> >* ArrayOfStrings) { return NativeCall<int, const class FString*, const class TArray<FString, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsStringContainedInArray(FString&,TArray<FString,TSizedDefaultAllocator<32>>&)", StringToFind, ArrayOfStrings); }
	static FString* BPGetPrimaryMapName(FString* result, struct UObject* WorldContextObject) { return NativeCall<FString*, FString*, struct UObject*>(nullptr, "UVictoryCore.BPGetPrimaryMapName(UObject*)", result, WorldContextObject); }
	static int IsChildOfClassesSoftRefT(struct TSubclassOf<UObject>* childClass, const class TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSoftClassPtr<AShooterWeapon>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<AShooterWeapon>(TSubclassOf<UObject>,TArray<TSoftClassPtr<AShooterWeapon>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static bool CallArbitraryFunction(struct TSoftObjectPtr<UObject>* TargetSoftPtr, class FString* FunctionName, struct UObject* Executor, const struct FFunctionParams_NoArrays* ArbitraryFunctionParams) { return NativeCall<bool, struct TSoftObjectPtr<UObject>*, class FString*, struct UObject*, const struct FFunctionParams_NoArrays*>(nullptr, "UVictoryCore.CallArbitraryFunction(TSoftObjectPtr<UObject>,FString,UObject*,FFunctionParams_NoArrays&)", TargetSoftPtr, FunctionName, Executor, ArbitraryFunctionParams); }
	static bool IsClubArk() { return NativeCall<bool>(nullptr, "UVictoryCore.IsClubArk()"); }
	static bool IsModInstalled(long ModID) { return NativeCall<bool, long>(nullptr, "UVictoryCore.IsModInstalled(__int64)", ModID); }
	static bool SupportsShaderModel5() { return NativeCall<bool>(nullptr, "UVictoryCore.SupportsShaderModel5()"); }
	static UE::Math::TVector<double>* EvalProjectileArc(UE::Math::TVector<double>* result, struct UObject* WorldContextObject, const struct FProjectileArc* Arc, float Time) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct UObject*, const struct FProjectileArc*, float>(nullptr, "UVictoryCore.EvalProjectileArc(UObject*,FProjectileArc&,float)", result, WorldContextObject, Arc, Time); }
	static void SteamOverlayOpenURL(const class FString* ToURL) { NativeCall<void, const class FString*>(nullptr, "UVictoryCore.SteamOverlayOpenURL(FString&)", ToURL); }
	static UE::Math::TVector<double>* GetActorInteractionPoint(UE::Math::TVector<double>* result, struct AShooterCharacter* InteractingCharacter, struct AActor* ForActor) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct AShooterCharacter*, struct AActor*>(nullptr, "UVictoryCore.GetActorInteractionPoint(AShooterCharacter*,AActor*)", result, InteractingCharacter, ForActor); }
	static bool IsPS4Build() { return NativeCall<bool>(nullptr, "UVictoryCore.IsPS4Build()"); }
	static void PrintMessageInShippingBuild(const class FString* msg) { NativeCall<void, const class FString*>(nullptr, "UVictoryCore.PrintMessageInShippingBuild(FString&)", msg); }
	static bool PlayerStateOwnsDarkPegasus(struct AShooterPlayerState* playerState) { return NativeCall<bool, struct AShooterPlayerState*>(nullptr, "UVictoryCore.PlayerStateOwnsDarkPegasus(AShooterPlayerState*)", playerState); }
	static void PrintNativeCallstack() { NativeCall<void>(nullptr, "UVictoryCore.PrintNativeCallstack()"); }
	static bool ProjectWorldLocationToScreenOrScreenEdgePosition(struct APlayerController* playerController, UE::Math::TVector<double>* WorldLocation, struct UE::Math::TVector2<double>* ScreenPosition, float screenMarginPercent, bool widgetSpace, bool* OnScreen, bool bAdjustWithScreenDPI) { return NativeCall<bool, struct APlayerController*, UE::Math::TVector<double>*, struct UE::Math::TVector2<double>*, float, bool, bool*, bool>(nullptr, "UVictoryCore.ProjectWorldLocationToScreenOrScreenEdgePosition(APlayerController*,UE::Math::TVector<double>,UE::Math::TVector2<double>&,float,bool,bool&,bool)", playerController, WorldLocation, ScreenPosition, screenMarginPercent, widgetSpace, OnScreen, bAdjustWithScreenDPI); }
	static bool PlayMovieEx(class FString* MoviePath, bool bMovieIsSkippable, struct FOnMoviePlaybackFinished* OnMoviePlaybackFinishedDelegate, struct FOnMovieSkipRequested* OnSkipRequestedDelegate, struct USlateBrushAsset* BackgroundBrush, const struct UE::Math::TVector2<double>* MovieScale) { return NativeCall<bool, class FString*, bool, struct FOnMoviePlaybackFinished*, struct FOnMovieSkipRequested*, struct USlateBrushAsset*, const struct UE::Math::TVector2<double>*>(nullptr, "UVictoryCore.PlayMovieEx(FString,bool,FOnMoviePlaybackFinished,FOnMovieSkipRequested,USlateBrushAsset*,UE::Math::TVector2<double>&)", MoviePath, bMovieIsSkippable, OnMoviePlaybackFinishedDelegate, OnSkipRequestedDelegate, BackgroundBrush, MovieScale); }
	static UObject* ConstructObjectAutoNameBP(struct UClass* Class, struct UObject* Outer) { return NativeCall<UObject*, struct UClass*, struct UObject*>(nullptr, "UVictoryCore.ConstructObjectAutoNameBP(UClass*,UObject*)", Class, Outer); }
	static bool ClipLineInsideBox(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* Extent, UE::Math::TVector<double>* LineStart, UE::Math::TVector<double>* LineEnd, struct UE::Math::TVector<double>* OutLineStart, struct UE::Math::TVector<double>* OutLineEnd) { return NativeCall<bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct UE::Math::TVector<double>*, struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.ClipLineInsideBox(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Origin, Extent, LineStart, LineEnd, OutLineStart, OutLineEnd); }
	static float PrecisionRound(float inputVal, int Precision) { return NativeCall<float, float, int>(nullptr, "UVictoryCore.PrecisionRound(float,int)", inputVal, Precision); }
	static bool ThereIsANonObstructedTraceToTheLocation_CheckVerticalVariations(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* OriginalLocation, UE::Math::TVector<double>* StartingLocation, UE::Math::TVector<double>* DesiredLocation, const class TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* ReturnPathToTarget, float TraceCapsuleRadius, float TraceCapsuleHalfHeight, float RadiusOfPointsAroundCheckedLoc, int NumCirclePointsAroundLocation, int NumVerticalPoints, float VerticalSpacing, bool bDebug, float DebugTraceDuration) { return NativeCall<bool, struct UObject*, const struct UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, float, float, float, int, int, float, bool, float>(nullptr, "UVictoryCore.ThereIsANonObstructedTraceToTheLocation_CheckVerticalVariations(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,float,float,float,int,int,float,bool,float)", WorldContextObject, OriginalLocation, StartingLocation, DesiredLocation, IgnoreActors, ReturnPathToTarget, TraceCapsuleRadius, TraceCapsuleHalfHeight, RadiusOfPointsAroundCheckedLoc, NumCirclePointsAroundLocation, NumVerticalPoints, VerticalSpacing, bDebug, DebugTraceDuration); }
	static bool CanSpawnCustomDino(struct UObject* WorldContextObject, struct UE::Math::TVector<double>* OutCalculatedSpawnLocation, const struct UE::Math::TVector<double>* PlayerLocation, const struct UE::Math::TVector<double>* SpawnLocation, const struct UE::Math::TRotator<double>* SpawnRotation, const struct FDinoSetup* DinoSetup, float DebugDrawDuration, bool bDoLosCheck, bool bDoExtraSafetyChecks, struct APrimalCharacter* spawningCharacter, bool bDoOverlapCheck) { return NativeCall<bool, struct UObject*, struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, const struct FDinoSetup*, float, bool, bool, struct APrimalCharacter*, bool>(nullptr, "UVictoryCore.CanSpawnCustomDino(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FDinoSetup&,float,bool,bool,APrimalCharacter*,bool)", WorldContextObject, OutCalculatedSpawnLocation, PlayerLocation, SpawnLocation, SpawnRotation, DinoSetup, DebugDrawDuration, bDoLosCheck, bDoExtraSafetyChecks, spawningCharacter, bDoOverlapCheck); }
	static bool IsJapanesePS5Build() { return NativeCall<bool>(nullptr, "UVictoryCore.IsJapanesePS5Build()"); }
	static APrimalDinoCharacter* SpawnFollower(struct UWorld* World, struct APrimalDinoCharacter* ParentDino, struct TSoftClassPtr<APrimalDinoCharacter>* FollowerClass, bool bIsChild, float AgeMin, float AgeMax) { return NativeCall<APrimalDinoCharacter*, struct UWorld*, struct APrimalDinoCharacter*, struct TSoftClassPtr<APrimalDinoCharacter>*, bool, float, float>(nullptr, "UVictoryCore.SpawnFollower(UWorld*,APrimalDinoCharacter*,TSoftClassPtr<APrimalDinoCharacter>,bool,float,float)", World, ParentDino, FollowerClass, bIsChild, AgeMin, AgeMax); }
	static UE::Math::TTransform<double>* SimpleCurveInterpClampedTransform(UE::Math::TTransform<double>* result, UE::Math::TTransform<double>* A, UE::Math::TTransform<double>* B, float Alpha, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveInterpClampedTransform(UE::Math::TTransform<double>,UE::Math::TTransform<double>,float,TEnumAsByte<ESimpleCurve::Type>)", result, A, B, Alpha, CurveType); }
	static bool OverlappingActors(struct UWorld* theWorld, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >* Overlaps, UE::Math::TVector<double>* Origin, float Radius, int CollisionGroups, struct AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, struct UWorld*, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, float, int, struct AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingActors(UWorld*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,int,AActor*,FName,bool)", theWorld, Overlaps, Origin, Radius, CollisionGroups, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static bool IsSavingSaveGame() { return NativeCall<bool>(nullptr, "UVictoryCore.IsSavingSaveGame()"); }
	static FString* GetSkillDescription(FString* result, const struct FPrimalSkill* ForSkill, int Rank, bool bShowAllRanks, bool bSkillIsNotUnlocked) { return NativeCall<FString*, FString*, const struct FPrimalSkill*, int, bool, bool>(nullptr, "UVictoryCore.GetSkillDescription(FPrimalSkill&,int,bool,bool)", result, ForSkill, Rank, bShowAllRanks, bSkillIsNotUnlocked); }
	static void AddToEditorMessageLog(struct UObject* WorldContextObject, class FString* Message, TEnumAsByte<enum EEditorMessageLogLevel::Type> WithLogLevel, bool bServerOnly) { NativeCall<void, struct UObject*, class FString*, TEnumAsByte<enum EEditorMessageLogLevel::Type>, bool>(nullptr, "UVictoryCore.AddToEditorMessageLog(UObject*,FString,TEnumAsByte<EEditorMessageLogLevel::Type>,bool)", WorldContextObject, Message, WithLogLevel, bServerOnly); }
	static void MulticastDrawDebugCapsuleWithExtents(struct AActor* ReplicatedActor, UE::Math::TVector<double>* Top, UE::Math::TVector<double>* Bottom, float Radius, FLinearColor* LineColor, float Duration, bool bPersistent) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, FLinearColor*, float, bool>(nullptr, "UVictoryCore.MulticastDrawDebugCapsuleWithExtents(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool)", ReplicatedActor, Top, Bottom, Radius, LineColor, Duration, bPersistent); }
	static UUserWidget* GetWidgetInListView(struct UObject* Item, struct UListView* ListView) { return NativeCall<UUserWidget*, struct UObject*, struct UListView*>(nullptr, "UVictoryCore.GetWidgetInListView(UObject*,UListView*)", Item, ListView); }
	static bool GetAllAnimationSequencesFromMontage(struct UAnimMontage* InMontage, class TArray<UAnimationAsset*, TSizedDefaultAllocator<32> >* AnimationAssets) { return NativeCall<bool, struct UAnimMontage*, class TArray<UAnimationAsset*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetAllAnimationSequencesFromMontage(UAnimMontage*,TArray<UAnimationAsset*,TSizedDefaultAllocator<32>>&)", InMontage, AnimationAssets); }
	static FString* IntToStringAscii(FString* result, int CharValue) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.IntToStringAscii(int)", result, CharValue); }
	static bool IsConsoleBuild() { return NativeCall<bool>(nullptr, "UVictoryCore.IsConsoleBuild()"); }
	static void SetSessionPrefix(const class FString* InPrefix) { NativeCall<void, const class FString*>(nullptr, "UVictoryCore.SetSessionPrefix(FString&)", InPrefix); }
	static bool GetDinoSetupCapsuleSize(const struct FDinoSetup* DinoSetup, float* CapsuleRadius, float* CapsuleHalfHeight) { return NativeCall<bool, const struct FDinoSetup*, float*, float*>(nullptr, "UVictoryCore.GetDinoSetupCapsuleSize(FDinoSetup&,float&,float&)", DinoSetup, CapsuleRadius, CapsuleHalfHeight); }
	static void VisualLog_AxisAlignedBox(struct AActor* Actor, class FString* Message, bool bIsError, UE::Math::TVector<double>* BoxMin, UE::Math::TVector<double>* BoxMax, FLinearColor* Color, bool bAlsoPrintMessage) { NativeCall<void, struct AActor*, class FString*, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FLinearColor*, bool>(nullptr, "UVictoryCore.VisualLog_AxisAlignedBox(AActor*,FString,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,bool)", Actor, Message, bIsError, BoxMin, BoxMax, Color, bAlsoPrintMessage); }
	static bool GetPreviousTrackedActorLinkedEntry(class TMap<int, FTrackedActorOverallContainer, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FTrackedActorOverallContainer, 0> >* GivenTMap, int ID, int Category, int* PreviousLinkedEntryID, int* PreviousLinkedEntryCategory, struct FTrackedActorPlusInfoStruct* FoundTrackedActorPlusInfoStruct) { return NativeCall<bool, class TMap<int, FTrackedActorOverallContainer, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FTrackedActorOverallContainer, 0> >*, int, int, int*, int*, struct FTrackedActorPlusInfoStruct*>(nullptr, "UVictoryCore.GetPreviousTrackedActorLinkedEntry(TMap<int,FTrackedActorOverallContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTrackedActorOverallContainer,0>>,int,int,int&,int&,FTrackedActorPlusInfoStruct&)", GivenTMap, ID, Category, PreviousLinkedEntryID, PreviousLinkedEntryCategory, FoundTrackedActorPlusInfoStruct); }
	static void MulticastDrawDebugCoordinateSystem(struct AActor* ReplicatedActor, UE::Math::TVector<double>* AxisLoc, UE::Math::TRotator<double>* AxisRot, float Scale, float Duration, float Thickness) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, float, float, float>(nullptr, "UVictoryCore.MulticastDrawDebugCoordinateSystem(AActor*,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float)", ReplicatedActor, AxisLoc, AxisRot, Scale, Duration, Thickness); }
	static bool IsTimeSince_Utc(double OldTime, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, double, float, bool>(nullptr, "UVictoryCore.IsTimeSince_Utc(double,float,bool)", OldTime, CheckTimeSince, bForceTrueAtZeroTime); }
	static AActor* SpawnActorInWorld(struct UObject* WorldContextObject, struct TSubclassOf<AActor>* AnActorClass, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, struct USceneComponent* attachToComponent, int dataIndex, FName attachSocketName, struct AActor* OwnerActor, struct APawn* InstigatorPawn) { return NativeCall<AActor*, struct UObject*, struct TSubclassOf<AActor>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, struct USceneComponent*, int, FName, struct AActor*, struct APawn*>(nullptr, "UVictoryCore.SpawnActorInWorld(UObject*,TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>,USceneComponent*,int,FName,AActor*,APawn*)", WorldContextObject, AnActorClass, AtLocation, AtRotation, attachToComponent, dataIndex, attachSocketName, OwnerActor, InstigatorPawn); }
	static UE::Math::TTransform<double>* InverseTransform(UE::Math::TTransform<double>* result, const struct UE::Math::TTransform<double>* TransformIn) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, const struct UE::Math::TTransform<double>*>(nullptr, "UVictoryCore.InverseTransform(UE::Math::TTransform<double>&)", result, TransformIn); }
	static AShooterCharacter* GetShooterCharacterFromController(struct AController* Controller) { return NativeCall<AShooterCharacter*, struct AController*>(nullptr, "UVictoryCore.GetShooterCharacterFromController(AController*)", Controller); }
	static bool CapsuleSweepFast(struct UObject* WorldContextObject, struct FHitResult* OutHit, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, const struct UE::Math::TRotator<double>* CapsuleRot, float Radius, float HalfHeight, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bIgnoreSelf, const class TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, bool bDebugDraw, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, struct FHitResult*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, float, float, TEnumAsByte<enum ECollisionChannel>, bool, bool, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, float>(nullptr, "UVictoryCore.CapsuleSweepFast(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,TEnumAsByte<ECollisionChannel>,bool,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,float)", WorldContextObject, OutHit, Start, End, CapsuleRot, Radius, HalfHeight, CollisionChannel, bTraceComplex, bIgnoreSelf, IgnoreActors, bDebugDraw, DebugDrawDuration); }
	static bool CapsuleSweepFast(struct UObject* WorldContextObject, struct FHitResult* OutHit, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, const struct UE::Math::TRotator<double>* CapsuleRot, float Radius, float HalfHeight, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bIgnoreSelf, struct AActor* IgnoreActor, bool bDebugDraw, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, struct FHitResult*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, float, float, TEnumAsByte<enum ECollisionChannel>, bool, bool, struct AActor*, bool, float>(nullptr, "UVictoryCore.CapsuleSweepFast(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,TEnumAsByte<ECollisionChannel>,bool,bool,AActor*,bool,float)", WorldContextObject, OutHit, Start, End, CapsuleRot, Radius, HalfHeight, CollisionChannel, bTraceComplex, bIgnoreSelf, IgnoreActor, bDebugDraw, DebugDrawDuration); }
	//static TMulticastScriptDelegate<FNotThreadSafeDelegateMode>* GetScriptDelegate(struct UObject* ForObject, FName DelegateName) { return NativeCall<TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *, struct UObject*, FName>(nullptr, "UVictoryCore.GetScriptDelegate(UObject*,FName)", ForObject, DelegateName); }
	static void AddCombinedFoliageFluidInteraction(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, float Radius, UE::Math::TVector<double>* Velocity, float FoliageInteractionStrength, float Plasticity, bool bSplash, bool bRipple, struct UNiagaraSystem* FluidSimSplashTemplateOverride, bool PlaySplashSound, UE::Math::TVector<double>* SplashLocation, float SplashRadius) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, float, bool, bool, struct UNiagaraSystem*, bool, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.AddCombinedFoliageFluidInteraction(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", WorldContextObject, Location, Radius, Velocity, FoliageInteractionStrength, Plasticity, bSplash, bRipple, FluidSimSplashTemplateOverride, PlaySplashSound, SplashLocation, SplashRadius); }
	static UE::Math::TVector<double>* PointOnSphere(UE::Math::TVector<double>* result, float Radius, float DegreesI, float DegreesJ) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, float, float>(nullptr, "UVictoryCore.PointOnSphere(float,float,float)", result, Radius, DegreesI, DegreesJ); }
	static ADirectionalLight* GetFirstDirectionalLight(struct UObject* WorldContextObject) { return NativeCall<ADirectionalLight*, struct UObject*>(nullptr, "UVictoryCore.GetFirstDirectionalLight(UObject*)", WorldContextObject); }
	static FName GetBlockingMissionTag(struct AShooterPlayerController* FromPC, FName MissionTag) { return NativeCall<FName, struct AShooterPlayerController*, FName>(nullptr, "UVictoryCore.GetBlockingMissionTag(AShooterPlayerController*,FName)", FromPC, MissionTag); }
	static FName FindSocketClosestToDirection(struct USkeletalMeshComponent* Mesh, UE::Math::TVector<double>* TargetDirection, const class TArray<FName, TSizedDefaultAllocator<32> >* Sockets, class TArray<float, TSizedDefaultAllocator<32> >* OutDotProducts, bool bOnlySocketsWithPrefix, class FString* SocketPrefix) { return NativeCall<FName, struct USkeletalMeshComponent*, UE::Math::TVector<double>*, const class TArray<FName, TSizedDefaultAllocator<32> >*, class TArray<float, TSizedDefaultAllocator<32> >*, bool, class FString*>(nullptr, "UVictoryCore.FindSocketClosestToDirection(USkeletalMeshComponent*,UE::Math::TVector<double>,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,bool,FString)", Mesh, TargetDirection, Sockets, OutDotProducts, bOnlySocketsWithPrefix, SocketPrefix); }
	static void GetLaunchVelocityAndGravity(UE::Math::TVector<double>* StartLocation, UE::Math::TVector<double>* TargetLocation, float LateralSpeed, float PeakHeightZ, struct UE::Math::TVector<double>* LaunchVelocity, float* Gravity) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, float, struct UE::Math::TVector<double>*, float*>(nullptr, "UVictoryCore.GetLaunchVelocityAndGravity(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,UE::Math::TVector<double>&,float&)", StartLocation, TargetLocation, LateralSpeed, PeakHeightZ, LaunchVelocity, Gravity); }
	static bool VTraceMultiBP_IgnoreActorsArray(struct UObject* WorldContextObject, class TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, struct AActor* InIgnoreActor, int CollisionGroups, float SphereRadius, const struct UE::Math::TVector<double>* BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, FName TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, bool bJustDoSphereOverlapAtStartLoc, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, class TArray<FHitResult, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, struct AActor*, int, float, const struct UE::Math::TVector<double>*, bool, ECollisionChannel, bool, FName, bool, bool, bool, float>(nullptr, "UVictoryCore.VTraceMultiBP_IgnoreActorsArray(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,int,float,UE::Math::TVector<double>&,bool,ECollisionChannel,bool,FName,bool,bool,bool,float)", WorldContextObject, OutHits, Start, End, ExtraIgnoreActors, InIgnoreActor, CollisionGroups, SphereRadius, BoxExtent, bReturnPhysMaterial, TraceChannel, bTraceComplex, TraceTag, bTraceChannelForceOverlap, bDoSort, bJustDoSphereOverlapAtStartLoc, DebugDrawDuration); }
	static bool GetDinoAssetData(const class FName* DinoBlueprintPath, struct TSoftClassPtr<UObject>* OutClass, struct FTopLevelAssetPath* OutAssetPath) { return NativeCall<bool, const class FName*, struct TSoftClassPtr<UObject>*, struct FTopLevelAssetPath*>(nullptr, "UVictoryCore.GetDinoAssetData(FName&,TSoftClassPtr<UObject>&,FTopLevelAssetPath&)", DinoBlueprintPath, OutClass, OutAssetPath); }
	static void DeactivateMissionForPlayerCharacter(struct AShooterCharacter* playerPawn, bool bOverrideForcePreventLeavingMissions) { NativeCall<void, struct AShooterCharacter*, bool>(nullptr, "UVictoryCore.DeactivateMissionForPlayerCharacter(AShooterCharacter*,bool)", playerPawn, bOverrideForcePreventLeavingMissions); }
	static float GetRuntimeFloatCurveValue(const struct FRuntimeFloatCurve* InCurve, float InTime) { return NativeCall<float, const struct FRuntimeFloatCurve*, float>(nullptr, "UVictoryCore.GetRuntimeFloatCurveValue(FRuntimeFloatCurve&,float)", InCurve, InTime); }
	static bool VTraceMulti(struct UWorld* theWorld, class TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, struct AActor* InIgnoreActor, int CollisionGroups, float SphereRadius, const struct UE::Math::TVector<double>* BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, FName TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, struct AActor* AdditionalIgnoreActor, struct AActor* AnotherIgnoreActor, bool bJustDoSphereOverlapAtStartLoc, class TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors) { return NativeCall<bool, struct UWorld*, class TArray<FHitResult, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct AActor*, int, float, const struct UE::Math::TVector<double>*, bool, ECollisionChannel, bool, FName, bool, bool, struct AActor*, struct AActor*, bool, class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.VTraceMulti(UWorld*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,int,float,UE::Math::TVector<double>&,bool,ECollisionChannel,bool,FName,bool,bool,AActor*,AActor*,bool,TArray<AActor*,TSizedDefaultAllocator<32>>*)", theWorld, OutHits, Start, End, InIgnoreActor, CollisionGroups, SphereRadius, BoxExtent, bReturnPhysMaterial, TraceChannel, bTraceComplex, TraceTag, bTraceChannelForceOverlap, bDoSort, AdditionalIgnoreActor, AnotherIgnoreActor, bJustDoSphereOverlapAtStartLoc, ExtraIgnoreActors); }
	static void SetExtraCmdLine(const class FString* InCmdLine) { NativeCall<void, const class FString*>(nullptr, "UVictoryCore.SetExtraCmdLine(FString&)", InCmdLine); }
	static bool IsPlayInEditor(struct UObject* WorldContextObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.IsPlayInEditor(UObject*)", WorldContextObject); }
	static bool SetIntCVarValue(const class FString* CVarName, int NewValue) { return NativeCall<bool, const class FString*, int>(nullptr, "UVictoryCore.SetIntCVarValue(FString&,int)", CVarName, NewValue); }
	static int GetSecondsIntoDay() { return NativeCall<int>(nullptr, "UVictoryCore.GetSecondsIntoDay()"); }
	static void SetMousePosition(struct APlayerController* controller, float X, float Y) { NativeCall<void, struct APlayerController*, float, float>(nullptr, "UVictoryCore.SetMousePosition(APlayerController*,float,float)", controller, X, Y); }
	static FPrimalSkill* GetSkillData(const class FName* ForSkill) { return NativeCall<FPrimalSkill*, const class FName*>(nullptr, "UVictoryCore.GetSkillData(FName&)", ForSkill); }
	static bool IsLastInputGamepadForUI() { return NativeCall<bool>(nullptr, "UVictoryCore.IsLastInputGamepadForUI()"); }
	static void OpenMapEx(class FString* MapName, bool bHostNonDedicatedSession, bool bSeamlessTravel, class FString* AdditionalParams, bool bHostNewSession, class FString* SessionName, bool bPrivateSession, class FString* SessionPassword, class FString* AdminPassword) { NativeCall<void, class FString*, bool, bool, class FString*, bool, class FString*, bool, class FString*, class FString*>(nullptr, "UVictoryCore.OpenMapEx(FString,bool,bool,FString,bool,FString,bool,FString,FString)", MapName, bHostNonDedicatedSession, bSeamlessTravel, AdditionalParams, bHostNewSession, SessionName, bPrivateSession, SessionPassword, AdminPassword); }
	static bool ObjectIsChildOfSoftRef(struct UObject* Object, struct TSoftClassPtr<UObject>* SoftParentClass, bool bExactMatch) { return NativeCall<bool, struct UObject*, struct TSoftClassPtr<UObject>*, bool>(nullptr, "UVictoryCore.ObjectIsChildOfSoftRef(UObject*,TSoftClassPtr<UObject>,bool)", Object, SoftParentClass, bExactMatch); }
	static UE::Math::TVector2<double>* InverseTransformVectorByScreenProjectionGlobalTransform(UE::Math::TVector2<double>* result, UE::Math::TVector2<double>* vec) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, UE::Math::TVector2<double>*>(nullptr, "UVictoryCore.InverseTransformVectorByScreenProjectionGlobalTransform(UE::Math::TVector2<double>)", result, vec); }
	static UE::Math::TVector<double>* LeadTargetPosition(UE::Math::TVector<double>* result, const struct UE::Math::TVector<double>* ProjLocation, float ProjSpeed, const struct UE::Math::TVector<double>* TargetLocation, const struct UE::Math::TVector<double>* TargetVelocity) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, float, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.LeadTargetPosition(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", result, ProjLocation, ProjSpeed, TargetLocation, TargetVelocity); }
	static TSubclassOf<UPrimalItem>* GetGrinderReplacementItem(TSubclassOf<UPrimalItem>* result, struct TSubclassOf<UPrimalItem>* current) { return NativeCall<TSubclassOf<UPrimalItem>*, TSubclassOf<UPrimalItem>*, struct TSubclassOf<UPrimalItem>*>(nullptr, "UVictoryCore.GetGrinderReplacementItem(TSubclassOf<UPrimalItem>)", result, current); }
	static FName GetObjectName(const struct UObject* ForObject) { return NativeCall<FName, const struct UObject*>(nullptr, "UVictoryCore.GetObjectName(UObject*)", ForObject); }
	static bool ObjectIsChildOf(struct UObject* Object, struct UClass* ObjectType, bool bExactMatch) { return NativeCall<bool, struct UObject*, struct UClass*, bool>(nullptr, "UVictoryCore.ObjectIsChildOf(UObject*,UClass*,bool)", Object, ObjectType, bExactMatch); }
	static FText* GetDefaultCharacterName(FText* result, bool bIsFemale) { return NativeCall<FText*, FText*, bool>(nullptr, "UVictoryCore.GetDefaultCharacterName(bool)", result, bIsFemale); }
	static UE::Math::TVector<double>* GetPrimaryCameraLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetPrimaryCameraLocation()", result); }
	static bool IsPVEServer(struct UObject* WorldContextObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.IsPVEServer(UObject*)", WorldContextObject); }
	static float MapAngleRangeToCurveClamped(float AngleDegrees, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, float, float, float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.MapAngleRangeToCurveClamped(float,float,float,float,float,TEnumAsByte<ESimpleCurve::Type>)", AngleDegrees, InRangeA, InRangeB, OutRangeA, OutRangeB, CurveType); }
	static bool IsMissionTagActiveAnywhere(struct AShooterPlayerController* FromPC, FName MissionTag) { return NativeCall<bool, struct AShooterPlayerController*, FName>(nullptr, "UVictoryCore.IsMissionTagActiveAnywhere(AShooterPlayerController*,FName)", FromPC, MissionTag); }
	static bool FindWorldActors(struct UObject* WorldContextObject, class TArray<AActor*, TSizedDefaultAllocator<32> >* fContainer, struct TSubclassOf<AActor>* fType, FName fTag) { return NativeCall<bool, struct UObject*, class TArray<AActor*, TSizedDefaultAllocator<32> >*, struct TSubclassOf<AActor>*, FName>(nullptr, "UVictoryCore.FindWorldActors(UObject*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AActor>,FName)", WorldContextObject, fContainer, fType, fTag); }
	static void ApplyEnvironmentalInteractionShotHit_Universal(struct UObject* WorldContextObject, const struct FHitResult* ImpactHitInfo, UE::Math::TVector<double>* VelocityOrShootDirection, float FluidSimSplashStrength, struct UNiagaraSystem* FluidSimSplashTemplateOverride, float Radius) { NativeCall<void, struct UObject*, const struct FHitResult*, UE::Math::TVector<double>*, float, struct UNiagaraSystem*, float>(nullptr, "UVictoryCore.ApplyEnvironmentalInteractionShotHit_Universal(UObject*,FHitResult&,UE::Math::TVector<double>,float,UNiagaraSystem*,float)", WorldContextObject, ImpactHitInfo, VelocityOrShootDirection, FluidSimSplashStrength, FluidSimSplashTemplateOverride, Radius); }
	static FString* ListDinos(FString* result, struct UObject* WorldContextObject, bool TamedOnly, int TargetingTeamExcluded) { return NativeCall<FString*, FString*, struct UObject*, bool, int>(nullptr, "UVictoryCore.ListDinos(UObject*,bool,int)", result, WorldContextObject, TamedOnly, TargetingTeamExcluded); }
	static void WebSocketClose(long SocketID, struct UObject* Caller) { NativeCall<void, long, struct UObject*>(nullptr, "UVictoryCore.WebSocketClose(__int64,UObject*)", SocketID, Caller); }
	static FString* GetKeyName(FString* result, struct FKey* key) { return NativeCall<FString*, FString*, struct FKey*>(nullptr, "UVictoryCore.GetKeyName(FKey)", result, key); }
	//static void ForEachAvailableMissionType(struct UWorld* World, const class TFunction<bool __cdecl(FAvailableMission const&)>* Callback) > const&) { NativeCall<void, struct UWorld*, const class TFunction<bool __cdecl(FAvailableMission const&)>*>(nullptr, "UVictoryCore.ForEachAvailableMissionType(UWorld*,TFunction<bool__cdecl(FAvailableMission&)>&)", World, Callback); }
	static TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* AttemptToSpawnAWildFollower(TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* result, struct UWorld* World, struct APrimalDinoCharacter* ParentDino, class TArray<float, TSizedDefaultAllocator<32> >* WeightedChanceArrayMultipliers) { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, struct UWorld*, struct APrimalDinoCharacter*, class TArray<float, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.AttemptToSpawnAWildFollower(UWorld*,APrimalDinoCharacter*,TArray<float,TSizedDefaultAllocator<32>>)", result, World, ParentDino, WeightedChanceArrayMultipliers); }
	static TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* GetNeareastTamedDinoCharacters(TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject, int targetingTeam, const struct UE::Math::TVector<double>* location, float range, class TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >* ignoreActors) { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, struct UObject*, int, const struct UE::Math::TVector<double>*, float, class TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetNeareastTamedDinoCharacters(UObject*,int,UE::Math::TVector<double>&,float,TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>)", result, WorldContextObject, targetingTeam, location, range, ignoreActors); }
	static AActor* GetMissionActorOfTypes(struct UObject* WorldContextObject, const class TArray<TSubclassOf<AMissionType>, TSizedDefaultAllocator<32> >* theMissionTypes) { return NativeCall<AActor*, struct UObject*, const class TArray<TSubclassOf<AMissionType>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetMissionActorOfTypes(UObject*,TArray<TSubclassOf<AMissionType>,TSizedDefaultAllocator<32>>&)", WorldContextObject, theMissionTypes); }
	static FString* ConvertIntToStringWithCommas(FString* result, int GivenNumber) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.ConvertIntToStringWithCommas(int)", result, GivenNumber); }
	static bool AmbientInsectsVFXEnabled() { return NativeCall<bool>(nullptr, "UVictoryCore.AmbientInsectsVFXEnabled()"); }
	static TArray<FName, TSizedDefaultAllocator<32> >* GetAllAvailableMissionsAsTags(TArray<FName, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllAvailableMissionsAsTags(UObject*)", result, WorldContextObject); }
	static TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* PointsOnAGrid(TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Center, const struct UE::Math::TRotator<double>* Rotation, float Radius, float MinSize, int NumPoints, float DebugDrawDuration) { return NativeCall<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, float, float, int, float>(nullptr, "UVictoryCore.PointsOnAGrid(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,int,float)", result, WorldContextObject, Center, Rotation, Radius, MinSize, NumPoints, DebugDrawDuration); }
	static bool PredictProjectilePath(struct UObject* WorldContextObject, struct FHitResult* OutHit, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* OutPathPositions, UE::Math::TVector<double>* StartPos, UE::Math::TVector<double>* LaunchVelocity, bool bTracePath, ECollisionChannel TraceChannel, float ProjectileRadius, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, float SimFrequency, float MaxSimTime, float OverrideGravityZ, bool bEnableDebug, bool bCheckForNonBlockingCollision) { return NativeCall<bool, struct UObject*, struct FHitResult*, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, ECollisionChannel, float, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, float, float, float, bool, bool>(nullptr, "UVictoryCore.PredictProjectilePath(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,ECollisionChannel,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,float,float,bool,bool)", WorldContextObject, OutHit, OutPathPositions, StartPos, LaunchVelocity, bTracePath, TraceChannel, ProjectileRadius, ActorsToIgnore, SimFrequency, MaxSimTime, OverrideGravityZ, bEnableDebug, bCheckForNonBlockingCollision); }
	static bool OwnsAstraeos() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsAstraeos()"); }
	static TArray<APlayerCameraManager*, TSizedDefaultAllocator<32> >* GetAllLocalPlayerCameraManagers(TArray<APlayerCameraManager*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<APlayerCameraManager*, TSizedDefaultAllocator<32> >*, TArray<APlayerCameraManager*, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllLocalPlayerCameraManagers(UObject*)", result, WorldContextObject); }
	static UE::Math::TVector2<double>* PointOnCircle(UE::Math::TVector2<double>* result, float Radius, float AngleDegrees) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, float, float>(nullptr, "UVictoryCore.PointOnCircle(float,float)", result, Radius, AngleDegrees); }
	static void PlayMusic(const struct UObject* WorldContextObject, class FString* MusicFile, bool bLooping, float CrossFadeDuration, bool bDontFadeInIfNoOtherTracks, bool bPlayEvenIfCurrentlyPlaying, float OverrideVolume) { NativeCall<void, const struct UObject*, class FString*, bool, float, bool, bool, float>(nullptr, "UVictoryCore.PlayMusic(UObject*,FString,bool,float,bool,bool,float)", WorldContextObject, MusicFile, bLooping, CrossFadeDuration, bDontFadeInIfNoOtherTracks, bPlayEvenIfCurrentlyPlaying, OverrideVolume); }
	static bool GetLocaleSpecificAudio(const class TArray<FLocalizedSoundCueEntry, TSizedDefaultAllocator<32> >* LocalizedSoundCues, struct FLocalizedSoundCueEntry* OutLocalizedAudio, const class FString* LanguageOverride) { return NativeCall<bool, const class TArray<FLocalizedSoundCueEntry, TSizedDefaultAllocator<32> >*, struct FLocalizedSoundCueEntry*, const class FString*>(nullptr, "UVictoryCore.GetLocaleSpecificAudio(TArray<FLocalizedSoundCueEntry,TSizedDefaultAllocator<32>>&,FLocalizedSoundCueEntry&,FString&)", LocalizedSoundCues, OutLocalizedAudio, LanguageOverride); }
	static void GetAllClassesForModID(long ModID, class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* ModClasses) { NativeCall<void, long, class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetAllClassesForModID(__int64,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&)", ModID, ModClasses); }
	static TArray<int, TSizedDefaultAllocator<32> >* GetArrayIndicesSorted_Int(TArray<int, TSizedDefaultAllocator<32> >* result, const class TArray<int, TSizedDefaultAllocator<32> >* Array, bool bSortLowToHigh) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, const class TArray<int, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Int(TArray<int,TSizedDefaultAllocator<32>>&,bool)", result, Array, bSortLowToHigh); }
	static void MulticastDrawDebugLine(struct AActor* ReplicatedActor, UE::Math::TVector<double>* LineStart, UE::Math::TVector<double>* LineEnd, FLinearColor* LineColor, float Duration, float Thickness, bool allowInShipping) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FLinearColor*, float, float, bool>(nullptr, "UVictoryCore.MulticastDrawDebugLine(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,float,float,bool)", ReplicatedActor, LineStart, LineEnd, LineColor, Duration, Thickness, allowInShipping); }
	static FString* BPFormatAsTime(FString* result, int InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds) { return NativeCall<FString*, FString*, int, bool, bool, bool>(nullptr, "UVictoryCore.BPFormatAsTime(int,bool,bool,bool)", result, InTime, UseLeadingZero, bForceLeadingZeroHour, bShowSeconds); }
	static UObject* VNewObjectTransient(struct UClass* classToUse) { return NativeCall<UObject*, struct UClass*>(nullptr, "UVictoryCore.VNewObjectTransient(UClass*)", classToUse); }
	static double NetworkTimeToRealWorldUtcTime(struct UObject* WorldContextObject, double NetworkTime) { return NativeCall<double, struct UObject*, double>(nullptr, "UVictoryCore.NetworkTimeToRealWorldUtcTime(UObject*,double)", WorldContextObject, NetworkTime); }
	static bool AreVector2DsEqual(const struct UE::Math::TVector2<double>* VectorA, const struct UE::Math::TVector2<double>* VectorB) { return NativeCall<bool, const struct UE::Math::TVector2<double>*, const struct UE::Math::TVector2<double>*>(nullptr, "UVictoryCore.AreVector2DsEqual(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&)", VectorA, VectorB); }
	static float TimeSeconds(struct UObject* WorldContextObject) { return NativeCall<float, struct UObject*>(nullptr, "UVictoryCore.TimeSeconds(UObject*)", WorldContextObject); }
	static FString* GetSoundCueLocalizedSpokenText(FString* result, struct USoundCue* inSound) { return NativeCall<FString*, FString*, struct USoundCue*>(nullptr, "UVictoryCore.GetSoundCueLocalizedSpokenText(USoundCue*)", result, inSound); }
	static FString* BPFormatAsTimeLong(FString* result, int InTime) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.BPFormatAsTimeLong(int)", result, InTime); }
	static bool GameModeHasPlayerTethering(struct UObject* WorldContextObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.GameModeHasPlayerTethering(UObject*)", WorldContextObject); }
	static void SetTickGroupBP(struct UActorComponent* component, ETickingGroup tickGroup) { NativeCall<void, struct UActorComponent*, ETickingGroup>(nullptr, "UVictoryCore.SetTickGroupBP(UActorComponent*,ETickingGroup)", component, tickGroup); }
	static void MulticastDrawDebugCapsule(struct AActor* ReplicatedActor, UE::Math::TVector<double>* Center, float HalfHeight, float Radius, UE::Math::TRotator<double>* Rotation, FLinearColor* LineColor, float Duration) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, float, float, UE::Math::TRotator<double>*, FLinearColor*, float>(nullptr, "UVictoryCore.MulticastDrawDebugCapsule(AActor*,UE::Math::TVector<double>,float,float,UE::Math::TRotator<double>,FLinearColor,float)", ReplicatedActor, Center, HalfHeight, Radius, Rotation, LineColor, Duration); }
	static bool IsCryopodNerfEnabled(struct UObject* WorldContextObject, float* damageMult, float* duration, float* incomingDamageMultPercent) { return NativeCall<bool, struct UObject*, float*, float*, float*>(nullptr, "UVictoryCore.IsCryopodNerfEnabled(UObject*,float&,float&,float&)", WorldContextObject, damageMult, duration, incomingDamageMultPercent); }
	static void GrindAllItemsToInventory(struct UPrimalInventoryComponent* inventory, bool bGrindStack, int MaxQuantityToGrind, float GrindGiveItemsPercent, int MaxItemsToGivePerGrind) { NativeCall<void, struct UPrimalInventoryComponent*, bool, int, float, int>(nullptr, "UVictoryCore.GrindAllItemsToInventory(UPrimalInventoryComponent*,bool,int,float,int)", inventory, bGrindStack, MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
	static float BPFLerpFastPure(float InMin, float InMax, float InPercent) { return NativeCall<float, float, float, float>(nullptr, "UVictoryCore.BPFLerpFastPure(float,float,float)", InMin, InMax, InPercent); }
	static bool ServerCheckMeshingOnActor(struct AActor* OnActor, bool bForceUseActorCenterBounds) { return NativeCall<bool, struct AActor*, bool>(nullptr, "UVictoryCore.ServerCheckMeshingOnActor(AActor*,bool)", OnActor, bForceUseActorCenterBounds); }
	static float GetAngleBetweenVectors(const struct UE::Math::TVector<double>* VectorA, const struct UE::Math::TVector<double>* VectorB, const struct UE::Math::TVector<double>* AroundAxis) { return NativeCall<float, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetAngleBetweenVectors(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", VectorA, VectorB, AroundAxis); }
	static bool NetIDOwnsLostColony(const struct UObject* WorldContextObject, const struct FUniqueNetIdRepl* OwnerNetID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, const struct FUniqueNetIdRepl*, bool>(nullptr, "UVictoryCore.NetIDOwnsLostColony(UObject*,FUniqueNetIdRepl&,bool)", WorldContextObject, OwnerNetID, CheckOffline); }
	static bool ActorHasLineOfSightToWorldLocation(struct AActor* FromActor, UE::Math::TVector<double>* ToLocation, struct AActor** OutBlockingActor, ECollisionChannel Channel, float DebugDrawDuration) { return NativeCall<bool, struct AActor*, UE::Math::TVector<double>*, struct AActor**, ECollisionChannel, float>(nullptr, "UVictoryCore.ActorHasLineOfSightToWorldLocation(AActor*,UE::Math::TVector<double>,AActor*&,ECollisionChannel,float)", FromActor, ToLocation, OutBlockingActor, Channel, DebugDrawDuration); }
	static UAnimMontage* GetMontageFromAnimAsset(struct UAnimationAsset* ForAnimAsset, UE::Math::TVector<double>* ForDirection) { return NativeCall<UAnimMontage*, struct UAnimationAsset*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetMontageFromAnimAsset(UAnimationAsset*,UE::Math::TVector<double>)", ForAnimAsset, ForDirection); }
	static FString* GetLastHostedMapPlayed(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetLastHostedMapPlayed()", result); }
	static TArray<FKey, TSizedDefaultAllocator<32> >* GetAllKeybindsByPredicate(TArray<FKey, TSizedDefaultAllocator<32> >* result, FName KeybindName) { return NativeCall<TArray<FKey, TSizedDefaultAllocator<32> >*, TArray<FKey, TSizedDefaultAllocator<32> >*, FName>(nullptr, "UVictoryCore.GetAllKeybindsByPredicate(FName)", result, KeybindName); }
	static TArray<FContainerTasks, TSizedDefaultAllocator<32> >* GetContainersToSort(TArray<FContainerTasks, TSizedDefaultAllocator<32> >* result, struct UWorld* World, const struct UE::Math::TVector<double>* StartPosition, float Radius, float MaxInventoryWeight, float InitialInventoryWeight, int TargetingTeamToCheck, struct UPrimalInventoryComponent* OptionalSourceInventory, bool bOnlyUseSource) { return NativeCall<TArray<FContainerTasks, TSizedDefaultAllocator<32> >*, TArray<FContainerTasks, TSizedDefaultAllocator<32> >*, struct UWorld*, const struct UE::Math::TVector<double>*, float, float, float, int, struct UPrimalInventoryComponent*, bool>(nullptr, "UVictoryCore.GetContainersToSort(UWorld*,UE::Math::TVector<double>&,float,float,float,int,UPrimalInventoryComponent*,bool)", result, World, StartPosition, Radius, MaxInventoryWeight, InitialInventoryWeight, TargetingTeamToCheck, OptionalSourceInventory, bOnlyUseSource); }
	static FString* GetClassPathName(FString* result, struct UObject* ForClass) { return NativeCall<FString*, FString*, struct UObject*>(nullptr, "UVictoryCore.GetClassPathName(UObject*)", result, ForClass); }
	static void DinoFoliageCopyRelevantFoliageSettingsToInstancedMesh(struct UFoliageType_InstancedStaticMesh* SettingsToCopy, struct UHierarchicalInstancedStaticMeshComponent* CopyToComponent, bool bAlsoCopyBodyInstances) { NativeCall<void, struct UFoliageType_InstancedStaticMesh*, struct UHierarchicalInstancedStaticMeshComponent*, bool>(nullptr, "UVictoryCore.DinoFoliageCopyRelevantFoliageSettingsToInstancedMesh(UFoliageType_InstancedStaticMesh*,UHierarchicalInstancedStaticMeshComponent*,bool)", SettingsToCopy, CopyToComponent, bAlsoCopyBodyInstances); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* ServerOctreeOverlapActorsClassBitMask(TArray<AActor*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject, UE::Math::TVector<double>* AtLoc, float Radius, int OctreeTypeBitMask, struct TSubclassOf<AActor>* ActorClass, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UObject*, UE::Math::TVector<double>*, float, int, struct TSubclassOf<AActor>*, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsClassBitMask(UObject*,UE::Math::TVector<double>,float,int,TSubclassOf<AActor>,bool)", result, WorldContextObject, AtLoc, Radius, OctreeTypeBitMask, ActorClass, bForceActorLocationDistanceCheck); }
	static FString* StripEmptyUnicode(FString* result, const class FString* InText, int maxChars) { return NativeCall<FString*, FString*, const class FString*, int>(nullptr, "UVictoryCore.StripEmptyUnicode(FString&,int)", result, InText, maxChars); }
	static float TimeSince_Network(struct UObject* WorldContextObject, double OldTime) { return NativeCall<float, struct UObject*, double>(nullptr, "UVictoryCore.TimeSince_Network(UObject*,double)", WorldContextObject, OldTime); }
	static void StopMusic(const struct UObject* WorldContextObject, class FString* trackToStop, float CrossFadeOutDuration) { NativeCall<void, const struct UObject*, class FString*, float>(nullptr, "UVictoryCore.StopMusic(UObject*,FString,float)", WorldContextObject, trackToStop, CrossFadeOutDuration); }
	static bool IsOfficialServer() { return NativeCall<bool>(nullptr, "UVictoryCore.IsOfficialServer()"); }
	static void ToggleFreezeLevelStreaming(struct UObject* WorldContextObject) { NativeCall<void, struct UObject*>(nullptr, "UVictoryCore.ToggleFreezeLevelStreaming(UObject*)", WorldContextObject); }
	static bool StaticCheckForCommand(class FString* CommandName) { return NativeCall<bool, class FString*>(nullptr, "UVictoryCore.StaticCheckForCommand(FString)", CommandName); }
	static bool NetIDHashOwnsFireLion(const struct UObject* WorldContextObject, unsigned int OwnerHashedUniqueID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, unsigned int, bool>(nullptr, "UVictoryCore.NetIDHashOwnsFireLion(UObject*,unsignedint,bool)", WorldContextObject, OwnerHashedUniqueID, CheckOffline); }
	static UE::Math::TVector<double>* SelectVectorIfWithinRange(UE::Math::TVector<double>* result, UE::Math::TVector<double>* A, UE::Math::TVector<double>* B, bool* OutPickedA, float MaxDistance) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool*, float>(nullptr, "UVictoryCore.SelectVectorIfWithinRange(UE::Math::TVector<double>,UE::Math::TVector<double>,bool&,float)", result, A, B, OutPickedA, MaxDistance); }
	static void GetAllTamesNumber(struct APlayerController* MyPC) { NativeCall<void, struct APlayerController*>(nullptr, "UVictoryCore.GetAllTamesNumber(APlayerController*)", MyPC); }
	static bool VTraceShapeMultiBP(struct UObject* WorldContextObject, class TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, const struct AActor* InIgnoreActor, float ShapeRadius, float ShapeHalfHeight, UE::Math::TVector<double>* ShapeBoxExtent, UE::Math::TRotator<double>* ShapeRotation, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FName TraceTag, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, class TArray<FHitResult, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, const struct AActor*, float, float, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, ECollisionChannel, int, bool, bool, FName, float>(nullptr, "UVictoryCore.VTraceShapeMultiBP(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,float,float,UE::Math::TVector<double>,UE::Math::TRotator<double>,ECollisionChannel,int,bool,bool,FName,float)", WorldContextObject, OutHits, Start, End, ExtraIgnoreActors, InIgnoreActor, ShapeRadius, ShapeHalfHeight, ShapeBoxExtent, ShapeRotation, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, TraceTag, DebugDrawDuration); }
	static UE::Math::TRotator<double>* RemoveRollFromRotator(UE::Math::TRotator<double>* result, const struct UE::Math::TRotator<double>* FromRotator) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*>(nullptr, "UVictoryCore.RemoveRollFromRotator(UE::Math::TRotator<double>&)", result, FromRotator); }
	static void GetObjectsReferencedBy(struct UObject* ForObject, class TArray<UObject*, TSizedDefaultAllocator<32> >* OutReferencedObjects, bool bIgnoreTransient) { NativeCall<void, struct UObject*, class TArray<UObject*, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UVictoryCore.GetObjectsReferencedBy(UObject*,TArray<UObject*,TSizedDefaultAllocator<32>>&,bool)", ForObject, OutReferencedObjects, bIgnoreTransient); }
	static bool PlayerStateOwnsLostColony(struct AShooterPlayerState* playerState) { return NativeCall<bool, struct AShooterPlayerState*>(nullptr, "UVictoryCore.PlayerStateOwnsLostColony(AShooterPlayerState*)", playerState); }
	static void MulticastDrawDebugCylinder(struct AActor* ReplicatedActor, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, float Radius, int Segments, FLinearColor* LineColor, float Duration) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, int, FLinearColor*, float>(nullptr, "UVictoryCore.MulticastDrawDebugCylinder(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,int,FLinearColor,float)", ReplicatedActor, Start, End, Radius, Segments, LineColor, Duration); }
	static ACustomActorList* GetCustomActorList(struct UObject* WorldContextObject, FName SearchCustomTag) { return NativeCall<ACustomActorList*, struct UObject*, FName>(nullptr, "UVictoryCore.GetCustomActorList(UObject*,FName)", WorldContextObject, SearchCustomTag); }
	static void ConstructExplorerNoteSubtitlesOnWidget(int ExplorerNoteIndex, struct UBorder* BorderWidgeet) { NativeCall<void, int, struct UBorder*>(nullptr, "UVictoryCore.ConstructExplorerNoteSubtitlesOnWidget(int,UBorder*)", ExplorerNoteIndex, BorderWidgeet); }
	static bool RemoveNetworkActorFromWorld_StopsReplication(struct UObject* WorldContextObject, struct AActor* ActorToRemove) { return NativeCall<bool, struct UObject*, struct AActor*>(nullptr, "UVictoryCore.RemoveNetworkActorFromWorld_StopsReplication(UObject*,AActor*)", WorldContextObject, ActorToRemove); }
	static void InlineLoadLevels(const class TArray<FName, TSizedDefaultAllocator<32> >* LevelNames, const class TArray<FName, TSizedDefaultAllocator<32> >* LevelNamesToUnload, bool bDisableDistanceStreamingOnLevels) { NativeCall<void, const class TArray<FName, TSizedDefaultAllocator<32> >*, const class TArray<FName, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UVictoryCore.InlineLoadLevels(TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,bool)", LevelNames, LevelNamesToUnload, bDisableDistanceStreamingOnLevels); }
	static bool VTraceSphereBP_IgnoreActorsArray(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, struct FHitResult* HitOut, float Radius, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, const struct AActor* InIgnoreActor, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FName TraceTag, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct FHitResult*, float, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, const struct AActor*, ECollisionChannel, int, bool, bool, FName, float>(nullptr, "UVictoryCore.VTraceSphereBP_IgnoreActorsArray(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,ECollisionChannel,int,bool,bool,FName,float)", WorldContextObject, Start, End, HitOut, Radius, ExtraIgnoreActors, InIgnoreActor, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, TraceTag, DebugDrawDuration); }
	static void AddToActorList(struct UObject* WorldContextObject, int ActorListNum, struct AActor* ActorRef) { NativeCall<void, struct UObject*, int, struct AActor*>(nullptr, "UVictoryCore.AddToActorList(UObject*,int,AActor*)", WorldContextObject, ActorListNum, ActorRef); }
	static void MulticastDrawDebugArrow(struct AActor* ReplicatedActor, UE::Math::TVector<double>* LineStart, UE::Math::TVector<double>* LineEnd, float ArrowSize, FLinearColor* LineColor, float Duration) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, FLinearColor*, float>(nullptr, "UVictoryCore.MulticastDrawDebugArrow(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float)", ReplicatedActor, LineStart, LineEnd, ArrowSize, LineColor, Duration); }
	static bool IsLoadingSaveGame() { return NativeCall<bool>(nullptr, "UVictoryCore.IsLoadingSaveGame()"); }
	static bool IsWeatherEnabled() { return NativeCall<bool>(nullptr, "UVictoryCore.IsWeatherEnabled()"); }
	static bool PlayerOwnsDLCServerOnly(struct AShooterPlayerController* forPC, const class FString* DLCName) { return NativeCall<bool, struct AShooterPlayerController*, const class FString*>(nullptr, "UVictoryCore.PlayerOwnsDLCServerOnly(AShooterPlayerController*,FString&)", forPC, DLCName); }
	static float SimpleCurveEval(float Value, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveEval(float,TEnumAsByte<ESimpleCurve::Type>)", Value, CurveType); }
	static void RecordOutsideWorldMetrics(struct AActor* ForActor, bool bWasDestroyed) { NativeCall<void, struct AActor*, bool>(nullptr, "UVictoryCore.RecordOutsideWorldMetrics(AActor*,bool)", ForActor, bWasDestroyed); }
	static bool IsBonusItemCodeAvailable() { return NativeCall<bool>(nullptr, "UVictoryCore.IsBonusItemCodeAvailable()"); }
	static TSubclassOf<UObject>* StringReferenceToClass(TSubclassOf<UObject>* result, const class FString* StringReference) { return NativeCall<TSubclassOf<UObject>*, TSubclassOf<UObject>*, const class FString*>(nullptr, "UVictoryCore.StringReferenceToClass(FString&)", result, StringReference); }
	static bool VTraceMultiBP(struct UObject* WorldContextObject, class TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, struct AActor* InIgnoreActor, int CollisionGroups, float SphereRadius, const struct UE::Math::TVector<double>* BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, FName TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, struct AActor* AdditionalIgnoreActor, struct AActor* AnotherIgnoreActor, bool bJustDoSphereOverlapAtStartLoc, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, class TArray<FHitResult, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct AActor*, int, float, const struct UE::Math::TVector<double>*, bool, ECollisionChannel, bool, FName, bool, bool, struct AActor*, struct AActor*, bool, float>(nullptr, "UVictoryCore.VTraceMultiBP(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,int,float,UE::Math::TVector<double>&,bool,ECollisionChannel,bool,FName,bool,bool,AActor*,AActor*,bool,float)", WorldContextObject, OutHits, Start, End, InIgnoreActor, CollisionGroups, SphereRadius, BoxExtent, bReturnPhysMaterial, TraceChannel, bTraceComplex, TraceTag, bTraceChannelForceOverlap, bDoSort, AdditionalIgnoreActor, AnotherIgnoreActor, bJustDoSphereOverlapAtStartLoc, DebugDrawDuration); }
	static bool VTraceSingleBP(struct UObject* WorldContextObject, struct FHitResult* OutHit, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, int CollisionGroups, FName TraceTag, bool bTraceComplex, struct AActor* ActorToIgnore, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, struct FHitResult*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, ECollisionChannel, int, FName, bool, struct AActor*, float>(nullptr, "UVictoryCore.VTraceSingleBP(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,int,FName,bool,AActor*,float)", WorldContextObject, OutHit, Start, End, TraceChannel, CollisionGroups, TraceTag, bTraceComplex, ActorToIgnore, DebugDrawDuration); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllMissionDispatcherPoints(TArray<AActor*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllMissionDispatcherPoints(UObject*)", result, WorldContextObject); }
	static TArray<APlayerController*, TSizedDefaultAllocator<32> >* GetActuallyTrulyLocalPlayerControllers(TArray<APlayerController*, TSizedDefaultAllocator<32> >* result, const struct UObject* WorldContextObject) { return NativeCall<TArray<APlayerController*, TSizedDefaultAllocator<32> >*, TArray<APlayerController*, TSizedDefaultAllocator<32> >*, const struct UObject*>(nullptr, "UVictoryCore.GetActuallyTrulyLocalPlayerControllers(UObject*)", result, WorldContextObject); }
	static bool GetOverlappedHarvestActors(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* AtLoc, float AtRadius, class TArray<AActor*, TSizedDefaultAllocator<32> >* OutHarvestActors, class TArray<UActorComponent*, TSizedDefaultAllocator<32> >* OutHarvestComponents, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* OutHarvestLocations, class TArray<int, TSizedDefaultAllocator<32> >* OutHitBodyIndices) { return NativeCall<bool, struct UObject*, const struct UE::Math::TVector<double>*, float, class TArray<AActor*, TSizedDefaultAllocator<32> >*, class TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, class TArray<int, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetOverlappedHarvestActors(UObject*,UE::Math::TVector<double>&,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", WorldContextObject, AtLoc, AtRadius, OutHarvestActors, OutHarvestComponents, OutHarvestLocations, OutHitBodyIndices); }
	static int RandInt(int MaxVal) { return NativeCall<int, int>(nullptr, "UVictoryCore.RandInt(int)", MaxVal); }
	static FHitResult* MakeHitResult(FHitResult* result, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* Normal, struct UPhysicalMaterial* PhysMat, struct AActor* HitActor, struct UPrimitiveComponent* HitComponent, FName HitBoneName, int HitItem, bool bBlockingHit) { return NativeCall<FHitResult*, FHitResult*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct UPhysicalMaterial*, struct AActor*, struct UPrimitiveComponent*, FName, int, bool>(nullptr, "UVictoryCore.MakeHitResult(UE::Math::TVector<double>,UE::Math::TVector<double>,UPhysicalMaterial*,AActor*,UPrimitiveComponent*,FName,int,bool)", result, Location, Normal, PhysMat, HitActor, HitComponent, HitBoneName, HitItem, bBlockingHit); }
	static void SetGrassEnable(bool bGrassEnable) { NativeCall<void, bool>(nullptr, "UVictoryCore.SetGrassEnable(bool)", bGrassEnable); }
	static bool PlayerOwnsDLCType(struct AShooterPlayerController* forPC, TEnumAsByte<enum EEngramGroup::Type> DLCType) { return NativeCall<bool, struct AShooterPlayerController*, TEnumAsByte<enum EEngramGroup::Type>>(nullptr, "UVictoryCore.PlayerOwnsDLCType(AShooterPlayerController*,TEnumAsByte<EEngramGroup::Type>)", forPC, DLCType); }
	static void GetAllClassesForModName(class FString* ModName, class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* ModClasses) { NativeCall<void, class FString*, class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetAllClassesForModName(FString,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&)", ModName, ModClasses); }
	static int IsChildOfClasses(struct TSubclassOf<UObject>* childClass, const class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClasses(TSubclassOf<UObject>,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static bool PlayerStateOwnsDLC(struct APlayerState* forPS, const class FString* DLCName) { return NativeCall<bool, struct APlayerState*, const class FString*>(nullptr, "UVictoryCore.PlayerStateOwnsDLC(APlayerState*,FString&)", forPS, DLCName); }
	static FString* GetActorCoordinateString(FString* result, struct AActor* Actor) { return NativeCall<FString*, FString*, struct AActor*>(nullptr, "UVictoryCore.GetActorCoordinateString(AActor*)", result, Actor); }
	static bool GrindItemIntoInventory(struct UPrimalItem* item, struct UPrimalInventoryComponent* inventory, bool bGrindStack, int MaxQuantityToGrind, float GrindGiveItemsPercent, int MaxItemsToGivePerGrind) { return NativeCall<bool, struct UPrimalItem*, struct UPrimalInventoryComponent*, bool, int, float, int>(nullptr, "UVictoryCore.GrindItemIntoInventory(UPrimalItem*,UPrimalInventoryComponent*,bool,int,float,int)", item, inventory, bGrindStack, MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
	static void ExitApplication() { NativeCall<void>(nullptr, "UVictoryCore.ExitApplication()"); }
	static void ClearStandaloneObjectFlag(struct UObject* Object) { NativeCall<void, struct UObject*>(nullptr, "UVictoryCore.ClearStandaloneObjectFlag(UObject*)", Object); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* ServerOctreeOverlapActorsBitMask(TArray<AActor*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject, UE::Math::TVector<double>* AtLoc, float Radius, int OctreeTypeBitMask, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UObject*, UE::Math::TVector<double>*, float, int, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsBitMask(UObject*,UE::Math::TVector<double>,float,int,bool)", result, WorldContextObject, AtLoc, Radius, OctreeTypeBitMask, bForceActorLocationDistanceCheck); }
	static bool SetMultiUseEntryPriority(class TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* InOutEntries, bool bFindByUseIndexInsteadOfArrayIndex, int Index, int NewPriority) { return NativeCall<bool, class TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, bool, int, int>(nullptr, "UVictoryCore.SetMultiUseEntryPriority(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,bool,int,int)", InOutEntries, bFindByUseIndexInsteadOfArrayIndex, Index, NewPriority); }
	static void BreakPlayerCharacterConfigStructReplicated(const struct FPrimalPlayerCharacterConfigStructReplicated* FromStruct, bool* bIsFemale, class TArray<FLinearColor, TSizedDefaultAllocator<32> >* BodyColors, class FString* PlayerCharacterName, class TArray<float, TSizedDefaultAllocator<32> >* RawBoneModifiers, int* PlayerSpawnRegionIndex, unsigned char* HeadHairIndex, unsigned char* FacialHairIndex, float* PercentOfFullHeadHairGrowth, float* PercentOfFullFacialHairGrowth, class TArray<unsigned char, TSizedDefaultAllocator<32> >* OverrideHeadHairColor, class TArray<unsigned char, TSizedDefaultAllocator<32> >* OverrideFacialHairColor, class TArray<unsigned char, TSizedDefaultAllocator<32> >* DynamicMaterialBytes, int PlayerVoiceCollectionIndex, bool* bUsingCustomPlayerVoiceCollection) { NativeCall<void, const struct FPrimalPlayerCharacterConfigStructReplicated*, bool*, class TArray<FLinearColor, TSizedDefaultAllocator<32> >*, class FString*, class TArray<float, TSizedDefaultAllocator<32> >*, int*, unsigned char*, unsigned char*, float*, float*, class TArray<unsigned char, TSizedDefaultAllocator<32> >*, class TArray<unsigned char, TSizedDefaultAllocator<32> >*, class TArray<unsigned char, TSizedDefaultAllocator<32> >*, int, bool*>(nullptr, "UVictoryCore.BreakPlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStructReplicated&,bool&,TArray<FLinearColor,TSizedDefaultAllocator<32>>&,FString&,TArray<float,TSizedDefaultAllocator<32>>&,int&,unsignedchar&,unsignedchar&,float&,float&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,int,bool&)", FromStruct, bIsFemale, BodyColors, PlayerCharacterName, RawBoneModifiers, PlayerSpawnRegionIndex, HeadHairIndex, FacialHairIndex, PercentOfFullHeadHairGrowth, PercentOfFullFacialHairGrowth, OverrideHeadHairColor, OverrideFacialHairColor, DynamicMaterialBytes, PlayerVoiceCollectionIndex, bUsingCustomPlayerVoiceCollection); }
	static void SetBoolArrayElemFalse(class TArray<bool, TSizedDefaultAllocator<32> >* TheArray, int TheIndex) { NativeCall<void, class TArray<bool, TSizedDefaultAllocator<32> >*, int>(nullptr, "UVictoryCore.SetBoolArrayElemFalse(TArray<bool,TSizedDefaultAllocator<32>>&,int)", TheArray, TheIndex); }
	static void ForceScreenColorFade(struct UObject* WorldContextObject, FLinearColor* FadeColor, float FullOpacityInterval, float TheFadeOutInterval) { NativeCall<void, struct UObject*, FLinearColor*, float, float>(nullptr, "UVictoryCore.ForceScreenColorFade(UObject*,FLinearColor,float,float)", WorldContextObject, FadeColor, FullOpacityInterval, TheFadeOutInterval); }
	static FKey* GetKeybindByPredicate(FKey* result, FName KeybindName) { return NativeCall<FKey*, FKey*, FName>(nullptr, "UVictoryCore.GetKeybindByPredicate(FName)", result, KeybindName); }
	static void RecursivelyApplDynamicMaterialParamsToMeshAndChildren_Helper(struct UMeshComponent* WithMesh, const class TArray<FName, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Scalar_Names, const class TArray<float, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Scalar, const class TArray<FName, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Vector_Names, const class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Vector, const class TArray<FName, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Texture_Names, const class TArray<UTexture*, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Texture) { NativeCall<void, struct UMeshComponent*, const class TArray<FName, TSizedDefaultAllocator<32> >*, const class TArray<float, TSizedDefaultAllocator<32> >*, const class TArray<FName, TSizedDefaultAllocator<32> >*, const class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, const class TArray<FName, TSizedDefaultAllocator<32> >*, const class TArray<UTexture*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.RecursivelyApplDynamicMaterialParamsToMeshAndChildren_Helper(UMeshComponent*,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<UTexture*,TSizedDefaultAllocator<32>>&)", WithMesh, DynamicMaterialParams_Scalar_Names, DynamicMaterialParams_Scalar, DynamicMaterialParams_Vector_Names, DynamicMaterialParams_Vector, DynamicMaterialParams_Texture_Names, DynamicMaterialParams_Texture); }
	static bool GetFurthestNonObstructedLocationAroundPoint(struct UObject* WorldContextObject, UE::Math::TVector<double>* CenterLocation, const class TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, struct UE::Math::TVector<double>* OutBestLocation, float TraceCapsuleRadius, float TraceCapsuleHalfHeight, float RadiusOfPointsAroundCheckedLoc, int NumCirclePointsAroundLocation, int NumVerticalPoints, float VerticalSpacing, float MinimumDistance, bool bDebug, float DebugTraceDuration) { return NativeCall<bool, struct UObject*, UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UE::Math::TVector<double>*, float, float, float, int, int, float, float, bool, float>(nullptr, "UVictoryCore.GetFurthestNonObstructedLocationAroundPoint(UObject*,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,float,float,float,int,int,float,float,bool,float)", WorldContextObject, CenterLocation, IgnoreActors, OutBestLocation, TraceCapsuleRadius, TraceCapsuleHalfHeight, RadiusOfPointsAroundCheckedLoc, NumCirclePointsAroundLocation, NumVerticalPoints, VerticalSpacing, MinimumDistance, bDebug, DebugTraceDuration); }
	static void GetAllActorsOfClassSoft(const struct UObject* WorldContextObject, struct TSoftClassPtr<AActor>* ActorClass, class TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, const struct UObject*, struct TSoftClassPtr<AActor>*, class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetAllActorsOfClassSoft(UObject*,TSoftClassPtr<AActor>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, ActorClass, OutActors); }
	static bool CapsuleSweepMulti(struct UObject* WorldContextObject, class TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, const struct UE::Math::TRotator<double>* CapsuleRot, float Radius, float HalfHeight, const class TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, bool bIgnoreSelf, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bDebugDraw, float DebugDrawDuration, bool bFindInitialOverlaps) { return NativeCall<bool, struct UObject*, class TArray<FHitResult, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, float, float, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, TEnumAsByte<enum ECollisionChannel>, bool, bool, float, bool>(nullptr, "UVictoryCore.CapsuleSweepMulti(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,TEnumAsByte<ECollisionChannel>,bool,bool,float,bool)", WorldContextObject, OutHits, Start, End, CapsuleRot, Radius, HalfHeight, IgnoreActors, bIgnoreSelf, CollisionChannel, bTraceComplex, bDebugDraw, DebugDrawDuration, bFindInitialOverlaps); }
	static int IsChildOfClassesSoftRefT(struct TSubclassOf<UObject>* childClass, const class TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<AActor>(TSubclassOf<UObject>,TArray<TSoftClassPtr<AActor>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static bool VTraceAgainstActorExpensive(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, struct FHitResult* HitOut, struct AActor* ActorToTraceAgainst, ECollisionChannel Channel, long CollisionGroups, float SphereRadius, bool bReturnPhysMaterial, bool bTraceComplex, const struct UE::Math::TVector<double>* BoxExtent, FName TraceTag, bool bSort) { return NativeCall<bool, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct FHitResult*, struct AActor*, ECollisionChannel, long, float, bool, bool, const struct UE::Math::TVector<double>*, FName, bool>(nullptr, "UVictoryCore.VTraceAgainstActorExpensive(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,AActor*,ECollisionChannel,__int64,float,bool,bool,UE::Math::TVector<double>&,FName,bool)", WorldContextObject, Start, End, HitOut, ActorToTraceAgainst, Channel, CollisionGroups, SphereRadius, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, bSort); }
	static UE::Math::TVector2<double>* GetScreenPercentLocation(UE::Math::TVector2<double>* result, struct APlayerController* ForPC, UE::Math::TVector2<double>* ScreenPercentages) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, struct APlayerController*, UE::Math::TVector2<double>*>(nullptr, "UVictoryCore.GetScreenPercentLocation(APlayerController*,UE::Math::TVector2<double>)", result, ForPC, ScreenPercentages); }
	static bool WebSocketIsConnected(long SocketID, struct UObject* Caller) { return NativeCall<bool, long, struct UObject*>(nullptr, "UVictoryCore.WebSocketIsConnected(__int64,UObject*)", SocketID, Caller); }
	static bool SetFloatCVarValue(const class FString* CVarName, float NewValue) { return NativeCall<bool, const class FString*, float>(nullptr, "UVictoryCore.SetFloatCVarValue(FString&,float)", CVarName, NewValue); }
	static TArray<FName, TSizedDefaultAllocator<32> >* GetLoadedStreamingLevelNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetLoadedStreamingLevelNames()", result); }
	static void PrintStringThreadSafe(const class FString* InString, bool bPrintToScreen, bool bPrintToLog, FLinearColor* TextColor, float Duration, FName Key) { NativeCall<void, const class FString*, bool, bool, FLinearColor*, float, FName>(nullptr, "UVictoryCore.PrintStringThreadSafe(FString&,bool,bool,FLinearColor,float,FName)", InString, bPrintToScreen, bPrintToLog, TextColor, Duration, Key); }
	static FString* ListDinosNew(FString* result, struct UObject* WorldContextObject) { return NativeCall<FString*, FString*, struct UObject*>(nullptr, "UVictoryCore.ListDinosNew(UObject*)", result, WorldContextObject); }
	static UE::Math::TVector2<double>* TransformVectorByScreenProjectionGlobalTransform(UE::Math::TVector2<double>* result, UE::Math::TVector2<double>* vec) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, UE::Math::TVector2<double>*>(nullptr, "UVictoryCore.TransformVectorByScreenProjectionGlobalTransform(UE::Math::TVector2<double>)", result, vec); }
	static bool IsBrainControllingDinoAttached(struct APrimalCharacter* character) { return NativeCall<bool, struct APrimalCharacter*>(nullptr, "UVictoryCore.IsBrainControllingDinoAttached(APrimalCharacter*)", character); }
	static TSubclassOf<APrimalDinoCharacter>* GetDinoSetupDinoType(TSubclassOf<APrimalDinoCharacter>* result, const struct FDinoSetup* DinoSetup) { return NativeCall<TSubclassOf<APrimalDinoCharacter>*, TSubclassOf<APrimalDinoCharacter>*, const struct FDinoSetup*>(nullptr, "UVictoryCore.GetDinoSetupDinoType(FDinoSetup&)", result, DinoSetup); }
	static bool OwnsCustomCosmeticMod(long ModID) { return NativeCall<bool, long>(nullptr, "UVictoryCore.OwnsCustomCosmeticMod(__int64)", ModID); }
	static bool OwnsDLC(class FString* DLCName) { return NativeCall<bool, class FString*>(nullptr, "UVictoryCore.OwnsDLC(FString)", DLCName); }
	static bool IsWorkshopIDSubscribed(const class FString* WorkshopID) { return NativeCall<bool, const class FString*>(nullptr, "UVictoryCore.IsWorkshopIDSubscribed(FString&)", WorkshopID); }
	static bool IsLockhart() { return NativeCall<bool>(nullptr, "UVictoryCore.IsLockhart()"); }
	static void AddEnvironmentInteractionEffect(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, float Radius, UE::Math::TVector<double>* Velocity, float FoliageInteractionStrength, float FoliagePlasticity, bool bFoliageInteraction, bool bSplash, bool bRipple, struct UNiagaraSystem* FluidSimSplashTemplateOverride, bool PlaySplashSound, UE::Math::TVector<double>* SplashLocation, float SplashRadius) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, float, bool, bool, bool, struct UNiagaraSystem*, bool, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.AddEnvironmentInteractionEffect(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", WorldContextObject, Location, Radius, Velocity, FoliageInteractionStrength, FoliagePlasticity, bFoliageInteraction, bSplash, bRipple, FluidSimSplashTemplateOverride, PlaySplashSound, SplashLocation, SplashRadius); }
	//static FKAggregateGeom_Blueprint* GetSkeletalMeshCollision_IE_AggGeom_Elements(FKAggregateGeom_Blueprint* result, struct UStaticMesh* MyStaticMesh) { return NativeCall<FKAggregateGeom_Blueprint*, FKAggregateGeom_Blueprint*, struct UStaticMesh*>(nullptr, "UVictoryCore.GetSkeletalMeshCollision_IE_AggGeom_Elements(UStaticMesh*)", result, MyStaticMesh); }
	static bool NetIDHashOwnsLostColony(const struct UObject* WorldContextObject, unsigned int OwnerHashedUniqueID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, unsigned int, bool>(nullptr, "UVictoryCore.NetIDHashOwnsLostColony(UObject*,unsignedint,bool)", WorldContextObject, OwnerHashedUniqueID, CheckOffline); }
	static bool TraceProjectileArc(struct UObject* WorldContextObject, const struct FProjectileArc* Arc, struct FHitResult* OutHitResult, struct UE::Math::TVector<double>* OutEndLocation, float* OutEndArcTime, struct UE::Math::TVector<double>* OutArcPeakLocation, float MaxArcLength, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, float ArcTimeStep, ECollisionChannel CollisionChannel, bool bTraceObjectTypeOnly, bool bDrawDebug, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, const struct FProjectileArc*, struct FHitResult*, struct UE::Math::TVector<double>*, float*, struct UE::Math::TVector<double>*, float, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, float, ECollisionChannel, bool, bool, float>(nullptr, "UVictoryCore.TraceProjectileArc(UObject*,FProjectileArc&,FHitResult&,UE::Math::TVector<double>&,float&,UE::Math::TVector<double>&,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,ECollisionChannel,bool,bool,float)", WorldContextObject, Arc, OutHitResult, OutEndLocation, OutEndArcTime, OutArcPeakLocation, MaxArcLength, ActorsToIgnore, ArcTimeStep, CollisionChannel, bTraceObjectTypeOnly, bDrawDebug, DebugDrawDuration); }
	static bool OwnsGenesisSeasonPass() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsGenesisSeasonPass()"); }
	static bool BPIsTemplate(struct UObject* AnObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.BPIsTemplate(UObject*)", AnObject); }
	static double DateTimeToSeconds(const struct FDateTime* DateTimeValue) { return NativeCall<double, const struct FDateTime*>(nullptr, "UVictoryCore.DateTimeToSeconds(FDateTime&)", DateTimeValue); }
	static void RefreshApplySoundVolumes() { NativeCall<void>(nullptr, "UVictoryCore.RefreshApplySoundVolumes()"); }
	static TArray<FString, TSizedDefaultAllocator<32> >* SortStringArrayASC(TArray<FString, TSizedDefaultAllocator<32> >* result, bool bAsc, class TArray<FString, TSizedDefaultAllocator<32> >* StringArray) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*, bool, class TArray<FString, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortStringArrayASC(bool,TArray<FString,TSizedDefaultAllocator<32>>)", result, bAsc, StringArray); }
	static void ShowCustomModDeeplinkPrompt(struct AShooterPlayerController* ForPC, long ModID, class FString* Title, class FString* Message) { NativeCall<void, struct AShooterPlayerController*, long, class FString*, class FString*>(nullptr, "UVictoryCore.ShowCustomModDeeplinkPrompt(AShooterPlayerController*,__int64,FString,FString)", ForPC, ModID, Title, Message); }
	static double GetWorldLoadedAtTime(struct UObject* WorldContextObject) { return NativeCall<double, struct UObject*>(nullptr, "UVictoryCore.GetWorldLoadedAtTime(UObject*)", WorldContextObject); }
	static void GetAllStructuresNumber(struct APlayerController* MyPC) { NativeCall<void, struct APlayerController*>(nullptr, "UVictoryCore.GetAllStructuresNumber(APlayerController*)", MyPC); }
	static void OptimizeContainerOrder(const struct UE::Math::TVector<double>* StartPosition, struct FContainerSortingInfo* SortingInfo, class TArray<FContainerTasks, TSizedDefaultAllocator<32> >* OutOptimizedTaskList, float MaxInventoryWeight, float InitialInventoryWeight, struct UPrimalInventoryComponent* TransferInventory) { NativeCall<void, const struct UE::Math::TVector<double>*, struct FContainerSortingInfo*, class TArray<FContainerTasks, TSizedDefaultAllocator<32> >*, float, float, struct UPrimalInventoryComponent*>(nullptr, "UVictoryCore.OptimizeContainerOrder(UE::Math::TVector<double>&,FContainerSortingInfo&,TArray<FContainerTasks,TSizedDefaultAllocator<32>>&,float,float,UPrimalInventoryComponent*)", StartPosition, SortingInfo, OutOptimizedTaskList, MaxInventoryWeight, InitialInventoryWeight, TransferInventory); }
	static bool AreTransformsNearlyEqual(const struct UE::Math::TTransform<double>* TransformA, const struct UE::Math::TTransform<double>* TransformB, float WithinError) { return NativeCall<bool, const struct UE::Math::TTransform<double>*, const struct UE::Math::TTransform<double>*, float>(nullptr, "UVictoryCore.AreTransformsNearlyEqual(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&,float)", TransformA, TransformB, WithinError); }
	static FString* GetPlatformProductIDForDLC(FString* result, class FString* DLCName) { return NativeCall<FString*, FString*, class FString*>(nullptr, "UVictoryCore.GetPlatformProductIDForDLC(FString)", result, DLCName); }
	static void ResetMousePositionToCenter(struct APlayerController* controller) { NativeCall<void, struct APlayerController*>(nullptr, "UVictoryCore.ResetMousePositionToCenter(APlayerController*)", controller); }
	static bool IsXboxOneBuild() { return NativeCall<bool>(nullptr, "UVictoryCore.IsXboxOneBuild()"); }
	static UE::Math::TVector<double>* ViewDirectionAngleOffset(UE::Math::TVector<double>* result, UE::Math::TVector<double>* ViewDirection, UE::Math::TVector<double>* RightVector, float AngleOffsetDegrees, float MaxAngleDegreesBeforeInterpToUp) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, float>(nullptr, "UVictoryCore.ViewDirectionAngleOffset(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float)", result, ViewDirection, RightVector, AngleOffsetDegrees, MaxAngleDegreesBeforeInterpToUp); }
	static bool FindValidLocationNextToTarget(struct UObject* WorldContextObject, struct UE::Math::TVector<double>* OutLocation, struct APrimalCharacter* SourceCharacter, struct APrimalCharacter* TargetCharacter, float DistanceMargin, int MaxTraceCount, struct AActor* ActorToIgnore, bool bTraceComplex, bool bDrawDebug, float DebugDrawDuration, bool AllowCloseDistance, bool AllowLocationInAir, bool UseRandomCircleAround) { return NativeCall<bool, struct UObject*, struct UE::Math::TVector<double>*, struct APrimalCharacter*, struct APrimalCharacter*, float, int, struct AActor*, bool, bool, float, bool, bool, bool>(nullptr, "UVictoryCore.FindValidLocationNextToTarget(UObject*,UE::Math::TVector<double>&,APrimalCharacter*,APrimalCharacter*,float,int,AActor*,bool,bool,float,bool,bool,bool)", WorldContextObject, OutLocation, SourceCharacter, TargetCharacter, DistanceMargin, MaxTraceCount, ActorToIgnore, bTraceComplex, bDrawDebug, DebugDrawDuration, AllowCloseDistance, AllowLocationInAir, UseRandomCircleAround); }
	static UObject* ConstructObjectBP(struct UClass* Class, struct UObject* Outer, FName Name) { return NativeCall<UObject*, struct UClass*, struct UObject*, FName>(nullptr, "UVictoryCore.ConstructObjectBP(UClass*,UObject*,FName)", Class, Outer, Name); }
	static UObject* ClassRefToObjectRef(struct UClass* InClass) { return NativeCall<UObject*, struct UClass*>(nullptr, "UVictoryCore.ClassRefToObjectRef(UClass*)", InClass); }
	static FText* GetKeybindDisplayName(FText* result, FName Keybind) { return NativeCall<FText*, FText*, FName>(nullptr, "UVictoryCore.GetKeybindDisplayName(FName)", result, Keybind); }
	static bool GetNextTrackedActorLinkedEntry(class TMap<int, FTrackedActorOverallContainer, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FTrackedActorOverallContainer, 0> >* GivenTMap, int ID, int Category, int* NextLinkedEntryID, int* NextLinkedEntryCategory, struct FTrackedActorPlusInfoStruct* FoundTrackedActorPlusInfoStruct) { return NativeCall<bool, class TMap<int, FTrackedActorOverallContainer, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FTrackedActorOverallContainer, 0> >*, int, int, int*, int*, struct FTrackedActorPlusInfoStruct*>(nullptr, "UVictoryCore.GetNextTrackedActorLinkedEntry(TMap<int,FTrackedActorOverallContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTrackedActorOverallContainer,0>>,int,int,int&,int&,FTrackedActorPlusInfoStruct&)", GivenTMap, ID, Category, NextLinkedEntryID, NextLinkedEntryCategory, FoundTrackedActorPlusInfoStruct); }
	static bool ThereIsANonObstructedTraceToTheLocation_ActualTrace(struct UObject* WorldContextObject, UE::Math::TVector<double>* StartingLocation, UE::Math::TVector<double>* DesiredLocation, ECollisionChannel TraceChannel, const class TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, float TraceCapsuleRadius, float TraceCapsuleHalfHeight, bool bDebug, float DebugTraceDuration) { return NativeCall<bool, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, ECollisionChannel, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, float, float, bool, float>(nullptr, "UVictoryCore.ThereIsANonObstructedTraceToTheLocation_ActualTrace(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,float,bool,float)", WorldContextObject, StartingLocation, DesiredLocation, TraceChannel, IgnoreActors, TraceCapsuleRadius, TraceCapsuleHalfHeight, bDebug, DebugTraceDuration); }
	static bool PlayerOwnsLostColony(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsLostColony(AShooterPlayerController*)", controller); }
	static void CopyDinoColorSetIndicies(const struct APrimalDinoCharacter* src, struct APrimalDinoCharacter* dest) { NativeCall<void, const struct APrimalDinoCharacter*, struct APrimalDinoCharacter*>(nullptr, "UVictoryCore.CopyDinoColorSetIndicies(APrimalDinoCharacter*,APrimalDinoCharacter*)", src, dest); }
	static int GetUpsellIndex() { return NativeCall<int>(nullptr, "UVictoryCore.GetUpsellIndex()"); }
	static int IsChildOfClassesSoftRefT(struct TSubclassOf<UObject>* childClass, const class TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<APrimalStructure>(TSubclassOf<UObject>,TArray<TSoftClassPtr<APrimalStructure>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static void AddFluidInteraction(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, float Radius, UE::Math::TVector<double>* Velocity, bool bSplash, bool bRipple, struct UNiagaraSystem* FluidSimSplashTemplateOverride, bool PlaySplashSound, UE::Math::TVector<double>* SplashLocation, float SplashRadius) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, bool, bool, struct UNiagaraSystem*, bool, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.AddFluidInteraction(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<double>,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", WorldContextObject, Location, Radius, Velocity, bSplash, bRipple, FluidSimSplashTemplateOverride, PlaySplashSound, SplashLocation, SplashRadius); }
	static void SendSlackMessageToChannel(struct UWorld* World, const class FString* ChannelURL, const class FString* Message) { NativeCall<void, struct UWorld*, const class FString*, const class FString*>(nullptr, "UVictoryCore.SendSlackMessageToChannel(UWorld*,FString&,FString&)", World, ChannelURL, Message); }
	static bool IsSOTF() { return NativeCall<bool>(nullptr, "UVictoryCore.IsSOTF()"); }
	static bool IsModEnabled(long ModID) { return NativeCall<bool, long>(nullptr, "UVictoryCore.IsModEnabled(__int64)", ModID); }
	static FString* ClassToStringReference(FString* result, struct TSubclassOf<UObject>* ForClass) { return NativeCall<FString*, FString*, struct TSubclassOf<UObject>*>(nullptr, "UVictoryCore.ClassToStringReference(TSubclassOf<UObject>)", result, ForClass); }
	static bool NetIDOwnsFireLion(const struct UObject* WorldContextObject, const struct FUniqueNetIdRepl* OwnerNetID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, const struct FUniqueNetIdRepl*, bool>(nullptr, "UVictoryCore.NetIDOwnsFireLion(UObject*,FUniqueNetIdRepl&,bool)", WorldContextObject, OwnerNetID, CheckOffline); }
	static void RemoveFromActorList(struct UObject* WorldContextObject, int ActorListNum, struct AActor* ActorRef) { NativeCall<void, struct UObject*, int, struct AActor*>(nullptr, "UVictoryCore.RemoveFromActorList(UObject*,int,AActor*)", WorldContextObject, ActorListNum, ActorRef); }
	static void SetLastHostedMapPlayed(const class FString* NewLastHostedMapPlayed) { NativeCall<void, const class FString*>(nullptr, "UVictoryCore.SetLastHostedMapPlayed(FString&)", NewLastHostedMapPlayed); }
	static void ViewTrailer(bool bAnimatedSeriesTrailer, bool bARK2Trailer) { NativeCall<void, bool, bool>(nullptr, "UVictoryCore.ViewTrailer(bool,bool)", bAnimatedSeriesTrailer, bARK2Trailer); }
	static void AddEnvironmentCapsuleInteractionEffect(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* ExtraCapsuleLocation, float Radius, UE::Math::TVector<double>* Velocity, float FoliageInteractionStrength, float FoliagePlasticity, bool bFoliageInteraction, bool bSplash, bool bRipple, struct UNiagaraSystem* FluidSimSplashTemplateOverride, bool PlaySplashSound, bool DontAddIfOverLimits, UE::Math::TVector<double>* SplashLocation, float SplashRadius) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, float, bool, bool, bool, struct UNiagaraSystem*, bool, bool, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.AddEnvironmentCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool,bool,bool,UNiagaraSystem*,bool,bool,UE::Math::TVector<double>,float)", WorldContextObject, Location, ExtraCapsuleLocation, Radius, Velocity, FoliageInteractionStrength, FoliagePlasticity, bFoliageInteraction, bSplash, bRipple, FluidSimSplashTemplateOverride, PlaySplashSound, DontAddIfOverLimits, SplashLocation, SplashRadius); }
	static bool GetDinoSetupGroup_WeightedRandom(const class TArray<FDinoSetupGroup, TSizedDefaultAllocator<32> >* DinoSetupGroups, struct FDinoSetupGroup* OutGroup) { return NativeCall<bool, const class TArray<FDinoSetupGroup, TSizedDefaultAllocator<32> >*, struct FDinoSetupGroup*>(nullptr, "UVictoryCore.GetDinoSetupGroup_WeightedRandom(TArray<FDinoSetupGroup,TSizedDefaultAllocator<32>>&,FDinoSetupGroup&)", DinoSetupGroups, OutGroup); }
	static UE::Math::TBoxSphereBounds<double, double>* GetStaticMeshBounds(UE::Math::TBoxSphereBounds<double, double>* result, const struct UStaticMesh* ForMesh) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*, const struct UStaticMesh*>(nullptr, "UVictoryCore.GetStaticMeshBounds(UStaticMesh*)", result, ForMesh); }
	static void RecordTribeChangeMetric(struct AShooterPlayerState* PlayerState, struct FTribeData* TribeData, struct FTribeChangeInfo* TribeChangeInfo) { NativeCall<void, struct AShooterPlayerState*, struct FTribeData*, struct FTribeChangeInfo*>(nullptr, "UVictoryCore.RecordTribeChangeMetric(AShooterPlayerState*,FTribeData,FTribeChangeInfo)", PlayerState, TribeData, TribeChangeInfo); }
	static int IsChildOfClassesSoft(struct TSubclassOf<UObject>* childClass, const class TArray<FString, TSizedDefaultAllocator<32> >* ParentClassesArraySoft) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<FString, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoft(TSubclassOf<UObject>,TArray<FString,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArraySoft); }
	static void GetEnabledModsDisplay(class TMap<__int64, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<__int64, FString, 0> >* EnabledMods, bool bIncludClientCosmetics) { NativeCall<void, class TMap<__int64, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<__int64, FString, 0> >*, bool>(nullptr, "UVictoryCore.GetEnabledModsDisplay(TMap<__int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FString,0>>&,bool)", EnabledMods, bIncludClientCosmetics); }
	static TArray<int, TSizedDefaultAllocator<32> >* GetArrayIndicesSorted_Double(TArray<int, TSizedDefaultAllocator<32> >* result, const class TArray<double, TSizedDefaultAllocator<32> >* Array, bool bSortLowToHigh) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, const class TArray<double, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Double(TArray<double,TSizedDefaultAllocator<32>>&,bool)", result, Array, bSortLowToHigh); }
	static bool PredictProjectilePathWithIgnoreClasses(struct UObject* WorldContextObject, struct FHitResult* OutHit, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* OutPathPositions, UE::Math::TVector<double>* StartPos, UE::Math::TVector<double>* LaunchVelocity, bool bTracePath, ECollisionChannel TraceChannel, float ProjectileRadius, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, float SimFrequency, float MaxSimTime, float OverrideGravityZ, bool bEnableDebug, bool bCheckForNonBlockingCollision, const class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* ClassParentsToIgnore) { return NativeCall<bool, struct UObject*, struct FHitResult*, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, ECollisionChannel, float, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, float, float, float, bool, bool, const class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.PredictProjectilePathWithIgnoreClasses(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,ECollisionChannel,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,float,float,bool,bool,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&)", WorldContextObject, OutHit, OutPathPositions, StartPos, LaunchVelocity, bTracePath, TraceChannel, ProjectileRadius, ActorsToIgnore, SimFrequency, MaxSimTime, OverrideGravityZ, bEnableDebug, bCheckForNonBlockingCollision, ClassParentsToIgnore); }
	//static UBlendSpace* CreateBlendSpaceFromAnimationNameSubstring(const class FString* subString, struct USkeletalMesh* mesh, float cardinalBlendSpaceXOffset, float cardinalBlendSpaceYOffset) { return NativeCall<UBlendSpace*, const class FString*, struct USkeletalMesh*, float, float>(nullptr, "UVictoryCore.CreateBlendSpaceFromAnimationNameSubstring(FString&,USkeletalMesh*,float,float)", subString, mesh, cardinalBlendSpaceXOffset, cardinalBlendSpaceYOffset); }
	static void ResetCooldown(double* OutCooldownClock) { NativeCall<void, double*>(nullptr, "UVictoryCore.ResetCooldown(double&)", OutCooldownClock); }
	static void BPRecursivelyApplyDynamicMaterialParams(struct UMeshComponent* WithMesh, const class TArray<FName, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Scalar_Names, const class TArray<float, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Scalar, const class TArray<FName, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Vector_Names, const class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Vector, const class TArray<FName, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Texture_Names, const class TArray<UTexture*, TSizedDefaultAllocator<32> >* DynamicMaterialParams_Texture) { NativeCall<void, struct UMeshComponent*, const class TArray<FName, TSizedDefaultAllocator<32> >*, const class TArray<float, TSizedDefaultAllocator<32> >*, const class TArray<FName, TSizedDefaultAllocator<32> >*, const class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, const class TArray<FName, TSizedDefaultAllocator<32> >*, const class TArray<UTexture*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.BPRecursivelyApplyDynamicMaterialParams(UMeshComponent*,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<UTexture*,TSizedDefaultAllocator<32>>&)", WithMesh, DynamicMaterialParams_Scalar_Names, DynamicMaterialParams_Scalar, DynamicMaterialParams_Vector_Names, DynamicMaterialParams_Vector, DynamicMaterialParams_Texture_Names, DynamicMaterialParams_Texture); }
	static void HTTPRequestPOST(struct UObject* Caller, const class FString* InURL, const class TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >* Headers, const class FString* Content) { NativeCall<void, struct UObject*, const class FString*, const class TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >*, const class FString*>(nullptr, "UVictoryCore.HTTPRequestPOST(UObject*,FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&,FString&)", Caller, InURL, Headers, Content); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* ServerOctreeOverlapActorsClass(TArray<AActor*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject, UE::Math::TVector<double>* AtLoc, float Radius, EServerOctreeGroup::Type OctreeType, struct TSubclassOf<AActor>* ActorClass, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UObject*, UE::Math::TVector<double>*, float, EServerOctreeGroup::Type, struct TSubclassOf<AActor>*, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsClass(UObject*,UE::Math::TVector<double>,float,EServerOctreeGroup::Type,TSubclassOf<AActor>,bool)", result, WorldContextObject, AtLoc, Radius, OctreeType, ActorClass, bForceActorLocationDistanceCheck); }
	static UE::Math::TVector<double>* ProjectLocationToEdgeOfSphere(UE::Math::TVector<double>* result, bool* bOutDidProject, const struct UE::Math::TVector<double>* ForLocation, const struct UE::Math::TVector<double>* SphereOrigin, const float* SphereRadius, bool bOnlyProjectIfWithinRadius, bool bForceProjection2D, bool bDebug, struct AActor* DebugContextActor, float DebugDuration) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const float*, bool, bool, bool, struct AActor*, float>(nullptr, "UVictoryCore.ProjectLocationToEdgeOfSphere(bool&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,bool,bool,bool,AActor*,float)", result, bOutDidProject, ForLocation, SphereOrigin, SphereRadius, bOnlyProjectIfWithinRadius, bForceProjection2D, bDebug, DebugContextActor, DebugDuration); }
	static bool OwnsGenesis() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsGenesis()"); }
	static bool NetIDOwnsDarkPegasus(const struct UObject* WorldContextObject, const struct FUniqueNetIdRepl* OwnerNetID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, const struct FUniqueNetIdRepl*, bool>(nullptr, "UVictoryCore.NetIDOwnsDarkPegasus(UObject*,FUniqueNetIdRepl&,bool)", WorldContextObject, OwnerNetID, CheckOffline); }
	static bool PlayExplorerNoteMovie(const struct UObject* WorldContextObject, class FString* MoviePath, struct FOnMoviePlaybackFinished* OnMoviePlaybackFinishedDelegate, bool bPlayedOnClient, int ExplorerNoteIndex) { return NativeCall<bool, const struct UObject*, class FString*, struct FOnMoviePlaybackFinished*, bool, int>(nullptr, "UVictoryCore.PlayExplorerNoteMovie(UObject*,FString,FOnMoviePlaybackFinished,bool,int)", WorldContextObject, MoviePath, OnMoviePlaybackFinishedDelegate, bPlayedOnClient, ExplorerNoteIndex); }
	static FString* FormatRichTextWithColorStatic(FString* result, const class FString* InText, FLinearColor* InColor) { return NativeCall<FString*, FString*, const class FString*, FLinearColor*>(nullptr, "UVictoryCore.FormatRichTextWithColorStatic(FString&,FLinearColor)", result, InText, InColor); }
	static bool HasEverCompletedQueryEntitlements(struct UObject* WorldContextObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.HasEverCompletedQueryEntitlements(UObject*)", WorldContextObject); }
	static float ClampRotAxis(float BaseAxis, float DesiredAxis, float MaxDiff) { return NativeCall<float, float, float, float>(nullptr, "UVictoryCore.ClampRotAxis(float,float,float)", BaseAxis, DesiredAxis, MaxDiff); }
	static float GetVolumeOfCapsule(float CapsuleRadius, float CapsuleHalfHeight) { return NativeCall<float, float, float>(nullptr, "UVictoryCore.GetVolumeOfCapsule(float,float)", CapsuleRadius, CapsuleHalfHeight); }
	static TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* RemoveInvalidObjectsInContainer(TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* result, class TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* fContainer) { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, class TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.RemoveInvalidObjectsInContainer(TArray<APrimalDinoCharacter*,TSizedDefaultAllocator<32>>&)", result, fContainer); }
	static void MulticastDrawDebugSphere(struct AActor* ReplicatedActor, UE::Math::TVector<double>* Center, float Radius, int Segments, FLinearColor* LineColor, float Duration) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, float, int, FLinearColor*, float>(nullptr, "UVictoryCore.MulticastDrawDebugSphere(AActor*,UE::Math::TVector<double>,float,int,FLinearColor,float)", ReplicatedActor, Center, Radius, Segments, LineColor, Duration); }
	static void UseCooldown(struct UObject* WorldContextObject, double* OutCooldownClock) { NativeCall<void, struct UObject*, double*>(nullptr, "UVictoryCore.UseCooldown(UObject*,double&)", WorldContextObject, OutCooldownClock); }
	static float BPGetBiomeTemperature(struct ABiomeZoneVolume* BiomeZoneVolume, float GlobalTemperature) { return NativeCall<float, struct ABiomeZoneVolume*, float>(nullptr, "UVictoryCore.BPGetBiomeTemperature(ABiomeZoneVolume*,float)", BiomeZoneVolume, GlobalTemperature); }
	static AShooterCharacter* GetPlayerCharacterByIndex(struct UObject* WorldContextObject, int PlayerIndex) { return NativeCall<AShooterCharacter*, struct UObject*, int>(nullptr, "UVictoryCore.GetPlayerCharacterByIndex(UObject*,int)", WorldContextObject, PlayerIndex); }
	static float TimeSince(struct UObject* WorldContextObject, double OldTime) { return NativeCall<float, struct UObject*, double>(nullptr, "UVictoryCore.TimeSince(UObject*,double)", WorldContextObject, OldTime); }
	static FCustomItemData* GetCryoDinoData(FCustomItemData* result, struct UObject* WorldContextObject, struct APrimalDinoCharacter* DinoReference) { return NativeCall<FCustomItemData*, FCustomItemData*, struct UObject*, struct APrimalDinoCharacter*>(nullptr, "UVictoryCore.GetCryoDinoData(UObject*,APrimalDinoCharacter*)", result, WorldContextObject, DinoReference); }
	static FString* GetSoundWaveLocalizedSpokenText(FString* result, struct USoundWave* inSound) { return NativeCall<FString*, FString*, struct USoundWave*>(nullptr, "UVictoryCore.GetSoundWaveLocalizedSpokenText(USoundWave*)", result, inSound); }
	static int IsChildOfClassesSoftRef(struct TSubclassOf<UObject>* childClass, const class TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRef(TSubclassOf<UObject>,TArray<TSoftClassPtr<UObject>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static bool ClampItemQualityLevel(struct UWorld* world, struct UPrimalItem* item, bool bDestroy, bool bCheckDinoData) { return NativeCall<bool, struct UWorld*, struct UPrimalItem*, bool, bool>(nullptr, "UVictoryCore.ClampItemQualityLevel(UWorld*,UPrimalItem*,bool,bool)", world, item, bDestroy, bCheckDinoData); }
	static bool IsPlayingMovie() { return NativeCall<bool>(nullptr, "UVictoryCore.IsPlayingMovie()"); }
	static UE::Math::TVector<double>* RandomLocationInRadius(UE::Math::TVector<double>* result, const struct UE::Math::TVector<double>* Center, float RadiusMax, float RadiusMin) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, float, float>(nullptr, "UVictoryCore.RandomLocationInRadius(UE::Math::TVector<double>&,float,float)", result, Center, RadiusMax, RadiusMin); }
	static bool IsSplitscreen() { return NativeCall<bool>(nullptr, "UVictoryCore.IsSplitscreen()"); }
	static void DisableGCM(struct AActor* targetActor) { NativeCall<void, struct AActor*>(nullptr, "UVictoryCore.DisableGCM(AActor*)", targetActor); }
	static FString* JoinStringArrayWithNewlines(FString* result, const class TArray<FString, TSizedDefaultAllocator<32> >* SourceArray) { return NativeCall<FString*, FString*, const class TArray<FString, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.JoinStringArrayWithNewlines(TArray<FString,TSizedDefaultAllocator<32>>&)", result, SourceArray); }
	static bool ActorHasLineOfSight(struct AActor* FromActor, struct AActor* ToActor, struct AActor** OutBlockingActor, UE::Math::TVector<double>* ToActorOffset, ECollisionChannel Channel, float DebugDrawDuration) { return NativeCall<bool, struct AActor*, struct AActor*, struct AActor**, UE::Math::TVector<double>*, ECollisionChannel, float>(nullptr, "UVictoryCore.ActorHasLineOfSight(AActor*,AActor*,AActor*&,UE::Math::TVector<double>,ECollisionChannel,float)", FromActor, ToActor, OutBlockingActor, ToActorOffset, Channel, DebugDrawDuration); }
	static bool CallFunctionOnOwningObjectAndActorComponents(struct TSoftObjectPtr<UObject>* TargetSoftPtr, class FString* FunctionName, struct UObject* Executor, const struct FFunctionParams_NoArrays* ArbitraryFunctionParams) { return NativeCall<bool, struct TSoftObjectPtr<UObject>*, class FString*, struct UObject*, const struct FFunctionParams_NoArrays*>(nullptr, "UVictoryCore.CallFunctionOnOwningObjectAndActorComponents(TSoftObjectPtr<UObject>,FString,UObject*,FFunctionParams_NoArrays&)", TargetSoftPtr, FunctionName, Executor, ArbitraryFunctionParams); }
	static FString* GetLastMapPlayed(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetLastMapPlayed()", result); }
	static void PaginateMultiUseEntries(class TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* Entries, int StartUseIndex, int StartCategory, int FirstBackIndex, int EntriesPerPage, struct FMultiUseEntry* BackEntryTemplate, struct FMultiUseEntry* NextEntryTemplate) { NativeCall<void, class TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int, int, int, int, struct FMultiUseEntry*, struct FMultiUseEntry*>(nullptr, "UVictoryCore.PaginateMultiUseEntries(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int,int,int,int,FMultiUseEntry,FMultiUseEntry)", Entries, StartUseIndex, StartCategory, FirstBackIndex, EntriesPerPage, BackEntryTemplate, NextEntryTemplate); }
	//static void UploadFileToSlackChannel(TWeakObjectPtr<UWorld, FWeakObjectPtr> World, const class FString* SlackBotToken, class FString* ChannelID, const class FString* RelativePathWithFileName, const class FString* FileType, const class FString* Charset, const class FString* Comment, const class std::function<void __cdecl(bool, TSharedPtr<IHttpResponse, 1>, FString const&)>* CallbackOnComplete) > ) { NativeCall<void, TWeakObjectPtr<UWorld, FWeakObjectPtr>, const class FString*, class FString*, const class FString*, const class FString*, const class FString*, const class FString*, const class std::function<void __cdecl(bool, TSharedPtr<IHttpResponse, 1>, FString const&)>*>(nullptr, "UVictoryCore.UploadFileToSlackChannel(TWeakObjectPtr<UWorld,FWeakObjectPtr>,FString,FString,FString&,FString&,FString&,FString&,std::function<void__cdecl(bool,TSharedPtr<IHttpResponse,1>,FString&)>)", World, SlackBotToken, ChannelID, RelativePathWithFileName, FileType, Charset, Comment, CallbackOnComplete); }
	static void QuerySteamEntitlements(struct UObject* WorldContextObject) { NativeCall<void, struct UObject*>(nullptr, "UVictoryCore.QuerySteamEntitlements(UObject*)", WorldContextObject); }
	static void RecordMeshingMetrics(struct AActor* ForActor, bool bWasDestroyed) { NativeCall<void, struct AActor*, bool>(nullptr, "UVictoryCore.RecordMeshingMetrics(AActor*,bool)", ForActor, bWasDestroyed); }
	static TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* PointsRandomDist(TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* result, const struct UE::Math::TVector<double>* Location, int NumPoints, float Radius, float PointRadius) { return NativeCall<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, int, float, float>(nullptr, "UVictoryCore.PointsRandomDist(UE::Math::TVector<double>&,int,float,float)", result, Location, NumPoints, Radius, PointRadius); }
	static AActor* GetNearestAllieDDino(struct UObject* WorldContextObject, int TargetingTeam, const struct UE::Math::TVector<double>* location, class TArray<AActor*, TSizedDefaultAllocator<32> >* ignoreActors) { return NativeCall<AActor*, struct UObject*, int, const struct UE::Math::TVector<double>*, class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetNearestAllieDDino(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>)", WorldContextObject, TargetingTeam, location, ignoreActors); }
	static bool IsGamePadConnected() { return NativeCall<bool>(nullptr, "UVictoryCore.IsGamePadConnected()"); }
	static FString* GetNewlineCharacter(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetNewlineCharacter()", result); }
	static bool AreVector2DsNearlyEqual(const struct UE::Math::TVector2<double>* VectorA, const struct UE::Math::TVector2<double>* VectorB, float WithinError) { return NativeCall<bool, const struct UE::Math::TVector2<double>*, const struct UE::Math::TVector2<double>*, float>(nullptr, "UVictoryCore.AreVector2DsNearlyEqual(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,float)", VectorA, VectorB, WithinError); }
	static UPrimalAIState* FindActorAIState(struct TSubclassOf<UPrimalAIState>* fStateType, class TArray<FDinoAttackInfo, TSizedDefaultAllocator<32> >* fContainerOfStates) { return NativeCall<UPrimalAIState*, struct TSubclassOf<UPrimalAIState>*, class TArray<FDinoAttackInfo, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.FindActorAIState(TSubclassOf<UPrimalAIState>,TArray<FDinoAttackInfo,TSizedDefaultAllocator<32>>)", fStateType, fContainerOfStates); }
	static bool IsLowMemPlatform() { return NativeCall<bool>(nullptr, "UVictoryCore.IsLowMemPlatform()"); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* ServerOctreeOverlapActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject, UE::Math::TVector<double>* AtLoc, float Radius, EServerOctreeGroup::Type OctreeType, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UObject*, UE::Math::TVector<double>*, float, EServerOctreeGroup::Type, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActors(UObject*,UE::Math::TVector<double>,float,EServerOctreeGroup::Type,bool)", result, WorldContextObject, AtLoc, Radius, OctreeType, bForceActorLocationDistanceCheck); }
	static bool CapsuleOverlapFast(struct UObject* WorldContextObject, struct AActor** OutFirstOverlappedActor, const struct UE::Math::TVector<double>* Origin, const struct UE::Math::TRotator<double>* CapsuleRotation, float Radius, float HalfHeight, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bIgnoreSelf, struct AActor* IgnoreActor, bool bDebugDraw, float DebugDrawDuration, bool bBlockingOnly) { return NativeCall<bool, struct UObject*, struct AActor**, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, float, float, TEnumAsByte<enum ECollisionChannel>, bool, bool, struct AActor*, bool, float, bool>(nullptr, "UVictoryCore.CapsuleOverlapFast(UObject*,AActor*&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,TEnumAsByte<ECollisionChannel>,bool,bool,AActor*,bool,float,bool)", WorldContextObject, OutFirstOverlappedActor, Origin, CapsuleRotation, Radius, HalfHeight, CollisionChannel, bTraceComplex, bIgnoreSelf, IgnoreActor, bDebugDraw, DebugDrawDuration, bBlockingOnly); }
	static void DrawDebugCapsuleWithExtents(struct UObject* WorldContextObject, UE::Math::TVector<double>* Top, UE::Math::TVector<double>* Bottom, float Radius, FLinearColor* Color, float LifeTime, bool bPersistent) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, FLinearColor*, float, bool>(nullptr, "UVictoryCore.DrawDebugCapsuleWithExtents(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool)", WorldContextObject, Top, Bottom, Radius, Color, LifeTime, bPersistent); }
	static void HTTPRequestGET(struct UObject* Caller, const class FString* InURL, const class TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >* Headers) { NativeCall<void, struct UObject*, const class FString*, const class TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >*>(nullptr, "UVictoryCore.HTTPRequestGET(UObject*,FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&)", Caller, InURL, Headers); }
	static double GetNetworkTimeInSeconds(struct UObject* WorldContextObject) { return NativeCall<double, struct UObject*>(nullptr, "UVictoryCore.GetNetworkTimeInSeconds(UObject*)", WorldContextObject); }
	static UE::Math::TVector<double>* RotateDirToTargetWithAngleLimits(UE::Math::TVector<double>* result, const struct UE::Math::TVector<double>* RotateDir, const struct UE::Math::TVector<double>* TowardsDir, UE::Math::TRotator<double>* WithAngleLimits, bool bForceZeroRoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool>(nullptr, "UVictoryCore.RotateDirToTargetWithAngleLimits(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>,bool)", result, RotateDir, TowardsDir, WithAngleLimits, bForceZeroRoll); }
	static void ApplyEnvironmentalInteractionExplosion_Universal(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, float ExplosionRadius, float FluidSimSplashStrength, struct UNiagaraSystem* FluidSimSplashTemplateOverride) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, float, float, struct UNiagaraSystem*>(nullptr, "UVictoryCore.ApplyEnvironmentalInteractionExplosion_Universal(UObject*,UE::Math::TVector<double>,float,float,UNiagaraSystem*)", WorldContextObject, Location, ExplosionRadius, FluidSimSplashStrength, FluidSimSplashTemplateOverride); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UVictoryCore.StaticClass()"); }
	static float ComponentGetBoundsSphereRadius(struct UPrimitiveComponent* Comp) { return NativeCall<float, struct UPrimitiveComponent*>(nullptr, "UVictoryCore.ComponentGetBoundsSphereRadius(UPrimitiveComponent*)", Comp); }
	static FString* ConsumeBonusItemCode(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.ConsumeBonusItemCode()", result); }
	static void MulticastDrawDebugPoint(struct AActor* ReplicatedActor, UE::Math::TVector<double>* Position, float Size, FLinearColor* PointColor, float Duration) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, float, FLinearColor*, float>(nullptr, "UVictoryCore.MulticastDrawDebugPoint(AActor*,UE::Math::TVector<double>,float,FLinearColor,float)", ReplicatedActor, Position, Size, PointColor, Duration); }
	static FString* GetObjectPathName(FString* result, struct UObject* ForObject) { return NativeCall<FString*, FString*, struct UObject*>(nullptr, "UVictoryCore.GetObjectPathName(UObject*)", result, ForObject); }
	static bool GetLocaleSpecificSoundWaveAnimTexturePairArrays(const class TArray<FLocalizedSoundWaveAnimTexturePairArrays, TSizedDefaultAllocator<32> >* LocalizedSoundWaveAnimTextures, struct FLocalizedSoundWaveAnimTexturePairArrays* OutLocalizedAudio, bool* FoundLocalizedSoundWavesForThisLanguage, const class FString* LanguageOverride) { return NativeCall<bool, const class TArray<FLocalizedSoundWaveAnimTexturePairArrays, TSizedDefaultAllocator<32> >*, struct FLocalizedSoundWaveAnimTexturePairArrays*, bool*, const class FString*>(nullptr, "UVictoryCore.GetLocaleSpecificSoundWaveAnimTexturePairArrays(TArray<FLocalizedSoundWaveAnimTexturePairArrays,TSizedDefaultAllocator<32>>&,FLocalizedSoundWaveAnimTexturePairArrays&,bool&,FString&)", LocalizedSoundWaveAnimTextures, OutLocalizedAudio, FoundLocalizedSoundWavesForThisLanguage, LanguageOverride); }
	static void SetBlockShowingSpawnUI(bool bShouldBlock) { NativeCall<void, bool>(nullptr, "UVictoryCore.SetBlockShowingSpawnUI(bool)", bShouldBlock); }
	static int IsChildOfClassesT(struct TSubclassOf<UObject>* childClass, const class TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesT<APrimalStructure>(TSubclassOf<UObject>,TArray<TSubclassOf<APrimalStructure>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static bool OwnsSteamAppID(int AppID) { return NativeCall<bool, int>(nullptr, "UVictoryCore.OwnsSteamAppID(int)", AppID); }
	static bool IsCooldownComplete(struct UObject* WorldContextObject, double CooldownClock, float NumSeconds) { return NativeCall<bool, struct UObject*, double, float>(nullptr, "UVictoryCore.IsCooldownComplete(UObject*,double,float)", WorldContextObject, CooldownClock, NumSeconds); }
	static EPlayerHeatMapHeatLevel::Level GetPlayerHeatLevel(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Location) { return NativeCall<EPlayerHeatMapHeatLevel::Level, struct UObject*, const struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetPlayerHeatLevel(UObject*,UE::Math::TVector<double>&)", WorldContextObject, Location); }
	static FString* GetModCompatibilityVersion(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetModCompatibilityVersion()", result); }
	static bool OwnsFireLion() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsFireLion()"); }
	static bool PlayerOwnsScorchedEarthServer(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsScorchedEarthServer(AShooterPlayerController*)", controller); }
	static bool OwnsLostColony() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsLostColony()"); }
	static bool VTraceIgnoreFoliage(struct UWorld* theWorld, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, struct FHitResult* HitOut, const struct AActor* ActorToIgnore, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, const struct UE::Math::TVector<double>* BoxExtent, FName TraceTag, const struct AActor* OtherActorToIgnore, class TArray<AActor*, TSizedDefaultAllocator<32> >* OtherActorsToIgnore, const struct UE::Math::TQuat<double>* Rot, const struct AActor* AnotherActorToIgnore, bool bIgnoreFoliage) { return NativeCall<bool, struct UWorld*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct FHitResult*, const struct AActor*, ECollisionChannel, int, bool, bool, const struct UE::Math::TVector<double>*, FName, const struct AActor*, class TArray<AActor*, TSizedDefaultAllocator<32> >*, const struct UE::Math::TQuat<double>*, const struct AActor*, bool>(nullptr, "UVictoryCore.VTraceIgnoreFoliage(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,AActor*,ECollisionChannel,int,bool,bool,UE::Math::TVector<double>&,FName,AActor*,TArray<AActor*,TSizedDefaultAllocator<32>>*,UE::Math::TQuat<double>&,AActor*,bool)", theWorld, Start, End, HitOut, ActorToIgnore, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, OtherActorToIgnore, OtherActorsToIgnore, Rot, AnotherActorToIgnore, bIgnoreFoliage); }
	static bool IsLocationUnderMesh(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* TestLocation, const struct UE::Math::TVector<double>* UpVector, const struct UE::Math::TVector<double>* ControlRotationVector, struct UE::Math::TVector<double>* CheckSevenHitLocation, bool* bOverlapping, struct UActorComponent** CheckSevenResult, bool DebugDraw, float DebugDrawSeconds, struct AActor* ignoreActor) { return NativeCall<bool, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct UE::Math::TVector<double>*, bool*, struct UActorComponent**, bool, float, struct AActor*>(nullptr, "UVictoryCore.IsLocationUnderMesh(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool&,UActorComponent*&,bool,float,AActor*)", WorldContextObject, TestLocation, UpVector, ControlRotationVector, CheckSevenHitLocation, bOverlapping, CheckSevenResult, DebugDraw, DebugDrawSeconds, ignoreActor); }
	static bool ComponentBoundsEncompassesPoint(struct UPrimitiveComponent* Comp, const struct UE::Math::TVector<double>* Point, float BoundsMultiplier) { return NativeCall<bool, struct UPrimitiveComponent*, const struct UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.ComponentBoundsEncompassesPoint(UPrimitiveComponent*,UE::Math::TVector<double>&,float)", Comp, Point, BoundsMultiplier); }
	static UE::Math::TVector2<double>* GetRandomCircleCenterPointEncompassingPointWithinOuterCircle(UE::Math::TVector2<double>* result, float RandomCircleRadius, const struct UE::Math::TVector2<double>* PointToEncompass, const struct UE::Math::TVector2<double>* OuterCircleCenterPoint, float OuterCircleRadius, int MaxRetries) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, float, const struct UE::Math::TVector2<double>*, const struct UE::Math::TVector2<double>*, float, int>(nullptr, "UVictoryCore.GetRandomCircleCenterPointEncompassingPointWithinOuterCircle(float,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,float,int)", result, RandomCircleRadius, PointToEncompass, OuterCircleCenterPoint, OuterCircleRadius, MaxRetries); }
	static float GetCurrentCameraExposure() { return NativeCall<float>(nullptr, "UVictoryCore.GetCurrentCameraExposure()"); }
	static bool IsTimerPaused(struct UObject* Object, class FString* FunctionName) { return NativeCall<bool, struct UObject*, class FString*>(nullptr, "UVictoryCore.IsTimerPaused(UObject*,FString)", Object, FunctionName); }
	static bool IsFluidInteractionEnabled(struct UObject* worldContext) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.IsFluidInteractionEnabled(UObject*)", worldContext); }
	static UE::Math::TRotator<double>* BPRotatorLerp(UE::Math::TRotator<double>* result, const struct UE::Math::TRotator<double>* A, const struct UE::Math::TRotator<double>* B, const float* Alpha) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*, const float*>(nullptr, "UVictoryCore.BPRotatorLerp(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float&)", result, A, B, Alpha); }
	static bool IsRunningDedicatedServer() { return NativeCall<bool>(nullptr, "UVictoryCore.IsRunningDedicatedServer()"); }
	static void SetSelectedLevelActors(class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToSelect, bool bClearPreviousSelection) { NativeCall<void, class TArray<AActor*, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UVictoryCore.SetSelectedLevelActors(TArray<AActor*,TSizedDefaultAllocator<32>>,bool)", ActorsToSelect, bClearPreviousSelection); }
	static bool SaveWorld(struct UWorld* World, float unlessLastSaveWorldWasWithinSeconds) { return NativeCall<bool, struct UWorld*, float>(nullptr, "UVictoryCore.SaveWorld(UWorld*,float)", World, unlessLastSaveWorldWasWithinSeconds); }
	static bool TryGetLocalizedString(class FString* Namespace, class FString* StringToLocalize, class FString* OutLocalizedVersion) { return NativeCall<bool, class FString*, class FString*, class FString*>(nullptr, "UVictoryCore.TryGetLocalizedString(FString,FString,FString*)", Namespace, StringToLocalize, OutLocalizedVersion); }
	static UShooterGameInstance* GetGameInstance(const struct UObject* WorldContextObject) { return NativeCall<UShooterGameInstance*, const struct UObject*>(nullptr, "UVictoryCore.GetGameInstance(UObject*)", WorldContextObject); }
	static bool PlayerOwnsDLC(struct AShooterPlayerController* forPC, const class FString* DLCName) { return NativeCall<bool, struct AShooterPlayerController*, const class FString*>(nullptr, "UVictoryCore.PlayerOwnsDLC(AShooterPlayerController*,FString&)", forPC, DLCName); }
	static bool IsEpicClient() { return NativeCall<bool>(nullptr, "UVictoryCore.IsEpicClient()"); }
	static void GetAllItemsNumber(struct APlayerController* MyPC) { NativeCall<void, struct APlayerController*>(nullptr, "UVictoryCore.GetAllItemsNumber(APlayerController*)", MyPC); }
	static UPrimalHarvestingComponent* GetHarvestingComponentFromHitBodyIndex(struct UInstancedStaticMeshComponent* FromISMC, int WithHitBodyIndex) { return NativeCall<UPrimalHarvestingComponent*, struct UInstancedStaticMeshComponent*, int>(nullptr, "UVictoryCore.GetHarvestingComponentFromHitBodyIndex(UInstancedStaticMeshComponent*,int)", FromISMC, WithHitBodyIndex); }
	static void RemoveLocalPlayer(int ControllerId) { NativeCall<void, int>(nullptr, "UVictoryCore.RemoveLocalPlayer(int)", ControllerId); }
	static UE::Math::TRotator<double>* SimpleCurveInterpClampedRotator(UE::Math::TRotator<double>* result, UE::Math::TRotator<double>* A, UE::Math::TRotator<double>* B, float Alpha, bool bShortestPath, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float, bool, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveInterpClampedRotator(UE::Math::TRotator<double>,UE::Math::TRotator<double>,float,bool,TEnumAsByte<ESimpleCurve::Type>)", result, A, B, Alpha, bShortestPath, CurveType); }
	static AShooterCharacter* GetPlayerCharacterByController(struct APlayerController* PC) { return NativeCall<AShooterCharacter*, struct APlayerController*>(nullptr, "UVictoryCore.GetPlayerCharacterByController(APlayerController*)", PC); }
	static void SetLevelActorFolderPath(struct AActor* Actor, FName FolderPath) { NativeCall<void, struct AActor*, FName>(nullptr, "UVictoryCore.SetLevelActorFolderPath(AActor*,FName)", Actor, FolderPath); }
	static bool IsPhotoModeActive(struct UObject* WorldContextObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.IsPhotoModeActive(UObject*)", WorldContextObject); }
	static double GetRealWorldUtcTimeInSeconds() { return NativeCall<double>(nullptr, "UVictoryCore.GetRealWorldUtcTimeInSeconds()"); }
	static UE::Math::TRotator<double>* RLerp(UE::Math::TRotator<double>* result, UE::Math::TRotator<double>* A, UE::Math::TRotator<double>* B, float Alpha, bool bShortestPath) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, float, bool>(nullptr, "UVictoryCore.RLerp(UE::Math::TRotator<double>,UE::Math::TRotator<double>,float,bool)", result, A, B, Alpha, bShortestPath); }
	static void ShowEditorNotification(struct UObject* WorldContextObject, class FString* Message, TEnumAsByte<enum EEditorMessageLogLevel::Type> WithLogLevel, float Duration, bool bServerOnly) { NativeCall<void, struct UObject*, class FString*, TEnumAsByte<enum EEditorMessageLogLevel::Type>, float, bool>(nullptr, "UVictoryCore.ShowEditorNotification(UObject*,FString,TEnumAsByte<EEditorMessageLogLevel::Type>,float,bool)", WorldContextObject, Message, WithLogLevel, Duration, bServerOnly); }
	static bool SetBoolCVarValue(const class FString* CVarName, bool bNewValue) { return NativeCall<bool, const class FString*, bool>(nullptr, "UVictoryCore.SetBoolCVarValue(FString&,bool)", CVarName, bNewValue); }
	static UE::Math::TRotator<double>* RemovePitchAndRollFromRotator(UE::Math::TRotator<double>* result, const struct UE::Math::TRotator<double>* FromRotator) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*>(nullptr, "UVictoryCore.RemovePitchAndRollFromRotator(UE::Math::TRotator<double>&)", result, FromRotator); }
	static float VectorDistance(UE::Math::TVector<double>* A, UE::Math::TVector<double>* B) { return NativeCall<float, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.VectorDistance(UE::Math::TVector<double>,UE::Math::TVector<double>)", A, B); }
	static FDinoSetup* ModifyDinoSetupTargetLevel(FDinoSetup* result, const struct FDinoSetup* DinoSetup, float LevelMultiplier, int MinLevel, int MaxLevel) { return NativeCall<FDinoSetup*, FDinoSetup*, const struct FDinoSetup*, float, int, int>(nullptr, "UVictoryCore.ModifyDinoSetupTargetLevel(FDinoSetup&,float,int,int)", result, DinoSetup, LevelMultiplier, MinLevel, MaxLevel); }
	static bool NetIDHashOwnsDarkPegasus(const struct UObject* WorldContextObject, unsigned int OwnerHashedUniqueID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, unsigned int, bool>(nullptr, "UVictoryCore.NetIDHashOwnsDarkPegasus(UObject*,unsignedint,bool)", WorldContextObject, OwnerHashedUniqueID, CheckOffline); }
	//static void DownloadFileFromBackblaze(const class FString* BackblazeFileId, class TDelegate<void __cdecl(TSharedPtr<IHttpRequest, 1>, TSharedPtr<IHttpResponse, 1>, bool), FDefaultTSDelegateUserPolicy>* DownloadCompleteCallback), FDefaultTSDelegateUserPolicy > ) { NativeCall<void, const class FString*, class TDelegate<void __cdecl(TSharedPtr<IHttpRequest, 1>, TSharedPtr<IHttpResponse, 1>, bool), FDefaultTSDelegateUserPolicy>*>(nullptr, "UVictoryCore.DownloadFileFromBackblaze(FString&,TDelegate<void__cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)>)", BackblazeFileId, DownloadCompleteCallback); }
	static void SetLastMapPlayed(const class FString* NewLastMapPlayed) { NativeCall<void, const class FString*>(nullptr, "UVictoryCore.SetLastMapPlayed(FString&)", NewLastMapPlayed); }
	static FColor GetTeamColor(int TargetingTeam) { return NativeCall<FColor, int>(nullptr, "UVictoryCore.GetTeamColor(int)", TargetingTeam); }
	static bool AreAllSublevelsForDataLayerLoaded(struct UObject* WorldContextObject, FName DataLayerName) { return NativeCall<bool, struct UObject*, FName>(nullptr, "UVictoryCore.AreAllSublevelsForDataLayerLoaded(UObject*,FName)", WorldContextObject, DataLayerName); }
	static bool IsBoundsInUndermeshExclusionZone(struct UWorld* World, const struct UE::Math::TVector<double>* location, float radius) { return NativeCall<bool, struct UWorld*, const struct UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.IsBoundsInUndermeshExclusionZone(UWorld*const,UE::Math::TVector<double>&,float)", World, location, radius); }
	static int ECC_TO_BITFIELD_BP(ECollisionChannel ConvertChannel) { return NativeCall<int, ECollisionChannel>(nullptr, "UVictoryCore.ECC_TO_BITFIELD_BP(ECollisionChannel)", ConvertChannel); }
	static bool IsTimerActive(struct UObject* Object, class FString* FunctionName) { return NativeCall<bool, struct UObject*, class FString*>(nullptr, "UVictoryCore.IsTimerActive(UObject*,FString)", Object, FunctionName); }
	//static TArray<ULevelStreaming*, TSizedDefaultAllocator<32> >* GetWorldSublevels(TArray<ULevelStreaming*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<ULevelStreaming*, TSizedDefaultAllocator<32> >*, TArray<ULevelStreaming*, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetWorldSublevels(UObject*)", result, WorldContextObject); }
	static FString* GetTwoLetterISOLanguageName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetTwoLetterISOLanguageName()", result); }
	static FPrimalPlayerCharacterConfigStructReplicated* MakePlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStructReplicated* result, bool bIsFemale, class TArray<FLinearColor, TSizedDefaultAllocator<32> >* BodyColors, class FString* PlayerCharacterName, class TArray<float, TSizedDefaultAllocator<32> >* RawBoneModifiers, int PlayerSpawnRegionIndex, unsigned char HeadHairIndex, unsigned char FacialHairIndex, float PercentOfFullHeadHairGrowth, float PercentOfFullFacialHairGrowth, class TArray<unsigned char, TSizedDefaultAllocator<32> >* OverrideHeadHairColor, class TArray<unsigned char, TSizedDefaultAllocator<32> >* OverrideFacialHairColor, class TArray<unsigned char, TSizedDefaultAllocator<32> >* DynamicMaterialBytes, int PlayerVoiceCollectionIndex, bool bUsingCustomPlayerVoiceCollection) { return NativeCall<FPrimalPlayerCharacterConfigStructReplicated*, FPrimalPlayerCharacterConfigStructReplicated*, bool, class TArray<FLinearColor, TSizedDefaultAllocator<32> >*, class FString*, class TArray<float, TSizedDefaultAllocator<32> >*, int, unsigned char, unsigned char, float, float, class TArray<unsigned char, TSizedDefaultAllocator<32> >*, class TArray<unsigned char, TSizedDefaultAllocator<32> >*, class TArray<unsigned char, TSizedDefaultAllocator<32> >*, int, bool>(nullptr, "UVictoryCore.MakePlayerCharacterConfigStructReplicated(bool,TArray<FLinearColor,TSizedDefaultAllocator<32>>,FString,TArray<float,TSizedDefaultAllocator<32>>,int,unsignedchar,unsignedchar,float,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,int,bool)", result, bIsFemale, BodyColors, PlayerCharacterName, RawBoneModifiers, PlayerSpawnRegionIndex, HeadHairIndex, FacialHairIndex, PercentOfFullHeadHairGrowth, PercentOfFullFacialHairGrowth, OverrideHeadHairColor, OverrideFacialHairColor, DynamicMaterialBytes, PlayerVoiceCollectionIndex, bUsingCustomPlayerVoiceCollection); }
	static void DrawDebugCapsule(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* CapsuleTop, const struct UE::Math::TVector<double>* CapsuleBottom, float Radius, const struct FColor* Color, bool bPersistentLines, float LifeTime, unsigned char DepthPriority) { NativeCall<void, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, float, const struct FColor*, bool, float, unsigned char>(nullptr, "UVictoryCore.DrawDebugCapsule(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,FColor&,bool,float,unsignedchar)", WorldContextObject, CapsuleTop, CapsuleBottom, Radius, Color, bPersistentLines, LifeTime, DepthPriority); }
	static void SortPointsForOptimalRoute(class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* PointsToVisit, class TArray<int, TSizedDefaultAllocator<32> >* OriginalIndices) { NativeCall<void, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, class TArray<int, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortPointsForOptimalRoute(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", PointsToVisit, OriginalIndices); }
	static AShooterCharacter* GetShooterCharacterFromPawn(struct APawn* Pawn) { return NativeCall<AShooterCharacter*, struct APawn*>(nullptr, "UVictoryCore.GetShooterCharacterFromPawn(APawn*)", Pawn); }
	static double GetNetworkTime(struct UWorld* World) { return NativeCall<double, struct UWorld*>(nullptr, "UVictoryCore.GetNetworkTime(UWorld*)", World); }
	static bool CanPlayerCheatSpawnActor(struct APlayerController* player, struct AActor* actor) { return NativeCall<bool, struct APlayerController*, struct AActor*>(nullptr, "UVictoryCore.CanPlayerCheatSpawnActor(APlayerController*,AActor*)", player, actor); }
	static bool StaticIsLocationWithinMap(struct UObject* WorldContextObject, UE::Math::TVector<double>* WorldLocation) { return NativeCall<bool, struct UObject*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.StaticIsLocationWithinMap(UObject*,UE::Math::TVector<double>)", WorldContextObject, WorldLocation); }
	static bool IsInsideOrIntersectsBox(const struct UE::Math::TVector<double>* Origin, const struct UE::Math::TVector<double>* Extents, const struct UShapeComponent* shapeComponent) { return NativeCall<bool, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UShapeComponent*>(nullptr, "UVictoryCore.IsInsideOrIntersectsBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShapeComponent*)", Origin, Extents, shapeComponent); }
	static float GetDistanceToCollision(struct UPrimitiveComponent* comp, UE::Math::TVector<double>* point, struct UE::Math::TVector<double>* closestPoint) { return NativeCall<float, struct UPrimitiveComponent*, UE::Math::TVector<double>*, struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetDistanceToCollision(UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TVector<double>&)", comp, point, closestPoint); }
	static bool ThereIsANonObstructedTraceToTheLocation_VariousChannels(struct UObject* WorldContextObject, UE::Math::TVector<double>* StartingLocation, UE::Math::TVector<double>* DesiredLocation, const class TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, float TraceCapsuleRadius, float TraceCapsuleHalfHeight, bool bDebug, float DebugTraceDuration) { return NativeCall<bool, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, float, float, bool, float>(nullptr, "UVictoryCore.ThereIsANonObstructedTraceToTheLocation_VariousChannels(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,float,bool,float)", WorldContextObject, StartingLocation, DesiredLocation, IgnoreActors, TraceCapsuleRadius, TraceCapsuleHalfHeight, bDebug, DebugTraceDuration); }
	static FString* FuseChunkedFString(FString* result, class TArray<FString, TSizedDefaultAllocator<32> >* InputStringArray) { return NativeCall<FString*, FString*, class TArray<FString, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.FuseChunkedFString(TArray<FString,TSizedDefaultAllocator<32>>)", result, InputStringArray); }
	static bool PlayerOwnsBobsTallTales(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsBobsTallTales(AShooterPlayerController*)", controller); }
	static void ServerSearchFoliage(struct UObject* WorldContextObject, UE::Math::TVector<double>* Origin, float Radius, class TArray<FOverlappedFoliageElement, TSizedDefaultAllocator<32> >* OutFoliage, bool bVisibleAndActiveOnly, bool bIncludeUsableFoliage, bool bIncludeMeshFoliage, bool bSortByDistance, bool bReverseSort) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, float, class TArray<FOverlappedFoliageElement, TSizedDefaultAllocator<32> >*, bool, bool, bool, bool, bool>(nullptr, "UVictoryCore.ServerSearchFoliage(UObject*,UE::Math::TVector<double>,float,TArray<FOverlappedFoliageElement,TSizedDefaultAllocator<32>>&,bool,bool,bool,bool,bool)", WorldContextObject, Origin, Radius, OutFoliage, bVisibleAndActiveOnly, bIncludeUsableFoliage, bIncludeMeshFoliage, bSortByDistance, bReverseSort); }
	static float TimeSince_Utc(double OldTime) { return NativeCall<float, double>(nullptr, "UVictoryCore.TimeSince_Utc(double)", OldTime); }
	static void ReupdateCaptures(struct UObject* WorldContextObject, bool bReinitSkylights) { NativeCall<void, struct UObject*, bool>(nullptr, "UVictoryCore.ReupdateCaptures(UObject*,bool)", WorldContextObject, bReinitSkylights); }
	static void PlayCompanionReactionOnSolePlayer(struct APrimalCharacter* PlayerWhoGetReaction, struct FCompanionReactionData* ReactionData, bool ForcePlayNow, struct UMaterialInterface* OverrideDialogueIcon, bool RestrictedEnvironmentalReaction, int UniqueID) { NativeCall<void, struct APrimalCharacter*, struct FCompanionReactionData*, bool, struct UMaterialInterface*, bool, int>(nullptr, "UVictoryCore.PlayCompanionReactionOnSolePlayer(APrimalCharacter*,FCompanionReactionData&,bool,UMaterialInterface*,bool,int)", PlayerWhoGetReaction, ReactionData, ForcePlayNow, OverrideDialogueIcon, RestrictedEnvironmentalReaction, UniqueID); }
	static bool KillTargetCharacterOrStructure(struct AActor* ActorToKill, struct AActor* DamageCauser, bool bTryDestroyActor) { return NativeCall<bool, struct AActor*, struct AActor*, bool>(nullptr, "UVictoryCore.KillTargetCharacterOrStructure(AActor*,AActor*,bool)", ActorToKill, DamageCauser, bTryDestroyActor); }
	static void AddTaggedActor_WithSpecifiedTag(struct AActor* ActorToAdd, FName Tag) { NativeCall<void, struct AActor*, FName>(nullptr, "UVictoryCore.AddTaggedActor_WithSpecifiedTag(AActor*,FName)", ActorToAdd, Tag); }
	static bool IsInsideBox(const struct UE::Math::TVector<double>* Origin, const struct UE::Math::TVector<double>* Extents, const struct UShapeComponent* shapeComponent) { return NativeCall<bool, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UShapeComponent*>(nullptr, "UVictoryCore.IsInsideBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShapeComponent*)", Origin, Extents, shapeComponent); }
	static bool IsModPremium(long ModID) { return NativeCall<bool, long>(nullptr, "UVictoryCore.IsModPremium(__int64)", ModID); }
	static UE::Math::TRotator<double>* NormalizeRotator(UE::Math::TRotator<double>* result, UE::Math::TRotator<double>* InRotator) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(nullptr, "UVictoryCore.NormalizeRotator(UE::Math::TRotator<double>)", result, InRotator); }
	static void RemoveTaggedActor_WithSpecifiedTag(struct AActor* ActorToAdd, FName Tag) { NativeCall<void, struct AActor*, FName>(nullptr, "UVictoryCore.RemoveTaggedActor_WithSpecifiedTag(AActor*,FName)", ActorToAdd, Tag); }
	static bool GetCharacterCapsuleSize(struct TSubclassOf<APrimalCharacter>* CharClass, float* OutCapsuleRadius, float* OutCapsuleHalfHeight) { return NativeCall<bool, struct TSubclassOf<APrimalCharacter>*, float*, float*>(nullptr, "UVictoryCore.GetCharacterCapsuleSize(TSubclassOf<APrimalCharacter>,float&,float&)", CharClass, OutCapsuleRadius, OutCapsuleHalfHeight); }
	static TArray<FString, TSizedDefaultAllocator<32> >* GetDLCDependenciesForMods(TArray<FString, TSizedDefaultAllocator<32> >* result, class TArray<__int64, TSizedDefaultAllocator<32> >* ForModIDs) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*, class TArray<__int64, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetDLCDependenciesForMods(TArray<__int64,TSizedDefaultAllocator<32>>)", result, ForModIDs); }
	static bool GetGroundLocation(struct UObject* WorldContextObject, struct UE::Math::TVector<double>* theGroundLoc, const struct UE::Math::TVector<double>* StartLoc, const struct UE::Math::TVector<double>* OffsetUp, const struct UE::Math::TVector<double>* OffsetDown, bool bUseDualTrace, bool IgnoreBasableCharacters) { return NativeCall<bool, struct UObject*, struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, bool, bool>(nullptr, "UVictoryCore.GetGroundLocation(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,bool)", WorldContextObject, theGroundLoc, StartLoc, OffsetUp, OffsetDown, bUseDualTrace, IgnoreBasableCharacters); }
	static UE::Math::TVector<double>* Helix(UE::Math::TVector<double>* result, float Radius, float Time) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, float>(nullptr, "UVictoryCore.Helix(float,float)", result, Radius, Time); }
	static bool OverlappingActorsBP(struct UObject* WorldContextObject, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >* Overlaps, UE::Math::TVector<double>* Origin, float Radius, int CollisionGroups, struct AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, struct UObject*, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, float, int, struct AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingActorsBP(UObject*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,int,AActor*,FName,bool)", WorldContextObject, Overlaps, Origin, Radius, CollisionGroups, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetSelectedLevelActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetSelectedLevelActors()", result); }
	static UWorld* GetPrimaryWorld() { return NativeCall<UWorld*>(nullptr, "UVictoryCore.GetPrimaryWorld()"); }
	static UE::Math::TRotator<double>* BPRTransformInverse(UE::Math::TRotator<double>* result, const struct UE::Math::TRotator<double>* R, const struct UE::Math::TRotator<double>* RBasis) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*>(nullptr, "UVictoryCore.BPRTransformInverse(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", result, R, RBasis); }
	static APrimalStructure* SpawnSaddleAttachedStructure(struct APrimalDinoCharacter* ParentDino, struct TSubclassOf<APrimalStructure>* StructureToSpawn, UE::Math::TVector<double>* Location, UE::Math::TRotator<double>* Rotation, struct APrimalStructure* ParentStructure, bool bLinkToParent, int ConfigIndex, FName SKAttachmentSocketOrBoneName, bool bSnapToTargetBone) { return NativeCall<APrimalStructure*, struct APrimalDinoCharacter*, struct TSubclassOf<APrimalStructure>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, struct APrimalStructure*, bool, int, FName, bool>(nullptr, "UVictoryCore.SpawnSaddleAttachedStructure(APrimalDinoCharacter*,TSubclassOf<APrimalStructure>,UE::Math::TVector<double>,UE::Math::TRotator<double>,APrimalStructure*,bool,int,FName,bool)", ParentDino, StructureToSpawn, Location, Rotation, ParentStructure, bLinkToParent, ConfigIndex, SKAttachmentSocketOrBoneName, bSnapToTargetBone); }
	static void BoxFromOriginAndExtent(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* Extent, struct UE::Math::TVector<double>* OutBoxMin, struct UE::Math::TVector<double>* OutBoxMax) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct UE::Math::TVector<double>*, struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.BoxFromOriginAndExtent(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Origin, Extent, OutBoxMin, OutBoxMax); }
	static UE::Math::TVector<double>* SimpleCurveInterpClampedVector(UE::Math::TVector<double>* result, UE::Math::TVector<double>* A, UE::Math::TVector<double>* B, float Alpha, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveInterpClampedVector(UE::Math::TVector<double>,UE::Math::TVector<double>,float,TEnumAsByte<ESimpleCurve::Type>)", result, A, B, Alpha, CurveType); }
	static bool IsLinuxOrMacBuild() { return NativeCall<bool>(nullptr, "UVictoryCore.IsLinuxOrMacBuild()"); }
	static UObject* GetDefaultObject(struct UObject* FromObjectInstance) { return NativeCall<UObject*, struct UObject*>(nullptr, "UVictoryCore.GetDefaultObject(UObject*)", FromObjectInstance); }
	static bool IsRunningTotalConversion() { return NativeCall<bool>(nullptr, "UVictoryCore.IsRunningTotalConversion()"); }
	static void GetAllNumbers(struct APlayerController* MyPC) { NativeCall<void, struct APlayerController*>(nullptr, "UVictoryCore.GetAllNumbers(APlayerController*)", MyPC); }
	static FVector_NetQuantizeNormal* Conv_VectorToVectorNetQuantizeNormal(FVector_NetQuantizeNormal* result, UE::Math::TVector<double>* InVector) { return NativeCall<FVector_NetQuantizeNormal*, FVector_NetQuantizeNormal*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.Conv_VectorToVectorNetQuantizeNormal(UE::Math::TVector<double>)", result, InVector); }
	static float GetProjectileArcPeakTime(struct UObject* WorldContextObject, const struct FProjectileArc* Arc) { return NativeCall<float, struct UObject*, const struct FProjectileArc*>(nullptr, "UVictoryCore.GetProjectileArcPeakTime(UObject*,FProjectileArc&)", WorldContextObject, Arc); }
	static EPlayerHeatMapHeatLevel::Level GetPlayerHeatLevelForCharacter(const struct APrimalCharacter* character) { return NativeCall<EPlayerHeatMapHeatLevel::Level, const struct APrimalCharacter*>(nullptr, "UVictoryCore.GetPlayerHeatLevelForCharacter(APrimalCharacter*)", character); }
	static void DebugDrawProjectileArc(struct UObject* WorldContextObject, const struct FProjectileArc* Arc, float MaxArcTime, float ArcTimeStep, FLinearColor* LineColor, float LineThickness, float DebugDrawDuration) { NativeCall<void, struct UObject*, const struct FProjectileArc*, float, float, FLinearColor*, float, float>(nullptr, "UVictoryCore.DebugDrawProjectileArc(UObject*,FProjectileArc&,float,float,FLinearColor,float,float)", WorldContextObject, Arc, MaxArcTime, ArcTimeStep, LineColor, LineThickness, DebugDrawDuration); }
	static void AdjustScreenPositionWithScreenDPI(struct UObject* WorldContextObject, struct UE::Math::TVector2<double>* ScreenPosition) { NativeCall<void, struct UObject*, struct UE::Math::TVector2<double>*>(nullptr, "UVictoryCore.AdjustScreenPositionWithScreenDPI(UObject*,UE::Math::TVector2<double>&)", WorldContextObject, ScreenPosition); }
	static float SimpleCurveInterpClamped(float A, float B, float Alpha, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveInterpClamped(float,float,float,TEnumAsByte<ESimpleCurve::Type>)", A, B, Alpha, CurveType); }
	static __int64 CreateWebSocket(class FString* ServerURL, class FString* ServerProtocol, const class TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >* UpgradeHeaders, bool bAuditEverySentMessage, struct UObject* Caller) { return NativeCall<__int64, class FString*, class FString*, const class TMap<FString, FString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FString, 0> >*, bool, struct UObject*>(nullptr, "UVictoryCore.CreateWebSocket(FString,FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&,bool,UObject*)", ServerURL, ServerProtocol, UpgradeHeaders, bAuditEverySentMessage, Caller); }
	static UObject* GetClassDefaultObjectFromAsset(const struct FAssetData* ForAsset) { return NativeCall<UObject*, const struct FAssetData*>(nullptr, "UVictoryCore.GetClassDefaultObjectFromAsset(FAssetData&)", ForAsset); }
	static void SetAnimBPBlinkBlend(struct UAnimInstance* ForAnimInstance, float BlinkBlend) { NativeCall<void, struct UAnimInstance*, float>(nullptr, "UVictoryCore.SetAnimBPBlinkBlend(UAnimInstance*,float)", ForAnimInstance, BlinkBlend); }
	static UE::Math::TVector<double>* ProjectScreenLocationIntoWorld(UE::Math::TVector<double>* result, struct APlayerController* ForPC, UE::Math::TVector2<double>* ScreenLocation, float ProjectionDist) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct APlayerController*, UE::Math::TVector2<double>*, float>(nullptr, "UVictoryCore.ProjectScreenLocationIntoWorld(APlayerController*,UE::Math::TVector2<double>,float)", result, ForPC, ScreenLocation, ProjectionDist); }
	static void SetAnimBPMovementMode(struct UAnimInstance* ForAnimInstance, int MovementMode) { NativeCall<void, struct UAnimInstance*, int>(nullptr, "UVictoryCore.SetAnimBPMovementMode(UAnimInstance*,int)", ForAnimInstance, MovementMode); }
	static AActor* GetActorFromOverlapResult(const struct FOverlapResult* overlapResult) { return NativeCall<AActor*, const struct FOverlapResult*>(nullptr, "UVictoryCore.GetActorFromOverlapResult(FOverlapResult&)", overlapResult); }
	static bool IsAudioComponentFadingOut(struct UAudioComponent* AudioComponent) { return NativeCall<bool, struct UAudioComponent*>(nullptr, "UVictoryCore.IsAudioComponentFadingOut(UAudioComponent*)", AudioComponent); }
	static AActor* GetClosestActorArray(UE::Math::TVector<double>* ToPoint, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorArray) { return NativeCall<AActor*, UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetClosestActorArray(UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", ToPoint, ActorArray); }
	static bool IsMissionActiveAnywhere(struct TSubclassOf<AMissionType>* MissionType) { return NativeCall<bool, struct TSubclassOf<AMissionType>*>(nullptr, "UVictoryCore.IsMissionActiveAnywhere(TSubclassOf<AMissionType>)", MissionType); }
	static void MultiLinePenetrationTraceByChannel(struct UObject* WorldContextObject, class TArray<FPenetrationTraceHit, TSizedDefaultAllocator<32> >* OutResults, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, bool bTraceComplex, bool bIgnoreSelf, bool bDrawDebugLines, float DebugDrawDuration) { NativeCall<void, struct UObject*, class TArray<FPenetrationTraceHit, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, ECollisionChannel, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, bool, bool, float>(nullptr, "UVictoryCore.MultiLinePenetrationTraceByChannel(UObject*,TArray<FPenetrationTraceHit,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,bool,bool,float)", WorldContextObject, OutResults, Start, End, TraceChannel, ActorsToIgnore, bTraceComplex, bIgnoreSelf, bDrawDebugLines, DebugDrawDuration); }
	static void ExitToModLocalMainMenu() { NativeCall<void>(nullptr, "UVictoryCore.ExitToModLocalMainMenu()"); }
	static FString* GetHumanReadableDateTime(FString* result, const struct FDateTime* DateTime) { return NativeCall<FString*, FString*, const struct FDateTime*>(nullptr, "UVictoryCore.GetHumanReadableDateTime(FDateTime&)", result, DateTime); }
	static float MapRangeToCurveClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, float, float, float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.MapRangeToCurveClamped(float,float,float,float,float,TEnumAsByte<ESimpleCurve::Type>)", Value, InRangeA, InRangeB, OutRangeA, OutRangeB, CurveType); }
	static bool CanTeleport(struct APrimalDinoCharacter* target) { return NativeCall<bool, struct APrimalDinoCharacter*>(nullptr, "UVictoryCore.CanTeleport(APrimalDinoCharacter*)", target); }
	static UClass* TryGetActorClassFromIncompletePath(const class FString* blueprintPath) { return NativeCall<UClass*, const class FString*>(nullptr, "UVictoryCore.TryGetActorClassFromIncompletePath(FString&)", blueprintPath); }
	static void GetBestHitInfoFromDamageEvent(const struct FDamageEvent* damageEvent, struct FHitResult* OutHitInfo, struct UE::Math::TVector<double>* OutImpulseDir) { NativeCall<void, const struct FDamageEvent*, struct FHitResult*, struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetBestHitInfoFromDamageEvent(FDamageEvent&,FHitResult&,UE::Math::TVector<double>&)", damageEvent, OutHitInfo, OutImpulseDir); }
	static bool GetRandomWeightedDinoSetup(const class TArray<FDinoSetup, TSizedDefaultAllocator<32> >* DinoSetupEntries, struct FDinoSetup* OutDinoSetup) { return NativeCall<bool, const class TArray<FDinoSetup, TSizedDefaultAllocator<32> >*, struct FDinoSetup*>(nullptr, "UVictoryCore.GetRandomWeightedDinoSetup(TArray<FDinoSetup,TSizedDefaultAllocator<32>>&,FDinoSetup&)", DinoSetupEntries, OutDinoSetup); }
	static APrimalDinoCharacter* SpawnCustomDino(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* SpawnLocation, const struct UE::Math::TRotator<double>* SpawnRotation, const struct FDinoSetup* DinoSetup, struct AShooterPlayerController* OwnerPlayerController, float DebugDrawDuration, bool bApplyRotationToSpawnOffset, bool bUseExactSpawnLocation, bool bSkipAddingTamedLevels, bool bSuppressTamingNotifications, struct AMissionType* mission, struct TSubclassOf<UPrimalColorSet>* ColorSet) { return NativeCall<APrimalDinoCharacter*, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TRotator<double>*, const struct FDinoSetup*, struct AShooterPlayerController*, float, bool, bool, bool, bool, struct AMissionType*, struct TSubclassOf<UPrimalColorSet>*>(nullptr, "UVictoryCore.SpawnCustomDino(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FDinoSetup&,AShooterPlayerController*,float,bool,bool,bool,bool,AMissionType*,TSubclassOf<UPrimalColorSet>)", WorldContextObject, SpawnLocation, SpawnRotation, DinoSetup, OwnerPlayerController, DebugDrawDuration, bApplyRotationToSpawnOffset, bUseExactSpawnLocation, bSkipAddingTamedLevels, bSuppressTamingNotifications, mission, ColorSet); }
	static void FinishSpawning(struct AActor* Actor) { NativeCall<void, struct AActor*>(nullptr, "UVictoryCore.FinishSpawning(AActor*)", Actor); }
	static bool BPVTrace(struct UWorld* theWorld, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, struct FHitResult* HitOut, bool* HasHitNonMovableComponent, const struct AActor* ActorToIgnore, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, const struct UE::Math::TVector<double>* BoxExtent, FName TraceTag, const struct AActor* OtherActorToIgnore, const struct UE::Math::TRotator<double>* Rot, const struct AActor* AnotherActorToIgnore) { return NativeCall<bool, struct UWorld*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct FHitResult*, bool*, const struct AActor*, ECollisionChannel, int, bool, bool, const struct UE::Math::TVector<double>*, FName, const struct AActor*, const struct UE::Math::TRotator<double>*, const struct AActor*>(nullptr, "UVictoryCore.BPVTrace(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,bool&,AActor*,ECollisionChannel,int,bool,bool,UE::Math::TVector<double>&,FName,AActor*,UE::Math::TRotator<double>&,AActor*)", theWorld, Start, End, HitOut, HasHitNonMovableComponent, ActorToIgnore, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, OtherActorToIgnore, Rot, AnotherActorToIgnore); }
	static TArray<FString, TSizedDefaultAllocator<32> >* ChunkFStringIntoArray(TArray<FString, TSizedDefaultAllocator<32> >* result, class FString* InputString, int ChunkSize) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*, class FString*, int>(nullptr, "UVictoryCore.ChunkFStringIntoArray(FString,int)", result, InputString, ChunkSize); }
	static bool PlayerOwnsGenesisSeasonPassServer(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsGenesisSeasonPassServer(AShooterPlayerController*)", controller); }
	static bool IsValidItemForGrinding(const struct UPrimalItem* item, const struct UPrimalInventoryComponent* inventory) { return NativeCall<bool, const struct UPrimalItem*, const struct UPrimalInventoryComponent*>(nullptr, "UVictoryCore.IsValidItemForGrinding(UPrimalItem*,UPrimalInventoryComponent*)", item, inventory); }
	static bool GetSkillModifierByName(const struct FPrimalSkill* ForSkill, struct FItemTraitModifier* OutModifier, FName ModifierName, int Rank) { return NativeCall<bool, const struct FPrimalSkill*, struct FItemTraitModifier*, FName, int>(nullptr, "UVictoryCore.GetSkillModifierByName(FPrimalSkill&,FItemTraitModifier&,FName,int)", ForSkill, OutModifier, ModifierName, Rank); }
	static bool IsNonHostPlayer(struct UObject* WorldContextObject, struct AController* playerController) { return NativeCall<bool, struct UObject*, struct AController*>(nullptr, "UVictoryCore.IsNonHostPlayer(UObject*,AController*)", WorldContextObject, playerController); }
	static bool BPIsDinoIDEqual(int FirstDinoID1, int FirstDinoID2, int SecondDinoID1, int SecondDinoID2) { return NativeCall<bool, int, int, int, int>(nullptr, "UVictoryCore.BPIsDinoIDEqual(int,int,int,int)", FirstDinoID1, FirstDinoID2, SecondDinoID1, SecondDinoID2); }
	static FDateTime UnixToDateTime(const long* UnixTime) { return NativeCall<FDateTime, const long*>(nullptr, "UVictoryCore.UnixToDateTime(__int64&)", UnixTime); }
	static void AddFluidCapsuleInteractionEffect(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* ExtraCapsuleLocation, float Radius, UE::Math::TVector<double>* Velocity, bool bSplash, bool bRipple, struct UNiagaraSystem* FluidSimSplashTemplateOverride, bool PlaySplashSound, UE::Math::TVector<double>* SplashLocation, float SplashRadius) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, bool, bool, struct UNiagaraSystem*, bool, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.AddFluidCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector<double>,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", WorldContextObject, Location, ExtraCapsuleLocation, Radius, Velocity, bSplash, bRipple, FluidSimSplashTemplateOverride, PlaySplashSound, SplashLocation, SplashRadius); }
	static void UnRegisterComponentBP(struct UActorComponent* component) { NativeCall<void, struct UActorComponent*>(nullptr, "UVictoryCore.UnRegisterComponentBP(UActorComponent*)", component); }
	static UObject* VNewObjectFromBlueprintOuter(struct UObject* OuterObject, struct UClass* classToUse) { return NativeCall<UObject*, struct UObject*, struct UClass*>(nullptr, "UVictoryCore.VNewObjectFromBlueprintOuter(UObject*,UClass*)", OuterObject, classToUse); }
	static void ServerSearchFoliageByResource(struct UObject* WorldContextObject, UE::Math::TVector<double>* Origin, float Radius, class TArray<FOverlappedFoliageElement, TSizedDefaultAllocator<32> >* OutFoliage, const class TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >* HarvestResources, bool bVisibleAndActiveOnly, bool bIncludeUsableFoliage, bool bIncludeMeshFoliage, bool bSortByDistance, bool bReverseSort) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, float, class TArray<FOverlappedFoliageElement, TSizedDefaultAllocator<32> >*, const class TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*, bool, bool, bool, bool, bool>(nullptr, "UVictoryCore.ServerSearchFoliageByResource(UObject*,UE::Math::TVector<double>,float,TArray<FOverlappedFoliageElement,TSizedDefaultAllocator<32>>&,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&,bool,bool,bool,bool,bool)", WorldContextObject, Origin, Radius, OutFoliage, HarvestResources, bVisibleAndActiveOnly, bIncludeUsableFoliage, bIncludeMeshFoliage, bSortByDistance, bReverseSort); }
	static void OnInitDLCChecksComplete(bool bWasSuccessful, const class TArray<FString, TSizedDefaultAllocator<32> >* OfferIds, const class FString* Error) { NativeCall<void, bool, const class TArray<FString, TSizedDefaultAllocator<32> >*, const class FString*>(nullptr, "UVictoryCore.OnInitDLCChecksComplete(bool,TArray<FString,TSizedDefaultAllocator<32>>&,FString&)", bWasSuccessful, OfferIds, Error); }
	static UE::Math::TVector<double>* SelectCloserVector(UE::Math::TVector<double>* result, UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* A, UE::Math::TVector<double>* B, bool* OutPickedA) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool*>(nullptr, "UVictoryCore.SelectCloserVector(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,bool&)", result, Origin, A, B, OutPickedA); }
	static FPrimalSkill& BPGetSkillData(const class FName* ForSkill) { return NativeCall<FPrimalSkill&, const class FName*>(nullptr, "UVictoryCore.BPGetSkillData(FName&)", ForSkill); }
	static UE::Math::TVector<double>* ProjectVectorOntoInsideOfSphere(UE::Math::TVector<double>* result, const struct UE::Math::TVector<double>* ProjectVector, const struct UE::Math::TVector<double>* ProjectVectorLocation, const struct UE::Math::TVector<double>* SphereOrigin, bool bOnlyProjectIfVectorIsLeavingSphere) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, bool>(nullptr, "UVictoryCore.ProjectVectorOntoInsideOfSphere(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", result, ProjectVector, ProjectVectorLocation, SphereOrigin, bOnlyProjectIfVectorIsLeavingSphere); }
	static bool PlayerStateOwnsShoulderDragon(struct AShooterPlayerState* playerState) { return NativeCall<bool, struct AShooterPlayerState*>(nullptr, "UVictoryCore.PlayerStateOwnsShoulderDragon(AShooterPlayerState*)", playerState); }
	static UE::Math::TVector2<double>* StaticGetMinimapLocation(UE::Math::TVector2<double>* result, struct UObject* WorldContextObject, UE::Math::TVector<double>* WorldLocation) { return NativeCall<UE::Math::TVector2<double>*, UE::Math::TVector2<double>*, struct UObject*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.StaticGetMinimapLocation(UObject*,UE::Math::TVector<double>)", result, WorldContextObject, WorldLocation); }
	static float GetSimpleMontageDuration(struct UAnimMontage* GivenMontage, float GivenPlayRate) { return NativeCall<float, struct UAnimMontage*, float>(nullptr, "UVictoryCore.GetSimpleMontageDuration(UAnimMontage*,float)", GivenMontage, GivenPlayRate); }
	static UE::Math::TRotator<double>* ConvertRotatorFromWorldToLocal(UE::Math::TRotator<double>* result, const struct UE::Math::TRotator<double>* ConvertRot, const struct UE::Math::TRotator<double>* ToParentRotation) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*, const struct UE::Math::TRotator<double>*>(nullptr, "UVictoryCore.ConvertRotatorFromWorldToLocal(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", result, ConvertRot, ToParentRotation); }
	static float BPGetBiomeWind(struct ABiomeZoneVolume* BiomeZoneVolume, float GlobalWind) { return NativeCall<float, struct ABiomeZoneVolume*, float>(nullptr, "UVictoryCore.BPGetBiomeWind(ABiomeZoneVolume*,float)", BiomeZoneVolume, GlobalWind); }
	static FString* FormatAsTimeLong(FString* result, int InTime) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.FormatAsTimeLong(int)", result, InTime); }
	static void VisualLog_Location(struct AActor* Actor, class FString* Message, bool bIsError, UE::Math::TVector<double>* Location, FLinearColor* Color, float Size, bool bAlsoPrintMessage) { NativeCall<void, struct AActor*, class FString*, bool, UE::Math::TVector<double>*, FLinearColor*, float, bool>(nullptr, "UVictoryCore.VisualLog_Location(AActor*,FString,bool,UE::Math::TVector<double>,FLinearColor,float,bool)", Actor, Message, bIsError, Location, Color, Size, bAlsoPrintMessage); }
	static TArray<FAvailableMission, TSizedDefaultAllocator<32> >* GetAllAvailableMissions(TArray<FAvailableMission, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<FAvailableMission, TSizedDefaultAllocator<32> >*, TArray<FAvailableMission, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllAvailableMissions(UObject*)", result, WorldContextObject); }
	static bool BPSweepComponent(struct UPrimitiveComponent* Component, struct FHitResult* OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, float Radius, float HalfHeight, UE::Math::TVector<double>* Extent, bool bTraceComplex) { return NativeCall<bool, struct UPrimitiveComponent*, struct FHitResult*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, float, UE::Math::TVector<double>*, bool>(nullptr, "UVictoryCore.BPSweepComponent(UPrimitiveComponent*,FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,UE::Math::TVector<double>,bool)", Component, OutHit, Start, End, Radius, HalfHeight, Extent, bTraceComplex); }
	static int GetEditorBuildRevision() { return NativeCall<int>(nullptr, "UVictoryCore.GetEditorBuildRevision()"); }
	static FName GetObjectFName(struct UObject* ForObject) { return NativeCall<FName, struct UObject*>(nullptr, "UVictoryCore.GetObjectFName(UObject*)", ForObject); }
	static bool SphereOverlapFast(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Loc, float Radius) { return NativeCall<bool, struct UObject*, const struct UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.SphereOverlapFast(UObject*,UE::Math::TVector<double>&,float)", WorldContextObject, Loc, Radius); }
	static void AddLocalPlayer(int ControllerId) { NativeCall<void, int>(nullptr, "UVictoryCore.AddLocalPlayer(int)", ControllerId); }
	static bool NetIDHashOwnsDLC(const struct UObject* WorldContextObject, unsigned int OwnerHashedUniqueID, const class FString* DLCName, bool CheckOffline) { return NativeCall<bool, const struct UObject*, unsigned int, const class FString*, bool>(nullptr, "UVictoryCore.NetIDHashOwnsDLC(UObject*,unsignedint,FString&,bool)", WorldContextObject, OwnerHashedUniqueID, DLCName, CheckOffline); }
	static bool CanPlayerCheatSpawnClass(struct APlayerController* player, struct UClass* spawnClass) { return NativeCall<bool, struct APlayerController*, struct UClass*>(nullptr, "UVictoryCore.CanPlayerCheatSpawnClass(APlayerController*,UClass*)", player, spawnClass); }
	static bool NetIDHashOwnsShoulderDragon(const struct UObject* WorldContextObject, unsigned int OwnerHashedUniqueID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, unsigned int, bool>(nullptr, "UVictoryCore.NetIDHashOwnsShoulderDragon(UObject*,unsignedint,bool)", WorldContextObject, OwnerHashedUniqueID, CheckOffline); }
	static void DestroyExplorerNoteSubtitlesOnWidget(struct UBorder* BorderWidgeet) { NativeCall<void, struct UBorder*>(nullptr, "UVictoryCore.DestroyExplorerNoteSubtitlesOnWidget(UBorder*)", BorderWidgeet); }
	static bool HasPlayerSeenGen2Intro(struct UObject* WorldContextObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.HasPlayerSeenGen2Intro(UObject*)", WorldContextObject); }
	static UAnimSequence* GetNearestAnimSequenceFromBlendSpace(UE::Math::TVector<double>* BlendSpaceInput, struct UBlendSpace* BlendSpace) { return NativeCall<UAnimSequence*, UE::Math::TVector<double>*, struct UBlendSpace*>(nullptr, "UVictoryCore.GetNearestAnimSequenceFromBlendSpace(UE::Math::TVector<double>,UBlendSpace*)", BlendSpaceInput, BlendSpace); }
	static bool EnsureNumericAndChars(class FString* text, int maxChars, bool bAllowSpace) { return NativeCall<bool, class FString*, int, bool>(nullptr, "UVictoryCore.EnsureNumericAndChars(FString&,int,bool)", text, maxChars, bAllowSpace); }
	static FPrimalPlayerCharacterConfigStructReplicated* ConvertPlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStructReplicated* result, struct FPrimalPlayerCharacterConfigStruct* Structdata) { return NativeCall<FPrimalPlayerCharacterConfigStructReplicated*, FPrimalPlayerCharacterConfigStructReplicated*, struct FPrimalPlayerCharacterConfigStruct*>(nullptr, "UVictoryCore.ConvertPlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStruct)", result, Structdata); }
	static bool OwnsCrystalIsles() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsCrystalIsles()"); }
	static bool IsTimeSince_Network(struct UObject* WorldContextObject, double OldTime, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, struct UObject*, double, float, bool>(nullptr, "UVictoryCore.IsTimeSince_Network(UObject*,double,float,bool)", WorldContextObject, OldTime, CheckTimeSince, bForceTrueAtZeroTime); }
	static AActor* GetNearestAlliedDinoElsePlayer(struct UObject* WorldContextObject, int TargetingTeam, const struct UE::Math::TVector<double>* location, class TArray<AActor*, TSizedDefaultAllocator<32> >* ignoreActors) { return NativeCall<AActor*, struct UObject*, int, const struct UE::Math::TVector<double>*, class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetNearestAlliedDinoElsePlayer(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>)", WorldContextObject, TargetingTeam, location, ignoreActors); }
	static FString* FormatAsTime(FString* result, int InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds) { return NativeCall<FString*, FString*, int, bool, bool, bool>(nullptr, "UVictoryCore.FormatAsTime(int,bool,bool,bool)", result, InTime, UseLeadingZero, bForceLeadingZeroHour, bShowSeconds); }
	static float CooldownTimeRemaining(struct UObject* WorldContextObject, double CooldownClock, float CooldownDuration) { return NativeCall<float, struct UObject*, double, float>(nullptr, "UVictoryCore.CooldownTimeRemaining(UObject*,double,float)", WorldContextObject, CooldownClock, CooldownDuration); }
	static void PauseTimer(struct UObject* Object, class FString* FunctionName) { NativeCall<void, struct UObject*, class FString*>(nullptr, "UVictoryCore.PauseTimer(UObject*,FString)", Object, FunctionName); }
	static bool SplineLineTrace(struct USplineComponent* SplineComponent, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, class TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, int NumTracesPerSegment, ECollisionChannel Channel, bool bStopOnBlockingHit, float DebugDrawDuration) { return NativeCall<bool, struct USplineComponent*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, class TArray<FHitResult, TSizedDefaultAllocator<32> >*, int, ECollisionChannel, bool, float>(nullptr, "UVictoryCore.SplineLineTrace(USplineComponent*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<FHitResult,TSizedDefaultAllocator<32>>&,int,ECollisionChannel,bool,float)", SplineComponent, ActorsToIgnore, OutHits, NumTracesPerSegment, Channel, bStopOnBlockingHit, DebugDrawDuration); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* SortActorsByDistance(TArray<AActor*, TSizedDefaultAllocator<32> >* result, const struct UE::Math::TVector<double>* fromLoc, const class TArray<AActor*, TSizedDefaultAllocator<32> >* actors) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortActorsByDistance(UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", result, fromLoc, actors); }
	static FString* SimpleReplaceUnicodeWithSupportedAlternatives(FString* result, const class FString* OriginalString) { return NativeCall<FString*, FString*, const class FString*>(nullptr, "UVictoryCore.SimpleReplaceUnicodeWithSupportedAlternatives(FString&)", result, OriginalString); }
	static bool VTraceSphereBP(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, struct FHitResult* HitOut, float Radius, const struct AActor* ActorToIgnore, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FName TraceTag, const struct AActor* OtherActorToIgnore, struct AActor* AnotherActorToIgnore, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct FHitResult*, float, const struct AActor*, ECollisionChannel, int, bool, bool, FName, const struct AActor*, struct AActor*, float>(nullptr, "UVictoryCore.VTraceSphereBP(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,float,AActor*,ECollisionChannel,int,bool,bool,FName,AActor*,AActor*,float)", WorldContextObject, Start, End, HitOut, Radius, ActorToIgnore, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, TraceTag, OtherActorToIgnore, AnotherActorToIgnore, DebugDrawDuration); }
	static FString* GetPlatformName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetPlatformName()", result); }
	static void SortActorsByDistanceInPlace(const struct UE::Math::TVector<double>* FromLoc, class TArray<AActor*, TSizedDefaultAllocator<32> >* Actors) { NativeCall<void, const struct UE::Math::TVector<double>*, class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortActorsByDistanceInPlace(UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", FromLoc, Actors); }
	static void CallGlobalLevelEvent(struct UObject* WorldContextObject, FName EventName) { NativeCall<void, struct UObject*, FName>(nullptr, "UVictoryCore.CallGlobalLevelEvent(UObject*,FName)", WorldContextObject, EventName); }
	static int GetWeightedRandomIndex(const class TArray<float, TSizedDefaultAllocator<32> >* pArray, float ForceRand) { return NativeCall<int, const class TArray<float, TSizedDefaultAllocator<32> >*, float>(nullptr, "UVictoryCore.GetWeightedRandomIndex(TArray<float,TSizedDefaultAllocator<32>>&,float)", pArray, ForceRand); }
	static void SetAllowControllerInputWithCursor(bool bAllow) { NativeCall<void, bool>(nullptr, "UVictoryCore.SetAllowControllerInputWithCursor(bool)", bAllow); }
	static void BPRequestCreateTribe(struct AShooterPlayerState* PlayerState, const class FString* TribeName) { NativeCall<void, struct AShooterPlayerState*, const class FString*>(nullptr, "UVictoryCore.BPRequestCreateTribe(AShooterPlayerState*,FString&)", PlayerState, TribeName); }
	static void GridTraceAroundPoint(struct UObject* WorldContextObject, class TArray<FHitResult, TSizedDefaultAllocator<32> >* OutResults, UE::Math::TVector<double>* Origin, UE::Math::TRotator<double>* GridRotation, class TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, ECollisionChannel CollisionChannel, int NumTracesX, int NumTracesY, float SpacingX, float SpacingY, float ZStartOffset, float ZEndOffset, bool bTraceComplex, bool bDrawDebug, float DebugDrawDuration) { NativeCall<void, struct UObject*, class TArray<FHitResult, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, class TArray<AActor*, TSizedDefaultAllocator<32> >*, ECollisionChannel, int, int, float, float, float, float, bool, bool, float>(nullptr, "UVictoryCore.GridTraceAroundPoint(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,UE::Math::TRotator<double>,TArray<AActor*,TSizedDefaultAllocator<32>>,ECollisionChannel,int,int,float,float,float,float,bool,bool,float)", WorldContextObject, OutResults, Origin, GridRotation, ActorsToIgnore, CollisionChannel, NumTracesX, NumTracesY, SpacingX, SpacingY, ZStartOffset, ZEndOffset, bTraceComplex, bDrawDebug, DebugDrawDuration); }
	static bool FindValidLocationInFrontOfTarget(struct UE::Math::TVector<double>* OutLocation, struct APrimalCharacter* SourceCharacter, struct APrimalCharacter* TargetCharacter, float DistanceMargin, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bFailIfLocationNotOnGround, struct AActor* ActorToIgnore, bool bTraceComplex, float DebugDrawDuration) { return NativeCall<bool, struct UE::Math::TVector<double>*, struct APrimalCharacter*, struct APrimalCharacter*, float, TEnumAsByte<enum ECollisionChannel>, bool, struct AActor*, bool, float>(nullptr, "UVictoryCore.FindValidLocationInFrontOfTarget(UE::Math::TVector<double>&,APrimalCharacter*,APrimalCharacter*,float,TEnumAsByte<ECollisionChannel>,bool,AActor*,bool,float)", OutLocation, SourceCharacter, TargetCharacter, DistanceMargin, CollisionChannel, bFailIfLocationNotOnGround, ActorToIgnore, bTraceComplex, DebugDrawDuration); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* SortActorsByType(TArray<AActor*, TSizedDefaultAllocator<32> >* result, const class TArray<AActor*, TSizedDefaultAllocator<32> >* actors) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortActorsByType(TArray<AActor*,TSizedDefaultAllocator<32>>&)", result, actors); }
	static void MulticastDrawDebugCamera(struct AActor* ReplicatedActor, const struct ACameraActor* CameraActor, FLinearColor* CameraColor, float Duration) { NativeCall<void, struct AActor*, const struct ACameraActor*, FLinearColor*, float>(nullptr, "UVictoryCore.MulticastDrawDebugCamera(AActor*,ACameraActor*,FLinearColor,float)", ReplicatedActor, CameraActor, CameraColor, Duration); }
	static int BPGetWeightedRandomIndex(const class TArray<float, TSizedDefaultAllocator<32> >* pArray, float ForceRand) { return NativeCall<int, const class TArray<float, TSizedDefaultAllocator<32> >*, float>(nullptr, "UVictoryCore.BPGetWeightedRandomIndex(TArray<float,TSizedDefaultAllocator<32>>&,float)", pArray, ForceRand); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllPlayerStarts(TArray<AActor*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllPlayerStarts(UObject*)", result, WorldContextObject); }
	static FLinearColor* SimpleCurveInterpClampedLinearColor(FLinearColor* result, FLinearColor* A, FLinearColor* B, float Alpha, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<FLinearColor*, FLinearColor*, FLinearColor*, FLinearColor*, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveInterpClampedLinearColor(FLinearColor,FLinearColor,float,TEnumAsByte<ESimpleCurve::Type>)", result, A, B, Alpha, CurveType); }
	static void SetAnimBPOffsets(struct UAnimInstance* ForAnimInstance, UE::Math::TVector<double>* RootLocationOffset, UE::Math::TRotator<double>* RootRotationOffset, UE::Math::TTransform<double>* RootOffsetTransform) { NativeCall<void, struct UAnimInstance*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TTransform<double>*>(nullptr, "UVictoryCore.SetAnimBPOffsets(UAnimInstance*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TTransform<double>)", ForAnimInstance, RootLocationOffset, RootRotationOffset, RootOffsetTransform); }
	static bool IsLocationLikelyWithinAnIncorrectlyPlacedWaterVolume(struct UObject* WorldContextObject, UE::Math::TVector<double>* ImpactLocation, UE::Math::TVector<double>* ImpactDirection) { return NativeCall<bool, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.IsLocationLikelyWithinAnIncorrectlyPlacedWaterVolume(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>)", WorldContextObject, ImpactLocation, ImpactDirection); }
	static UE::Math::TPlane<double>* MakePlaneWithPoints(UE::Math::TPlane<double>* result, UE::Math::TVector<double>* A, UE::Math::TVector<double>* B, UE::Math::TVector<double>* C) { return NativeCall<UE::Math::TPlane<double>*, UE::Math::TPlane<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.MakePlaneWithPoints(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)", result, A, B, C); }
	static bool VTraceSingleBP_IgnoreActorsArray(struct UObject* WorldContextObject, struct FHitResult* OutHit, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, const struct AActor* InIgnoreActor, ECollisionChannel TraceChannel, int CollisionGroups, FName TraceTag, bool bReturnPhysMaterial, bool bTraceComplex, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, struct FHitResult*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, const struct AActor*, ECollisionChannel, int, FName, bool, bool, float>(nullptr, "UVictoryCore.VTraceSingleBP_IgnoreActorsArray(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,ECollisionChannel,int,FName,bool,bool,float)", WorldContextObject, OutHit, Start, End, ExtraIgnoreActors, InIgnoreActor, TraceChannel, CollisionGroups, TraceTag, bReturnPhysMaterial, bTraceComplex, DebugDrawDuration); }
	static float BPFLerpFast(float InMin, float InMax, float InPercent) { return NativeCall<float, float, float, float>(nullptr, "UVictoryCore.BPFLerpFast(float,float,float)", InMin, InMax, InPercent); }
	static void ForceDestroyWildDinos(struct UWorld* World) { NativeCall<void, struct UWorld*>(nullptr, "UVictoryCore.ForceDestroyWildDinos(UWorld*const)", World); }
	static bool IsConsoleServerBuild() { return NativeCall<bool>(nullptr, "UVictoryCore.IsConsoleServerBuild()"); }
	static bool OwnsAberration() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsAberration()"); }
	static bool OwnsExtinction() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsExtinction()"); }
	static void MultiTraceProjectSphere(struct UObject* WorldContextObject, class TArray<FHitResult, TSizedDefaultAllocator<32> >* OutResults, const struct UE::Math::TVector<double>* Origin, ECollisionChannel TraceChannel, int HorizResolution, int VertResolution, float StartDistance, float EndDistance, float NorthConeSubtractAngle, float SouthConeSubtractAngle, int PctChanceToTrace, int MaxTraceCount, bool bDrawDebugLines, float DebugDrawDuration, bool bStopOnFirstHit) { NativeCall<void, struct UObject*, class TArray<FHitResult, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, ECollisionChannel, int, int, float, float, float, float, int, int, bool, float, bool>(nullptr, "UVictoryCore.MultiTraceProjectSphere(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,ECollisionChannel,int,int,float,float,float,float,int,int,bool,float,bool)", WorldContextObject, OutResults, Origin, TraceChannel, HorizResolution, VertResolution, StartDistance, EndDistance, NorthConeSubtractAngle, SouthConeSubtractAngle, PctChanceToTrace, MaxTraceCount, bDrawDebugLines, DebugDrawDuration, bStopOnFirstHit); }
	static void GenerateDeathBlendSpacesForDino(struct APrimalDinoCharacter* dino) { NativeCall<void, struct APrimalDinoCharacter*>(nullptr, "UVictoryCore.GenerateDeathBlendSpacesForDino(APrimalDinoCharacter*)", dino); }
	static void BPRequestLeaveTribe(struct AShooterPlayerState* PlayerState) { NativeCall<void, struct AShooterPlayerState*>(nullptr, "UVictoryCore.BPRequestLeaveTribe(AShooterPlayerState*)", PlayerState); }
	static void MulticastDrawDebugBox(struct AActor* ReplicatedActor, UE::Math::TVector<double>* Center, UE::Math::TVector<double>* Extent, FLinearColor* LineColor, UE::Math::TRotator<double>* Rotation, float Duration) { NativeCall<void, struct AActor*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FLinearColor*, UE::Math::TRotator<double>*, float>(nullptr, "UVictoryCore.MulticastDrawDebugBox(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,UE::Math::TRotator<double>,float)", ReplicatedActor, Center, Extent, LineColor, Rotation, Duration); }
	static EPlayerHeatMapHeatLevel::Level GetPlayerUnderwaterHeatLevel(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Location) { return NativeCall<EPlayerHeatMapHeatLevel::Level, struct UObject*, const struct UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetPlayerUnderwaterHeatLevel(UObject*,UE::Math::TVector<double>&)", WorldContextObject, Location); }
	static __int64 HTTPRequestAdvanced(struct UObject* Caller, const struct FBlueprintHTTPRequestData* RequestData) { return NativeCall<__int64, struct UObject*, const struct FBlueprintHTTPRequestData*>(nullptr, "UVictoryCore.HTTPRequestAdvanced(UObject*,FBlueprintHTTPRequestData&)", Caller, RequestData); }
	static void ForceLevelStreamingToBlock(struct UObject* WorldContextObject, float ForTime) { NativeCall<void, struct UObject*, float>(nullptr, "UVictoryCore.ForceLevelStreamingToBlock(UObject*,float)", WorldContextObject, ForTime); }
	static TArray<int, TSizedDefaultAllocator<32> >* GetArrayIndicesSorted_Float(TArray<int, TSizedDefaultAllocator<32> >* result, const class TArray<float, TSizedDefaultAllocator<32> >* Array, bool bSortLowToHigh) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, const class TArray<float, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Float(TArray<float,TSizedDefaultAllocator<32>>&,bool)", result, Array, bSortLowToHigh); }
	static void UTCTimeUntilUnixTime(const long* UnixTime, bool* bTimeHasAlreadyPassed, struct FTimespan* TimeLeft) { NativeCall<void, const long*, bool*, struct FTimespan*>(nullptr, "UVictoryCore.UTCTimeUntilUnixTime(__int64&,bool&,FTimespan&)", UnixTime, bTimeHasAlreadyPassed, TimeLeft); }
	static TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>* GetWeightedBoneNamesForMesh(TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>* result, struct USkeletalMeshComponent* Mesh, bool bIgnoreRoot) { return NativeCall<TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>*, TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>*, struct USkeletalMeshComponent*, bool>(nullptr, "UVictoryCore.GetWeightedBoneNamesForMesh(USkeletalMeshComponent*,bool)", result, Mesh, bIgnoreRoot); }
	static float GetPrimaryCameraLocationDistanceFromPoint(UE::Math::TVector<double>* WorldPoint) { return NativeCall<float, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetPrimaryCameraLocationDistanceFromPoint(UE::Math::TVector<double>)", WorldPoint); }
	static FDateTime SafeUTCNow() { return NativeCall<FDateTime>(nullptr, "UVictoryCore.SafeUTCNow()"); }
	static bool IsPassengerInVehicle(struct AShooterCharacter* character) { return NativeCall<bool, struct AShooterCharacter*>(nullptr, "UVictoryCore.IsPassengerInVehicle(AShooterCharacter*)", character); }
	static ABrush* SpawnBoxBrushActor(struct TSubclassOf<ABrush>* BrushType, const struct UE::Math::TTransform<double>* BrushTransform, UE::Math::TVector<double>* BoxExtent) { return NativeCall<ABrush*, struct TSubclassOf<ABrush>*, const struct UE::Math::TTransform<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.SpawnBoxBrushActor(TSubclassOf<ABrush>,UE::Math::TTransform<double>&,UE::Math::TVector<double>)", BrushType, BrushTransform, BoxExtent); }
	static void AddAnimSlotToSkeleton(struct USkeleton* Skeleton, FName SlotName, FName SlotGroup) { NativeCall<void, struct USkeleton*, FName, FName>(nullptr, "UVictoryCore.AddAnimSlotToSkeleton(USkeleton*,FName,FName)", Skeleton, SlotName, SlotGroup); }
	static float GetTimeSeconds(struct APawn* pawn) { return NativeCall<float, struct APawn*>(nullptr, "UVictoryCore.GetTimeSeconds(APawn*)", pawn); }
	static void DebugTamedDinoLimits(struct UObject* WorldContextObject, int ForTeam) { NativeCall<void, struct UObject*, int>(nullptr, "UVictoryCore.DebugTamedDinoLimits(UObject*,int)", WorldContextObject, ForTeam); }
	static TArray<FOverlapResult, TSizedDefaultAllocator<32> >* BPOverlapMultiByObjectType(TArray<FOverlapResult, TSizedDefaultAllocator<32> >* result, struct UWorld* World, UE::Math::TVector<double>* MyLoc, float SphereRadius) { return NativeCall<TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, struct UWorld*, UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.BPOverlapMultiByObjectType(UWorld*,UE::Math::TVector<double>,float)", result, World, MyLoc, SphereRadius); }
	static double UtcToPersistentTime(struct UObject* WorldContextObject, double UtcTime) { return NativeCall<double, struct UObject*, double>(nullptr, "UVictoryCore.UtcToPersistentTime(UObject*,double)", WorldContextObject, UtcTime); }
	static void BPRequestRenameTribe(struct AShooterPlayerState* PlayerState, const class FString* TribeName) { NativeCall<void, struct AShooterPlayerState*, const class FString*>(nullptr, "UVictoryCore.BPRequestRenameTribe(AShooterPlayerState*,FString&)", PlayerState, TribeName); }
	static bool PlayerOwnsFireLion(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsFireLion(AShooterPlayerController*)", controller); }
	static TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* SpawnFollowerBasedOnRNG(TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* result, struct UWorld* World, struct APrimalDinoCharacter* ParentDino, class TArray<float, TSizedDefaultAllocator<32> >* WeightedChanceArray, struct TSoftClassPtr<APrimalDinoCharacter>* FollowerClass, float SpawnChanceMultiplier, float SpawnCountMultiplier, bool bIsChild, float AgeMin, float AgeMax) { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*, struct UWorld*, struct APrimalDinoCharacter*, class TArray<float, TSizedDefaultAllocator<32> >*, struct TSoftClassPtr<APrimalDinoCharacter>*, float, float, bool, float, float>(nullptr, "UVictoryCore.SpawnFollowerBasedOnRNG(UWorld*,APrimalDinoCharacter*,TArray<float,TSizedDefaultAllocator<32>>,TSoftClassPtr<APrimalDinoCharacter>,float,float,bool,float,float)", result, World, ParentDino, WeightedChanceArray, FollowerClass, SpawnChanceMultiplier, SpawnCountMultiplier, bIsChild, AgeMin, AgeMax); }
	static void AddFoliageInteraction(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, float Radius, UE::Math::TVector<double>* Velocity, float FoliageInteractionStrength, float Plasticity, bool DontAddIfOverLimits) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, float, bool>(nullptr, "UVictoryCore.AddFoliageInteraction(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool)", WorldContextObject, Location, Radius, Velocity, FoliageInteractionStrength, Plasticity, DontAddIfOverLimits); }
	static bool OwnsBobsTallTales() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsBobsTallTales()"); }
	static void StaticApplyBabyBoneModifiersToMesh(struct USkeletalMeshComponent* ToMeshComp, struct FDinoBabySetup* DinoBabySetup, float BabyAge, bool bForceOnDedicated) { NativeCall<void, struct USkeletalMeshComponent*, struct FDinoBabySetup*, float, bool>(nullptr, "UVictoryCore.StaticApplyBabyBoneModifiersToMesh(USkeletalMeshComponent*,FDinoBabySetup,float,bool)", ToMeshComp, DinoBabySetup, BabyAge, bForceOnDedicated); }
	static int StringToIntAscii(class FString* SourceString, int Index) { return NativeCall<int, class FString*, int>(nullptr, "UVictoryCore.StringToIntAscii(FString,int)", SourceString, Index); }
	static void SetMaterialColorizationFromItemColors(struct UPrimalItem* item, struct UMaterialInstanceDynamic* dynamicMic) { NativeCall<void, struct UPrimalItem*, struct UMaterialInstanceDynamic*>(nullptr, "UVictoryCore.SetMaterialColorizationFromItemColors(UPrimalItem*,UMaterialInstanceDynamic*)", item, dynamicMic); }
	static bool IsLandscapeUsingRVT(struct UObject* WorldContextObject) { return NativeCall<bool, struct UObject*>(nullptr, "UVictoryCore.IsLandscapeUsingRVT(UObject*)", WorldContextObject); }
	static bool PlayMovie(const struct UObject* WorldContextObject, class FString* MoviePath, bool bMovieIsSkippable, struct FOnMoviePlaybackFinished* OnMoviePlaybackFinishedDelegate, bool bPlayedOnClient, EPlayMovieVolumeType VolumeType) { return NativeCall<bool, const struct UObject*, class FString*, bool, struct FOnMoviePlaybackFinished*, bool, EPlayMovieVolumeType>(nullptr, "UVictoryCore.PlayMovie(UObject*,FString,bool,FOnMoviePlaybackFinished,bool,EPlayMovieVolumeType)", WorldContextObject, MoviePath, bMovieIsSkippable, OnMoviePlaybackFinishedDelegate, bPlayedOnClient, VolumeType); }
	static bool HasCraftingRequirementsGreaterThanOne(const struct UPrimalItem* item) { return NativeCall<bool, const struct UPrimalItem*>(nullptr, "UVictoryCore.HasCraftingRequirementsGreaterThanOne(UPrimalItem*)", item); }
	static bool VTraceShapeBP(struct UObject* WorldContextObject, const struct UE::Math::TVector<double>* Start, const struct UE::Math::TVector<double>* End, struct FHitResult* HitOut, const class TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, const struct AActor* InIgnoreActor, float ShapeRadius, float ShapeHalfHeight, UE::Math::TVector<double>* ShapeBoxExtent, UE::Math::TRotator<double>* ShapeRotation, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FName TraceTag, float DebugDrawDuration) { return NativeCall<bool, struct UObject*, const struct UE::Math::TVector<double>*, const struct UE::Math::TVector<double>*, struct FHitResult*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, const struct AActor*, float, float, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, ECollisionChannel, int, bool, bool, FName, float>(nullptr, "UVictoryCore.VTraceShapeBP(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,float,float,UE::Math::TVector<double>,UE::Math::TRotator<double>,ECollisionChannel,int,bool,bool,FName,float)", WorldContextObject, Start, End, HitOut, ExtraIgnoreActors, InIgnoreActor, ShapeRadius, ShapeHalfHeight, ShapeBoxExtent, ShapeRotation, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, TraceTag, DebugDrawDuration); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllMissionActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result, struct UObject* WorldContextObject) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, struct UObject*>(nullptr, "UVictoryCore.GetAllMissionActors(UObject*)", result, WorldContextObject); }
	static bool NetIDOwnsDLC(const struct UObject* WorldContextObject, const struct FUniqueNetIdRepl* OwnerNetID, const class FString* DLCName, bool CheckOffline) { return NativeCall<bool, const struct UObject*, const struct FUniqueNetIdRepl*, const class FString*, bool>(nullptr, "UVictoryCore.NetIDOwnsDLC(UObject*,FUniqueNetIdRepl&,FString&,bool)", WorldContextObject, OwnerNetID, DLCName, CheckOffline); }
	static void StaticPlaySoundAtLocation(const struct UObject* WorldContextObject, struct USoundBase* Sound, UE::Math::TVector<double>* Location, UE::Math::TRotator<double>* Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, const struct AActor* OwningActor, const struct UInitialActiveSoundParams* InitialParams, bool bAlwaysPlay) { NativeCall<void, const struct UObject*, struct USoundBase*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, float, float, float, struct USoundAttenuation*, struct USoundConcurrency*, const struct AActor*, const struct UInitialActiveSoundParams*, bool>(nullptr, "UVictoryCore.StaticPlaySoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,USoundAttenuation*,USoundConcurrency*,AActor*,UInitialActiveSoundParams*,bool)", WorldContextObject, Sound, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, OwningActor, InitialParams, bAlwaysPlay); }
	static AActor* GetMissionActorOfType(struct UObject* WorldContextObject, struct TSubclassOf<AMissionType>* theMissionType, bool bExactMatch) { return NativeCall<AActor*, struct UObject*, struct TSubclassOf<AMissionType>*, bool>(nullptr, "UVictoryCore.GetMissionActorOfType(UObject*,TSubclassOf<AMissionType>,bool)", WorldContextObject, theMissionType, bExactMatch); }
	static void AddFoliageCapsuleInteractionEffect(struct UObject* WorldContextObject, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* ExtraCapsuleLocation, float Radius, UE::Math::TVector<double>* Velocity, float FoliageInteractionStrength, float FoliagePlasticity, bool DontAddIfOverLimits) { NativeCall<void, struct UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, UE::Math::TVector<double>*, float, float, bool>(nullptr, "UVictoryCore.AddFoliageCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool)", WorldContextObject, Location, ExtraCapsuleLocation, Radius, Velocity, FoliageInteractionStrength, FoliagePlasticity, DontAddIfOverLimits); }
	static bool NetIDOwnsShoulderDragon(const struct UObject* WorldContextObject, const struct FUniqueNetIdRepl* OwnerNetID, bool CheckOffline) { return NativeCall<bool, const struct UObject*, const struct FUniqueNetIdRepl*, bool>(nullptr, "UVictoryCore.NetIDOwnsShoulderDragon(UObject*,FUniqueNetIdRepl&,bool)", WorldContextObject, OwnerNetID, CheckOffline); }
	static int IsChildOfClassesSoftRefT(struct TSubclassOf<UObject>* childClass, const class TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, struct TSubclassOf<UObject>*, const class TArray<TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<APrimalBuff>(TSubclassOf<UObject>,TArray<TSoftClassPtr<APrimalBuff>,TSizedDefaultAllocator<32>>&)", childClass, ParentClassesArray); }
	static float GetAngleBetweenVectorsPure(UE::Math::TVector<double>* VectorA, UE::Math::TVector<double>* VectorB, UE::Math::TVector<double>* AroundAxis) { return NativeCall<float, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetAngleBetweenVectorsPure(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)", VectorA, VectorB, AroundAxis); }
	static UObject* BPLoadObject(const class FString* PathName) { return NativeCall<UObject*, const class FString*>(nullptr, "UVictoryCore.BPLoadObject(FString&)", PathName); }
	static void VisualLog_Histogram(struct AActor* Actor, UE::Math::TVector2<double>* DataSample, FName GraphName, FName DataName) { NativeCall<void, struct AActor*, UE::Math::TVector2<double>*, FName, FName>(nullptr, "UVictoryCore.VisualLog_Histogram(AActor*,UE::Math::TVector2<double>,FName,FName)", Actor, DataSample, GraphName, DataName); }
	static void DoForceStreamComponents(class TArray<UMeshComponent*, TSizedDefaultAllocator<32> >* ComponentsArray, bool bIsFirstPerson, bool bForceMaxTexturesOnConsole) { NativeCall<void, class TArray<UMeshComponent*, TSizedDefaultAllocator<32> >*, bool, bool>(nullptr, "UVictoryCore.DoForceStreamComponents(TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&,bool,bool)", ComponentsArray, bIsFirstPerson, bForceMaxTexturesOnConsole); }
	static UObject* VNewObjectFromBlueprint(struct UObject* WorldContextObject, struct UClass* classToUse) { return NativeCall<UObject*, struct UObject*, struct UClass*>(nullptr, "UVictoryCore.VNewObjectFromBlueprint(UObject*,UClass*)", WorldContextObject, classToUse); }
	static FString* Generate_UUID(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.Generate_UUID()", result); }
	static AShooterProjectile* DeferredSpawnAndFireProjectile_Start(UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* ShootDir, struct TSubclassOf<AShooterProjectile>* ProjectileClass, struct APrimalCharacter* ForCharacter, struct UE::Math::TTransform<double>* SpawnTransform, bool bNoCollisionFail) { return NativeCall<AShooterProjectile*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, struct TSubclassOf<AShooterProjectile>*, struct APrimalCharacter*, struct UE::Math::TTransform<double>*, bool>(nullptr, "UVictoryCore.DeferredSpawnAndFireProjectile_Start(UE::Math::TVector<double>,UE::Math::TVector<double>,TSubclassOf<AShooterProjectile>,APrimalCharacter*,UE::Math::TTransform<double>&,bool)", Origin, ShootDir, ProjectileClass, ForCharacter, SpawnTransform, bNoCollisionFail); }
	static bool IsEditor() { return NativeCall<bool>(nullptr, "UVictoryCore.IsEditor()"); }
	static bool PlayerOwnsShoulderDragon(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsShoulderDragon(AShooterPlayerController*)", controller); }
	static void GetAllClassesOfType(class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* Subclasses, struct TSubclassOf<UObject>* ParentClass, bool bAllowAbstract, class FString* Path) { NativeCall<void, class TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*, struct TSubclassOf<UObject>*, bool, class FString*>(nullptr, "UVictoryCore.GetAllClassesOfType(TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&,TSubclassOf<UObject>,bool,FString)", Subclasses, ParentClass, bAllowAbstract, Path); }
	static bool PlayerStateOwnsFireLion(struct AShooterPlayerState* playerState) { return NativeCall<bool, struct AShooterPlayerState*>(nullptr, "UVictoryCore.PlayerStateOwnsFireLion(AShooterPlayerState*)", playerState); }
	static float GetSkillCooldownDuration(FName ForSkill, int Rank) { return NativeCall<float, FName, int>(nullptr, "UVictoryCore.GetSkillCooldownDuration(FName,int)", ForSkill, Rank); }
	static void VisualLog_LineSegment(struct AActor* Actor, class FString* Message, bool bIsError, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, FLinearColor* Color, float Thickness, bool bAlsoPrintMessage) { NativeCall<void, struct AActor*, class FString*, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FLinearColor*, float, bool>(nullptr, "UVictoryCore.VisualLog_LineSegment(AActor*,FString,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,float,bool)", Actor, Message, bIsError, Start, End, Color, Thickness, bAlsoPrintMessage); }
	static void RefreshApplySoundAndMusicVolumes() { NativeCall<void>(nullptr, "UVictoryCore.RefreshApplySoundAndMusicVolumes()"); }
	static bool CanPlayerCheatSpawnBlueprintPath(struct APlayerController* player, const class FString* blueprintPath) { return NativeCall<bool, struct APlayerController*, const class FString*>(nullptr, "UVictoryCore.CanPlayerCheatSpawnBlueprintPath(APlayerController*,FString&)", player, blueprintPath); }
	static UObject* GetClassDefaultObject(struct UClass* FromClass) { return NativeCall<UObject*, struct UClass*>(nullptr, "UVictoryCore.GetClassDefaultObject(UClass*)", FromClass); }
	static bool GetAllBlueprintAssetsOfNativeClass(struct TSubclassOf<UObject>* InNativeClass, class TArray<FAssetData, TSizedDefaultAllocator<32> >* FoundAssets) { return NativeCall<bool, struct TSubclassOf<UObject>*, class TArray<FAssetData, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetAllBlueprintAssetsOfNativeClass(TSubclassOf<UObject>,TArray<FAssetData,TSizedDefaultAllocator<32>>&)", InNativeClass, FoundAssets); }
	static FString* GetTotalCoversionIdAsString(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetTotalCoversionIdAsString()", result); }
	static void PlayCompanionReactionToPlayers(class TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >* PlayersWhoGetReaction, struct FCompanionReactionData* ReactionData, bool ForcePlayNow, struct UMaterialInterface* OverrideDialogueIcon, bool RestrictedEnvironmentalReaction, int UniqueID) { NativeCall<void, class TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*, struct FCompanionReactionData*, bool, struct UMaterialInterface*, bool, int>(nullptr, "UVictoryCore.PlayCompanionReactionToPlayers(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>,FCompanionReactionData&,bool,UMaterialInterface*,bool,int)", PlayersWhoGetReaction, ReactionData, ForcePlayNow, OverrideDialogueIcon, RestrictedEnvironmentalReaction, UniqueID); }
	static FString* FindLocalizedVersionOfFilename(FString* result, const struct FSoftObjectPath* OriginalFile) { return NativeCall<FString*, FString*, const struct FSoftObjectPath*>(nullptr, "UVictoryCore.FindLocalizedVersionOfFilename(FSoftObjectPath&)", result, OriginalFile); }
	static int CountCharactersResolvingGroundLocationInSphere(struct UWorld* WorldContext, const struct UE::Math::TVector<double>* location, float radius) { return NativeCall<int, struct UWorld*, const struct UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.CountCharactersResolvingGroundLocationInSphere(UWorld*,UE::Math::TVector<double>&,float)", WorldContext, location, radius); }
	static TArray<UActorComponent*, TSizedDefaultAllocator<32> >* GetBlueprintComponentsFromCDO(TArray<UActorComponent*, TSizedDefaultAllocator<32> >* result, struct UClass* ForClass) { return NativeCall<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, struct UClass*>(nullptr, "UVictoryCore.GetBlueprintComponentsFromCDO(UClass*)", result, ForClass); }
	static bool PlayerOwnsDarkPegasus(struct AShooterPlayerController* controller) { return NativeCall<bool, struct AShooterPlayerController*>(nullptr, "UVictoryCore.PlayerOwnsDarkPegasus(AShooterPlayerController*)", controller); }
	static bool OverlappingStationaryObjectsTraceBP(struct UObject* WorldContextObject, struct APrimalCharacter* SourceCharacter, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >* Overlaps, UE::Math::TVector<double>* Origin, float Radius, ECollisionChannel TraceChannel, struct AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, struct UObject*, struct APrimalCharacter*, class TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, float, ECollisionChannel, struct AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingStationaryObjectsTraceBP(UObject*,APrimalCharacter*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,ECollisionChannel,AActor*,FName,bool)", WorldContextObject, SourceCharacter, Overlaps, Origin, Radius, TraceChannel, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static void DestroyAllCharactersWithinMissionTileVolumes(struct UObject* WorldContextObject, bool bOnlyCheckForDeadCharacters, FName ForceOnTileStreamVolumeCustomTag) { NativeCall<void, struct UObject*, bool, FName>(nullptr, "UVictoryCore.DestroyAllCharactersWithinMissionTileVolumes(UObject*,bool,FName)", WorldContextObject, bOnlyCheckForDeadCharacters, ForceOnTileStreamVolumeCustomTag); }
	static void AddActorToCustomActorList(struct UObject* WorldContextObject, FName SearchCustomTag, struct AActor* ActorToAdd, bool createListIfMissing) { NativeCall<void, struct UObject*, FName, struct AActor*, bool>(nullptr, "UVictoryCore.AddActorToCustomActorList(UObject*,FName,AActor*,bool)", WorldContextObject, SearchCustomTag, ActorToAdd, createListIfMissing); }
	static void OnQueryEpicEntitlementsComplete(bool bWasSuccessful, const struct FUniqueNetId* UserId, const class FString* Namespace, const class FString* Error) { NativeCall<void, bool, const struct FUniqueNetId*, const class FString*, const class FString*>(nullptr, "UVictoryCore.OnQueryEpicEntitlementsComplete(bool,FUniqueNetId&,FString&,FString&)", bWasSuccessful, UserId, Namespace, Error); }
	static void StopMovie() { NativeCall<void>(nullptr, "UVictoryCore.StopMovie()"); }
	static FLinearColor* ChangeSaturation(FLinearColor* result, const struct FLinearColor* InColor, float NewSaturation) { return NativeCall<FLinearColor*, FLinearColor*, const struct FLinearColor*, float>(nullptr, "UVictoryCore.ChangeSaturation(FLinearColor&,float)", result, InColor, NewSaturation); }
	static bool IsAdvertKeyUseAvailable(const class FString* AdvertKey, bool bConsumeKey) { return NativeCall<bool, const class FString*, bool>(nullptr, "UVictoryCore.IsAdvertKeyUseAvailable(FString&,bool)", AdvertKey, bConsumeKey); }
	static bool IsUWPBuild() { return NativeCall<bool>(nullptr, "UVictoryCore.IsUWPBuild()"); }
	static UE::Math::TVector<double>* FlattenDirectionVectorInLocalSpace(UE::Math::TVector<double>* result, UE::Math::TVector<double>* Direction, UE::Math::TRotator<double>* Rotation) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(nullptr, "UVictoryCore.FlattenDirectionVectorInLocalSpace(UE::Math::TVector<double>,UE::Math::TRotator<double>)", result, Direction, Rotation); }
	static void SortActorsByDistance_WeakPointer(const struct UE::Math::TVector<double>* fromLoc, class TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >* actors) { NativeCall<void, const struct UE::Math::TVector<double>*, class TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortActorsByDistance_WeakPointer(UE::Math::TVector<double>&,TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>>&)", fromLoc, actors); }
	static APrimalDinoCharacter* GetDinoCharacterByLongDinoID(struct UObject* WorldContextObject, const class FString* DinoID, bool bSearchTamedOnly) { return NativeCall<APrimalDinoCharacter*, struct UObject*, const class FString*, bool>(nullptr, "UVictoryCore.GetDinoCharacterByLongDinoID(UObject*,FString&,bool)", WorldContextObject, DinoID, bSearchTamedOnly); }
	static void TrimArray_Vector(class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* InOutArray, int MaxLength, bool bRemoveFromEnd) { NativeCall<void, class TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, int, bool>(nullptr, "UVictoryCore.TrimArray_Vector(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,int,bool)", InOutArray, MaxLength, bRemoveFromEnd); }
	static UPrimalInventoryComponent* GetPrimalInventoryComponentFromActor(struct AActor* ForActor, bool bCheckAllChildComponents) { return NativeCall<UPrimalInventoryComponent*, struct AActor*, bool>(nullptr, "UVictoryCore.GetPrimalInventoryComponentFromActor(AActor*,bool)", ForActor, bCheckAllChildComponents); }
	static FVector_NetQuantize* Conv_VectorToVectorNetQuantize(FVector_NetQuantize* result, UE::Math::TVector<double>* InVector) { return NativeCall<FVector_NetQuantize*, FVector_NetQuantize*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.Conv_VectorToVectorNetQuantize(UE::Math::TVector<double>)", result, InVector); }
	static bool IsEngramGroupAllowed(struct AShooterPlayerController* forPC, int EngramGroup) { return NativeCall<bool, struct AShooterPlayerController*, int>(nullptr, "UVictoryCore.IsEngramGroupAllowed(AShooterPlayerController*,int)", forPC, EngramGroup); }
	static AActor* SortActorsByDistanceReturnNearest(const struct UE::Math::TVector<double>* fromLoc, const class TArray<AActor*, TSizedDefaultAllocator<32> >* actors, bool bRemoveNullEntries) { return NativeCall<AActor*, const struct UE::Math::TVector<double>*, const class TArray<AActor*, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UVictoryCore.SortActorsByDistanceReturnNearest(UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool)", fromLoc, actors, bRemoveNullEntries); }
	static TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* PointsOnACircle(TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* result, const struct UE::Math::TVector<double>* Center, float Radius, int NumPoints) { return NativeCall<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, const struct UE::Math::TVector<double>*, float, int>(nullptr, "UVictoryCore.PointsOnACircle(UE::Math::TVector<double>&,float,int)", result, Center, Radius, NumPoints); }

	static UClass* BPLoadClass(const FString& path_name)
	{
		TSubclassOf<UObject> LoadedClass;
		UVictoryCore::StringReferenceToClass(&LoadedClass, &path_name);

		if (LoadedClass.uClass)
			return LoadedClass.uClass;
		else
			return nullptr;
	}
};

struct FTribeRankGroup
{
	// Fields

	FString& RankGroupNameField() { return *GetNativePointerField<FString*>(this, "FTribeRankGroup.RankGroupName"); }
	unsigned char& RankGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.RankGroupRank"); }
	unsigned char& InventoryRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.InventoryRank"); }
	unsigned char& StructureActivationRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.StructureActivationRank"); }
	unsigned char& NewStructureActivationRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.NewStructureActivationRank"); }
	unsigned char& NewStructureInventoryRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.NewStructureInventoryRank"); }
	unsigned char& PetOrderRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.PetOrderRank"); }
	unsigned char& PetRidingRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.PetRidingRank"); }
	unsigned char& InviteToGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.InviteToGroupRank"); }
	unsigned char& MaxPromotionGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.MaxPromotionGroupRank"); }
	unsigned char& MaxDemotionGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.MaxDemotionGroupRank"); }
	unsigned char& MaxBanishmentGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.MaxBanishmentGroupRank"); }
	unsigned char& NumInvitesRemainingField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.NumInvitesRemaining"); }
	unsigned char& TeleportMembersRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.TeleportMembersRank"); }
	unsigned char& TeleportDinosRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.TeleportDinosRank"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPreventStructureDemolishField() { return { this, "FTribeRankGroup.bPreventStructureDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStructureAttachmentField() { return { this, "FTribeRankGroup.bPreventStructureAttachment" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStructureBuildInRangeField() { return { this, "FTribeRankGroup.bPreventStructureBuildInRange" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUnclaimingField() { return { this, "FTribeRankGroup.bPreventUnclaiming" }; }
	BitFieldValue<bool, unsigned __int32> bAllowInvitesField() { return { this, "FTribeRankGroup.bAllowInvites" }; }
	BitFieldValue<bool, unsigned __int32> bLimitInvitesField() { return { this, "FTribeRankGroup.bLimitInvites" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDemotionsField() { return { this, "FTribeRankGroup.bAllowDemotions" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPromotionsField() { return { this, "FTribeRankGroup.bAllowPromotions" }; }
	BitFieldValue<bool, unsigned __int32> bAllowBanishmentsField() { return { this, "FTribeRankGroup.bAllowBanishments" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWirelessCraftingField() { return { this, "FTribeRankGroup.bPreventWirelessCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bDefaultRankField() { return { this, "FTribeRankGroup.bDefaultRank" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPingField() { return { this, "FTribeRankGroup.bAllowPing" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRallyPointField() { return { this, "FTribeRankGroup.bAllowRallyPoint" }; }

	// Functions

// 	FTribeRankGroup& operator=(const FTribeRankGroup* __that) { return NativeCall<FTribeRankGroup&, const FTribeRankGroup*>(this, "FTribeRankGroup.operator=(FTribeRankGroup&)", __that); }
// FUNCTION MISSING: FTribeRankGroup.operator=(FTribeRankGroup&)
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FTribeRankGroup.StaticStruct()"); }
	void ValidateSettings() { NativeCall<void>(this, "FTribeRankGroup.ValidateSettings()"); }

};

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
	FString GetWarTimeString(int DayNumber, float DayTime) { return NativeCall<FString, int, float>(this, "FTribeWar.GetWarTimeString(int,float)", DayNumber, DayTime); }
	bool IsCurrentlyActive(UWorld* ForWorld) const { return NativeCall<bool, UWorld*>(this, "FTribeWar.IsCurrentlyActive(UWorld*)", ForWorld); }
	bool IsTribeWarOn(UWorld* ForWorld) const { return NativeCall<bool, UWorld*>(this, "FTribeWar.IsTribeWarOn(UWorld*)", ForWorld); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FTribeWar.StaticStruct()"); }


};
struct FTribeAlliance
{
	// Fields

	FString& AllianceNameField() { return *GetNativePointerField<FString*>(this, "FTribeAlliance.AllianceName"); }
	unsigned int& AllianceIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeAlliance.AllianceID"); }
	TArray<FString, TSizedDefaultAllocator<32> >& MembersTribeNameField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FTribeAlliance.MembersTribeName"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& MembersTribeIDField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FTribeAlliance.MembersTribeID"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& AdminsTribeIDField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FTribeAlliance.AdminsTribeID"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FTribeAlliance.StaticStruct()"); }

};

struct FCustomTrackedActorInfo
{
	FString Name;
	float TameAffinityPercent;
	float HealthPercent;
	float HealthCurrent;
	float HealthMax;
	float HungerPercent;
	float HungerCurrent;
	float HungerMax;
	float TorpidityPercent;
	float TameEffectivenessPercent;
	int TameEffectivenessLvlModifier;
	UE::Math::TVector<double> Location;
	bool bIsConcious;
	bool bUseGender;
	bool bIsFemale;
	bool bIsTamed;
	float DinoImprintingQuality;
	float BabyNextCuddleTime;
	float BabyAge;
	float TimeUntilNextNamedAge;
	long double LastTameConsumedFoodTime;
	FString ImprinterName;
	int DataID1;
	int DataID2;
	FString TargetName;
	bool bIsPlayer;
	bool bIsFavorited;
	bool bIsTrackedWaypoint;
	TSubclassOf<UPrimalDinoEntry> DinoEntry;
	bool bHideFromTrackListAndOnlyShowOnMap;
	FString TribeName;
	int TargetingTeam;
	bool bIsVehicle;
	bool bIsValidForCurrentFilter;
	int Level;
	long double TamedAtTime;
	bool POIVisible;
};

struct FTrackedActorPlusInfoStruct
{
	AActor* TrackedActor;
	FCustomTrackedActorInfo ReplicatedInfo;
	UE::Math::TVector<double> ActorLastKnownLocation;
	UE::Math::TVector<double> LastPOILocation;
	int PreviousLinkedListTrackedActorID;
	unsigned __int8 PreviousLinkedListTrackedActorCategory;
	int NextLinkedListTrackedActorID;
	unsigned __int8 NextLinkedListTrackedActorCategory;
};

const struct FTeamPingData
{
	unsigned __int8 PingID;
	UE::Math::TVector<double> Location;
	AActor* ToActor;
	int ByPlayerID;
	int TargetingTeam;
	long double CreationTime;
	TEnumAsByte<enum ETeamPingType::Type> PingType;
	FString PlayerName;
};

struct FTribeData
{
	// Fields

	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FTribeData.TribeName"); }
	double& LastNameChangeTimeField() { return *GetNativePointerField<double*>(this, "FTribeData.LastNameChangeTime"); }
	unsigned int& OwnerPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeData.OwnerPlayerDataID"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FTribeData.TribeID"); }
	TArray<FString, TSizedDefaultAllocator<32> >& MembersPlayerNameField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FTribeData.MembersPlayerName"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& MembersPlayerDataIDField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FTribeData.MembersPlayerDataID"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& MembersRankGroupsField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FTribeData.MembersRankGroups"); }
	TArray<double, TSizedDefaultAllocator<32> >& SlotFreedTimeField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "FTribeData.SlotFreedTime"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& TribeAdminsField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeAdmins"); }
	TArray<FTribeAlliance, TSizedDefaultAllocator<32> >& TribeAlliancesField() { return *GetNativePointerField<TArray<FTribeAlliance, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeAlliances"); }
	bool& bSetGovernmentField() { return *GetNativePointerField<bool*>(this, "FTribeData.bSetGovernment"); }
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "FTribeData.TribeGovernment"); }
	TArray<FPrimalPlayerCharacterConfigStruct, TSizedDefaultAllocator<32> >& MembersConfigsField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStruct, TSizedDefaultAllocator<32> >*>(this, "FTribeData.MembersConfigs"); }
	TArray<FTribeWar, TSizedDefaultAllocator<32> >& TribeWarsField() { return *GetNativePointerField<TArray<FTribeWar, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeWars"); }
	TArray<FString, TSizedDefaultAllocator<32> >& TribeLogField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeLog"); }
	int& LogIndexField() { return *GetNativePointerField<int*>(this, "FTribeData.LogIndex"); }
	TArray<FTribeRankGroup, TSizedDefaultAllocator<32> >& TribeRankGroupsField() { return *GetNativePointerField<TArray<FTribeRankGroup, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeRankGroups"); }
	int& NumTribeDinosField() { return *GetNativePointerField<int*>(this, "FTribeData.NumTribeDinos"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& LimitedDinoClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FTribeData.LimitedDinoClasses"); }
	TArray<int, TSizedDefaultAllocator<32> >& NumDinosOfLimitedDinoClassesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FTribeData.NumDinosOfLimitedDinoClasses"); }
	TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32> >& CachedTeamTameList_UpdatedOnIntervalField() { return *GetNativePointerField<TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32> >*>(this, "FTribeData.CachedTeamTameList_UpdatedOnInterval"); }
	double& LastNetworkTimeUpdatedCachedTeamTameListField() { return *GetNativePointerField<double*>(this, "FTribeData.LastNetworkTimeUpdatedCachedTeamTameList"); }
	FTeamPingData& RallyPointDataField() { return *GetNativePointerField<FTeamPingData*>(this, "FTribeData.RallyPointData"); }
	bool& bHaveRallyPointDataField() { return *GetNativePointerField<bool*>(this, "FTribeData.bHaveRallyPointData"); }
	short& ThreatLevelField() { return *GetNativePointerField<short*>(this, "FTribeData.ThreatLevel"); }
	TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>& MembersPlayerDataIDSet_ServerField() { return *GetNativePointerField<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>*>(this, "FTribeData.MembersPlayerDataIDSet_Server"); }

	// Bitfields


	// Functions

	FTribeData& operator=(FTribeData* __that) { return NativeCall<FTribeData&, FTribeData*>(this, "FTribeData.operator=(FTribeData&&)", __that); }
	FTribeData& operator=(const FTribeData* __that) { return NativeCall<FTribeData&, const FTribeData*>(this, "FTribeData.operator=(FTribeData&)", __that); }
	FString GetTribeNameWithRankGroup(unsigned int PlayerDataID) const { return NativeCall<FString, unsigned int>(this, "FTribeData.GetTribeNameWithRankGroup(unsignedint)", PlayerDataID); }
	FString GetRankNameForPlayerID(unsigned int PlayerDataID) const { return NativeCall<FString, unsigned int>(this, "FTribeData.GetRankNameForPlayerID(unsignedint)", PlayerDataID); }
	int GetTribeRankGroupIndexForPlayer(unsigned int PlayerDataID) { return NativeCall<int, unsigned int>(this, "FTribeData.GetTribeRankGroupIndexForPlayer(unsignedint)", PlayerDataID); }
	FTribeAlliance* FindTribeAlliance(unsigned int AllianceID) { return NativeCall<FTribeAlliance*, unsigned int>(this, "FTribeData.FindTribeAlliance(unsignedint)", AllianceID); }
	void MarkTribeNameChanged(UObject* WorldContextObject) { NativeCall<void, UObject*>(this, "FTribeData.MarkTribeNameChanged(UObject*)", WorldContextObject); }
	double GetSecondsSinceLastNameChange(UObject* WorldContextObject) const { return NativeCall<double, UObject*>(this, "FTribeData.GetSecondsSinceLastNameChange(UObject*)", WorldContextObject); }
	bool GetTribeRankGroupForPlayer(unsigned int PlayerDataID, FTribeRankGroup* outRankGroup) { return NativeCall<bool, unsigned int, FTribeRankGroup*>(this, "FTribeData.GetTribeRankGroupForPlayer(unsignedint,FTribeRankGroup&)", PlayerDataID, outRankGroup); }
	int SetThreat(int NewThreat) { return NativeCall<int, int>(this, "FTribeData.SetThreat(int)", NewThreat); }
	void RefreshTribeWars(UWorld* ForWorld) { NativeCall<void, UWorld*>(this, "FTribeData.RefreshTribeWars(UWorld*)", ForWorld); }
	float GetTribeNameChangeCooldownTime(UObject* WorldContextObject) const { return NativeCall<float, UObject*>(this, "FTribeData.GetTribeNameChangeCooldownTime(UObject*)", WorldContextObject); }
	int GetDefaultRankGroupIndex() { return NativeCall<int>(this, "FTribeData.GetDefaultRankGroupIndex()"); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FTribeData.StaticStruct()"); }
	void CopyFrom(const FTribeData* Source, ETribeDataExclude ExcludeFilter) { NativeCall<void, const FTribeData*, ETribeDataExclude>(this, "FTribeData.CopyFrom(FTribeData&,ETribeDataExclude)", Source, ExcludeFilter); }
	int GetBestRankGroupForRank(int Rank) const { return NativeCall<int, int>(this, "FTribeData.GetBestRankGroupForRank(int)", Rank); }
	bool IsTribeAlliedWith(unsigned int OtherTribeID) { return NativeCall<bool, unsigned int>(this, "FTribeData.IsTribeAlliedWith(unsignedint)", OtherTribeID); }
	bool IsTribeWarActive(int WithTribeID, UWorld* ForWorld, bool bIncludeUnstarted) const { return NativeCall<bool, int, UWorld*, bool>(this, "FTribeData.IsTribeWarActive(int,UWorld*,bool)", WithTribeID, ForWorld, bIncludeUnstarted); }
	bool HasTribeWarRequest(int WithTribeID, UWorld* ForWorld) const { return NativeCall<bool, int, UWorld*>(this, "FTribeData.HasTribeWarRequest(int,UWorld*)", WithTribeID, ForWorld); }
};

struct UBlueprintFunctionLibrary
{

};

struct UGameplayStatics : UBlueprintFunctionLibrary
{
	// Fields


	  // Bitfields


	  // Functions

	 // TODO: Might need manual analysis
	static void PlaySoundAtLocation(const UObject* WorldContextObject, USoundBase* Sound, UE::Math::TVector<double>* Location, float VolumeMultiplier) { NativeCall<void, const UObject*, USoundBase*, UE::Math::TVector<double>*, float>(nullptr, "UGameplayStatics.PlaySoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,float,float,float,USoundAttenuation*,USoundConcurrency*,UInitialActiveSoundParams*)", WorldContextObject, Sound, Location, VolumeMultiplier); }
	// TODO: Might need manual analysis
	static UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, UE::Math::TVector<double>* Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) { return NativeCall<UAudioComponent*, USoundBase*, USceneComponent*, FName, UE::Math::TVector<double>*, EAttachLocation::Type, bool, float, float, float, USoundAttenuation*>(nullptr, "UGameplayStatics.SpawnSoundAttached(USoundBase*,USceneComponent*,FName,UE::Math::TVector<double>,EAttachLocation::Type,bool,float,float,float,USoundAttenuation*,USoundConcurrency*,bool,bool)", Sound, AttachToComponent, AttachPointName, Location, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UGameplayStatics.GetPrivateStaticClass()"); }
	static void StaticRegisterNativesUGameplayStatics() { NativeCall<void>(nullptr, "UGameplayStatics.StaticRegisterNativesUGameplayStatics()"); }
	static UGameInstance* GetGameInstance(const UObject* WorldContextObject) { return NativeCall<UGameInstance*, const UObject*>(nullptr, "UGameplayStatics.GetGameInstance(UObject*)", WorldContextObject); }
	static APlayerController* GetPlayerController(const UObject* WorldContextObject, int PlayerIndex) { return NativeCall<APlayerController*, const UObject*, int>(nullptr, "UGameplayStatics.GetPlayerController(UObject*,int)", WorldContextObject, PlayerIndex); }
	static ACharacter* GetPlayerCharacter(const UObject* WorldContextObject, int PlayerIndex) { return NativeCall<ACharacter*, const UObject*, int>(nullptr, "UGameplayStatics.GetPlayerCharacter(UObject*,int)", WorldContextObject, PlayerIndex); }
	//static AGameStateBase* GetGameState(const UObject* WorldContextObject) { return NativeCall<AGameStateBase*, const UObject*>(nullptr, "UGameplayStatics.GetGameState(UObject*)", WorldContextObject); }
	static bool ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, const UE::Math::TVector<double>* Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel, float Impulse) { return NativeCall<bool, const UObject*, float, const UE::Math::TVector<double>*, float, TSubclassOf<UDamageType>, const TArray<AActor*, TSizedDefaultAllocator<32> >*, AActor*, AController*, bool, ECollisionChannel, float>(nullptr, "UGameplayStatics.ApplyRadialDamage(UObject*,float,UE::Math::TVector<double>&,float,TSubclassOf<UDamageType>,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,AController*,bool,ECollisionChannel,float)", WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel, Impulse); }
	static bool ApplyRadialDamageIgnoreDamageActors(const UObject* WorldContextObject, float BaseDamage, const UE::Math::TVector<double>* Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, const TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreDamageActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel, float Impulse, float FallOff) { return NativeCall<bool, const UObject*, float, const UE::Math::TVector<double>*, float, TSubclassOf<UDamageType>, const TArray<AActor*, TSizedDefaultAllocator<32> >*, const TArray<AActor*, TSizedDefaultAllocator<32> >*, AActor*, AController*, bool, ECollisionChannel, float, float>(nullptr, "UGameplayStatics.ApplyRadialDamageIgnoreDamageActors(UObject*,float,UE::Math::TVector<double>&,float,TSubclassOf<UDamageType>,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,AController*,bool,ECollisionChannel,float,float)", WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, IgnoreDamageActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel, Impulse, FallOff); }
	static bool ApplyRadialDamageWithFalloff(const UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const UE::Math::TVector<double>* Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, ECollisionChannel DamagePreventionChannel, float Impulse, TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreDamageActors, int NumAdditionalAttempts) { return NativeCall<bool, const UObject*, float, float, const UE::Math::TVector<double>*, float, float, float, TSubclassOf<UDamageType>, const TArray<AActor*, TSizedDefaultAllocator<32> >*, AActor*, AController*, ECollisionChannel, float, TArray<AActor*, TSizedDefaultAllocator<32> >*, int>(nullptr, "UGameplayStatics.ApplyRadialDamageWithFalloff(UObject*,float,float,UE::Math::TVector<double>&,float,float,float,TSubclassOf<UDamageType>,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,AController*,ECollisionChannel,float,TArray<AActor*,TSizedDefaultAllocator<32>>*,int)", WorldContextObject, BaseDamage, MinimumDamage, Origin, DamageInnerRadius, DamageOuterRadius, DamageFalloff, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, DamagePreventionChannel, Impulse, IgnoreDamageActors, NumAdditionalAttempts); }
	static float ApplyPointDamage(AActor* DamagedActor, float BaseDamage, const UE::Math::TVector<double>* HitFromDirection, const FHitResult* HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, float Impulse, bool bForceCollisionCheck, ECollisionChannel ForceCollisionCheckTraceChannel, float OriginalDamageOverride) { return NativeCall<float, AActor*, float, const UE::Math::TVector<double>*, const FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>, float, bool, ECollisionChannel, float>(nullptr, "UGameplayStatics.ApplyPointDamage(AActor*,float,UE::Math::TVector<double>&,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>,float,bool,ECollisionChannel,float)", DamagedActor, BaseDamage, HitFromDirection, HitInfo, EventInstigator, DamageCauser, DamageTypeClass, Impulse, bForceCollisionCheck, ForceCollisionCheckTraceChannel, OriginalDamageOverride); }
	static float ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, float Impulse) { return NativeCall<float, AActor*, float, AController*, AActor*, TSubclassOf<UDamageType>, float>(nullptr, "UGameplayStatics.ApplyDamage(AActor*,float,AController*,AActor*,TSubclassOf<UDamageType>,float)", DamagedActor, BaseDamage, EventInstigator, DamageCauser, DamageTypeClass, Impulse); }
	static AActor* BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const UE::Math::TTransform<double>* SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, ESpawnActorScaleMethod TransformScaleMethod) { return NativeCall<AActor*, const UObject*, TSubclassOf<AActor>, const UE::Math::TTransform<double>*, ESpawnActorCollisionHandlingMethod, AActor*, ESpawnActorScaleMethod>(nullptr, "UGameplayStatics.BeginDeferredActorSpawnFromClass(UObject*,TSubclassOf<AActor>,UE::Math::TTransform<double>&,ESpawnActorCollisionHandlingMethod,AActor*,ESpawnActorScaleMethod)", WorldContextObject, ActorClass, SpawnTransform, CollisionHandlingOverride, Owner, TransformScaleMethod); }
	static void LoadStreamLevel(const UObject* WorldContextObject, FName LevelName, FName bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo* LatentInfo) { NativeCall<void, const UObject*, FName, FName, bool, FLatentActionInfo*>(nullptr, "UGameplayStatics.LoadStreamLevel(UObject*,FName,bool,bool,FLatentActionInfo)", WorldContextObject, LevelName, bMakeVisibleAfterLoad, bShouldBlockOnLoad, LatentInfo); }
// 	static void LoadStreamLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>* Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo* LatentInfo) { NativeCall<void, const UObject*, const TSoftObjectPtr<UWorld>*, bool, bool, FLatentActionInfo*>(nullptr, "UGameplayStatics.LoadStreamLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,bool,bool,FLatentActionInfo)", WorldContextObject, Level, bMakeVisibleAfterLoad, bShouldBlockOnLoad, LatentInfo); }
// FUNCTION MISSING: UGameplayStatics.LoadStreamLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,bool,bool,FLatentActionInfo)
	static void UnloadStreamLevel(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo* LatentInfo, bool bShouldBlockOnUnload) { NativeCall<void, const UObject*, FName, FLatentActionInfo*, bool>(nullptr, "UGameplayStatics.UnloadStreamLevel(UObject*,FName,FLatentActionInfo,bool)", WorldContextObject, LevelName, LatentInfo, bShouldBlockOnUnload); }
// 	static void UnloadStreamLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>* Level, FLatentActionInfo* LatentInfo, bool bShouldBlockOnUnload) { NativeCall<void, const UObject*, const TSoftObjectPtr<UWorld>*, FLatentActionInfo*, bool>(nullptr, "UGameplayStatics.UnloadStreamLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,FLatentActionInfo,bool)", WorldContextObject, Level, LatentInfo, bShouldBlockOnUnload); }
// FUNCTION MISSING: UGameplayStatics.UnloadStreamLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,FLatentActionInfo,bool)
	static void OpenLevel(const UObject* WorldContextObject, FName LevelName, FName bAbsolute, FString* Options) { NativeCall<void, const UObject*, FName, FName, FString*>(nullptr, "UGameplayStatics.OpenLevel(UObject*,FName,bool,FString)", WorldContextObject, LevelName, bAbsolute, Options); }
// 	static void OpenLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>* Level, bool bAbsolute, FString* Options) { NativeCall<void, const UObject*, const TSoftObjectPtr<UWorld>*, bool, FString*>(nullptr, "UGameplayStatics.OpenLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,bool,FString)", WorldContextObject, Level, bAbsolute, Options); }
// FUNCTION MISSING: UGameplayStatics.OpenLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,bool,FString)
	static FString* GetCurrentLevelName(FString* result, const UObject* WorldContextObject, FName bRemovePrefixString) { return NativeCall<FString*, FString*, const UObject*, FName>(nullptr, "UGameplayStatics.GetCurrentLevelName(UObject*,bool)", result, WorldContextObject, bRemovePrefixString); }
// 	static AActor* GetActorOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass) { return NativeCall<AActor*, const UObject*, TSubclassOf<AActor>>(nullptr, "UGameplayStatics.GetActorOfClass(UObject*,TSubclassOf<AActor>)", WorldContextObject, ActorClass); }
// FUNCTION MISSING: UGameplayStatics.GetActorOfClass(UObject*,TSubclassOf<AActor>)
	static void GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>* OutActors) { NativeCall<void, const UObject*, TSubclassOf<AActor>*, TArray<AActor*>*>(nullptr, "UGameplayStatics.GetAllActorsOfClass(UObject*,TSubclassOf<AActor>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, &ActorClass, OutActors); }
	static void GetAllActorsWithInterface(const UObject* WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, const UObject*, TSubclassOf<UInterface>, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UGameplayStatics.GetAllActorsWithInterface(UObject*,TSubclassOf<UInterface>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, Interface, OutActors); }
	static void GetAllActorsWithTag(const UObject* WorldContextObject, FName Tag, TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, const UObject*, FName, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UGameplayStatics.GetAllActorsWithTag(UObject*,FName,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, Tag, OutActors); }
// 	static void BreakHitResult(const FHitResult* Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* ImpactPoint, UE::Math::TVector<double>* Normal, UE::Math::TVector<double>* ImpactNormal, UPhysicalMaterial** PhysMat, AActor** HitActor, UPrimitiveComponent** HitComponent, FName* HitBoneName, FName* BoneName, int* HitItem, int* ElementIndex, int* FaceIndex, UE::Math::TVector<double>* TraceStart, UE::Math::TVector<double>* TraceEnd) { NativeCall<void, const FHitResult*, bool*, bool*, float*, float*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UPhysicalMaterial**, AActor**, UPrimitiveComponent**, FName*, FName*, int*, int*, int*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UGameplayStatics.BreakHitResult(FHitResult&,bool&,bool&,float&,float&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPhysicalMaterial*&,AActor*&,UPrimitiveComponent*&,FName&,FName&,int&,int&,int&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Hit, bBlockingHit, bInitialOverlap, Time, Distance, Location, ImpactPoint, Normal, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, BoneName, HitItem, ElementIndex, FaceIndex, TraceStart, TraceEnd); }
// FUNCTION MISSING: UGameplayStatics.BreakHitResult(FHitResult&,bool&,bool&,float&,float&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPhysicalMaterial*&,AActor*&,UPrimitiveComponent*&,FName&,FName&,int&,int&,int&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)
	static bool FindCollisionUV(const FHitResult* Hit, int UVChannel, UE::Math::TVector2<double>* UV) { return NativeCall<bool, const FHitResult*, int, UE::Math::TVector2<double>*>(nullptr, "UGameplayStatics.FindCollisionUV(FHitResult&,int,UE::Math::TVector2<double>&)", Hit, UVChannel, UV); }
// 	void PlaySound2D(USoundBase* Sound, UE::Math::TVector<double>* Location, float VolumeMultiplier) { NativeCall<void, USoundBase*, UE::Math::TVector<double>*, float>(this, "UGameplayStatics.PlaySound2D(UObject*,USoundBase*,float,float,float,USoundConcurrency*,AActor*,bool)", Sound, Location, VolumeMultiplier); }
// FUNCTION MISSING: UGameplayStatics.PlaySound2D(UObject*,USoundBase*,float,float,float,USoundConcurrency*,AActor*,bool)
// 	static UAudioComponent* CreateSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) { return NativeCall<UAudioComponent*, const UObject*, USoundBase*, float, float, float, USoundConcurrency*, bool, bool>(nullptr, "UGameplayStatics.CreateSound2D(UObject*,USoundBase*,float,float,float,USoundConcurrency*,bool,bool)", WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, bPersistAcrossLevelTransition, bAutoDestroy); }
// FUNCTION MISSING: UGameplayStatics.CreateSound2D(UObject*,USoundBase*,float,float,float,USoundConcurrency*,bool,bool)
	static UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, UE::Math::TVector<double>* Location, UE::Math::TRotator<double>* Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bAlwaysPlay) { return NativeCall<UAudioComponent*, USoundBase*, USceneComponent*, FName, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, EAttachLocation::Type, bool, float, float, float, USoundAttenuation*, USoundConcurrency*, bool, bool>(nullptr, "UGameplayStatics.SpawnSoundAttached(USoundBase*,USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,EAttachLocation::Type,bool,float,float,float,USoundAttenuation*,USoundConcurrency*,bool,bool)", Sound, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, bAutoDestroy, bAlwaysPlay); }
	static void PrimeSound(USoundBase* InSound) { NativeCall<void, USoundBase*>(nullptr, "UGameplayStatics.PrimeSound(USoundBase*)", InSound); }
	static void PrimeAllSoundsInSoundClass(USoundClass* InSoundClass) { NativeCall<void, USoundClass*>(nullptr, "UGameplayStatics.PrimeAllSoundsInSoundClass(USoundClass*)", InSoundClass); }
	static void UnRetainAllSoundsInSoundClass(USoundClass* InSoundClass) { NativeCall<void, USoundClass*>(nullptr, "UGameplayStatics.UnRetainAllSoundsInSoundClass(USoundClass*)", InSoundClass); }
	static USceneComponent* SpawnDecalAttached(UMaterialInterface* DecalMaterial, UE::Math::TVector<double>* DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, UE::Math::TVector<double>* Location, UE::Math::TRotator<double>* Rotation, EAttachLocation::Type LocationType, float LifeSpan) { return NativeCall<USceneComponent*, UMaterialInterface*, UE::Math::TVector<double>*, USceneComponent*, FName, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, EAttachLocation::Type, float>(nullptr, "UGameplayStatics.SpawnDecalAttached(UMaterialInterface*,UE::Math::TVector<double>,USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,EAttachLocation::Type,float)", DecalMaterial, DecalSize, AttachToComponent, AttachPointName, Location, Rotation, LocationType, LifeSpan); }
	static USaveGame* CreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass) { return NativeCall<USaveGame*, TSubclassOf<USaveGame>>(nullptr, "UGameplayStatics.CreateSaveGameObject(TSubclassOf<USaveGame>)", SaveGameClass); }
	static bool SaveGameToMemory(USaveGame* SaveGameObject, TArray<unsigned char, TSizedDefaultAllocator<32> >* OutSaveData) { return NativeCall<bool, USaveGame*, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(nullptr, "UGameplayStatics.SaveGameToMemory(USaveGame*,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", SaveGameObject, OutSaveData); }
	static void AsyncSaveGameToSlot(USaveGame* SaveGameObject, const FString* SlotName, const int UserIndex, TDelegate<void __cdecl(FString const&, int, bool), FDefaultDelegateUserPolicy>* SavedDelegate) { NativeCall<void, USaveGame*, const FString*, const int, TDelegate<void __cdecl(FString const&, int, bool), FDefaultDelegateUserPolicy>*>(nullptr, "UGameplayStatics.AsyncSaveGameToSlot(USaveGame*,FString&,int,TDelegate<void__cdecl(FString&,int,bool)", SaveGameObject, SlotName, UserIndex, SavedDelegate); }
	static bool SaveGameToSlot(USaveGame* SaveGameObject, const FString* SlotName, const int UserIndex) { return NativeCall<bool, USaveGame*, const FString*, const int>(nullptr, "UGameplayStatics.SaveGameToSlot(USaveGame*,FString&,int)", SaveGameObject, SlotName, UserIndex); }
	static USaveGame* LoadGameFromMemory(const TArray<unsigned char, TSizedDefaultAllocator<32> >* InSaveData) { return NativeCall<USaveGame*, const TArray<unsigned char, TSizedDefaultAllocator<32> >*>(nullptr, "UGameplayStatics.LoadGameFromMemory(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", InSaveData); }
	static void AsyncLoadGameFromSlot(const FString* SlotName, const int UserIndex, TDelegate<void __cdecl(FString const&, int, USaveGame*), FDefaultDelegateUserPolicy>* LoadedDelegate) { NativeCall<void, const FString*, const int, TDelegate<void __cdecl(FString const&, int, USaveGame*), FDefaultDelegateUserPolicy>*>(nullptr, "UGameplayStatics.AsyncLoadGameFromSlot(FString&,int,TDelegate<void__cdecl(FString&,int,USaveGame*)", SlotName, UserIndex, LoadedDelegate); }
	static USaveGame* LoadGameFromSlot(const FString* SlotName, const int UserIndex) { return NativeCall<USaveGame*, const FString*, const int>(nullptr, "UGameplayStatics.LoadGameFromSlot(FString&,int)", SlotName, UserIndex); }
	static long double GetWorldDeltaSeconds(const UObject* WorldContextObject) { return NativeCall<long double, const UObject*>(nullptr, "UGameplayStatics.GetWorldDeltaSeconds(UObject*)", WorldContextObject); }
	static bool SuggestProjectileVelocity(const UObject* WorldContextObject, UE::Math::TVector<double>* OutTossVelocity, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, float TossSpeed, bool bFavorHighArc, float CollisionRadius, float OverrideGravityZ, ESuggestProjVelocityTraceOption::Type TraceOption, const FCollisionResponseParams* ResponseParam, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, bool bDrawDebug) { return NativeCall<bool, const UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, bool, float, float, ESuggestProjVelocityTraceOption::Type, const FCollisionResponseParams*, const TArray<AActor*, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UGameplayStatics.SuggestProjectileVelocity(UGameplayStatics::FSuggestProjectileVelocityParameters&,UE::Math::TVector<double>&)", WorldContextObject, OutTossVelocity, Start, End, TossSpeed, bFavorHighArc, CollisionRadius, OverrideGravityZ, TraceOption, ResponseParam, ActorsToIgnore, bDrawDebug); }
	static bool PredictProjectilePath(const UObject* WorldContextObject, const FPredictProjectilePathParams* PredictParams, FPredictProjectilePathResult* PredictResult) { return NativeCall<bool, const UObject*, const FPredictProjectilePathParams*, FPredictProjectilePathResult*>(nullptr, "UGameplayStatics.PredictProjectilePath(UObject*,FPredictProjectilePathParams&,FPredictProjectilePathResult&)", WorldContextObject, PredictParams, PredictResult); }
	//static bool Blueprint_PredictProjectilePath_ByObjectType(const UObject* WorldContextObject, FHitResult* OutHit, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* OutPathPositions, UE::Math::TVector<double>* OutLastTraceDestination, UE::Math::TVector<double>* StartPos, UE::Math::TVector<double>* LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<TEnumAsByte<EObjectTypeQuery>, TSizedDefaultAllocator<32> >* ObjectTypes, bool bTraceComplex, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) { return NativeCall<bool, const UObject*, FHitResult*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, float, const TArray<TEnumAsByte<EObjectTypeQuery>, TSizedDefaultAllocator<32> >*, bool, const TArray<AActor*, TSizedDefaultAllocator<32> >*, EDrawDebugTrace::Type, float, float, float, float>(nullptr, "UGameplayStatics.Blueprint_PredictProjectilePath_ByObjectType(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,float,float,float,float)", WorldContextObject, OutHit, OutPathPositions, OutLastTraceDestination, StartPos, LaunchVelocity, bTracePath, ProjectileRadius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, DrawDebugTime, SimFrequency, MaxSimTime, OverrideGravityZ); }
	//static bool Blueprint_PredictProjectilePath_ByTraceChannel(const UObject* WorldContextObject, FHitResult* OutHit, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* OutPathPositions, UE::Math::TVector<double>* OutLastTraceDestination, UE::Math::TVector<double>* StartPos, UE::Math::TVector<double>* LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) { return NativeCall<bool, const UObject*, FHitResult*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, float, TEnumAsByte<ECollisionChannel>, bool, const TArray<AActor*, TSizedDefaultAllocator<32> >*, EDrawDebugTrace::Type, float, float, float, float>(nullptr, "UGameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,float,TEnumAsByte<ECollisionChannel>,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,float,float,float,float)", WorldContextObject, OutHit, OutPathPositions, OutLastTraceDestination, StartPos, LaunchVelocity, bTracePath, ProjectileRadius, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, DrawDebugTime, SimFrequency, MaxSimTime, OverrideGravityZ); }
	static __int64 GrassOverlappingSphereCount(const UObject* WorldContextObject, const UStaticMesh* Mesh, UE::Math::TVector<double>* CenterPosition, float Radius) { return NativeCall<__int64, const UObject*, const UStaticMesh*, UE::Math::TVector<double>*, float>(nullptr, "UGameplayStatics.GrassOverlappingSphereCount(UObject*,UStaticMesh*,UE::Math::TVector<double>,float)", WorldContextObject, Mesh, CenterPosition, Radius); }
	static bool DeprojectScreenToWorld(const APlayerController* Player, const UE::Math::TVector2<double>* ScreenPosition, UE::Math::TVector<double>* WorldPosition, UE::Math::TVector<double>* WorldDirection) { return NativeCall<bool, const APlayerController*, const UE::Math::TVector2<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UGameplayStatics.DeprojectScreenToWorld(APlayerController*,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Player, ScreenPosition, WorldPosition, WorldDirection); }
// 	static bool DeprojectSceneCaptureToWorld(const ASceneCapture2D* SceneCapture2D, const UE::Math::TVector2<double>* TargetUV, UE::Math::TVector<double>* WorldPosition, UE::Math::TVector<double>* WorldDirection) { return NativeCall<bool, const ASceneCapture2D*, const UE::Math::TVector2<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UGameplayStatics.DeprojectSceneCaptureToWorld(ASceneCapture2D*,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", SceneCapture2D, TargetUV, WorldPosition, WorldDirection); }
// FUNCTION MISSING: UGameplayStatics.DeprojectSceneCaptureToWorld(ASceneCapture2D*,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)
	static bool ProjectWorldToScreen(const APlayerController* Player, const UE::Math::TVector<double>* WorldPosition, UE::Math::TVector2<double>* ScreenPosition, bool bPlayerViewportRelative) { return NativeCall<bool, const APlayerController*, const UE::Math::TVector<double>*, UE::Math::TVector2<double>*, bool>(nullptr, "UGameplayStatics.ProjectWorldToScreen(APlayerController*,UE::Math::TVector<double>&,UE::Math::TVector2<double>&,bool)", Player, WorldPosition, ScreenPosition, bPlayerViewportRelative); }
	static void CalculateViewProjectionMatricesFromMinimalView(const FMinimalViewInfo* MinimalViewInfo, const TOptional<UE::Math::TMatrix<double> >* CustomProjectionMatrix, UE::Math::TMatrix<double>* OutViewMatrix, UE::Math::TMatrix<double>* OutProjectionMatrix, UE::Math::TMatrix<double>* OutViewProjectionMatrix) { NativeCall<void, const FMinimalViewInfo*, const TOptional<UE::Math::TMatrix<double> >*, UE::Math::TMatrix<double>*, UE::Math::TMatrix<double>*, UE::Math::TMatrix<double>*>(nullptr, "UGameplayStatics.CalculateViewProjectionMatricesFromMinimalView(FMinimalViewInfo&,TOptional<UE::Math::TMatrix<double>>&,UE::Math::TMatrix<double>&,UE::Math::TMatrix<double>&,UE::Math::TMatrix<double>&)", MinimalViewInfo, CustomProjectionMatrix, OutViewMatrix, OutProjectionMatrix, OutViewProjectionMatrix); }
	static bool GrabOption(FString* Options, FString* Result) { return NativeCall<bool, FString*, FString*>(nullptr, "UGameplayStatics.GrabOption(FString&,FString&)", Options, Result); }
	static void GetKeyValue(const FString* Pair, FString* Key, FString* Value) { NativeCall<void, const FString*, FString*, FString*>(nullptr, "UGameplayStatics.GetKeyValue(FString&,FString&,FString&)", Pair, Key, Value); }
	static FString* ParseOption(FString* result, FString* Options, const FString* Key) { return NativeCall<FString*, FString*, FString*, const FString*>(nullptr, "UGameplayStatics.ParseOption(FString,FString&)", result, Options, Key); }
	static bool HasOption(FString* Options, const FString* Key) { return NativeCall<bool, FString*, const FString*>(nullptr, "UGameplayStatics.HasOption(FString,FString&)", Options, Key); }
};

struct UKismetSystemLibrary
{
	// Functions

	//static FString* MakeLiteralString(FString* result, FString* Value) { return NativeCall<FString*, FString*, FString*>(nullptr, "UKismetSystemLibrary.MakeLiteralString", result, Value); }
	//static FString* GetDisplayName(FString* result, UObject* Object) { return NativeCall<FString*, FString*, UObject*>(nullptr, "UKismetSystemLibrary.GetDisplayName", result, Object); }
	//static FString* GetClassDisplayName(FString* result, UClass* Class) { return NativeCall<FString*, FString*, UClass*>(nullptr, "UKismetSystemLibrary.GetClassDisplayName", result, Class); }
	//static FString* GetEngineVersion(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetEngineVersion", result); }
	//static FString* GetGameName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetGameName", result); }
	//static FString* GetPlatformUserName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetPlatformUserName", result); }
	//static bool DoesImplementInterface(UObject* TestObject, TSubclassOf<UInterface> Interface) { return NativeCall<bool, UObject*, TSubclassOf<UInterface>>(nullptr, "UKismetSystemLibrary.DoesImplementInterface", TestObject, Interface); }
// 	static FString* GetUniqueDeviceId(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetUniqueDeviceId", result); }
// FUNCTION MISSING: UKismetSystemLibrary.GetUniqueDeviceId
	//static FText* MakeLiteralText(FText* result, FText Value) { return NativeCall<FText*, FText*, FText>(nullptr, "UKismetSystemLibrary.MakeLiteralText", result, Value); }
	//static void QuitGame(UObject* WorldContextObject, APlayerController* SpecificPlayer, TEnumAsByte<enum EQuitPreference::Type> QuitPreference) { NativeCall<void, UObject*, APlayerController*, TEnumAsByte<enum EQuitPreference::Type>>(nullptr, "UKismetSystemLibrary.QuitGame", WorldContextObject, SpecificPlayer, QuitPreference); }
// 	static void K2_SetTimer(UObject* Object, FString FunctionName, float Time, bool bLooping) { NativeCall<void, UObject*, FString, float, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimer(UObject*,FString,float,bool,float,float)", Object, FunctionName, Time, bLooping); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_SetTimer(UObject*,FString,float,bool,float,float)
// 	static void K2_SetTimerForNextTick(UObject* Object, FString FunctionName, bool bLooping) { NativeCall<void, UObject*, FString, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTick(UObject*,FString,bool)", Object, FunctionName, bLooping); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_SetTimerForNextTick(UObject*,FString,bool)
	static void K2_SetTimerDelegate(FBlueprintTimerDynamicDelegate Delegate, float Time, bool bLooping) { NativeCall<void, FBlueprintTimerDynamicDelegate, float, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerDelegate(FTimerDynamicDelegate,float,bool,bool,float,float)", Delegate, Time, bLooping); }
	static void K2_SetTimerForNextTickDelegate(FBlueprintTimerDynamicDelegate Delegate, bool bLooping) { NativeCall<void, FBlueprintTimerDynamicDelegate, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTickDelegate(FBlueprintTimerDynamicDelegate,bool)", Delegate, bLooping); }
// 	static void K2_ClearTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_ClearTimer(UObject*,FString)", Object, FunctionName); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_ClearTimer(UObject*,FString)
// 	static void K2_PauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_PauseTimer(UObject*,FString)", Object, FunctionName); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_PauseTimer(UObject*,FString)
// 	static void K2_UnPauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_UnPauseTimer(UObject*,FString)", Object, FunctionName); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_UnPauseTimer(UObject*,FString)
// 	static bool K2_IsTimerActive(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_IsTimerActive(UObject*,FString)", Object, FunctionName); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_IsTimerActive(UObject*,FString)
// 	static bool K2_IsTimerPaused(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_IsTimerPaused(UObject*,FString)", Object, FunctionName); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_IsTimerPaused(UObject*,FString)
// 	static bool K2_TimerExists(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_TimerExists(UObject*,FString)", Object, FunctionName); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_TimerExists(UObject*,FString)
// 	static float K2_GetTimerElapsedTime(UObject* Object, FString FunctionName) { return NativeCall<float, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_GetTimerElapsedTime(UObject*,FString)", Object, FunctionName); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_GetTimerElapsedTime(UObject*,FString)
// 	static float K2_GetTimerRemainingTime(UObject* Object, FString FunctionName) { return NativeCall<float, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_GetTimerRemainingTime(UObject*,FString)", Object, FunctionName); }
// FUNCTION MISSING: UKismetSystemLibrary.K2_GetTimerRemainingTime(UObject*,FString)
	//static void SetClassPropertyByName(UObject* Object, FName PropertyName, TSubclassOf<UObject> Value) { NativeCall<void, UObject*, FName, TSubclassOf<UObject>>(nullptr, "UKismetSystemLibrary.SetClassPropertyByName", Object, PropertyName, Value); }
	//static void SetVectorPropertyByName(UObject* Object, FName PropertyName, FVector* Value) { NativeCall<void, UObject*, FName, FVector*>(nullptr, "UKismetSystemLibrary.SetVectorPropertyByName", Object, PropertyName, Value); }
	//static void SetRotatorPropertyByName(UObject* Object, FName PropertyName, FRotator* Value) { NativeCall<void, UObject*, FName, FRotator*>(nullptr, "UKismetSystemLibrary.SetRotatorPropertyByName", Object, PropertyName, Value); }
	//static void SetLinearColorPropertyByName(UObject* Object, FName PropertyName, FLinearColor* Value) { NativeCall<void, UObject*, FName, FLinearColor*>(nullptr, "UKismetSystemLibrary.SetLinearColorPropertyByName", Object, PropertyName, Value); }
	//static void SetTransformPropertyByName(UObject* Object, FName PropertyName, FTransform* Value) { NativeCall<void, UObject*, FName, FTransform*>(nullptr, "UKismetSystemLibrary.SetTransformPropertyByName", Object, PropertyName, Value); }
	static void GetActorListFromComponentList(TArray<UPrimitiveComponent*>* ComponentList, UClass* ActorClassFilter, TArray<AActor*>* OutActorList) { NativeCall<void, TArray<UPrimitiveComponent*>*, UClass*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.GetActorListFromComponentList(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&)", ComponentList, ActorClassFilter, OutActorList); }
	static bool SphereOverlapActors(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapActors(UObject*,UE::Math::TVector<double>,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, SpherePos, SphereRadius, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool SphereOverlapActorsSimple(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TEnumAsByte<enum EObjectTypeQuery> ObjectType, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, TEnumAsByte<enum EObjectTypeQuery>, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapActorsSimple(UObject*,UE::Math::TVector<double>,float,TEnumAsByte<EObjectTypeQuery>,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, SpherePos, SphereRadius, ObjectType, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool SphereOverlapComponents_NEW(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapComponents_NEW(UObject*,UE::Math::TVector<double>,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", WorldContextObject, SpherePos, SphereRadius, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	//static bool BoxOverlapActors_NEW(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.BoxOverlapActors_NEW", WorldContextObject, BoxPos, BoxExtent, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool BoxOverlapComponents(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.BoxOverlapComponents(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", WorldContextObject, BoxPos, BoxExtent, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool CapsuleOverlapActors(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.CapsuleOverlapActors(UObject*,UE::Math::TVector<double>,float,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, CapsulePos, Radius, HalfHeight, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool CapsuleOverlapComponents(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.CapsuleOverlapComponents(UObject*,UE::Math::TVector<double>,float,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", WorldContextObject, CapsulePos, Radius, HalfHeight, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	//static bool ComponentOverlapActors_NEW(UPrimitiveComponent* Component, FTransform* ComponentTransform, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UPrimitiveComponent*, FTransform*, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.ComponentOverlapActors_NEW", Component, ComponentTransform, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool ComponentOverlapComponents(UPrimitiveComponent* Component, FTransform* ComponentTransform, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UPrimitiveComponent*, FTransform*, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.ComponentOverlapComponents(UPrimitiveComponent*,UE::Math::TTransform<double>&,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", Component, ComponentTransform, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool BoxTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceSingle(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,ETraceTypeQuery,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, HalfSize, Orientation, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool BoxTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceMulti(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,ETraceTypeQuery,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, HalfSize, Orientation, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool LineTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.LineTraceSingleForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool LineTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.LineTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool SphereTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.SphereTraceSingleForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, Radius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool SphereTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.SphereTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, Radius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool BoxTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceSingleForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, HalfSize, Orientation, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool BoxTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, HalfSize, Orientation, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool CapsuleTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.CapsuleTraceSingleForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, Radius, HalfHeight, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool CapsuleTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.CapsuleTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", WorldContextObject, Start, End, Radius, HalfHeight, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	//static void DrawDebugFrustum(UObject* WorldContextObject, FTransform* FrustumTransform, FLinearColor FrustumColor, float Duration) { NativeCall<void, UObject*, FTransform*, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugFrustum", WorldContextObject, FrustumTransform, FrustumColor, Duration); }
	//static void DrawDebugFloatHistoryLocation(UObject* WorldContextObject, FDebugFloatHistory* FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float LifeTime) { NativeCall<void, UObject*, FDebugFloatHistory*, FVector, FVector2D, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugFloatHistoryLocation", WorldContextObject, FloatHistory, DrawLocation, DrawSize, DrawColor, LifeTime); }
	static FDebugFloatHistory* AddFloatHistorySample(FDebugFloatHistory* result, float Value, FDebugFloatHistory* FloatHistory) { return NativeCall<FDebugFloatHistory*, FDebugFloatHistory*, float, FDebugFloatHistory*>(nullptr, "UKismetSystemLibrary.AddFloatHistorySample(float,FDebugFloatHistory&)", result, Value, FloatHistory); }
	//static void GetActorBounds(AActor* Actor, FVector* Origin, FVector* BoxExtent) { NativeCall<void, AActor*, FVector*, FVector*>(nullptr, "UKismetSystemLibrary.GetActorBounds", Actor, Origin, BoxExtent); }
	//static void Delay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, float, FLatentActionInfo>(nullptr, "UKismetSystemLibrary.Delay", WorldContextObject, Duration, LatentInfo); }
	//static void RetriggerableDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, float, FLatentActionInfo>(nullptr, "UKismetSystemLibrary.RetriggerableDelay", WorldContextObject, Duration, LatentInfo); }
	//static void MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, TEnumAsByte<enum EMoveComponentAction::Type> MoveAction, FLatentActionInfo LatentInfo, bool bSweep) { NativeCall<void, USceneComponent*, FVector, FRotator, bool, bool, float, TEnumAsByte<enum EMoveComponentAction::Type>, FLatentActionInfo, bool>(nullptr, "UKismetSystemLibrary.MoveComponentTo", Component, TargetRelativeLocation, TargetRelativeRotation, bEaseOut, bEaseIn, OverTime, MoveAction, LatentInfo, bSweep); }
	//static int GetRenderingDetailMode() { return NativeCall<int>(nullptr, "UKismetSystemLibrary.GetRenderingDetailMode"); }
	//static int GetRenderingMaterialQualityLevel() { return NativeCall<int>(nullptr, "UKismetSystemLibrary.GetRenderingMaterialQualityLevel"); }
	//static void ShowPlatformSpecificAchievementsScreen(APlayerController* SpecificPlayer) { NativeCall<void, APlayerController*>(nullptr, "UKismetSystemLibrary.ShowPlatformSpecificAchievementsScreen", SpecificPlayer); }
	static void StaticRegisterNativesUKismetSystemLibrary() { NativeCall<void>(nullptr, "UKismetSystemLibrary.StaticRegisterNativesUKismetSystemLibrary()"); }
	
	static FSoftClassPath MakeSoftClassPath(const FString& PathString) { return NativeCall<FSoftClassPath, const FString&>(nullptr, "UKismetSystemLibrary.MakeSoftClassPath(FString&)", PathString); }

};

struct FStringHash
{
	std::size_t operator()(const FString& str) const
	{
		const std::string stdString(TCHAR_TO_UTF8(*str));
		return std::hash<std::string>{}(stdString);
	}
};

struct FStringEqual
{
	bool operator()(const FString& lhs, const FString& rhs) const
	{
		return lhs.Equals(rhs);
	}
};

struct BattleyePlayerInfo
{
	// Fields

	unsigned __int64& iPIDField() { return *GetNativePointerField<unsigned __int64*>(this, "BattleyePlayerInfo.iPID"); }
	TSharedPtr<FUniqueNetId const>& UniqueIdField() { return *GetNativePointerField<TSharedPtr<FUniqueNetId const>*>(this, "BattleyePlayerInfo.UniqueId"); }
	BattleyePlayerStatus& StatusField() { return *GetNativePointerField<BattleyePlayerStatus*>(this, "BattleyePlayerInfo.Status"); }
	TWeakObjectPtr<UNetConnection>& ClientConnectionField() { return *GetNativePointerField<TWeakObjectPtr<UNetConnection>*>(this, "BattleyePlayerInfo.ClientConnection"); }

	// Bitfields


	// Functions

};

struct FPaintingKeyValue
{
	// Fields

	int Key;
	int Value;

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPaintingKeyValue.StaticStruct()"); }
};

struct FARKDinoData
{
	TArray<unsigned char> DinoData;
	TArray<FPaintingKeyValue> UniquePaintingIdMap;
	TArray<FPaintingKeyValue> PaintingRevisionMap;
	FString DinoNameInMap;
	FString DinoName;
	UClass* DinoClass;
	bool bNetInfoFromClient;

	// Fields

	UClass*& DinoClassField() { return *GetNativePointerField<UClass**>(this, "FARKDinoData.DinoClass"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& DinoDataField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FARKDinoData.DinoData"); }
	FString& DinoNameInMapField() { return *GetNativePointerField<FString*>(this, "FARKDinoData.DinoNameInMap"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKDinoData.DinoName"); }
	bool& bNetInfoFromClientField() { return *GetNativePointerField<bool*>(this, "FARKDinoData.bNetInfoFromClient"); }
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >& UniquePaintingIdMapField() { return *GetNativePointerField<TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >*>(this, "FARKDinoData.UniquePaintingIdMap"); }
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >& PaintingRevisionMapField() { return *GetNativePointerField<TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >*>(this, "FARKDinoData.PaintingRevisionMap"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FARKDinoData.StaticStruct()"); }
	bool NetSerialize(FArchive* Ar, UPackageMap* Map, bool& bOutSuccess) { return NativeCall<bool, FArchive*, UPackageMap*, bool&>(this, "FARKDinoData.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
};

struct FARKTributeData
{
	// Fields

	FGuid& IDField() { return *GetNativePointerField<FGuid*>(this, "FARKTributeData.ID"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& DataBytesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FARKTributeData.DataBytes"); }
	FString& DataClassNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.DataClassName"); }
	FString& DataTagNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.DataTagName"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.Name"); }
	TArray<FString, TSizedDefaultAllocator<32> >& DataStatsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FARKTributeData.DataStats"); }
	long double& LastReceiveDataTimeField() { return *GetNativePointerField<long double*>(this, "FARKTributeData.LastReceiveDataTime"); }
	unsigned int& DataID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeData.DataID1"); }
	unsigned int& DataID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeData.DataID2"); }

	// Bitfields
	

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FARKTributeData.StaticStruct()"); }
};

struct FARKTributeDino
{
	// Fields

	TSoftClassPtr<APrimalDinoCharacter>& DinoClassPtrField() { return *GetNativePointerField<TSoftClassPtr<APrimalDinoCharacter>*>(this, "FARKTributeDino.DinoClassPtr"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& DinoDataField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FARKTributeDino.DinoData"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeDino.DinoName"); }
	FString& DinoNameInMapField() { return *GetNativePointerField<FString*>(this, "FARKTributeDino.DinoNameInMap"); }
	FieldArray<FString, 12> DinoStatsField() { return { this, "FARKTributeDino.DinoStats" }; }
	float& DinoExperiencePointsField() { return *GetNativePointerField<float*>(this, "FARKTributeDino.DinoExperiencePoints"); }
	float& VersionField() { return *GetNativePointerField<float*>(this, "FARKTributeDino.Version"); }
	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDino.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDino.DinoID2"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FARKTributeDino.StaticStruct()"); }
	FARKTributeDino* operator=(const FARKTributeDino* __that) { return NativeCall<FARKTributeDino*, const FARKTributeDino*>(this, "FARKTributeDino.operator=(FARKTributeDino&)", __that); }
	FARKTributeDino* operator=(FARKTributeDino* __that) { return NativeCall<FARKTributeDino*, FARKTributeDino*>(this, "FARKTributeDino.operator=(FARKTributeDino&)", __that); }
};

struct FARKTributeDinoListing
{
	// Fields

	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeDinoListing.DinoName"); }
	FieldArray<FString, 12> DinoStatsField() { return { this, "FARKTributeDinoListing.DinoStats" }; }
	float& DinoExperiencePointsField() { return *GetNativePointerField<float*>(this, "FARKTributeDinoListing.DinoExperiencePoints"); }
	UClass*& DinoClassField() { return *GetNativePointerField<UClass**>(this, "FARKTributeDinoListing.DinoClass"); }
	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.DinoID2"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.ExpirationTimeUTC"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FARKTributeDinoListing.StaticStruct()"); }
};

struct FAddressInfoResult
{
	// Fields

	FString& QueryHostNameField() { return *GetNativePointerField<FString*>(this, "FAddressInfoResult.QueryHostName"); }
	FString& QueryServiceNameField() { return *GetNativePointerField<FString*>(this, "FAddressInfoResult.QueryServiceName"); }
	FString& CanonicalNameResultField() { return *GetNativePointerField<FString*>(this, "FAddressInfoResult.CanonicalNameResult"); }
	ESocketErrors& ReturnCodeField() { return *GetNativePointerField<ESocketErrors*>(this, "FAddressInfoResult.ReturnCode"); }
	TArray<FAddressInfoResultData, TSizedDefaultAllocator<32> >& ResultsField() { return *GetNativePointerField<TArray<FAddressInfoResultData, TSizedDefaultAllocator<32> >*>(this, "FAddressInfoResult.Results"); }

	// Bitfields


	// Functions

};

struct FAddressInfoResultData
{
	// Fields

	FieldArray<char, 1> AddressProtocolField() { return { this, "FAddressInfoResultData.AddressProtocol" }; }
	FName& AddressProtocolNameField() { return *GetNativePointerField<FName*>(this, "FAddressInfoResultData.AddressProtocolName"); }
	ESocketType& SocketConfigurationField() { return *GetNativePointerField<ESocketType*>(this, "FAddressInfoResultData.SocketConfiguration"); }
	unsigned __int64& AddressLenField() { return *GetNativePointerField<unsigned __int64*>(this, "FAddressInfoResultData.AddressLen"); }
	//TSharedRef<FInternetAddr, 1>& AddressField() { return *GetNativePointerField<TSharedRef<FInternetAddr, 1>*>(this, "FAddressInfoResultData.Address"); }

	// Bitfields


	// Functions

};

struct FAdminPlayerDataInfo
{
	// Fields

	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.PlayerName"); }
	FString& PlayerSteamNameField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.PlayerSteamName"); }
	FString& SteamIDField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.SteamID"); }
	__int64& LinkedPlayerIDField() { return *GetNativePointerField<__int64*>(this, "FAdminPlayerDataInfo.LinkedPlayerID"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FAdminPlayerDataInfo.StaticStruct()"); }
};

struct FAggroEntry
{
	// Fields

	TWeakObjectPtr<AActor const >& AttackerField() { return *GetNativePointerField<TWeakObjectPtr<AActor const >*>(this, "FAggroEntry.Attacker"); }
	float& AggroFactorField() { return *GetNativePointerField<float*>(this, "FAggroEntry.AggroFactor"); }
	long double& LastAggroHitTimeField() { return *GetNativePointerField<long double*>(this, "FAggroEntry.LastAggroHitTime"); }

	// Bitfields


	// Functions

};

struct FAliveNameAndLocation
{
	// Fields

	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAliveNameAndLocation.PlayerName"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FAliveNameAndLocation.TribeName"); }
	unsigned int& TargetingTeamField() { return *GetNativePointerField<unsigned int*>(this, "FAliveNameAndLocation.TargetingTeam"); }
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAliveNameAndLocation.PlayerID"); }
	UE::Math::TVector<double>& LocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FAliveNameAndLocation.Location"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FAliveNameAndLocation.StaticStruct()"); }
};

struct FAlivePlayerDataInfo
{
	// Fields

	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.PlayerName"); }
	FString& PlayerSteamNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.PlayerSteamName"); }
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAlivePlayerDataInfo.PlayerID"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.TribeName"); }
	unsigned __int64& TargetingTeamIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAlivePlayerDataInfo.TargetingTeamID"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FAlivePlayerDataInfo.StaticStruct()"); }
};

struct FBPNetExecParams
{
	// Fields

	int& IntParam1Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam1"); }
	int& IntParam2Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam2"); }
	int& IntParam3Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam3"); }
	TArray<int, TSizedDefaultAllocator<32> >& IntArrayParam1Field() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FBPNetExecParams.IntArrayParam1"); }
	float& FloatParam1Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam1"); }
	float& FloatParam2Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam2"); }
	float& FloatParam3Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam3"); }
	TArray<float, TSizedDefaultAllocator<32> >& FloatArrayParam1Field() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FBPNetExecParams.FloatArrayParam1"); }
	TObjectPtr<UObject>& ObjParam1Field() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FBPNetExecParams.ObjParam1"); }
	TObjectPtr<UObject>& ObjParam2Field() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FBPNetExecParams.ObjParam2"); }
	TObjectPtr<UObject>& ObjParam3Field() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FBPNetExecParams.ObjParam3"); }
	FString& StringParam1Field() { return *GetNativePointerField<FString*>(this, "FBPNetExecParams.StringParam1"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FBPNetExecParams.StaticStruct()"); }
};

//struct FDamageEvent_vtbl
//{
//	//void(__fastcall* ~FDamageEvent)(FDamageEvent* _this);
//	int(__fastcall* GetTypeID)(FDamageEvent* _this);
//	bool(__fastcall* IsOfType)(FDamageEvent* _this, int);
//	void(__fastcall* GetBestHitInfo)(FDamageEvent* _this, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*);
//};
//
//struct FDamageEvent
//{
//	FDamageEvent_vtbl* vfptr;
//	float Impulse;
//	float OriginalDamage;
//	int InstanceBodyIndex;
//	int TypeIndex;
//	TSubclassOf<UDamageType> DamageTypeClass;
//};


//struct FDamageEvent
//{
//	// Fields
//
//	//FDamageEvent_vtbl& vftableField() { return *GetNativePointerField<FDamageEvent_vtbl*>(this, "FDamageEvent.__vftable"); }
//	//FDamageEvent_vtbl* vftableField() { return *((FDamageEvent_vtbl**)this); }
//	float& ImpulseField() { return *GetNativePointerField<float*>(this, "FDamageEvent.Impulse"); }
//	float& OriginalDamageField() { return *GetNativePointerField<float*>(this, "FDamageEvent.OriginalDamage"); }
//	int& InstanceBodyIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.InstanceBodyIndex"); }
//	int& TypeIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.TypeIndex"); }
//	TSubclassOf<UDamageType>& DamageTypeClassField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamageEvent.DamageTypeClass"); }
//
//	// Bitfields
//
//
//	// Functions
//
//	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDamageEvent.StaticStruct()"); }
//	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>* OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*>(this, "FDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
//};


struct FDamageEvent
{
	// Fields
	struct FDamageEvent_vtbl* __vftable /*VFT*/;
	float Impulse;
	float OriginalDamage;
	int InstanceBodyIndex;
	int TypeIndex;
	TSubclassOf<UDamageType> DamageTypeClass;

	float& ImpulseField() { return *GetNativePointerField<float*>(this, "FDamageEvent.Impulse"); }
	float& OriginalDamageField() { return *GetNativePointerField<float*>(this, "FDamageEvent.OriginalDamage"); }
	int& InstanceBodyIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.InstanceBodyIndex"); }
	int& TypeIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.TypeIndex"); }
	TSubclassOf<UDamageType>& DamageTypeClassField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamageEvent.DamageTypeClass"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDamageEvent.StaticStruct()"); }
	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>& OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>&>(this, "FDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
	int GetTypeID()const { return NativeCall<int>(this, "FDamageEvent.GetTypeID()"); }
	bool IsOfType(int InID) const { return NativeCall<bool, int>(this, "FDamageEvent.IsOfType(int)", InID); }

};

struct /*VFT*/ FDamageEvent_vtbl
{
	char pad_0[8];
	int(__fastcall* GetTypeID)(FDamageEvent*);
	bool(__fastcall* IsOfType)(FDamageEvent*, int);
	void(__fastcall* GetBestHitInfo)(FDamageEvent*, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*);
};

struct FDamageHarvestingEntry
{
	// Fields

	float& DamageMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageMultiplier"); }
	float& HarvestQuantityMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.HarvestQuantityMultiplier"); }
	float& DamageHarvestAdditionalEffectivenessField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageHarvestAdditionalEffectiveness"); }
	float& DamageDurabilityConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageDurabilityConsumptionMultiplier"); }
	TSubclassOf<UDamageType>& DamageTypeParentField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamageHarvestingEntry.DamageTypeParent"); }
	TSubclassOf<AActor>& HarvestDamageFXOverrideField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "FDamageHarvestingEntry.HarvestDamageFXOverride"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bAllowUnderwaterHarvesting() { return { this, "FDamageHarvestingEntry.bAllowUnderwaterHarvesting" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDamageHarvestingEntry.StaticStruct()"); }
};

struct FDamagePrimalCharacterStatusValueModifier
{
	// Fields

	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& ValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FDamagePrimalCharacterStatusValueModifier.ValueType"); }
	float& LimitExistingModifierDescriptionToMaxAmountField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.LimitExistingModifierDescriptionToMaxAmount"); }
	int& UseAbsoluteDamageAmountField() { return *GetNativePointerField<int*>(this, "FDamagePrimalCharacterStatusValueModifier.UseAbsoluteDamageAmount"); }
	float& DamageMultiplierAmountToAddField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.DamageMultiplierAmountToAdd"); }
	float& SpeedToAddField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.SpeedToAdd"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FDamagePrimalCharacterStatusValueModifier.StatusValueModifierDescriptionIndex"); }
	float& PercentualDamageField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.PercentualDamage"); }
	TSubclassOf<UDamageType>& ScaleValueByCharacterDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamagePrimalCharacterStatusValueModifier.ScaleValueByCharacterDamageType"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bSpeedToAddInSeconds() { return { this, "FDamagePrimalCharacterStatusValueModifier.bSpeedToAddInSeconds" }; }
	BitFieldValue<bool, unsigned __int32> bContinueOnUnchangedValue() { return { this, "FDamagePrimalCharacterStatusValueModifier.bContinueOnUnchangedValue" }; }
	BitFieldValue<bool, unsigned __int32> bIgnorePawnDamageAdjusters() { return { this, "FDamagePrimalCharacterStatusValueModifier.bIgnorePawnDamageAdjusters" }; }
	BitFieldValue<bool, unsigned __int32> bResetExistingModifierDescriptionIndex() { return { this, "FDamagePrimalCharacterStatusValueModifier.bResetExistingModifierDescriptionIndex" }; }
	BitFieldValue<bool, unsigned __int32> bSetValue() { return { this, "FDamagePrimalCharacterStatusValueModifier.bSetValue" }; }
	BitFieldValue<bool, unsigned __int32> bSetAdditionalValue() { return { this, "FDamagePrimalCharacterStatusValueModifier.bSetAdditionalValue" }; }
	BitFieldValue<bool, unsigned __int32> bUsePercentualDamage() { return { this, "FDamagePrimalCharacterStatusValueModifier.bUsePercentualDamage" }; }
	BitFieldValue<bool, unsigned __int32> bMakeUntameable() { return { this, "FDamagePrimalCharacterStatusValueModifier.bMakeUntameable" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDamagePrimalCharacterStatusValueModifier.StaticStruct()"); }
};

struct FDamageTypeAdjuster
{
	// Fields

	TSoftClassPtr<UDamageType>& DamageTypeClassField() { return *GetNativePointerField<TSoftClassPtr<UDamageType>*>(this, "FDamageTypeAdjuster.DamageTypeClass"); }
	float& DamageMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageTypeAdjuster.DamageMultiplier"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIgnoreMultiplierIfWildDinoAttacker() { return { this, "FDamageTypeAdjuster.bIgnoreMultiplierIfWildDinoAttacker" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMultiplierIfTamedDinoAttacker() { return { this, "FDamageTypeAdjuster.bIgnoreMultiplierIfTamedDinoAttacker" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseMultiplierIfWildDinoAttacker() { return { this, "FDamageTypeAdjuster.bOnlyUseMultiplierIfWildDinoAttacker" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseMultiplierIfTamedDinoAttacker() { return { this, "FDamageTypeAdjuster.bOnlyUseMultiplierIfTamedDinoAttacker" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseMultiplierIfTamed() { return { this, "FDamageTypeAdjuster.bOnlyUseMultiplierIfTamed" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDamageTypeAdjuster.StaticStruct()"); }
};

struct FDinoAbilities
{
	// Fields

	FName& DinoTagField() { return *GetNativePointerField<FName*>(this, "FDinoAbilities.DinoTag"); }
	TArray<FDinoAbilityInfo, TSizedDefaultAllocator<32> >& AbilityInfosField() { return *GetNativePointerField<TArray<FDinoAbilityInfo, TSizedDefaultAllocator<32> >*>(this, "FDinoAbilities.AbilityInfos"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoAbilities.StaticStruct()"); }
};

struct FDinoAbilityInfo
{
	// Fields

	FName& InputActionField() { return *GetNativePointerField<FName*>(this, "FDinoAbilityInfo.InputAction"); }
	FString& AbilityNameField() { return *GetNativePointerField<FString*>(this, "FDinoAbilityInfo.AbilityName"); }
	FString& AbilityDescriptionField() { return *GetNativePointerField<FString*>(this, "FDinoAbilityInfo.AbilityDescription"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoAbilityInfo.StaticStruct()"); }
};

struct FDinoAncestorsEntry
{
	// Native Fields
	
	FString MaleName;
	unsigned int MaleDinoID1;
	unsigned int MaleDinoID2;
	FString FemaleName;
	unsigned int FemaleDinoID1;
	unsigned int FemaleDinoID2;
	 
	
	// Fields

	FString& MaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntry.MaleName"); }
	unsigned int& MaleDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoAncestorsEntry.MaleDinoID1"); }
	unsigned int& MaleDinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoAncestorsEntry.MaleDinoID2"); }
	FString& FemaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntry.FemaleName"); }
	unsigned int& FemaleDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoAncestorsEntry.FemaleDinoID1"); }
	unsigned int& FemaleDinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoAncestorsEntry.FemaleDinoID2"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoAncestorsEntry.StaticStruct()"); }
};

struct FDinoAncestorsEntryBlueprint
{
	// Fields

	FString& MaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntryBlueprint.MaleName"); }
	int& MaleDinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.MaleDinoID1"); }
	int& MaleDinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.MaleDinoID2"); }
	FString& FemaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntryBlueprint.FemaleName"); }
	int& FemaleDinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.FemaleDinoID1"); }
	int& FemaleDinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.FemaleDinoID2"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoAncestorsEntryBlueprint.StaticStruct()"); }
};

struct FDinoAttackInfo
{
	// Fields

	FName& AttackNameField() { return *GetNativePointerField<FName*>(this, "FDinoAttackInfo.AttackName"); }
	float& AttackWeightField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackWeight"); }
	float& AttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRange"); }
	float& MinAttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MinAttackRange"); }
	float& ActivateAttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.ActivateAttackRange"); }
	float& AttackIntervalField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackInterval"); }
	TArray<int, TSizedDefaultAllocator<32> >& ChildStateIndexesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.ChildStateIndexes"); }
	float& AttackWithJumpChanceField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackWithJumpChance"); }
	long double& LastAttackTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.LastAttackTime"); }
	long double& RiderLastAttackTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.RiderLastAttackTime"); }
	float& AttackSelectionExpirationTimeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackSelectionExpirationTime"); }
	long double& AttackSelectionTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.AttackSelectionTime"); }
	float& AttackRotationRangeDegreesField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRotationRangeDegrees"); }
	float& AttackRotationGroundSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRotationGroundSpeedMultiplier"); }
	UE::Math::TRotator<double>& AttackRotationRateField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FDinoAttackInfo.AttackRotationRate"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MeleeSwingSocketsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.MeleeSwingSockets"); }
	FName& RangedSocketField() { return *GetNativePointerField<FName*>(this, "FDinoAttackInfo.RangedSocket"); }
	int& MeleeDamageAmountField() { return *GetNativePointerField<int*>(this, "FDinoAttackInfo.MeleeDamageAmount"); }
	float& MeleeDamageImpulseField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MeleeDamageImpulse"); }
	float& MeleeSwingRadiusField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MeleeSwingRadius"); }
	TSubclassOf<UDamageType>& MeleeDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDinoAttackInfo.MeleeDamageType"); }
	float& AttackOffsetField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackOffset"); }
	float& StaminaCostField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.StaminaCost"); }
	float& RiderAttackIntervalField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.RiderAttackInterval"); }
	float& DotProductCheckMinField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.DotProductCheckMin"); }
	float& DotProductCheckMaxField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.DotProductCheckMax"); }
	TArray<UAnimMontage*, TSizedDefaultAllocator<32> >& AttackAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.AttackAnimations"); }
	TArray<float, TSizedDefaultAllocator<32> >& AttackAnimationWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.AttackAnimationWeights"); }
	TArray<float, TSizedDefaultAllocator<32> >& AttackAnimationsTimeFromEndToConsiderFinishedField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.AttackAnimationsTimeFromEndToConsiderFinished"); }
	TSubclassOf<AShooterProjectile>& ProjectileClassField() { return *GetNativePointerField<TSubclassOf<AShooterProjectile>*>(this, "FDinoAttackInfo.ProjectileClass"); }
	TSubclassOf<UPrimalAIState>& AttackStateTypeClassField() { return *GetNativePointerField<TSubclassOf<UPrimalAIState>*>(this, "FDinoAttackInfo.AttackStateTypeClass"); }
	float& AttackRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRunningSpeedModifier"); }
	float& SwimmingAttackRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SwimmingAttackRunningSpeedModifier"); }
	float& SetAttackTargetTimeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SetAttackTargetTime"); }
	UPrimalAIState*& AttackStateTypeField() { return *GetNativePointerField<UPrimalAIState**>(this, "FDinoAttackInfo.AttackStateType"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& LastSocketPositionsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.LastSocketPositions"); }
	long double& LastProjectileSpawnTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.LastProjectileSpawnTime"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AttackAnimDamageImpactFXSocketNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FDinoAttackInfo.AttackAnimDamageImpactFXSocketNames"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHighQualityAttack() { return { this, "FDinoAttackInfo.bHighQualityAttack" }; }
	BitFieldValue<bool, unsigned __int32> bSkipUntamed() { return { this, "FDinoAttackInfo.bSkipUntamed" }; }
	BitFieldValue<bool, unsigned __int32> bSkipTamed() { return { this, "FDinoAttackInfo.bSkipTamed" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyOnWildDinos() { return { this, "FDinoAttackInfo.bOnlyOnWildDinos" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenEncumbered() { return { this, "FDinoAttackInfo.bPreventWhenEncumbered" }; }
	BitFieldValue<bool, unsigned __int32> bRidingOnlyAllowOnGround() { return { this, "FDinoAttackInfo.bRidingOnlyAllowOnGround" }; }
	BitFieldValue<bool, unsigned __int32> bRidingOnlyAllowWhileFlying() { return { this, "FDinoAttackInfo.bRidingOnlyAllowWhileFlying" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseWithPlayersOrRiders() { return { this, "FDinoAttackInfo.bOnlyUseWithPlayersOrRiders" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseWithPlayers() { return { this, "FDinoAttackInfo.bOnlyUseWithPlayers" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenSwimming() { return { this, "FDinoAttackInfo.bPreventWhenSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenInsufficientStamina() { return { this, "FDinoAttackInfo.bPreventWhenInsufficientStamina" }; }
	BitFieldValue<bool, unsigned __int32> bSkipOnFlyers() { return { this, "FDinoAttackInfo.bSkipOnFlyers" }; }
	BitFieldValue<bool, unsigned __int32> bSkipAI() { return { this, "FDinoAttackInfo.bSkipAI" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnFemale() { return { this, "FDinoAttackInfo.bPreventOnFemale" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnMale() { return { this, "FDinoAttackInfo.bPreventOnMale" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenDinoCarrying() { return { this, "FDinoAttackInfo.bPreventWhenDinoCarrying" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintCanRiderAttack() { return { this, "FDinoAttackInfo.bUseBlueprintCanRiderAttack" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresWalking() { return { this, "FDinoAttackInfo.bRequiresWalking" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresSwimming() { return { this, "FDinoAttackInfo.bRequiresSwimming" }; }
	BitFieldValue<bool, unsigned __int32> AttackStatusStarted() { return { this, "FDinoAttackInfo.AttackStatusStarted" }; }
	BitFieldValue<bool, unsigned __int32> bAttackStopsMovement() { return { this, "FDinoAttackInfo.bAttackStopsMovement" }; }
	BitFieldValue<bool, unsigned __int32> bAttackStopsMovementAllowFalling() { return { this, "FDinoAttackInfo.bAttackStopsMovementAllowFalling" }; }
	BitFieldValue<bool, unsigned __int32> bAttackWithJump() { return { this, "FDinoAttackInfo.bAttackWithJump" }; }
	BitFieldValue<bool, unsigned __int32> bLocationBasedAttack() { return { this, "FDinoAttackInfo.bLocationBasedAttack" }; }
	BitFieldValue<bool, unsigned __int32> bDropCarriedCharacter() { return { this, "FDinoAttackInfo.bDropCarriedCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bCancelAndDropIfCarriedCharacter() { return { this, "FDinoAttackInfo.bCancelAndDropIfCarriedCharacter" }; }
	BitFieldValue<bool, unsigned __int32> bPreventAttackWhileRunning() { return { this, "FDinoAttackInfo.bPreventAttackWhileRunning" }; }
	BitFieldValue<bool, unsigned __int32> ForceUpdateInRange() { return { this, "FDinoAttackInfo.ForceUpdateInRange" }; }
	BitFieldValue<bool, unsigned __int32> ForceUpdateMeshSelf() { return { this, "FDinoAttackInfo.ForceUpdateMeshSelf" }; }
	BitFieldValue<bool, unsigned __int32> bUseSecondaryAnimationInAir() { return { this, "FDinoAttackInfo.bUseSecondaryAnimationInAir" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintCanAttack() { return { this, "FDinoAttackInfo.bUseBlueprintCanAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseBlueprintAdjustOutputDamage() { return { this, "FDinoAttackInfo.bUseBlueprintAdjustOutputDamage" }; }
	BitFieldValue<bool, unsigned __int32> bDisableRunningWhenAttacking() { return { this, "FDinoAttackInfo.bDisableRunningWhenAttacking" }; }
	BitFieldValue<bool, unsigned __int32> bKeepExecutingWhenAcquiringTarget() { return { this, "FDinoAttackInfo.bKeepExecutingWhenAcquiringTarget" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWithRider() { return { this, "FDinoAttackInfo.bPreventWithRider" }; }
	BitFieldValue<bool, unsigned __int32> bAIForceAttackDotProductCheck() { return { this, "FDinoAttackInfo.bAIForceAttackDotProductCheck" }; }
	BitFieldValue<bool, unsigned __int32> bInstantlyHarvestCorpse() { return { this, "FDinoAttackInfo.bInstantlyHarvestCorpse" }; }
	BitFieldValue<bool, unsigned __int32> bAddPawnVelocityToProjectile() { return { this, "FDinoAttackInfo.bAddPawnVelocityToProjectile" }; }
	BitFieldValue<bool, unsigned __int32> bAttackStopsRotation() { return { this, "FDinoAttackInfo.bAttackStopsRotation" }; }
	BitFieldValue<bool, unsigned __int32> bTamedAISpecialAttack() { return { this, "FDinoAttackInfo.bTamedAISpecialAttack" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWhenCarryingExplosive() { return { this, "FDinoAttackInfo.bPreventWhenCarryingExplosive" }; }
	BitFieldValue<bool, unsigned __int32> bAllowWhenAnimationPreventsInput() { return { this, "FDinoAttackInfo.bAllowWhenAnimationPreventsInput" }; }
	BitFieldValue<bool, unsigned __int32> bRequireLineOfSight() { return { this, "FDinoAttackInfo.bRequireLineOfSight" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideGetAttackAnimationIndex() { return { this, "FDinoAttackInfo.bUseBPOverrideGetAttackAnimationIndex" }; }
	BitFieldValue<bool, unsigned __int32> bUseSecondaryAnimationWhenSwimming() { return { this, "FDinoAttackInfo.bUseSecondaryAnimationWhenSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bUseTertiaryAnimationWhenSwimming() { return { this, "FDinoAttackInfo.bUseTertiaryAnimationWhenSwimming" }; }
	BitFieldValue<bool, unsigned __int32> bHighQualityAttackOnlyPlayerOrTamed() { return { this, "FDinoAttackInfo.bHighQualityAttackOnlyPlayerOrTamed" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeTraceForHitBlockers() { return { this, "FDinoAttackInfo.bMeleeTraceForHitBlockers" }; }
	BitFieldValue<bool, unsigned __int32> bMeleeTraceForHitBlockersAddHeadsocket() { return { this, "FDinoAttackInfo.bMeleeTraceForHitBlockersAddHeadsocket" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreCrouchAttack() { return { this, "FDinoAttackInfo.bIgnoreCrouchAttack" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreResettingAttackIndexInTick() { return { this, "FDinoAttackInfo.bIgnoreResettingAttackIndexInTick" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSkippingAnimGraphDuringAttack() { return { this, "FDinoAttackInfo.bPreventSkippingAnimGraphDuringAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseClosestSocketsForDamageImpactFX() { return { this, "FDinoAttackInfo.bUseClosestSocketsForDamageImpactFX" }; }
	BitFieldValue<bool, unsigned __int32> bDisableAttackerDamageImpactFX() { return { this, "FDinoAttackInfo.bDisableAttackerDamageImpactFX" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoAttackInfo.StaticStruct()"); }
	FDinoAttackInfo* operator=(const FDinoAttackInfo* __that) { return NativeCall<FDinoAttackInfo*, const FDinoAttackInfo*>(this, "FDinoAttackInfo.operator=(FDinoAttackInfo&)", __that); }
	FDinoAttackInfo* operator=(FDinoAttackInfo* __that) { return NativeCall<FDinoAttackInfo*, FDinoAttackInfo*>(this, "FDinoAttackInfo.operator=(FDinoAttackInfo&)", __that); }
};

struct FDinoBabySetup
{
	// Fields

	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "FDinoBabySetup.DinoNameTag"); }
	//TArray<FBoneModifierRangeArray, TSizedDefaultAllocator<32> >& BabyBoneModifierRangesField() { return *GetNativePointerField<TArray<FBoneModifierRangeArray, TSizedDefaultAllocator<32> >*>(this, "FDinoBabySetup.BabyBoneModifierRanges"); }
	TArray<float, TSizedDefaultAllocator<32> >& WildRandomScaleRangeWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FDinoBabySetup.WildRandomScaleRangeWeights"); }
	//TArray<FRandValueRange, TSizedDefaultAllocator<32> >& WildRandomScaleRangesField() { return *GetNativePointerField<TArray<FRandValueRange, TSizedDefaultAllocator<32> >*>(this, "FDinoBabySetup.WildRandomScaleRanges"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoBabySetup.StaticStruct()"); }
};

struct FDinoBaseLevelWeightEntry
{
	float EntryWeight;
	float BaseLevelMinRange;
	float BaseLevelMaxRange;

	// Fields

	float& EntryWeightField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.EntryWeight"); }
	float& BaseLevelMinRangeField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.BaseLevelMinRange"); }
	float& BaseLevelMaxRangeField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.BaseLevelMaxRange"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoBaseLevelWeightEntry.StaticStruct()"); }
};

struct FDinoClassCount
{
	// Fields

	int& NumberofTamedClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofTamedClass"); }
	int& NumberofTamedBabyClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofTamedBabyClass"); }
	int& NumberofTamedFemalesClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofTamedFemalesClass"); }
	int& NumberofWildClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofWildClass"); }
	int& NumberofWildBabyClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofWildBabyClass"); }
	int& NumberofWildFemalesClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofWildFemalesClass"); }
	int& NumberofWildLatentSpawnsField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofWildLatentSpawns"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoClassCount.StaticStruct()"); }
};

struct FDinoClassCountStruct
{
	// Fields

	TSubclassOf<APrimalCharacter>& DinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalCharacter>*>(this, "FDinoClassCountStruct.DinoClass"); }
	int& NumberofTamedClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofTamedClass"); }
	int& NumberofTamedBabyClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofTamedBabyClass"); }
	int& NumberofTamedFemalesClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofTamedFemalesClass"); }
	int& NumberofWildClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofWildClass"); }
	int& NumberofWildBabyClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofWildBabyClass"); }
	int& NumberofWildFemalesClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofWildFemalesClass"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoClassCountStruct.StaticStruct()"); }
};

struct FDinoDownloadData
{
	// Fields

	unsigned int& AllowDownloadTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FDinoDownloadData.AllowDownloadTimeUTC"); }
	TSubclassOf<APrimalDinoCharacter>& UniqueDinoField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FDinoDownloadData.UniqueDino"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoDownloadData.StaticStruct()"); }
};

struct FDinoExtraDefaultItemList
{
	// Fields

	int& MinimumDinoLevelField() { return *GetNativePointerField<int*>(this, "FDinoExtraDefaultItemList.MinimumDinoLevel"); }
	float& ChanceToGiveField() { return *GetNativePointerField<float*>(this, "FDinoExtraDefaultItemList.ChanceToGive"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultItemsToGiveField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FDinoExtraDefaultItemList.DefaultItemsToGive"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoExtraDefaultItemList.StaticStruct()"); }
};

struct FDinoFoodEffectivenessMultipliers
{
	// Fields

	float& FoodEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.FoodEffectivenessMultiplier"); }
	float& HealthEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.HealthEffectivenessMultiplier"); }
	float& TorpidityEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.TorpidityEffectivenessMultiplier"); }
	float& AffinityEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.AffinityEffectivenessMultiplier"); }
	float& AffinityOverrideField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.AffinityOverride"); }
	float& StaminaEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.StaminaEffectivenessMultiplier"); }
	int& FoodItemCategoryField() { return *GetNativePointerField<int*>(this, "FDinoFoodEffectivenessMultipliers.FoodItemCategory"); }
	TSubclassOf<UPrimalItem>& FoodItemParentField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FDinoFoodEffectivenessMultipliers.FoodItemParent"); }
	float& UntamedFoodConsumptionPriorityField() { return *GetNativePointerField<float*>(this, "FDinoFoodEffectivenessMultipliers.UntamedFoodConsumptionPriority"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoFoodEffectivenessMultipliers.StaticStruct()"); }
};

struct FDinoKey
{
	// Fields

	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoKey.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoKey.DinoID2"); }

	// Bitfields


	// Functions

};

struct FDinoMapMarkerInfo
{
	// Fields

	APrimalDinoCharacter*& DinoField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "FDinoMapMarkerInfo.Dino"); }
	UStaticMeshComponent*& MarkerComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "FDinoMapMarkerInfo.MarkerComponent"); }
	UE::Math::TVector<double>& DinoLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FDinoMapMarkerInfo.DinoLocation"); }
	int& PreviousLatitudeNumberField() { return *GetNativePointerField<int*>(this, "FDinoMapMarkerInfo.PreviousLatitudeNumber"); }
	int& PreviousLongitudeNumberField() { return *GetNativePointerField<int*>(this, "FDinoMapMarkerInfo.PreviousLongitudeNumber"); }
	FColor& MarkerColorField() { return *GetNativePointerField<FColor*>(this, "FDinoMapMarkerInfo.MarkerColor"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoMapMarkerInfo.StaticStruct()"); }
};

struct FDinoOrderGroup
{
	// Fields

	FString& DinoOrderGroupNameField() { return *GetNativePointerField<FString*>(this, "FDinoOrderGroup.DinoOrderGroupName"); }
	TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& DinoOrderClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FDinoOrderGroup.DinoOrderClasses"); }
	//TArray<FDinoOrderID, TSizedDefaultAllocator<32> >& DinoOrderIDsField() { return *GetNativePointerField<TArray<FDinoOrderID, TSizedDefaultAllocator<32> >*>(this, "FDinoOrderGroup.DinoOrderIDs"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoOrderGroup.StaticStruct()"); }
	FDinoOrderGroup* operator=(const FDinoOrderGroup* __that) { return NativeCall<FDinoOrderGroup*, const FDinoOrderGroup*>(this, "FDinoOrderGroup.operator=(FDinoOrderGroup&)", __that); }
};

struct FDinoOrderID
{
	// Fields

	int& DinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoOrderID.DinoID1"); }
	int& DinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoOrderID.DinoID2"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FDinoOrderID.DinoName"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoOrderID.StaticStruct()"); }
};

struct FDinoSaddleStruct
{
	// Fields

	USkeletalMeshComponent*& SaddleField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "FDinoSaddleStruct.Saddle"); }
	USkeletalMesh*& SkeletalMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "FDinoSaddleStruct.SkeletalMesh"); }
	FItemNetID& itemIdField() { return *GetNativePointerField<FItemNetID*>(this, "FDinoSaddleStruct.itemId"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoSaddleStruct.StaticStruct()"); }
};

struct FDinoSetup
{
	// Fields

	TSubclassOf<APrimalDinoCharacter>& DinoTypeField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FDinoSetup.DinoType"); }
	TSoftClassPtr<APrimalDinoCharacter>& DinoSoftReferenceField() { return *GetNativePointerField<TSoftClassPtr<APrimalDinoCharacter>*>(this, "FDinoSetup.DinoSoftReference"); }
	FString& DinoBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.DinoBlueprintPath"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.DinoName"); }
	int& DinoLevelField() { return *GetNativePointerField<int*>(this, "FDinoSetup.DinoLevel"); }
	FieldArray<unsigned __int8, 12> BasePointsPerStatField() { return { this, "FDinoSetup.BasePointsPerStat" }; }
	FieldArray<unsigned __int8, 12> PlayerAddedPointsPerStatField() { return { this, "FDinoSetup.PlayerAddedPointsPerStat" }; }
	UE::Math::TVector<double>& SpawnOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FDinoSetup.SpawnOffset"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, TSizedDefaultAllocator<32> >& PrioritizeStatsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, TSizedDefaultAllocator<32> >*>(this, "FDinoSetup.PrioritizeStats"); }
	TArray<FItemSetup, TSizedDefaultAllocator<32> >& TamedDinoInventoryField() { return *GetNativePointerField<TArray<FItemSetup, TSizedDefaultAllocator<32> >*>(this, "FDinoSetup.TamedDinoInventory"); }
	TSubclassOf<UPrimalItem>& SaddleTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FDinoSetup.SaddleType"); }
	TSoftClassPtr<UPrimalItem>& SaddleSoftReferenceField() { return *GetNativePointerField<TSoftClassPtr<UPrimalItem>*>(this, "FDinoSetup.SaddleSoftReference"); }
	FString& SaddleBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.SaddleBlueprintPath"); }
	float& SaddleQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.SaddleQuality"); }
	float& SaddleMinRandomQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.SaddleMinRandomQuality"); }
	float& RandomWeightField() { return *GetNativePointerField<float*>(this, "FDinoSetup.RandomWeight"); }
	float& WildRandomScaleOverrideField() { return *GetNativePointerField<float*>(this, "FDinoSetup.WildRandomScaleOverride"); }
	float& DinoImprintingQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.DinoImprintingQuality"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsTamed() { return { this, "FDinoSetup.bIsTamed" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMaxTameLimit() { return { this, "FDinoSetup.bIgnoreMaxTameLimit" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSpawningAtTameLimit() { return { this, "FDinoSetup.bPreventSpawningAtTameLimit" }; }
	BitFieldValue<bool, unsigned __int32> bBlockTamedDialog() { return { this, "FDinoSetup.bBlockTamedDialog" }; }
	BitFieldValue<bool, unsigned __int32> bAutoEquipSaddle() { return { this, "FDinoSetup.bAutoEquipSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bUseFixedSpawnLevel() { return { this, "FDinoSetup.bUseFixedSpawnLevel" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoSetup.StaticStruct()"); }
	FDinoSetup* operator=(const FDinoSetup* __that) { return NativeCall<FDinoSetup*, const FDinoSetup*>(this, "FDinoSetup.operator=(FDinoSetup&)", __that); }
	FDinoSetup* operator=(FDinoSetup* __that) { return NativeCall<FDinoSetup*, FDinoSetup*>(this, "FDinoSetup.operator=(FDinoSetup&)", __that); }
// 	void SetBaseLevels(EPrimalCharacterStatusValue::Type StatusType, int Value) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "FDinoSetup.SetBaseLevels(EPrimalCharacterStatusValue::Type,int)", StatusType, Value); }
// FUNCTION MISSING: FDinoSetup.SetBaseLevels(EPrimalCharacterStatusValue::Type,int)
// 	void SetConstantSaddleQuality(float Quality) { NativeCall<void, float>(this, "FDinoSetup.SetConstantSaddleQuality(float)", Quality); }
// FUNCTION MISSING: FDinoSetup.SetConstantSaddleQuality(float)
// 	void SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type StatusType, int Value) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "FDinoSetup.SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type,int)", StatusType, Value); }
// FUNCTION MISSING: FDinoSetup.SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type,int)
};

struct FDinoSetupGroup
{
	// Fields

	FName& GroupNameField() { return *GetNativePointerField<FName*>(this, "FDinoSetupGroup.GroupName"); }
	float& RandomWeightField() { return *GetNativePointerField<float*>(this, "FDinoSetupGroup.RandomWeight"); }
	TArray<FDinoSetup, TSizedDefaultAllocator<32> >& EntriesField() { return *GetNativePointerField<TArray<FDinoSetup, TSizedDefaultAllocator<32> >*>(this, "FDinoSetupGroup.Entries"); }
	TArray<int, TSizedDefaultAllocator<32> >& EntriesSpawnNumberLimitsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FDinoSetupGroup.EntriesSpawnNumberLimits"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoSetupGroup.StaticStruct()"); }
	FDinoSetupGroup* operator=(const FDinoSetupGroup* __that) { return NativeCall<FDinoSetupGroup*, const FDinoSetupGroup*>(this, "FDinoSetupGroup.operator=(FDinoSetupGroup&)", __that); }
	FDinoSetupGroup* operator=(FDinoSetupGroup* __that) { return NativeCall<FDinoSetupGroup*, FDinoSetupGroup*>(this, "FDinoSetupGroup.operator=(FDinoSetupGroup&)", __that); }
};

struct FDinoSpawnWeightMultiplier
{
	// Fields

	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "FDinoSpawnWeightMultiplier.DinoNameTag"); }
	float& SpawnWeightMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoSpawnWeightMultiplier.SpawnWeightMultiplier"); }
	float& SpawnLimitPercentageField() { return *GetNativePointerField<float*>(this, "FDinoSpawnWeightMultiplier.SpawnLimitPercentage"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoSpawnWeightMultiplier.StaticStruct()"); }
};

struct FEngramCustomFolder
{
	// Fields

	FString& FolderNameField() { return *GetNativePointerField<FString*>(this, "FEngramCustomFolder.FolderName"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& EngramCustomFolderItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FEngramCustomFolder.EngramCustomFolderItemClasses"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FEngramCustomFolder.StaticStruct()"); }
};

struct FEngramEntries
{
	// Fields

	TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& EngramEntriesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >*>(this, "FEngramEntries.EngramEntries"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FEngramEntries.StaticStruct()"); }
};

struct FEngramEntryAutoUnlock
{
	// Fields

	FString& EngramClassNameField() { return *GetNativePointerField<FString*>(this, "FEngramEntryAutoUnlock.EngramClassName"); }
	int& LevelToAutoUnlockField() { return *GetNativePointerField<int*>(this, "FEngramEntryAutoUnlock.LevelToAutoUnlock"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FEngramEntryAutoUnlock.StaticStruct()"); }
};

struct FEngramEntryOverride
{
	// Fields

	FString& EngramClassNameField() { return *GetNativePointerField<FString*>(this, "FEngramEntryOverride.EngramClassName"); }
	int& EngramIndexField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramIndex"); }
	int& EngramPointsCostField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramPointsCost"); }
	int& EngramLevelRequirementField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramLevelRequirement"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FEngramEntryOverride.StaticStruct()"); }
};

struct FEngramsSetSoftReferenceMapping
{
	// Fields

	TArray<FString, TSizedDefaultAllocator<32> >& EngramSetToUnlockField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FEngramsSetSoftReferenceMapping.EngramSetToUnlock"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FEngramsSetSoftReferenceMapping.StaticStruct()"); }
};

struct FFrame : FOutputDevice
{
	// Fields

	UFunction*& NodeField() { return *GetNativePointerField<UFunction**>(this, "FFrame.Node"); }
	UObject*& ObjectField() { return *GetNativePointerField<UObject**>(this, "FFrame.Object"); }
	unsigned __int8*& CodeField() { return *GetNativePointerField<unsigned __int8**>(this, "FFrame.Code"); }
	unsigned __int8*& LocalsField() { return *GetNativePointerField<unsigned __int8**>(this, "FFrame.Locals"); }
	FProperty*& MostRecentPropertyField() { return *GetNativePointerField<FProperty**>(this, "FFrame.MostRecentProperty"); }
	unsigned __int8*& MostRecentPropertyAddressField() { return *GetNativePointerField<unsigned __int8**>(this, "FFrame.MostRecentPropertyAddress"); }
	unsigned __int8*& MostRecentPropertyContainerField() { return *GetNativePointerField<unsigned __int8**>(this, "FFrame.MostRecentPropertyContainer"); }
	TArray<unsigned int, TSizedInlineAllocator<8, 32, TSizedDefaultAllocator<32> > >& FlowStackField() { return *GetNativePointerField<TArray<unsigned int, TSizedInlineAllocator<8, 32, TSizedDefaultAllocator<32> > >*>(this, "FFrame.FlowStack"); }
	FFrame*& PreviousFrameField() { return *GetNativePointerField<FFrame**>(this, "FFrame.PreviousFrame"); }
	FOutParmRec*& OutParmsField() { return *GetNativePointerField<FOutParmRec**>(this, "FFrame.OutParms"); }
	FField*& PropertyChainForCompiledInField() { return *GetNativePointerField<FField**>(this, "FFrame.PropertyChainForCompiledIn"); }
	UFunction*& CurrentNativeFunctionField() { return *GetNativePointerField<UFunction**>(this, "FFrame.CurrentNativeFunction"); }
	FFrame*& PreviousTrackingFrameField() { return *GetNativePointerField<FFrame**>(this, "FFrame.PreviousTrackingFrame"); }
	bool& bAbortingExecutionField() { return *GetNativePointerField<bool*>(this, "FFrame.bAbortingExecution"); }

	// Bitfields


	// Functions

	void StepExplicitProperty(void* const Result, FProperty* Property) { NativeCall<void, void* const, FProperty*>(this, "FFrame.StepExplicitProperty(void*const,FProperty*)", Result, Property); }
	static void KismetExecutionMessage(const wchar_t* Message, ELogVerbosity::Type Verbosity, FName WarningId) { NativeCall<void, const wchar_t*, ELogVerbosity::Type, FName>(nullptr, "FFrame.KismetExecutionMessage(wchar_t*,ELogVerbosity::Type,FName)", Message, Verbosity, WarningId); }
	void Serialize(const wchar_t* V, ELogVerbosity::Type Verbosity, const FName* Category) { NativeCall<void, const wchar_t*, ELogVerbosity::Type, const FName*>(this, "FFrame.Serialize(wchar_t*,ELogVerbosity::Type,FName&)", V, Verbosity, Category); }
	// TODO: Might need manual analysis
	FString* GetStackTrace(FString* result) { return NativeCall<FString*, FString*>(this, "FFrame.GetStackTrace()", result); }
	void GetStackTrace(TStringBuilderBase<wchar_t>* Result) { NativeCall<void, TStringBuilderBase<wchar_t>*>(this, "FFrame.GetStackTrace()", Result); }
};

struct FFuncParms
{
	// Fields

	UFunction*& FuncField() { return *GetNativePointerField<UFunction**>(this, "FFuncParms.Func"); }
	unsigned __int8*& ParmsField() { return *GetNativePointerField<unsigned __int8**>(this, "FFuncParms.Parms"); }

	// Bitfields


	// Functions

};

struct FFunctionCaller
{
	// Fields

	FName& FunctionNameField() { return *GetNativePointerField<FName*>(this, "FFunctionCaller.FunctionName"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FFunctionCaller.StaticStruct()"); }
};

struct FActorInstanceHandle
{
	TWeakObjectPtr<AActor> Actor;
	TWeakObjectPtr<struct ALightWeightInstanceManager> Manager;
	int InstanceIndex;
	unsigned int InstanceUID;
};

//struct FHitResult
//{
//	int FaceIndex;
//	float Time;
//	float Distance;
//	UE::Math::TVector<double> Location;
//	UE::Math::TVector<double> ImpactPoint;
//	UE::Math::TVector<double> Normal;
//	UE::Math::TVector<double> ImpactNormal;
//	UE::Math::TVector<double> TraceStart;
//	UE::Math::TVector<double> TraceEnd;
//	float PenetrationDepth;
//	int MyItem;
//	int Item;
//	unsigned __int8 ElementIndex;
//	unsigned __int8 bBlockingHit : 1;
//	unsigned __int8 bStartPenetrating : 1;
//	unsigned __int32 bVolatileCollision : 1;
//	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;
//	FActorInstanceHandle HitObjectHandle;
//	TWeakObjectPtr<UPrimitiveComponent> Component;
//	FName BoneName;
//	FName MyBoneName;
//};

struct FHitResult
{
	// Fields

	int& FaceIndexField() { return *GetNativePointerField<int*>(this, "FHitResult.FaceIndex"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FHitResult.Time"); }
	float& DistanceField() { return *GetNativePointerField<float*>(this, "FHitResult.Distance"); }
	FVector_NetQuantize& LocationField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.Location"); }
	FVector_NetQuantize& ImpactPointField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.ImpactPoint"); }
	FVector_NetQuantizeNormal& NormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.Normal"); }
	FVector_NetQuantizeNormal& ImpactNormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.ImpactNormal"); }
	FVector_NetQuantize& TraceStartField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceStart"); }
	FVector_NetQuantize& TraceEndField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceEnd"); }
	float& PenetrationDepthField() { return *GetNativePointerField<float*>(this, "FHitResult.PenetrationDepth"); }
	int& MyItemField() { return *GetNativePointerField<int*>(this, "FHitResult.MyItem"); }
	int& ItemField() { return *GetNativePointerField<int*>(this, "FHitResult.Item"); }
	TWeakObjectPtr<UPhysicalMaterial>& PhysMaterialField() { return *GetNativePointerField<TWeakObjectPtr<UPhysicalMaterial>*>(this, "FHitResult.PhysMaterial"); }
	FActorInstanceHandle& HitObjectHandleField() { return *GetNativePointerField<FActorInstanceHandle*>(this, "FHitResult.HitObjectHandle"); }
	TWeakObjectPtr<UPrimitiveComponent>& ComponentField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent>*>(this, "FHitResult.Component"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FHitResult.BoneName"); }
	FName& MyBoneNameField() { return *GetNativePointerField<FName*>(this, "FHitResult.MyBoneName"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bBlockingHit() { return { this, "FHitResult.bBlockingHit" }; }
	BitFieldValue<bool, unsigned __int32> bStartPenetrating() { return { this, "FHitResult.bStartPenetrating" }; }
	BitFieldValue<bool, unsigned __int32> bVolatileCollision() { return { this, "FHitResult.bVolatileCollision" }; }

	// Functions

// 	static FHitResult* GetReversedHit(FHitResult* result, const FHitResult* Hit) { return NativeCall<FHitResult*, FHitResult*, const FHitResult*>(nullptr, "FHitResult.GetReversedHit(FHitResult&)", result, Hit); }
// FUNCTION MISSING: FHitResult.GetReversedHit(FHitResult&)
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FHitResult.StaticStruct()"); }
	bool NetSerialize(FArchive* Ar, UPackageMap* Map, bool* bOutSuccess) { return NativeCall<bool, FArchive*, UPackageMap*, bool*>(this, "FHitResult.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
};

struct FHordeCrateDifficultyLevel
{
	// Fields

	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FHordeCrateDifficultyLevel.bEnabled"); }
	int& MaxNumOfEventsForDifficultyField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MaxNumOfEventsForDifficulty"); }
	int& DifficultyLevelField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.DifficultyLevel"); }
	int& MinNPCsToStartField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MinNPCsToStart"); }
	int& MaxNPCsToStartField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MaxNPCsToStart"); }
	//FHordeCrateNPCGroup& StartingNPCsField() { return *GetNativePointerField<FHordeCrateNPCGroup*>(this, "FHordeCrateDifficultyLevel.StartingNPCs"); }
	//TArray<FHordeCrateWave, TSizedDefaultAllocator<32> >& NPCWavesToCompleteField() { return *GetNativePointerField<TArray<FHordeCrateWave, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateDifficultyLevel.NPCWavesToComplete"); }
	float& MinTimeBeforeSelfDestructField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MinTimeBeforeSelfDestruct"); }
	float& MaxTimeBeforeSelfDestructField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MaxTimeBeforeSelfDestruct"); }
	TSubclassOf<AActor>& ActorTemplateField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "FHordeCrateDifficultyLevel.ActorTemplate"); }
	float& MinQualityMultiplierField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MinQualityMultiplier"); }
	float& MaxQualityMultiplierField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MaxQualityMultiplier"); }
	int& MinAmtRewardItemsField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MinAmtRewardItems"); }
	int& MaxAmtRewardItemsField() { return *GetNativePointerField<int*>(this, "FHordeCrateDifficultyLevel.MaxAmtRewardItems"); }
	FLinearColor& DifficultyColorField() { return *GetNativePointerField<FLinearColor*>(this, "FHordeCrateDifficultyLevel.DifficultyColor"); }
	float& MainNodeElementPctField() { return *GetNativePointerField<float*>(this, "FHordeCrateDifficultyLevel.MainNodeElementPct"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FHordeCrateDifficultyLevel.StaticStruct()"); }
};

struct FHordeCrateEvent
{
	// Fields

	long double& EventStartTimeField() { return *GetNativePointerField<long double*>(this, "FHordeCrateEvent.EventStartTime"); }
	TWeakObjectPtr<AActor>& HordeSpawnNetworkField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "FHordeCrateEvent.HordeSpawnNetwork"); }
	TWeakObjectPtr<AActor>& HordeModeCrateField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "FHordeCrateEvent.HordeModeCrate"); }
	unsigned __int8& EventTypeField() { return *GetNativePointerField<unsigned __int8*>(this, "FHordeCrateEvent.EventType"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FHordeCrateEvent.StaticStruct()"); }
};

struct FHordeCrateNPCGroup
{
	// Fields

	TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& NPCClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.NPCClasses"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& NPCAssetsField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.NPCAssets"); }
	TArray<float, TSizedDefaultAllocator<32> >& NPCWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.NPCWeights"); }
	TArray<int, TSizedDefaultAllocator<32> >& MinLevelsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.MinLevels"); }
	TArray<int, TSizedDefaultAllocator<32> >& MaxLevelsField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FHordeCrateNPCGroup.MaxLevels"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FHordeCrateNPCGroup.StaticStruct()"); }
};

struct FHordeCrateWave
{
	// Fields

	int& MinNumOfNPCsField() { return *GetNativePointerField<int*>(this, "FHordeCrateWave.MinNumOfNPCs"); }
	int& MaxNumOfNPCsField() { return *GetNativePointerField<int*>(this, "FHordeCrateWave.MaxNumOfNPCs"); }
	float& TimeToPrepareForWaveField() { return *GetNativePointerField<float*>(this, "FHordeCrateWave.TimeToPrepareForWave"); }
	FHordeCrateNPCGroup& NPCsToSpawnField() { return *GetNativePointerField<FHordeCrateNPCGroup*>(this, "FHordeCrateWave.NPCsToSpawn"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FHordeCrateWave.StaticStruct()"); }
};

struct FItemAttachmentInfo
{
	// Fields

	UActorComponent*& ComponentToAttachField() { return *GetNativePointerField<UActorComponent**>(this, "FItemAttachmentInfo.ComponentToAttach"); }
	//TArray<FExtraItemAttachmentInfo, TSizedDefaultAllocator<32> >& ExtraItemAttachmentInfosField() { return *GetNativePointerField<TArray<FExtraItemAttachmentInfo, TSizedDefaultAllocator<32> >*>(this, "FItemAttachmentInfo.ExtraItemAttachmentInfos"); }
	FName& SocketToAttachToField() { return *GetNativePointerField<FName*>(this, "FItemAttachmentInfo.SocketToAttachTo"); }
	TSoftClassPtr<AActor>& OnlyUseAttachmentForActorClassField() { return *GetNativePointerField<TSoftClassPtr<AActor>*>(this, "FItemAttachmentInfo.OnlyUseAttachmentForActorClass"); }
	FName& AttachedCompNameField() { return *GetNativePointerField<FName*>(this, "FItemAttachmentInfo.AttachedCompName"); }
	TWeakObjectPtr<UActorComponent>& AttachedCompReferenceField() { return *GetNativePointerField<TWeakObjectPtr<UActorComponent>*>(this, "FItemAttachmentInfo.AttachedCompReference"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bCanBuildStructuresOn() { return { this, "FItemAttachmentInfo.bCanBuildStructuresOn" }; }
	BitFieldValue<bool, unsigned __int32> bUseParentAnims() { return { this, "FItemAttachmentInfo.bUseParentAnims" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonHands() { return { this, "FItemAttachmentInfo.bAttachToFirstPersonHands" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToThirdPersonWeaponMesh() { return { this, "FItemAttachmentInfo.bAttachToThirdPersonWeaponMesh" }; }
	BitFieldValue<bool, unsigned __int32> bDisabled() { return { this, "FItemAttachmentInfo.bDisabled" }; }
	BitFieldValue<bool, unsigned __int32> bUseItemColors() { return { this, "FItemAttachmentInfo.bUseItemColors" }; }
	BitFieldValue<bool, unsigned __int32> bUseIgnoreAttachmentWhenEquipmentOfType() { return { this, "FItemAttachmentInfo.bUseIgnoreAttachmentWhenEquipmentOfType" }; }
	BitFieldValue<bool, unsigned __int32> bHideCharacterMesh() { return { this, "FItemAttachmentInfo.bHideCharacterMesh" }; }
	BitFieldValue<bool, unsigned __int32> bAttachmentRequireWeaponSupportShield() { return { this, "FItemAttachmentInfo.bAttachmentRequireWeaponSupportShield" }; }
	BitFieldValue<bool, unsigned __int32> bForceDediAttachment() { return { this, "FItemAttachmentInfo.bForceDediAttachment" }; }
	BitFieldValue<bool, unsigned __int32> bForceVisibleInFirstPerson() { return { this, "FItemAttachmentInfo.bForceVisibleInFirstPerson" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreEquipmentForceHideFirstPerson() { return { this, "FItemAttachmentInfo.bIgnoreEquipmentForceHideFirstPerson" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonCamera() { return { this, "FItemAttachmentInfo.bAttachToFirstPersonCamera" }; }
	BitFieldValue<bool, unsigned __int32> bAttachToFirstPersonCameraCapsule() { return { this, "FItemAttachmentInfo.bAttachToFirstPersonCameraCapsule" }; }
	BitFieldValue<bool, unsigned __int32> bPersistShieldRefreshOnWeaponEquip() { return { this, "FItemAttachmentInfo.bPersistShieldRefreshOnWeaponEquip" }; }
	BitFieldValue<bool, unsigned __int32> bDisableForTaxidermy() { return { this, "FItemAttachmentInfo.bDisableForTaxidermy" }; }
	BitFieldValue<bool, unsigned __int32> bDontAddAttachedParentBounds() { return { this, "FItemAttachmentInfo.bDontAddAttachedParentBounds" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemAttachmentInfo.StaticStruct()"); }
};

struct FItemCount
{
	// Fields

	FString& StringRefField() { return *GetNativePointerField<FString*>(this, "FItemCount.StringRef"); }
	int& StackSizeField() { return *GetNativePointerField<int*>(this, "FItemCount.StackSize"); }
	int& NumStacksField() { return *GetNativePointerField<int*>(this, "FItemCount.NumStacks"); }
	float& QualityField() { return *GetNativePointerField<float*>(this, "FItemCount.Quality"); }
	bool& bAutoSlotField() { return *GetNativePointerField<bool*>(this, "FItemCount.bAutoSlot"); }
	int& SlotField() { return *GetNativePointerField<int*>(this, "FItemCount.Slot"); }

	// Bitfields


	// Functions

	static FItemCount* InSlot(FItemCount* result, int Slot, const FString* StringRef, int StackSize, int NumStacks, float Quality) { return NativeCall<FItemCount*, FItemCount*, int, const FString*, int, int, float>(nullptr, "FItemCount.InSlot(int,FString&,int,int,float)", result, Slot, StringRef, StackSize, NumStacks, Quality); }
};

struct FItemCraftQueueEntry
{
	// Fields

	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "FItemCraftQueueEntry.ItemID"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FItemCraftQueueEntry.Quantity"); }
	bool& bIgnoreInventoryRequirementField() { return *GetNativePointerField<bool*>(this, "FItemCraftQueueEntry.bIgnoreInventoryRequirement"); }
	float& RepairPercentageField() { return *GetNativePointerField<float*>(this, "FItemCraftQueueEntry.RepairPercentage"); }
	float& RepairSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FItemCraftQueueEntry.RepairSpeedMultiplier"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemCraftQueueEntry.StaticStruct()"); }
};

struct FItemCraftingConsumptionReplenishment
{
	// Fields

	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemResourceClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FItemCraftingConsumptionReplenishment.ItemResourceClasses"); }
	TSubclassOf<UPrimalItem>& ToReplaceWithClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemCraftingConsumptionReplenishment.ToReplaceWithClass"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemCraftingConsumptionReplenishment.StaticStruct()"); }
};

struct FItemCraftingCostOverride
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemCraftingCostOverride.ItemClass"); }
	TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& BaseCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "FItemCraftingCostOverride.BaseCraftingResourceRequirements"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemCraftingCostOverride.StaticStruct()"); }
};

struct FItemInfo
{
	// Fields

	TBitArray<FDefaultBitArrayAllocator>& NeedsVerticalWireField() { return *GetNativePointerField<TBitArray<FDefaultBitArrayAllocator>*>(this, "FItemInfo.NeedsVerticalWire"); }
	int& ParentIndexField() { return *GetNativePointerField<int*>(this, "FItemInfo.ParentIndex"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHasChildren() { return { this, "FItemInfo.bHasChildren" }; }
	BitFieldValue<bool, unsigned __int32> bIsLastChild() { return { this, "FItemInfo.bIsLastChild" }; }

	// Functions

};

struct FItemMaxItemQuantityOverride
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemMaxItemQuantityOverride.ItemClass"); }
	FMaxItemQuantityOverride& QuantityField() { return *GetNativePointerField<FMaxItemQuantityOverride*>(this, "FItemMaxItemQuantityOverride.Quantity"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemMaxItemQuantityOverride.StaticStruct()"); }
};

struct FItemMultiplier
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemMultiplier.ItemClass"); }
	float& ItemMultiplierField() { return *GetNativePointerField<float*>(this, "FItemMultiplier.ItemMultiplier"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemMultiplier.StaticStruct()"); }
};

struct FItemNetInfo
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemArchetypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemArchetype"); }
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "FItemNetInfo.ItemID"); }
	unsigned int& ItemQuantityField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.ItemQuantity"); }
	int& CustomItemIDField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.CustomItemID"); }
	int& SlotIndexField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.SlotIndex"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.CreationTime"); }
	FString& CustomItemNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemName"); }
	FString& CustomItemDescriptionField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemDescription"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.UploadEarliestValidTime"); }
	TArray<unsigned __int64, TSizedDefaultAllocator<32> >& SteamUserItemIDField() { return *GetNativePointerField<TArray<unsigned __int64, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.SteamUserItemID"); }
	unsigned __int16& CraftQueueField() { return *GetNativePointerField<unsigned __int16*>(this, "FItemNetInfo.CraftQueue"); }
	long double& NextCraftCompletionTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.NextCraftCompletionTime"); }
	float& CraftingSkillField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftingSkill"); }
	float& CraftedSkillBonusField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftedSkillBonus"); }
	FString& CrafterCharacterNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterCharacterName"); }
	FString& CrafterTribeNameField() { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterTribeName"); }
	unsigned int& WeaponClipAmmoField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.WeaponClipAmmo"); }
	float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemDurability"); }
	float& ItemRatingField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemRating"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FItemNetInfo.ExpirationTimeUTC"); }
	TSubclassOf<UPrimalItem>& ItemCustomClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemCustomClass"); }
	FieldArray<unsigned __int16, 8> ItemStatValuesField() { return { this, "FItemNetInfo.ItemStatValues" }; }
	FieldArray<__int16, 6> ItemColorIDField() { return { this, "FItemNetInfo.ItemColorID" }; }
	TSubclassOf<UPrimalItem>& ItemSkinTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemNetInfo.ItemSkinTemplate"); }
	TArray<FCustomItemData, TSizedDefaultAllocator<32> >& CustomItemDatasField() { return *GetNativePointerField<TArray<FCustomItemData, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.CustomItemDatas"); }
	TArray<FColor, TSizedDefaultAllocator<32> >& CustomItemColorsField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.CustomItemColors"); }
	TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& CustomResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.CustomResourceRequirements"); }
	long double& NextSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.NextSpoilingTime"); }
	long double& LastSpoilingTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.LastSpoilingTime"); }
	unsigned __int64& OwnerPlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FItemNetInfo.OwnerPlayerDataId"); }
	TWeakObjectPtr<AShooterCharacter>& LastOwnerPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "FItemNetInfo.LastOwnerPlayer"); }
	long double& LastAutoDurabilityDecreaseTimeField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.LastAutoDurabilityDecreaseTime"); }
	float& ItemStatClampsMultiplierField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemStatClampsMultiplier"); }
	UE::Math::TVector<double>& OriginalItemDropLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FItemNetInfo.OriginalItemDropLocation"); }
	FieldArray<__int16, 6> PreSkinItemColorIDField() { return { this, "FItemNetInfo.PreSkinItemColorID" }; }
	FieldArray<unsigned __int8, 12> EggNumberOfLevelUpPointsAppliedField() { return { this, "FItemNetInfo.EggNumberOfLevelUpPointsApplied" }; }
	FieldArray<unsigned __int8, 12> EggNumberMutationsAppliedField() { return { this, "FItemNetInfo.EggNumberMutationsApplied" }; }
	float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "FItemNetInfo.EggTamedIneffectivenessModifier"); }
	FieldArray<unsigned __int8, 6> EggColorSetIndicesField() { return { this, "FItemNetInfo.EggColorSetIndices" }; }
	int& EggGenderOverrideField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggGenderOverride"); }
	long double& ClusterSpoilingTimeUTCField() { return *GetNativePointerField<long double*>(this, "FItemNetInfo.ClusterSpoilingTimeUTC"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry, TSizedDefaultAllocator<32> >*>(this, "FItemNetInfo.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsMale"); }
	bool& bNetInfoFromClientField() { return *GetNativePointerField<bool*>(this, "FItemNetInfo.bNetInfoFromClient"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsBlueprint() { return { this, "FItemNetInfo.bIsBlueprint" }; }
	BitFieldValue<bool, unsigned __int32> bIsEngram() { return { this, "FItemNetInfo.bIsEngram" }; }
	BitFieldValue<bool, unsigned __int32> bIsCustomRecipe() { return { this, "FItemNetInfo.bIsCustomRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsFoodRecipe() { return { this, "FItemNetInfo.bIsFoodRecipe" }; }
	BitFieldValue<bool, unsigned __int32> bIsRepairing() { return { this, "FItemNetInfo.bIsRepairing" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory() { return { this, "FItemNetInfo.bAllowRemovalFromInventory" }; }
	BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay() { return { this, "FItemNetInfo.bHideFromInventoryDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRemovalFromSteamInventory() { return { this, "FItemNetInfo.bAllowRemovalFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bFromSteamInventory() { return { this, "FItemNetInfo.bFromSteamInventory" }; }
	BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory() { return { this, "FItemNetInfo.bIsFromAllClustersInventory" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventGrinding() { return { this, "FItemNetInfo.bForcePreventGrinding" }; }
	BitFieldValue<bool, unsigned __int32> bIsEquipped() { return { this, "FItemNetInfo.bIsEquipped" }; }
	BitFieldValue<bool, unsigned __int32> bIsSlot() { return { this, "FItemNetInfo.bIsSlot" }; }
	BitFieldValue<bool, unsigned __int32> bIsInitialItem() { return { this, "FItemNetInfo.bIsInitialItem" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemNetInfo.StaticStruct()"); }
	FItemNetInfo* operator=(FItemNetInfo* __that) { return NativeCall<FItemNetInfo*, FItemNetInfo*>(this, "FItemNetInfo.operator=(FItemNetInfo&)", __that); }
	FItemNetInfo* operator=(const FItemNetInfo* __that) { return NativeCall<FItemNetInfo*, const FItemNetInfo*>(this, "FItemNetInfo.operator=(FItemNetInfo&)", __that); }
	bool NetSerialize(FArchive* Ar, UPackageMap* Map, bool* bOutSuccess) { return NativeCall<bool, FArchive*, UPackageMap*, bool*>(this, "FItemNetInfo.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
};

struct FItemSetup
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemSetup.ItemType"); }
	FString& ItemBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FItemSetup.ItemBlueprintPath"); }
	float& MinQualityField() { return *GetNativePointerField<float*>(this, "FItemSetup.MinQuality"); }
	float& MaxQualityField() { return *GetNativePointerField<float*>(this, "FItemSetup.MaxQuality"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FItemSetup.Quantity"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bAutoEquip() { return { this, "FItemSetup.bAutoEquip" }; }
	BitFieldValue<bool, unsigned __int32> bDontStack() { return { this, "FItemSetup.bDontStack" }; }
	BitFieldValue<bool, unsigned __int32> bForceBlueprint() { return { this, "FItemSetup.bForceBlueprint" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemSetup.StaticStruct()"); }
};

struct FItemStatInfo
{
	float RandomizerRangeMultiplier;
	float TheRandomizerPower;
	float StateModifierScale;
	float InitialValueConstant;
	float RatingValueMultiplier;
	float AbsoluteMaxValue;
	int DefaultModifierValue;
	int RandomizerRangeOverride;
	unsigned __int32 bUsed : 1;
	unsigned __int32 bCalculateAsPercent : 1;
	unsigned __int32 bDisplayAsPercent : 1;
	unsigned __int32 bRequiresSubmerged : 1;
	unsigned __int32 bPreventIfSubmerged : 1;
	unsigned __int32 bHideStatFromTooltip : 1;

	// Fields

	int& DefaultModifierValueField() { return *GetNativePointerField<int*>(this, "FItemStatInfo.DefaultModifierValue"); }
	int& RandomizerRangeOverrideField() { return *GetNativePointerField<int*>(this, "FItemStatInfo.RandomizerRangeOverride"); }
	float& RandomizerRangeMultiplierField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.RandomizerRangeMultiplier"); }
	float& TheRandomizerPowerField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.TheRandomizerPower"); }
	float& StateModifierScaleField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.StateModifierScale"); }
	float& InitialValueConstantField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.InitialValueConstant"); }
	float& RatingValueMultiplierField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.RatingValueMultiplier"); }
	float& AbsoluteMaxValueField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.AbsoluteMaxValue"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUsedField() { return { this, "FItemStatInfo.bUsed" }; }
	BitFieldValue<bool, unsigned __int32> bCalculateAsPercentField() { return { this, "FItemStatInfo.bCalculateAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayAsPercentField() { return { this, "FItemStatInfo.bDisplayAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresSubmergedField() { return { this, "FItemStatInfo.bRequiresSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bPreventIfSubmergedField() { return { this, "FItemStatInfo.bPreventIfSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bHideStatFromTooltipField() { return { this, "FItemStatInfo.bHideStatFromTooltip" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemStatInfo.StaticStruct()"); }
	float GetItemStatModifier(unsigned __int16 ItemStatValue) { return NativeCall<float, unsigned __int16>(this, "FItemStatInfo.GetItemStatModifier(unsignedshort)", ItemStatValue); }
	unsigned __int16 GetRandomValue(float QualityLevel, float MinRandomQuality, float* outRandonMultiplier) { return NativeCall<unsigned __int16, float, float, float*>(this, "FItemStatInfo.GetRandomValue(float,float,float*)", QualityLevel, MinRandomQuality, outRandonMultiplier); }
};

struct FItemToDinoStatParams
{
	// Fields

	TEnumAsByte<enum EPrimalItemStat::Type>& ItemStatField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemStat::Type>*>(this, "FItemToDinoStatParams.ItemStat"); }
	int& MinItemStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MinItemStatValue"); }
	int& MaxItemStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MaxItemStatValue"); }
	int& MinDinoStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MinDinoStatValue"); }
	int& MaxDinoStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MaxDinoStatValue"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FItemToDinoStatParams.StaticStruct()"); }
};

struct FMultiUseEntry
{
	// Fields

	TObjectPtr<UActorComponent>& ForComponentField() { return *GetNativePointerField<TObjectPtr<UActorComponent>*>(this, "FMultiUseEntry.ForComponent"); }
	FString& UseStringField() { return *GetNativePointerField<FString*>(this, "FMultiUseEntry.UseString"); }
	int& UseIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.UseIndex"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.Priority"); }
	TObjectPtr<AActor>& BPDrawEntryTargetRefField() { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "FMultiUseEntry.BPDrawEntryTargetRef"); }
	int& WheelCategoryField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.WheelCategory"); }
	FColor& DisableUseColorField() { return *GetNativePointerField<FColor*>(this, "FMultiUseEntry.DisableUseColor"); }
	FColor& UseTextColorField() { return *GetNativePointerField<FColor*>(this, "FMultiUseEntry.UseTextColor"); }
	float& EntryActivationTimerField() { return *GetNativePointerField<float*>(this, "FMultiUseEntry.EntryActivationTimer"); }
	float& DefaultEntryActivationTimerField() { return *GetNativePointerField<float*>(this, "FMultiUseEntry.DefaultEntryActivationTimer"); }
	TObjectPtr<USoundBase>& ActivationSoundField() { return *GetNativePointerField<TObjectPtr<USoundBase>*>(this, "FMultiUseEntry.ActivationSound"); }
	int& UseInventoryButtonStyleOverrideIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.UseInventoryButtonStyleOverrideIndex"); }
	int& AdditionalButtonsIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.AdditionalButtonsIndex"); }
	TObjectPtr<UTexture2D>& IconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FMultiUseEntry.Icon"); }
	FColor& UseIconColorField() { return *GetNativePointerField<FColor*>(this, "FMultiUseEntry.UseIconColor"); }
	TObjectPtr<UObject>& SponsorIconObjectField() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FMultiUseEntry.SponsorIconObject"); }
	int& OpenWheelCategoryField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.OpenWheelCategory"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHideFromUI() { return { this, "FMultiUseEntry.bHideFromUI" }; }
	BitFieldValue<bool, unsigned __int32> bDisableUse() { return { this, "FMultiUseEntry.bDisableUse" }; }
	BitFieldValue<bool, unsigned __int32> bHideActivationKey() { return { this, "FMultiUseEntry.bHideActivationKey" }; }
	BitFieldValue<bool, unsigned __int32> bRepeatMultiUse() { return { this, "FMultiUseEntry.bRepeatMultiUse" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayOnInventoryUI() { return { this, "FMultiUseEntry.bDisplayOnInventoryUI" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayOnInventoryUISecondary() { return { this, "FMultiUseEntry.bDisplayOnInventoryUISecondary" }; }
	BitFieldValue<bool, unsigned __int32> bHarvestable() { return { this, "FMultiUseEntry.bHarvestable" }; }
	BitFieldValue<bool, unsigned __int32> bIsSecondaryUse() { return { this, "FMultiUseEntry.bIsSecondaryUse" }; }
	BitFieldValue<bool, unsigned __int32> bPersistWheelOnActivation() { return { this, "FMultiUseEntry.bPersistWheelOnActivation" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideUseTextColor() { return { this, "FMultiUseEntry.bOverrideUseTextColor" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayOnInventoryUITertiary() { return { this, "FMultiUseEntry.bDisplayOnInventoryUITertiary" }; }
	BitFieldValue<bool, unsigned __int32> bClientSideOnly() { return { this, "FMultiUseEntry.bClientSideOnly" }; }
	BitFieldValue<bool, unsigned __int32> bPersistWheelRequiresDirectActivation() { return { this, "FMultiUseEntry.bPersistWheelRequiresDirectActivation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry() { return { this, "FMultiUseEntry.bUseBPDrawEntry" }; }
	BitFieldValue<bool, unsigned __int32> bDrawTooltip() { return { this, "FMultiUseEntry.bDrawTooltip" }; }
	BitFieldValue<bool, unsigned __int32> bIsDynamicOption() { return { this, "FMultiUseEntry.bIsDynamicOption" }; }
	BitFieldValue<bool, unsigned __int32> bUseOldMultiUseOptionWithText() { return { this, "FMultiUseEntry.bUseOldMultiUseOptionWithText" }; }

	// Functions

	void operator=(const FMultiUseEntry* InVal) { NativeCall<void, const FMultiUseEntry*>(this, "FMultiUseEntry.operator=(FMultiUseEntry&)", InVal); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FMultiUseEntry.StaticStruct()"); }
};

struct FMultiUseWheelOption
{
	// Fields

	FString& ActionStringField() { return *GetNativePointerField<FString*>(this, "FMultiUseWheelOption.ActionString"); }
	TObjectPtr<UTexture2D>& IconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FMultiUseWheelOption.Icon"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FMultiUseWheelOption.StaticStruct()"); }
};

struct FNetExecParams
{
	// Fields

	int& IntParam1Field() { return *GetNativePointerField<int*>(this, "FNetExecParams.IntParam1"); }
	int& IntParam2Field() { return *GetNativePointerField<int*>(this, "FNetExecParams.IntParam2"); }
	float& FloatParam1Field() { return *GetNativePointerField<float*>(this, "FNetExecParams.FloatParam1"); }
	TObjectPtr<UObject>& ObjParam1Field() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FNetExecParams.ObjParam1"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FNetExecParams.StaticStruct()"); }
};

struct FPointOfInterestData
{
	// Fields

	unsigned __int8& PointTypeField() { return *GetNativePointerField<unsigned __int8*>(this, "FPointOfInterestData.PointType"); }
	FName& PointTagField() { return *GetNativePointerField<FName*>(this, "FPointOfInterestData.PointTag"); }
	FString& PointTitleField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.PointTitle"); }
	FString& PointDescriptionField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.PointDescription"); }
	UE::Math::TVector<double>& PointLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPointOfInterestData.PointLocation"); }
	UE::Math::TRotator<double>& PointRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPointOfInterestData.PointRotation"); }
	AActor*& PointActorField() { return *GetNativePointerField<AActor**>(this, "FPointOfInterestData.PointActor"); }
	float& PointVisibleDistanceField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.PointVisibleDistance"); }
	float& PointVisibleDotProductRangeField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.PointVisibleDotProductRange"); }
	UTexture2D*& PointIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPointOfInterestData.PointIcon"); }
	UParticleSystem*& ViewedPointVFXField() { return *GetNativePointerField<UParticleSystem**>(this, "FPointOfInterestData.ViewedPointVFX"); }
	USoundCue*& ViewedPointSFXField() { return *GetNativePointerField<USoundCue**>(this, "FPointOfInterestData.ViewedPointSFX"); }
	//TSubclassOf<APointOfInterestCosmeticActor_Base>& PointCosmeticActorClassField() { return *GetNativePointerField<TSubclassOf<APointOfInterestCosmeticActor_Base>*>(this, "FPointOfInterestData.PointCosmeticActorClass"); }
	UE::Math::TTransform<double>& PointCosmeticActorOffsetTransformField() { return *GetNativePointerField<UE::Math::TTransform<double>*>(this, "FPointOfInterestData.PointCosmeticActorOffsetTransform"); }
	USoundBase*& LocationAddedSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPointOfInterestData.LocationAddedSound"); }
	USoundBase*& LocationReachedSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPointOfInterestData.LocationReachedSound"); }
	UE::Math::TVector<double>& WidgetLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPointOfInterestData.WidgetLocationOffset"); }
	float& WidgetHiddenDistanceField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.WidgetHiddenDistance"); }
	FLinearColor& IndicatorColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.IndicatorColor"); }
	FLinearColor& IconColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.IconColor"); }
	float& ProgressValueField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.ProgressValue"); }
	FString& ProgressLabelTextField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.ProgressLabelText"); }
	FLinearColor& ProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.ProgressBarColor"); }
	FLinearColor& ProgressLabelColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.ProgressLabelColor"); }
	int& CharacterIDField() { return *GetNativePointerField<int*>(this, "FPointOfInterestData.CharacterID"); }
	float& AlphaMultiplierField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.AlphaMultiplier"); }
	float& ScaleMultiplierField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.ScaleMultiplier"); }
	float& SecondaryProgressValueField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.SecondaryProgressValue"); }
	FLinearColor& SecondaryProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.SecondaryProgressBarColor"); }
	int& UseDismissIndexField() { return *GetNativePointerField<int*>(this, "FPointOfInterestData.UseDismissIndex"); }
	AActor*& DismissActorActionField() { return *GetNativePointerField<AActor**>(this, "FPointOfInterestData.DismissActorAction"); }
	FString& DistanceStringField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.DistanceString"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHidePointOfInterestTitleBar() { return { this, "FPointOfInterestData.bHidePointOfInterestTitleBar" }; }
	BitFieldValue<bool, unsigned __int32> bPointTagValidated() { return { this, "FPointOfInterestData.bPointTagValidated" }; }
	BitFieldValue<bool, unsigned __int32> bPointTagRequiresValidation() { return { this, "FPointOfInterestData.bPointTagRequiresValidation" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyVisibleOffScreen() { return { this, "FPointOfInterestData.bOnlyVisibleOffScreen" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyVisibleOnScreen() { return { this, "FPointOfInterestData.bOnlyVisibleOnScreen" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysVisible() { return { this, "FPointOfInterestData.bAlwaysVisible" }; }
	BitFieldValue<bool, unsigned __int32> bUsePulseAnimation() { return { this, "FPointOfInterestData.bUsePulseAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bShowProgress() { return { this, "FPointOfInterestData.bShowProgress" }; }
	BitFieldValue<bool, unsigned __int32> bShowProgressLabelWhenOffScreen() { return { this, "FPointOfInterestData.bShowProgressLabelWhenOffScreen" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyVisibleOnMap() { return { this, "FPointOfInterestData.bOnlyVisibleOnMap" }; }
	BitFieldValue<bool, unsigned __int32> CharacterIsPlayer() { return { this, "FPointOfInterestData.CharacterIsPlayer" }; }
	BitFieldValue<bool, unsigned __int32> bShowSecondaryProgress() { return { this, "FPointOfInterestData.bShowSecondaryProgress" }; }
	BitFieldValue<bool, unsigned __int32> bCanDismissPOI() { return { this, "FPointOfInterestData.bCanDismissPOI" }; }
	BitFieldValue<bool, unsigned __int32> bPreventTextClose() { return { this, "FPointOfInterestData.bPreventTextClose" }; }

	// Functions

	FPointOfInterestData* operator=(const FPointOfInterestData* __that) { return NativeCall<FPointOfInterestData*, const FPointOfInterestData*>(this, "FPointOfInterestData.operator=(FPointOfInterestData&)", __that); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPointOfInterestData.StaticStruct()"); }
// 	bool IsPointInitialized() { return NativeCall<bool>(this, "FPointOfInterestData.IsPointInitialized()"); }
// FUNCTION MISSING: FPointOfInterestData.IsPointInitialized()
};

struct FPointOfInterestData_ForCompanion
{
	// Fields

	FPointOfInterestData& PointDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "FPointOfInterestData_ForCompanion.PointData"); }
	FPointOfInterestCompanionBehavior& PointCompanionBehaviorField() { return *GetNativePointerField<FPointOfInterestCompanionBehavior*>(this, "FPointOfInterestData_ForCompanion.PointCompanionBehavior"); }

	// Bitfields


	// Functions
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPointOfInterestData_ForCompanion.StaticStruct()"); }
};

struct FPrimalCharacterStatusStateDefinition
{
	// Fields

	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& StatusValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FPrimalCharacterStatusStateDefinition.StatusValueType"); }
	int& StatusValueThresholdIndexField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusStateDefinition.StatusValueThresholdIndex"); }
	UTexture2D*& StatusStateIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalCharacterStatusStateDefinition.StatusStateIcon"); }
	FString& StatusStateNameField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateName"); }
	FString& StatusStateDescriptionField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateDescription"); }
	FColor& StatusStateNameColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateNameColor"); }
	bool& bDisplayHUDMessageField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusStateDefinition.bDisplayHUDMessage"); }
	FString& HUDMessageField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.HUDMessage"); }
	FColor& HUDMessageColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalCharacterStatusStateDefinition.HUDMessageColor"); }
	int& BuffTypeField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusStateDefinition.BuffType"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalCharacterStatusStateDefinition.StaticStruct()"); }
};

struct FPrimalCharacterStatusStateThresholds
{
	// Fields

	TArray<float, TSizedDefaultAllocator<32> >& HighThresholdStatusStateValuesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterStatusStateThresholds.HighThresholdStatusStateValues"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>, TSizedDefaultAllocator<32> >& HighThresholdStatusStateTypeField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterStatusStateThresholds.HighThresholdStatusStateType"); }
	TArray<float, TSizedDefaultAllocator<32> >& LowThresholdStatusStateValuesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterStatusStateThresholds.LowThresholdStatusStateValues"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>, TSizedDefaultAllocator<32> >& LowThresholdStatusStateTypeField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterStatusStateThresholds.LowThresholdStatusStateType"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalCharacterStatusStateThresholds.StaticStruct()"); }
};

struct FPrimalCharacterStatusValueDefinition
{
	// Fields

	UTexture2D*& StatusValueIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalCharacterStatusValueDefinition.StatusValueIcon"); }
	FString& StatusValueNameField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusValueDefinition.StatusValueName"); }
	bool& bDisplayHideCurrentValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueDefinition.bDisplayHideCurrentValue"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalCharacterStatusValueDefinition.StaticStruct()"); }
};

struct FPrimalCharacterStatusValueModifier
{
	// Fields

	TWeakObjectPtr<AActor>& InstigatorField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "FPrimalCharacterStatusValueModifier.Instigator"); }
	FieldArray<char, 4> ValueTypeField() { return { this, "FPrimalCharacterStatusValueModifier.ValueType" }; }
	FieldArray<char, 4> StopOnValueNearMaxField() { return { this, "FPrimalCharacterStatusValueModifier.StopOnValueNearMax" }; }
	float& AmountToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.AmountToAdd"); }
	float& BaseAmountToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.BaseAmountToAdd"); }
	float& SpeedToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.SpeedToAdd"); }
	bool& bSetValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bSetValue"); }
	bool& bMakeUntameableField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bMakeUntameable"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusValueModifier.StatusValueModifierDescriptionIndex"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalCharacterStatusValueModifier.StaticStruct()"); }
};

struct FPrimalItemDefinition
{
	// Fields

	UTexture2D*& ItemTypeIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalItemDefinition.ItemTypeIcon"); }
	FString& ItemTypeNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemDefinition.ItemTypeName"); }
	FColor& ItemTypeColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalItemDefinition.ItemTypeColor"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalItemDefinition.StaticStruct()"); }
};

struct FPrimalItemQuality
{
	// Fields

	FLinearColor& QualityColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimalItemQuality.QualityColor"); }
	FString& QualityNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemQuality.QualityName"); }
	float& QualityRandomMultiplierThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.QualityRandomMultiplierThreshold"); }
	float& CraftingXPMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.CraftingXPMultiplier"); }
	float& RepairingXPMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.RepairingXPMultiplier"); }
	float& CraftingResourceRequirementsMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.CraftingResourceRequirementsMultiplier"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalItemQuality.StaticStruct()"); }
};

struct FPrimalItemStatDefinition
{
	// Fields

	UTexture2D*& ItemStatIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalItemStatDefinition.ItemStatIcon"); }
	FString& ItemStatNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemStatDefinition.ItemStatName"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalItemStatDefinition.StaticStruct()"); }
};

struct FPrimalMapMarkerEntryData
{
	// Fields

	int& coord1Field() { return *GetNativePointerField<int*>(this, "FPrimalMapMarkerEntryData.coord1"); }
	int& coord2Field() { return *GetNativePointerField<int*>(this, "FPrimalMapMarkerEntryData.coord2"); }
	FString& nameField() { return *GetNativePointerField<FString*>(this, "FPrimalMapMarkerEntryData.name"); }
	FColor& OverrideMarkerTextColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalMapMarkerEntryData.OverrideMarkerTextColor"); }
	float& coord1fField() { return *GetNativePointerField<float*>(this, "FPrimalMapMarkerEntryData.coord1f"); }
	float& coord2fField() { return *GetNativePointerField<float*>(this, "FPrimalMapMarkerEntryData.coord2f"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalMapMarkerEntryData.StaticStruct()"); }
};

struct FPrimalPersistentCharacterStatsStruct
{
	// Fields

	unsigned __int16& CharacterStatusComponent_ExtraCharacterLevelField() { return *GetNativePointerField<unsigned __int16*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_ExtraCharacterLevel"); }
	float& CharacterStatusComponent_ExperiencePointsField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_ExperiencePoints"); }
	int& PlayerState_TotalEngramPointsField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_TotalEngramPoints"); }
	int& PlayerState_PurchasedEngramPointsField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_PurchasedEngramPoints"); }
	int& CharacterStatusComponent_HighestExtraCharacterLevelField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_HighestExtraCharacterLevel"); }
	int& CharacterStatusComponent_LastRespecAtExtraCharacterLevelField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_LastRespecAtExtraCharacterLevel"); }
	long double& CharacterStatusComponent_LastRespecUtcTimeSecondsField() { return *GetNativePointerField<long double*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_LastRespecUtcTimeSeconds"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& PerMapExplorerNoteUnlocksField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FPrimalPersistentCharacterStatsStruct.PerMapExplorerNoteUnlocks"); }
	TArray<FName, TSizedDefaultAllocator<32> >& EmoteUnlocksField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FPrimalPersistentCharacterStatsStruct.EmoteUnlocks"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& PlayerState_EngramBlueprintsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_EngramBlueprints"); }
	FieldArray<unsigned __int8, 12> CharacterStatusComponent_NumberOfLevelUpPointsAppliedField() { return { this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_NumberOfLevelUpPointsApplied" }; }
	FieldArray<TSubclassOf<UPrimalItem>, 10> PlayerState_DefaultItemSlotClassesField() { return { this, "FPrimalPersistentCharacterStatsStruct.PlayerState_DefaultItemSlotClasses" }; }
	FieldArray<unsigned __int8, 10> PlayerState_DefaultItemSlotEngramsField() { return { this, "FPrimalPersistentCharacterStatsStruct.PlayerState_DefaultItemSlotEngrams" }; }
	FieldArray<FDinoOrderGroup, 10> DinoOrderGroupsField() { return { this, "FPrimalPersistentCharacterStatsStruct.DinoOrderGroups" }; }
	int& CurrentlySelectedDinoOrderGroupField() { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CurrentlySelectedDinoOrderGroup"); }
	float& PercentageOfHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.PercentageOfHeadHairGrowth"); }
	float& PercentageOfFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.PercentageOfFacialHairGrowth"); }
	unsigned __int8& HeadHairIndexField() { return *GetNativePointerField<unsigned __int8*>(this, "FPrimalPersistentCharacterStatsStruct.HeadHairIndex"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ForcedUnlockDefaultCosmeticsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FPrimalPersistentCharacterStatsStruct.ForcedUnlockDefaultCosmetics"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalPersistentCharacterStatsStruct.StaticStruct()"); }
	FPrimalPersistentCharacterStatsStruct* operator=(const FPrimalPersistentCharacterStatsStruct* __that) { return NativeCall<FPrimalPersistentCharacterStatsStruct*, const FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPersistentCharacterStatsStruct.operator=(FPrimalPersistentCharacterStatsStruct&)", __that); }
	//void FPrimalPersistentCharacterStatsStruct() { NativeCall<void>(this, "FPrimalPersistentCharacterStatsStruct.FPrimalPersistentCharacterStatsStruct()"); }
	//void ~FPrimalPersistentCharacterStatsStruct() { NativeCall<void>(this, "FPrimalPersistentCharacterStatsStruct.~FPrimalPersistentCharacterStatsStruct()"); }
	//void FPrimalPersistentCharacterStatsStruct(const FPrimalPersistentCharacterStatsStruct * __that) { NativeCall<void, const FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPersistentCharacterStatsStruct.FPrimalPersistentCharacterStatsStruct(FPrimalPersistentCharacterStatsStruct&)", __that); }
	bool IsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(this, "FPrimalPersistentCharacterStatsStruct.IsPerMapExplorerNoteUnlocked(int)", ExplorerNoteIndex); }
	bool IsEmoteUnlocked(FName EmoteName) { return NativeCall<bool, FName>(this, "FPrimalPersistentCharacterStatsStruct.IsEmoteUnlocked(FName)", EmoteName); }
// 	void UnlockEmote(FName EmoteName) { NativeCall<void, FName>(this, "FPrimalPersistentCharacterStatsStruct.UnlockEmote(FName)", EmoteName); }
// FUNCTION MISSING: FPrimalPersistentCharacterStatsStruct.UnlockEmote(FName)
	void ApplyToPrimalCharacter(APrimalCharacter* aChar, AShooterPlayerController* forPC, bool bIgnoreStats) { NativeCall<void, APrimalCharacter*, AShooterPlayerController*, bool>(this, "FPrimalPersistentCharacterStatsStruct.ApplyToPrimalCharacter(APrimalCharacter*,AShooterPlayerController*,bool)", aChar, forPC, bIgnoreStats); }
	void GiveEngramsToPlayerState(APrimalCharacter* aChar, AShooterPlayerController* forPC) { NativeCall<void, APrimalCharacter*, AShooterPlayerController*>(this, "FPrimalPersistentCharacterStatsStruct.GiveEngramsToPlayerState(APrimalCharacter*,AShooterPlayerController*)", aChar, forPC); }
};

struct FPrimalPlayerCharacterConfigStruct
{
	// Fields

	FieldArray<FLinearColor, 4> BodyColorsField() { return { this, "FPrimalPlayerCharacterConfigStruct.BodyColors" }; }
	FieldArray<unsigned __int8, 2> OverrideHeadHairColorField() { return { this, "FPrimalPlayerCharacterConfigStruct.OverrideHeadHairColor" }; }
	FieldArray<unsigned __int8, 2> OverrideFacialHairColorField() { return { this, "FPrimalPlayerCharacterConfigStruct.OverrideFacialHairColor" }; }
	unsigned __int8& HeadHairIndexField() { return *GetNativePointerField<unsigned __int8*>(this, "FPrimalPlayerCharacterConfigStruct.HeadHairIndex"); }
	float& PercentOfFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStruct.PercentOfFullHeadHairGrowth"); }
	float& PercentOfFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStruct.PercentOfFullFacialHairGrowth"); }
	FString& PlayerCharacterNameField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerCharacterName"); }
	FieldArray<float, 26> RawBoneModifiersField() { return { this, "FPrimalPlayerCharacterConfigStruct.RawBoneModifiers" }; }
	FieldArray<unsigned __int8, 50> DynamicMaterialBytesField() { return { this, "FPrimalPlayerCharacterConfigStruct.DynamicMaterialBytes" }; }
	int& PlayerVoiceCollectionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerVoiceCollectionIndex"); }
	int& PlayerSpawnRegionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerSpawnRegionIndex"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsFemale() { return { this, "FPrimalPlayerCharacterConfigStruct.bIsFemale" }; }
	BitFieldValue<bool, unsigned __int32> bUsingCustomPlayerVoiceCollection() { return { this, "FPrimalPlayerCharacterConfigStruct.bUsingCustomPlayerVoiceCollection" }; }

	// Functions

	//void FPrimalPlayerCharacterConfigStruct(const FPrimalPlayerCharacterConfigStruct* __that) { NativeCall<void, const FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStruct.FPrimalPlayerCharacterConfigStruct(FPrimalPlayerCharacterConfigStruct&)", __that); }
	FPrimalPlayerCharacterConfigStruct* operator=(const FPrimalPlayerCharacterConfigStruct* __that) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, const FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStruct.operator=(FPrimalPlayerCharacterConfigStruct&)", __that); }
	//void FPrimalPlayerCharacterConfigStruct() { NativeCall<void>(this, "FPrimalPlayerCharacterConfigStruct.FPrimalPlayerCharacterConfigStruct()"); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalPlayerCharacterConfigStruct.StaticStruct()"); }
	//void FPrimalPlayerCharacterConfigStruct(FPrimalPlayerCharacterConfigStruct* __that) { NativeCall<void, FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStruct.FPrimalPlayerCharacterConfigStruct(FPrimalPlayerCharacterConfigStruct&)", __that); }
	FPrimalPlayerCharacterConfigStruct* operator=(FPrimalPlayerCharacterConfigStruct* __that) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStruct.operator=(FPrimalPlayerCharacterConfigStruct&)", __that); }
};

struct FPrimalPlayerDataStruct
{
	// Fields

	unsigned __int64& PlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FPrimalPlayerDataStruct.PlayerDataID"); }
	FUniqueNetIdRepl& UniqueIDField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "FPrimalPlayerDataStruct.UniqueID"); }
	FString& SavedNetworkAddressField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerDataStruct.SavedNetworkAddress"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerDataStruct.PlayerName"); }
	unsigned int& LocalPlayerIndexField() { return *GetNativePointerField<unsigned int*>(this, "FPrimalPlayerDataStruct.LocalPlayerIndex"); }
	FPrimalPlayerCharacterConfigStruct& MyPlayerCharacterConfigField() { return *GetNativePointerField<FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerDataStruct.MyPlayerCharacterConfig"); }
	int& LastPinCodeUsedField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.LastPinCodeUsed"); }
	FPrimalPersistentCharacterStatsStruct& MyPersistentCharacterStatsField() { return *GetNativePointerField<FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPlayerDataStruct.MyPersistentCharacterStats"); }
	int& NumPersonalDinosField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.NumPersonalDinos"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.TribeID"); }
	TArray<int, TSizedDefaultAllocator<32> >& AppIDSetField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.AppIDSet"); }
	int& PlayerDataVersionField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.PlayerDataVersion"); }
	long double& NextAllowedRespawnTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.NextAllowedRespawnTime"); }
	long double& LastTimeDiedToEnemyTeamField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastTimeDiedToEnemyTeam"); }
	long double& LoginTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LoginTime"); }
	long double& LastLoginTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastLoginTime"); }
	float& AllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.AllowedRespawnInterval"); }
	float& NumOfDeathsField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.NumOfDeaths"); }
	int& SpawnDayNumberField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.SpawnDayNumber"); }
	float& SpawnDayTimeField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.SpawnDayTime"); }
	long double& LastInventoryRetrievalUTCTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastInventoryRetrievalUTCTime"); }
	long double& SuicideCooldownStartTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.SuicideCooldownStartTime"); }
	TArray<FLatestMissionScore, TSizedDefaultAllocator<32> >& LatestMissionScoresField() { return *GetNativePointerField<TArray<FLatestMissionScore, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.LatestMissionScores"); }
	TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32> >& PersonalCachedTeamActorList_UpdatedOnIntervalField() { return *GetNativePointerField<TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.PersonalCachedTeamActorList_UpdatedOnInterval"); }
	long double& LastNetworkTimeUpdatedPersonalCachedTeamActorListsField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastNetworkTimeUpdatedPersonalCachedTeamActorLists"); }
	//TArray<FVectorBoolPair, TSizedDefaultAllocator<32> >& ServerSavedLastDeathLocationsField() { return *GetNativePointerField<TArray<FVectorBoolPair, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.ServerSavedLastDeathLocations"); }
	//TArray<FTrackedActorIDCategoryPair, TSizedDefaultAllocator<32> >& SavedFavoritedTrackedActorInfoField() { return *GetNativePointerField<TArray<FTrackedActorIDCategoryPair, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.SavedFavoritedTrackedActorInfo"); }
	//TArray<FTrackedActorIDCategoryPairWithBool, TSizedDefaultAllocator<32> >& SavedWaypointTrackedActorInfoField() { return *GetNativePointerField<TArray<FTrackedActorIDCategoryPairWithBool, TSizedDefaultAllocator<32> >*>(this, "FPrimalPlayerDataStruct.SavedWaypointTrackedActorInfo"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bFirstSpawned() { return { this, "FPrimalPlayerDataStruct.bFirstSpawned" }; }
	BitFieldValue<bool, unsigned __int32> bUseSpectator() { return { this, "FPrimalPlayerDataStruct.bUseSpectator" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPrimalPlayerDataStruct.StaticStruct()"); }
	FPrimalPlayerDataStruct* operator=(const FPrimalPlayerDataStruct* __that) { return NativeCall<FPrimalPlayerDataStruct*, const FPrimalPlayerDataStruct*>(this, "FPrimalPlayerDataStruct.operator=(FPrimalPlayerDataStruct&)", __that); }
};

struct FConfigCacheIni
{
	// Fields

	//FConfigCacheIni_vtbl*& __vftableField() { return *GetNativePointerField<FConfigCacheIni_vtbl**>(this, "FConfigCacheIni.__vftable"); }
	bool& bIsReadyForUseField() { return *GetNativePointerField<bool*>(this, "FConfigCacheIni.bIsReadyForUse"); }
	//FConfigCacheIni::FKnownConfigFiles& KnownFilesField() { return *GetNativePointerField<FConfigCacheIni::FKnownConfigFiles*>(this, "FConfigCacheIni.KnownFiles"); }
	TMap<FString, FConfigFile*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FConfigFile*, 0> >& OtherFilesField() { return *GetNativePointerField<TMap<FString, FConfigFile*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, FConfigFile*, 0> >*>(this, "FConfigCacheIni.OtherFiles"); }

	// Bitfields


	// Functions

// 	bool AreFileOperationsDisabled() { return NativeCall<bool>(this, "FConfigCacheIni.AreFileOperationsDisabled()"); }
// FUNCTION MISSING: FConfigCacheIni.AreFileOperationsDisabled()
	int GetIntOrDefault(const wchar_t* Section, const wchar_t* Key, const int DefaultValue, const FString* Filename) { return NativeCall<int, const wchar_t*, const wchar_t*, const int, const FString*>(this, "FConfigCacheIni.GetIntOrDefault(wchar_t*,wchar_t*,int,FString&)", Section, Key, DefaultValue, Filename); }
	FConfigFile* FindConfigFile(const FString* Filename) { return NativeCall<FConfigFile*, const FString*>(this, "FConfigCacheIni.FindConfigFile(FString&)", Filename); }
	FConfigFile* Find(const FString* Filename) { return NativeCall<FConfigFile*, const FString*>(this, "FConfigCacheIni.Find(FString&)", Filename); }
// 	FConfigFile* FindConfigFileWithBaseName(FName BaseName) { return NativeCall<FConfigFile*, FName>(this, "FConfigCacheIni.FindConfigFileWithBaseName(FName)", BaseName); }
// FUNCTION MISSING: FConfigCacheIni.FindConfigFileWithBaseName(FName)
	TArray<FString, TSizedDefaultAllocator<32> >* GetFilenames(TArray<FString, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FConfigCacheIni.GetFilenames()", result); }
	void Flush(bool bRemoveFromCache, const FString* Filename) { NativeCall<void, bool, const FString*>(this, "FConfigCacheIni.Flush(bool,FString&,bool)", bRemoveFromCache, Filename); }
// 	void Parse1ToNSectionOfNames(const wchar_t* Section, const wchar_t* KeyOne, const wchar_t* KeyN, TMap<FName, TArray<FName, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<FName, TSizedDefaultAllocator<32> >, 0> >* OutMap, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, TMap<FName, TArray<FName, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<FName, TSizedDefaultAllocator<32> >, 0> >*, const FString*>(this, "FConfigCacheIni.Parse1ToNSectionOfNames(wchar_t*,wchar_t*,wchar_t*,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>>,0>>&,FString&)", Section, KeyOne, KeyN, OutMap, Filename); }
// FUNCTION MISSING: FConfigCacheIni.Parse1ToNSectionOfNames(wchar_t*,wchar_t*,wchar_t*,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>>,0>>&,FString&)
// 	void Parse1ToNSectionOfStrings(const wchar_t* Section, const wchar_t* KeyOne, const wchar_t* KeyN, TMap<FString, TArray<FString, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<FString, TSizedDefaultAllocator<32> >, 0> >* OutMap, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, TMap<FString, TArray<FString, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<FString, TSizedDefaultAllocator<32> >, 0> >*, const FString*>(this, "FConfigCacheIni.Parse1ToNSectionOfStrings(wchar_t*,wchar_t*,wchar_t*,TMap<FString,TArray<FString,TSizedDefaultAllocator<32>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>>,0>>&,FString&)", Section, KeyOne, KeyN, OutMap, Filename); }
// FUNCTION MISSING: FConfigCacheIni.Parse1ToNSectionOfStrings(wchar_t*,wchar_t*,wchar_t*,TMap<FString,TArray<FString,TSizedDefaultAllocator<32>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>>,0>>&,FString&)
	void LoadFile(const FString* Filename, const FConfigFile* Fallback, const wchar_t* PlatformString) { NativeCall<void, const FString*, const FConfigFile*, const wchar_t*>(this, "FConfigCacheIni.LoadFile(FString&,FConfigFile*,wchar_t*)", Filename, Fallback, PlatformString); }
	void UnloadFile(const FString* Filename) { NativeCall<void, const FString*>(this, "FConfigCacheIni.UnloadFile(FString&)", Filename); }
	bool GetString(const wchar_t* Section, const wchar_t* Key, FString* Value, const FString* Filename) { return NativeCall<bool, const wchar_t*, const wchar_t*, FString*, const FString*>(this, "FConfigCacheIni.GetString(wchar_t*,wchar_t*,FString&,FString&)", Section, Key, Value, Filename); }
	bool GetSection(const wchar_t* Section, TArray<FString, TSizedDefaultAllocator<32> >* Result, const FString* Filename) { return NativeCall<bool, const wchar_t*, TArray<FString, TSizedDefaultAllocator<32> >*, const FString*>(this, "FConfigCacheIni.GetSection(wchar_t*,TArray<FString,TSizedDefaultAllocator<32>>&,FString&)", Section, Result, Filename); }
	FConfigSection* GetSectionPrivate(const wchar_t* Section, const bool Force, const bool Const, const FString* Filename) { return NativeCall<FConfigSection*, const wchar_t*, const bool, const bool, const FString*>(this, "FConfigCacheIni.GetSectionPrivate(wchar_t*,bool,bool,FString&)", Section, Force, Const, Filename); }
	bool DoesSectionExist(const wchar_t* Section, const FString* Filename) { return NativeCall<bool, const wchar_t*, const FString*>(this, "FConfigCacheIni.DoesSectionExist(wchar_t*,FString&)", Section, Filename); }
	void SetString(const wchar_t* Section, const wchar_t* Key, const wchar_t* Value, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, const FString*>(this, "FConfigCacheIni.SetString(wchar_t*,wchar_t*,wchar_t*,FString&)", Section, Key, Value, Filename); }
	bool RemoveKey(const wchar_t* Section, const wchar_t* Key, const FString* Filename) { return NativeCall<bool, const wchar_t*, const wchar_t*, const FString*>(this, "FConfigCacheIni.RemoveKey(wchar_t*,wchar_t*,FString&)", Section, Key, Filename); }
	bool EmptySection(const wchar_t* Section, const FString* Filename) { return NativeCall<bool, const wchar_t*, const FString*>(this, "FConfigCacheIni.EmptySection(wchar_t*,FString&)", Section, Filename); }
// 	FString* GetConfigFilename(FString* result, const wchar_t* BaseIniName) { return NativeCall<FString*, FString*, const wchar_t*>(this, "FConfigCacheIni.GetConfigFilename(wchar_t*)", result, BaseIniName); }
// FUNCTION MISSING: FConfigCacheIni.GetConfigFilename(wchar_t*)
	bool GetSectionNames(const FString* Filename, TArray<FString, TSizedDefaultAllocator<32> >* out_SectionNames) { return NativeCall<bool, const FString*, TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FConfigCacheIni.GetSectionNames(FString&,TArray<FString,TSizedDefaultAllocator<32>>&)", Filename, out_SectionNames); }
	bool GetPerObjectConfigSections(const FString* Filename, const FString* SearchClass, TArray<FString, TSizedDefaultAllocator<32> >* out_SectionNames) { return NativeCall<bool, const FString*, const FString*, TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FConfigCacheIni.GetPerObjectConfigSections(FString&,FString&,TArray<FString,TSizedDefaultAllocator<32>>&,int)", Filename, SearchClass, out_SectionNames); }
	void Dump(FOutputDevice* Ar, const wchar_t* BaseIniName) { NativeCall<void, FOutputDevice*, const wchar_t*>(this, "FConfigCacheIni.Dump(FOutputDevice&,wchar_t*)", Ar, BaseIniName); }
	FString* GetStr(FString* result, const wchar_t* Section, const wchar_t* Key, const FString* Filename) { return NativeCall<FString*, FString*, const wchar_t*, const wchar_t*, const FString*>(this, "FConfigCacheIni.GetStr(wchar_t*,wchar_t*,FString&)", result, Section, Key, Filename); }
	bool GetInt(const wchar_t* Section, const wchar_t* Key, int* Value, const FString* Filename) { return NativeCall<bool, const wchar_t*, const wchar_t*, int*, const FString*>(this, "FConfigCacheIni.GetInt(wchar_t*,wchar_t*,int&,FString&)", Section, Key, Value, Filename); }
	bool GetFloat(const wchar_t* Section, const wchar_t* Key, float* Value, const FString* Filename) { return NativeCall<bool, const wchar_t*, const wchar_t*, float*, const FString*>(this, "FConfigCacheIni.GetFloat(wchar_t*,wchar_t*,float&,FString&)", Section, Key, Value, Filename); }
	bool GetBool(const wchar_t* Section, const wchar_t* Key, bool* Value, const FString* Filename) { return NativeCall<bool, const wchar_t*, const wchar_t*, bool*, const FString*>(this, "FConfigCacheIni.GetBool(wchar_t*,wchar_t*,bool&,FString&)", Section, Key, Value, Filename); }
	int GetArray(const wchar_t* Section, const wchar_t* Key, TArray<FString, TSizedDefaultAllocator<32> >* out_Arr, const FString* Filename) { return NativeCall<int, const wchar_t*, const wchar_t*, TArray<FString, TSizedDefaultAllocator<32> >*, const FString*>(this, "FConfigCacheIni.GetArray(wchar_t*,wchar_t*,TArray<FString,TSizedDefaultAllocator<32>>&,FString&)", Section, Key, out_Arr, Filename); }
	int GetSingleLineArray(const wchar_t* Section, const wchar_t* Key, TArray<FString, TSizedDefaultAllocator<32> >* out_Arr) { return NativeCall<int, const wchar_t*, const wchar_t*, TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FConfigCacheIni.GetSingleLineArray(wchar_t*,wchar_t*,TArray<FString,TSizedDefaultAllocator<32>>&,FString&)", Section, Key, out_Arr); }
	bool GetVector2D(const wchar_t* Section, const wchar_t* Key, UE::Math::TVector2<double>* Value, const FString* Filename) { return NativeCall<bool, const wchar_t*, const wchar_t*, UE::Math::TVector2<double>*, const FString*>(this, "FConfigCacheIni.GetVector2D(wchar_t*,wchar_t*,UE::Math::TVector2<double>&,FString&)", Section, Key, Value, Filename); }
	void SetInt(const wchar_t* Section, const wchar_t* Key, int Value, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, int, const FString*>(this, "FConfigCacheIni.SetInt(wchar_t*,wchar_t*,int,FString&)", Section, Key, Value, Filename); }
	void SetFloat(const wchar_t* Section, const wchar_t* Key, float Value, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, float, const FString*>(this, "FConfigCacheIni.SetFloat(wchar_t*,wchar_t*,float,FString&)", Section, Key, Value, Filename); }
	void SetBool(const wchar_t* Section, const wchar_t* Key, bool Value, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, bool, const FString*>(this, "FConfigCacheIni.SetBool(wchar_t*,wchar_t*,bool,FString&)", Section, Key, Value, Filename); }
// 	void SetVector(const wchar_t* Section, const wchar_t* Key, UE::Math::TVector<double>* Value, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, UE::Math::TVector<double>*, const FString*>(this, "FConfigCacheIni.SetVector(wchar_t*,wchar_t*,UE::Math::TVector<double>,FString&)", Section, Key, Value, Filename); }
// FUNCTION MISSING: FConfigCacheIni.SetVector(wchar_t*,wchar_t*,UE::Math::TVector<double>,FString&)
// 	void ShowMemoryUsage(FOutputDevice* Ar) { NativeCall<void, FOutputDevice*>(this, "FConfigCacheIni.ShowMemoryUsage(FOutputDevice&)", Ar); }
// FUNCTION MISSING: FConfigCacheIni.ShowMemoryUsage(FOutputDevice&)
// 	unsigned __int64 GetMaxMemoryUsage() { return NativeCall<unsigned __int64>(this, "FConfigCacheIni.GetMaxMemoryUsage()"); }
// FUNCTION MISSING: FConfigCacheIni.GetMaxMemoryUsage()
	bool ForEachEntry(const TDelegate<void __cdecl(wchar_t const*, wchar_t const*), FDefaultDelegateUserPolicy>* Visitor, const wchar_t* Section, const FString* Filename) { return NativeCall<bool, const TDelegate<void __cdecl(wchar_t const*, wchar_t const*), FDefaultDelegateUserPolicy>*, const wchar_t*, const FString*>(this, "FConfigCacheIni.ForEachEntry(TDelegate<void__cdecl(wchar_t*,wchar_t*)", Visitor, Section, Filename); }
	static FString* GetDestIniFilename(FString* result, const wchar_t* BaseIniName, const wchar_t* PlatformName, const wchar_t* GeneratedConfigDir) { return NativeCall<FString*, FString*, const wchar_t*, const wchar_t*, const wchar_t*>(nullptr, "FConfigCacheIni.GetDestIniFilename(wchar_t*,wchar_t*,wchar_t*)", result, BaseIniName, PlatformName, GeneratedConfigDir); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FConfigCacheIni.Serialize(FArchive&)", Ar); }
	void SerializeStateForBootstrap_Impl(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FConfigCacheIni.SerializeStateForBootstrap_Impl(FArchive&)", Ar); }
	void FKnownConfigFiles() { NativeCall<void>(this, "FConfigCacheIni.FKnownConfigFiles.~FKnownConfigFiles()"); }
	static bool CreateGConfigFromSaved(const wchar_t* Filename) { return NativeCall<bool, const wchar_t*>(nullptr, "FConfigCacheIni.CreateGConfigFromSaved(wchar_t*)", Filename); }
	static void InitializeConfigSystem(__int64 a1, __int64 a2, __int64 a3) { NativeCall<void, __int64, __int64, __int64>(nullptr, "FConfigCacheIni.InitializeConfigSystem()", a1, a2, a3); }
	static const FString* GetCustomConfigString() { return NativeCall<const FString*>(nullptr, "FConfigCacheIni.GetCustomConfigString()"); }
	static bool LoadGlobalIniFile(FString* OutFinalIniFilename, const wchar_t* BaseIniName, const wchar_t* Platform, bool bForceReload, bool bRequireDefaultIni, bool bAllowGeneratedIniWhenCooked, bool bAllowRemoteConfig, const wchar_t* GeneratedConfigDir, FConfigCacheIni* ConfigSystem) { return NativeCall<bool, FString*, const wchar_t*, const wchar_t*, bool, bool, bool, bool, const wchar_t*, FConfigCacheIni*>(nullptr, "FConfigCacheIni.LoadGlobalIniFile(FString&,wchar_t*,wchar_t*,bool,bool,bool,bool,wchar_t*,FConfigCacheIni*)", OutFinalIniFilename, BaseIniName, Platform, bForceReload, bRequireDefaultIni, bAllowGeneratedIniWhenCooked, bAllowRemoteConfig, GeneratedConfigDir, ConfigSystem); }
	static bool LoadLocalIniFile(FConfigFile* ConfigFile, const wchar_t* IniName, bool bIsBaseIniName, const wchar_t* Platform, bool bForceReload) { return NativeCall<bool, FConfigFile*, const wchar_t*, bool, const wchar_t*, bool>(nullptr, "FConfigCacheIni.LoadLocalIniFile(FConfigFile&,wchar_t*,bool,wchar_t*,bool)", ConfigFile, IniName, bIsBaseIniName, Platform, bForceReload); }
// 	static FConfigFile* FindPlatformConfig(const wchar_t* IniName, const wchar_t* Platform) { return NativeCall<FConfigFile*, const wchar_t*, const wchar_t*>(nullptr, "FConfigCacheIni.FindPlatformConfig(wchar_t*,wchar_t*)", IniName, Platform); }
// FUNCTION MISSING: FConfigCacheIni.FindPlatformConfig(wchar_t*,wchar_t*)
	static FConfigFile* FindOrLoadPlatformConfig(FConfigFile* LocalFile, const wchar_t* IniName, const wchar_t* Platform) { return NativeCall<FConfigFile*, FConfigFile*, const wchar_t*, const wchar_t*>(nullptr, "FConfigCacheIni.FindOrLoadPlatformConfig(FConfigFile&,wchar_t*,wchar_t*)", LocalFile, IniName, Platform); }
	//static void LoadConsoleVariablesFromINI(void(__fastcall*)(void*) a1) { NativeCall<void, void(__fastcall*)(void*)>(nullptr, "FConfigCacheIni.LoadConsoleVariablesFromINI()", a1); }
	int Remove(const FString* Filename) { return NativeCall<int, const FString*>(this, "FConfigCacheIni.Remove(FString&)", Filename); }
	FConfigFile* Add(const FString* Filename, const FConfigFile* File) { return NativeCall<FConfigFile*, const FString*, const FConfigFile*>(this, "FConfigCacheIni.Add(FString&,FConfigFile&)", Filename, File); }
};

struct FCustomItemByteArray
{
	TArray<unsigned char> Bytes;
	// Fields

	TArray<unsigned char, TSizedDefaultAllocator<32> >& BytesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FCustomItemByteArray.Bytes"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FCustomItemByteArray.StaticStruct()"); }
};

struct FCustomItemByteArrays
{
	TArray<FCustomItemByteArray> ByteArrays;
	// Fields

	TArray<FCustomItemByteArray, TSizedDefaultAllocator<32> >& ByteArraysField() { return *GetNativePointerField<TArray<FCustomItemByteArray, TSizedDefaultAllocator<32> >*>(this, "FCustomItemByteArrays.ByteArrays"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FCustomItemByteArrays.StaticStruct()"); }
	FCustomItemByteArrays* operator=(const FCustomItemByteArrays* __that) { return NativeCall<FCustomItemByteArrays*, const FCustomItemByteArrays*>(this, "FCustomItemByteArrays.operator=(FCustomItemByteArrays&)", __that); }
};

struct FCustomItemDoubles
{
	TArray<double> Doubles;
	// Fields

	TArray<double, TSizedDefaultAllocator<32> >& DoublesField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "FCustomItemDoubles.Doubles"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FCustomItemDoubles.StaticStruct()"); }
};

struct FCustomItemData
{

	FCustomItemByteArrays CustomDataBytes;
	FCustomItemDoubles CustomDataDoubles;
	TArray<FString, TSizedDefaultAllocator<32>> CustomDataStrings;
	TArray<float, TSizedDefaultAllocator<32>> CustomDataFloats;
	TArray<UObject*, TSizedDefaultAllocator<32>> CustomDataObjects;
	TArray<UClass*, TSizedDefaultAllocator<32>> CustomDataClasses;
	TArray<FName, TSizedDefaultAllocator<32>> CustomDataNames;
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32>> UniquePaintingIdMap;
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32>> PaintingRevisionMap;
	FName CustomDataName;
	TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32>> CustomDataSoftClasses;

	// Fields

	FCustomItemByteArrays& CustomDataBytesField() { return *GetNativePointerField<FCustomItemByteArrays*>(this, "FCustomItemData.CustomDataBytes"); }
	FCustomItemDoubles& CustomDataDoublesField() { return *GetNativePointerField<FCustomItemDoubles*>(this, "FCustomItemData.CustomDataDoubles"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CustomDataStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataStrings"); }
	TArray<float, TSizedDefaultAllocator<32> >& CustomDataFloatsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataFloats"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& CustomDataObjectsField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataObjects"); }
	TArray<UClass*, TSizedDefaultAllocator<32> >& CustomDataClassesField() { return *GetNativePointerField<TArray<UClass*, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataClasses"); }
	TArray<FName, TSizedDefaultAllocator<32> >& CustomDataNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataNames"); }
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >& UniquePaintingIdMapField() { return *GetNativePointerField<TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.UniquePaintingIdMap"); }
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >& PaintingRevisionMapField() { return *GetNativePointerField<TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.PaintingRevisionMap"); }
	FName& CustomDataNameField() { return *GetNativePointerField<FName*>(this, "FCustomItemData.CustomDataName"); }
	TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& CustomDataSoftClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataSoftClasses"); }

	// Bitfields


	// Functions

	bool Serialize(FArchive* Ar) { return NativeCall<bool, FArchive*>(this, "FCustomItemData.Serialize(FArchive&)", Ar); }
	FCustomItemData& operator=(FCustomItemData* __that) { return NativeCall<FCustomItemData&, FCustomItemData*>(this, "FCustomItemData.operator=(FCustomItemData&&)", __that); }
	FCustomItemData& operator=(const FCustomItemData* __that) { return NativeCall<FCustomItemData&, const FCustomItemData*>(this, "FCustomItemData.operator=(FCustomItemData&)", __that); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FCustomItemData.StaticStruct()"); }
};

struct FWeightedObjectList
{
	// Fields

	TArray<float, TSizedDefaultAllocator<32> >& WeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FWeightedObjectList.Weights"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& AssociatedObjectsField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "FWeightedObjectList.AssociatedObjects"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FWeightedObjectList.StaticStruct()"); }
	UObject* GetRandomObject() { return NativeCall<UObject*>(this, "FWeightedObjectList.GetRandomObject()"); }
};

struct FVector_NetQuantize : UE::Math::TVector<double>
{
	// Fields


	  // Bitfields


	  // Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FVector_NetQuantize.StaticStruct()"); }
	bool NetSerialize(FArchive* Ar, UPackageMap* Map, bool* bOutSuccess) { return NativeCall<bool, FArchive*, UPackageMap*, bool*>(this, "FVector_NetQuantize.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
};

struct FUseItemAddCharacterStatusValue
{
	// Fields

	float& BaseAmountToAddField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.BaseAmountToAdd"); }
	float& LimitExistingModifierDescriptionToMaxAmountField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.LimitExistingModifierDescriptionToMaxAmount"); }
	float& AddOverTimeSpeedField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.AddOverTimeSpeed"); }
	float& PercentAbsoluteMaxValueField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.PercentAbsoluteMaxValue"); }
	float& PercentAbsoluteMinValueField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.PercentAbsoluteMinValue"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FUseItemAddCharacterStatusValue.StatusValueModifierDescriptionIndex"); }
	float& ItemQualityAddValueMultiplierField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.ItemQualityAddValueMultiplier"); }
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& StopAtValueNearMaxField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FUseItemAddCharacterStatusValue.StopAtValueNearMax"); }
	TSoftClassPtr<UDamageType>& ScaleValueByCharacterDamageTypeField() { return *GetNativePointerField<TSoftClassPtr<UDamageType>*>(this, "FUseItemAddCharacterStatusValue.ScaleValueByCharacterDamageType"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPercentOfMaxStatusValue() { return { this, "FUseItemAddCharacterStatusValue.bPercentOfMaxStatusValue" }; }
	BitFieldValue<bool, unsigned __int32> bPercentOfCurrentStatusValue() { return { this, "FUseItemAddCharacterStatusValue.bPercentOfCurrentStatusValue" }; }
	BitFieldValue<bool, unsigned __int32> bUseItemQuality() { return { this, "FUseItemAddCharacterStatusValue.bUseItemQuality" }; }
	BitFieldValue<bool, unsigned __int32> bDontRequireLessThanMaxToUse() { return { this, "FUseItemAddCharacterStatusValue.bDontRequireLessThanMaxToUse" }; }
	BitFieldValue<bool, unsigned __int32> bAddOverTime() { return { this, "FUseItemAddCharacterStatusValue.bAddOverTime" }; }
	BitFieldValue<bool, unsigned __int32> bAddOverTimeSpeedInSeconds() { return { this, "FUseItemAddCharacterStatusValue.bAddOverTimeSpeedInSeconds" }; }
	BitFieldValue<bool, unsigned __int32> bContinueOnUnchangedValue() { return { this, "FUseItemAddCharacterStatusValue.bContinueOnUnchangedValue" }; }
	BitFieldValue<bool, unsigned __int32> bSetValue() { return { this, "FUseItemAddCharacterStatusValue.bSetValue" }; }
	BitFieldValue<bool, unsigned __int32> bSetAdditionalValue() { return { this, "FUseItemAddCharacterStatusValue.bSetAdditionalValue" }; }
	BitFieldValue<bool, unsigned __int32> bResetExistingModifierDescriptionIndex() { return { this, "FUseItemAddCharacterStatusValue.bResetExistingModifierDescriptionIndex" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseStatOnDinos() { return { this, "FUseItemAddCharacterStatusValue.bForceUseStatOnDinos" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FUseItemAddCharacterStatusValue.StaticStruct()"); }
};

struct FUniqueNetId
{
	// Fields

	//FUniqueNetId_vtbl*& __vftableField() { return *GetNativePointerField<FUniqueNetId_vtbl**>(this, "FUniqueNetId.__vftable"); }

	// Bitfields


	// Functions

	unsigned int GetTypeHash() { return NativeCall<unsigned int>(this, "FUniqueNetId.GetTypeHash()"); }
	bool Compare(const FUniqueNetId* Other) { return NativeCall<bool, const FUniqueNetId*>(this, "FUniqueNetId.Compare(FUniqueNetId&)", Other); }
};

struct FUniqueNetIdString : FUniqueNetId
{
	// Fields

	FString& UniqueNetIdStrField() { return *GetNativePointerField<FString*>(this, "FUniqueNetIdString.UniqueNetIdStr"); }
	FName& TypeField() { return *GetNativePointerField<FName*>(this, "FUniqueNetIdString.Type"); }

	// Bitfields


	// Functions

	unsigned char const* GetBytes()const { return NativeCall<unsigned char const*>(this, "FUniqueNetIdString.GetBytes()"); }
	bool IsValid()const { return NativeCall<bool>(this, "FUniqueNetIdString.IsValid()"); }
	int GetSize()const { return NativeCall<int>(this, "FUniqueNetIdString.GetSize()"); }
	FString ToString()const { return NativeCall<FString>(this, "FUniqueNetIdString.ToString()"); }
	FName GetType()const { return NativeCall<FName>(this, "FUniqueNetIdString.GetType()"); }
	unsigned int GetTypeHash()const { return NativeCall<unsigned int>(this, "FUniqueNetIdString.GetTypeHash()"); }
	FString ToDebugString()const { return NativeCall<FString>(this, "FUniqueNetIdString.ToDebugString()"); }
	//static TSharedRef<FUniqueNetIdString const> Create(const FString& InUniqueNetId, FName InType) { return NativeCall<TSharedRef<FUniqueNetIdString const>, const FString&, FName>(this, "FUniqueNetIdString.Create(FString&,FName)", InUniqueNetId, InType); }

};

struct FUniqueNetIdEOS : FUniqueNetId
{
	// Fields

	//EOS_ProductUserIdDetails*& ProductUserIdField() { return *GetNativePointerField<EOS_ProductUserIdDetails**>(this, "FUniqueNetIdEOS.ProductUserId"); }
	unsigned __int8*& DataBytesField() { return *GetNativePointerField<unsigned __int8**>(this, "FUniqueNetIdEOS.DataBytes"); }
	int& DataBytesSizeField() { return *GetNativePointerField<int*>(this, "FUniqueNetIdEOS.DataBytesSize"); }

	// Bitfields


	// Functions

	FName* GetType(FName* result) { return NativeCall<FName*, FName*>(this, "FUniqueNetIdEOS.GetType()", result); }
	static TSharedRef<FUniqueNetIdEOS const>* MakeInvalidId(TSharedRef<FUniqueNetIdEOS const>* result) { return NativeCall<TSharedRef<FUniqueNetIdEOS const> *, TSharedRef<FUniqueNetIdEOS const>*>(nullptr, "FUniqueNetIdEOS.MakeInvalidId()", result); }
	static TSharedRef<FUniqueNetIdEOS const>* MakeDedicatedServerId(TSharedRef<FUniqueNetIdEOS const>* result) { return NativeCall<TSharedRef<FUniqueNetIdEOS const> *, TSharedRef<FUniqueNetIdEOS const>*>(nullptr, "FUniqueNetIdEOS.MakeDedicatedServerId()", result); }
	bool Compare(const FUniqueNetId* Other) { return NativeCall<bool, const FUniqueNetId*>(this, "FUniqueNetIdEOS.Compare(FUniqueNetId&)", Other); }
	bool IsValid() { return NativeCall<bool>(this, "FUniqueNetIdEOS.IsValid()"); }
	FString* ToString(FString* result) { return NativeCall<FString*, FString*>(this, "FUniqueNetIdEOS.ToString()", result); }
	FString* ToDebugString(FString* result) { return NativeCall<FString*, FString*>(this, "FUniqueNetIdEOS.ToDebugString()", result); }
	static TSharedPtr<FUniqueNetIdEOS const>* ParseFromString(TSharedPtr<FUniqueNetIdEOS const>* result, const FString* ProductUserIdStr) { return NativeCall<TSharedPtr<FUniqueNetIdEOS const> *, TSharedPtr<FUniqueNetIdEOS const>*, const FString*>(nullptr, "FUniqueNetIdEOS.ParseFromString(FString&)", result, ProductUserIdStr); }
	static const TSharedRef<FUniqueNetIdEOS const>* InvalidId() { return NativeCall<const TSharedRef<FUniqueNetIdEOS const> *>(nullptr, "FUniqueNetIdEOS.InvalidId()"); }
	static const TSharedRef<FUniqueNetIdEOS const>* DedicatedServerId() { return NativeCall<const TSharedRef<FUniqueNetIdEOS const> *>(nullptr, "FUniqueNetIdEOS.DedicatedServerId()"); }
};

struct FCharacterAndControllerPair
{
	// Fields

	AShooterCharacter*& CharacterField() { return *GetNativePointerField<AShooterCharacter**>(this, "FCharacterAndControllerPair.Character"); }
	AShooterPlayerController*& ControllerField() { return *GetNativePointerField<AShooterPlayerController**>(this, "FCharacterAndControllerPair.Controller"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FCharacterAndControllerPair.StaticStruct()"); }
};

struct FRadialDamageParams
{
	// Fields

	float& BaseDamageField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.BaseDamage"); }
	float& MinimumDamageField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.MinimumDamage"); }
	float& InnerRadiusField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.InnerRadius"); }
	float& OuterRadiusField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.OuterRadius"); }
	float& DamageFalloffField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.DamageFalloff"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FRadialDamageParams.StaticStruct()"); }
};

struct FRadialDamageEvent : FDamageEvent
{
	// Fields

	FRadialDamageParams& ParamsField() { return *GetNativePointerField<FRadialDamageParams*>(this, "FRadialDamageEvent.Params"); }
	UE::Math::TVector<double>& OriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FRadialDamageEvent.Origin"); }
	TArray<FHitResult, TSizedDefaultAllocator<32> >& ComponentHitsField() { return *GetNativePointerField<TArray<FHitResult, TSizedDefaultAllocator<32> >*>(this, "FRadialDamageEvent.ComponentHits"); }

	// Bitfields


	// Functions

	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>& OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>&>(this, "FRadialDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
	int GetTypeID()const { return NativeCall<int>(this, "FRadialDamageEvent.GetTypeID()"); }
	bool IsOfType(int InID) const { return NativeCall<bool, int>(this, "FRadialDamageEvent.IsOfType(int)", InID); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FRadialDamageEvent.StaticStruct()"); }

};

struct FPointDamageEvent : FDamageEvent
{
	// Fields

	float& DamageField() { return *GetNativePointerField<float*>(this, "FPointDamageEvent.Damage"); }
	FVector_NetQuantizeNormal& ShotDirectionField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FPointDamageEvent.ShotDirection"); }
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "FPointDamageEvent.HitInfo"); }

	// Bitfields


	// Functions

	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>* OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*>(this, "FPointDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
	int GetTypeID()const { return NativeCall<int>(this, "FPointDamageEvent.GetTypeID()"); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPointDamageEvent.StaticStruct()"); }
	bool IsOfType(int InID) const { return NativeCall<bool, int>(this, "FPointDamageEvent.IsOfType(int)", InID); }
};

struct FUserCosmeticInfo
{
	// Fields

	FString& TribeFlagFileField() { return *GetNativePointerField<FString*>(this, "FUserCosmeticInfo.TribeFlagFile"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FUserCosmeticInfo.StaticStruct()"); }
};

struct IMemoryReadStream
{
	// Fields

	FThreadSafeCounter& NumRefsField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "IMemoryReadStream.NumRefs"); }

	// Bitfields


	// Functions

	void EnsureReadNonBlocking() { NativeCall<void>(this, "IMemoryReadStream.EnsureReadNonBlocking()"); }
	void CopyTo(void* Buffer, long InOffset, long InSize) { NativeCall<void, void*, long, long>(this, "IMemoryReadStream.CopyTo(void*,__int64,__int64)", Buffer, InOffset, InSize); }

};

struct FCompression
{
	// Fields


	// Bitfields


	// Functions

	static bool UncompressMemoryStream(FName FormatName, void* UncompressedBuffer, int UncompressedSize, IMemoryReadStream* Stream, long StreamOffset, int CompressedSize, ECompressionFlags Flags, int CompressionData) { return NativeCall<bool, FName, void*, int, IMemoryReadStream*, long, int, ECompressionFlags, int>(nullptr, "FCompression.UncompressMemoryStream(FName,void*,__int64,IMemoryReadStream*,__int64,__int64,ECompressionFlags,unsigned__int64)", FormatName, UncompressedBuffer, UncompressedSize, Stream, StreamOffset, CompressedSize, Flags, CompressionData); }
	static bool CompressMemory(FName FormatName, void* CompressedBuffer, int& CompressedSize, const void* UncompressedBuffer, int UncompressedSize, ECompressionFlags Flags, int CompressionData) { return NativeCall<bool, FName, void*, int&, const void*, int, ECompressionFlags, int>(nullptr, "FCompression.CompressMemory(FName,void*,int&,void*,int,ECompressionFlags,int)", FormatName, CompressedBuffer, CompressedSize, UncompressedBuffer, UncompressedSize, Flags, CompressionData); }
	static FName GetCompressionFormatFromDeprecatedFlags(ECompressionFlags Flags) { return NativeCall<FName, ECompressionFlags>(nullptr, "FCompression.GetCompressionFormatFromDeprecatedFlags(ECompressionFlags)", Flags); }
	static bool UncompressMemory(FName FormatName, void* UncompressedBuffer, int UncompressedSize, const void* CompressedBuffer, int CompressedSize, ECompressionFlags Flags, int CompressionData) { return NativeCall<bool, FName, void*, int, const void*, int, ECompressionFlags, int>(nullptr, "FCompression.UncompressMemory(FName,void*,__int64,void*,__int64,ECompressionFlags,unsigned__int64)", FormatName, UncompressedBuffer, UncompressedSize, CompressedBuffer, CompressedSize, Flags, CompressionData); }
	static int CompressMemoryBound(FName FormatName, int UncompressedSize, ECompressionFlags Flags, int CompressionData) { return NativeCall<int, FName, int, ECompressionFlags, int>(nullptr, "FCompression.CompressMemoryBound(FName,int,ECompressionFlags,int)", FormatName, UncompressedSize, Flags, CompressionData); }
	//static ICompressionFormat* GetCompressionFormat(FName FormatName, bool bErrorOnFailure) { return NativeCall<ICompressionFormat*, FName, bool>(nullptr, "FCompression.GetCompressionFormat(FName,bool)", FormatName, bErrorOnFailure); }

};

struct FOverlappedFoliageElement
{
	// Fields

	AActor*& HarvestActorField() { return *GetNativePointerField<AActor**>(this, "FOverlappedFoliageElement.HarvestActor"); }
	UInstancedStaticMeshComponent*& InstancedStaticMeshComponentField() { return *GetNativePointerField<UInstancedStaticMeshComponent**>(this, "FOverlappedFoliageElement.InstancedStaticMeshComponent"); }
	UPrimalHarvestingComponent*& HarvestingComponentField() { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "FOverlappedFoliageElement.HarvestingComponent"); }
	UE::Math::TVector<double>& HarvestLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FOverlappedFoliageElement.HarvestLocation"); }
	int& HitBodyIndexField() { return *GetNativePointerField<int*>(this, "FOverlappedFoliageElement.HitBodyIndex"); }
	float& MaxHarvestHealthField() { return *GetNativePointerField<float*>(this, "FOverlappedFoliageElement.MaxHarvestHealth"); }
	float& CurrentHarvestHealthField() { return *GetNativePointerField<float*>(this, "FOverlappedFoliageElement.CurrentHarvestHealth"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsUnharvestableField() { return { this, "FOverlappedFoliageElement.bIsUnharvestable" }; }
	BitFieldValue<bool, unsigned __int32> bIsVisibleAndActiveField() { return { this, "FOverlappedFoliageElement.bIsVisibleAndActive" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FOverlappedFoliageElement.StaticStruct()"); }

};

struct FPlacementData
{
	// Fields

	UE::Math::TVector<double>& AdjustedLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPlacementData.AdjustedLocation"); }
	UE::Math::TRotator<double>& AdjustedRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPlacementData.AdjustedRotation"); }
	bool& bSnappedField() { return *GetNativePointerField<bool*>(this, "FPlacementData.bSnapped"); }
	bool& bDisableEncroachmentCheckField() { return *GetNativePointerField<bool*>(this, "FPlacementData.bDisableEncroachmentCheck"); }
	int& MySnapToIndexField() { return *GetNativePointerField<int*>(this, "FPlacementData.MySnapToIndex"); }
	int& TheirSnapToIndexField() { return *GetNativePointerField<int*>(this, "FPlacementData.TheirSnapToIndex"); }
	AActor*& FloorHitActorField() { return *GetNativePointerField<AActor**>(this, "FPlacementData.FloorHitActor"); }
	APrimalStructure*& ParentStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "FPlacementData.ParentStructure"); }
	APrimalStructure*& ForcePlacedOnFloorParentStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "FPlacementData.ForcePlacedOnFloorParentStructure"); }
	APrimalStructure*& ReplacesStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "FPlacementData.ReplacesStructure"); }
	APawn*& AttachToPawnField() { return *GetNativePointerField<APawn**>(this, "FPlacementData.AttachToPawn"); }
	FName& AttachToBoneField() { return *GetNativePointerField<FName*>(this, "FPlacementData.AttachToBone"); }
	APrimalDinoCharacter*& DinoCharacterField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "FPlacementData.DinoCharacter"); }
	float& HeightOffsetField() { return *GetNativePointerField<float*>(this, "FPlacementData.HeightOffset"); }
	float& YawRotOffsetField() { return *GetNativePointerField<float*>(this, "FPlacementData.YawRotOffset"); }
	int& PlacingAlignmentModeField() { return *GetNativePointerField<int*>(this, "FPlacementData.PlacingAlignmentMode"); }
	bool& bIgnoreSnappingIfOptionalField() { return *GetNativePointerField<bool*>(this, "FPlacementData.bIgnoreSnappingIfOptional"); }
	bool& bIsChoosingRotationField() { return *GetNativePointerField<bool*>(this, "FPlacementData.bIsChoosingRotation"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPlacementData.StaticStruct()"); }

};

struct FPaths
{
	// Fields

	FWindowsCriticalSection& GameProjectFilePathLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FPaths.GameProjectFilePathLock"); }
	FString& GameProjectFilePathField() { return *GetNativePointerField<FString*>(this, "FPaths.GameProjectFilePath"); }
	FString& UserDirArgField() { return *GetNativePointerField<FString*>(this, "FPaths.UserDirArg"); }
	FString& GameSavedDirField() { return *GetNativePointerField<FString*>(this, "FPaths.GameSavedDir"); }
	FString& EngineSavedDirField() { return *GetNativePointerField<FString*>(this, "FPaths.EngineSavedDir"); }
	FString& ShaderDirField() { return *GetNativePointerField<FString*>(this, "FPaths.ShaderDir"); }
	FString& UserFolderField() { return *GetNativePointerField<FString*>(this, "FPaths.UserFolder"); }
	TArray<FString, TSizedDefaultAllocator<32> >& EngineLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.EngineLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& EditorLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.EditorLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CookedEditorLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.CookedEditorLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PropertyNameLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.PropertyNameLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ToolTipLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.ToolTipLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& GameLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.GameLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& RestrictedFolderNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.RestrictedFolderNames"); }
	TArray<FString, TSizedDefaultAllocator<32> >& RestrictedSlashedFolderNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.RestrictedSlashedFolderNames"); }
	FString& RelativePathToRootField() { return *GetNativePointerField<FString*>(this, "FPaths.RelativePathToRoot"); }
	bool& bUserDirArgInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bUserDirArgInitialized"); }
	bool& bGameSavedDirInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bGameSavedDirInitialized"); }
	bool& bEngineSavedDirInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bEngineSavedDirInitialized"); }
	bool& bShaderDirInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bShaderDirInitialized"); }
	bool& bUserFolderInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bUserFolderInitialized"); }
	bool& bEngineLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bEngineLocalizationPathsInitialized"); }
	bool& bEditorLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bEditorLocalizationPathsInitialized"); }
	bool& bCookedEditorLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bCookedEditorLocalizationPathsInitialized"); }
	bool& bPropertyNameLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bPropertyNameLocalizationPathsInitialized"); }
	bool& bToolTipLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bToolTipLocalizationPathsInitialized"); }
	bool& bGameLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bGameLocalizationPathsInitialized"); }
	bool& bRestrictedFolderNamesInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bRestrictedFolderNamesInitialized"); }
	bool& bRestrictedSlashedFolderNamesInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bRestrictedSlashedFolderNamesInitialized"); }
	bool& bRelativePathToRootInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bRelativePathToRootInitialized"); }

	// Bitfields


	// Functions

	static FString EngineVersionAgnosticUserDir() { return NativeCall<FString>(nullptr, "FPaths.EngineVersionAgnosticUserDir()"); }
	static bool CollapseRelativeDirectories(FString& InPath) { return NativeCall<bool, FString&>(nullptr, "FPaths.CollapseRelativeDirectories(FString&)", InPath); }
	static FString ProjectLogDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectLogDir()"); }
	static FString EnterpriseFeaturePackDir() { return NativeCall<FString>(nullptr, "FPaths.EnterpriseFeaturePackDir()"); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetEditorLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetEditorLocalizationPaths()"); }
	static FString RemoveDuplicateSlashes(const FString& InPath) { return NativeCall<FString, const FString&>(nullptr, "FPaths.RemoveDuplicateSlashes(FString&)", InPath); }
	static void RemoveDuplicateSlashes(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.RemoveDuplicateSlashes(FString&)", InPath); }
	static FString SandboxesDir() { return NativeCall<FString>(nullptr, "FPaths.SandboxesDir()"); }
	static bool HasProjectPersistentDownloadDir() { return NativeCall<bool>(nullptr, "FPaths.HasProjectPersistentDownloadDir()"); }
	static FString GameAgnosticSavedDir() { return NativeCall<FString>(nullptr, "FPaths.GameAgnosticSavedDir()"); }
	static FString EnginePluginsDir() { return NativeCall<FString>(nullptr, "FPaths.EnginePluginsDir()"); }
	static bool IsRestrictedPath(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.IsRestrictedPath(FString&)", InPath); }
	static FString EngineContentDir() { return NativeCall<FString>(nullptr, "FPaths.EngineContentDir()"); }
	static FString EngineUserDir() { return NativeCall<FString>(nullptr, "FPaths.EngineUserDir()"); }
	static FString ShaderWorkingDir() { return NativeCall<FString>(nullptr, "FPaths.ShaderWorkingDir()"); }
	static void Split(const FString& InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart) { NativeCall<void, const FString&, FString&, FString&, FString&>(nullptr, "FPaths.Split(FString&,FString&,FString&,FString&)", InPath, PathPart, FilenamePart, ExtensionPart); }
	static FString ProjectIntermediateDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectIntermediateDir()"); }
// 	static FString EnginePlatformExtensionsDir() { return NativeCall<FString>(nullptr, "FPaths.EnginePlatformExtensionsDir()"); }
// FUNCTION MISSING: FPaths.EnginePlatformExtensionsDir()
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetToolTipLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetToolTipLocalizationPaths()"); }
	static FString GameUserDeveloperDir() { return NativeCall<FString>(nullptr, "FPaths.GameUserDeveloperDir()"); }
	static FString EnterpriseDir() { return NativeCall<FString>(nullptr, "FPaths.EnterpriseDir()"); }
	static FString const& CustomShaderDirArgument() { return NativeCall<FString const&>(nullptr, "FPaths.CustomShaderDirArgument()"); }
	static TArray<FString, TSizedDefaultAllocator<32> > GetExtensionDirs(const FString& BaseDir, const FString& SubDir) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >, const FString&, const FString&>(nullptr, "FPaths.GetExtensionDirs(FString&,FString&,bool)", BaseDir, SubDir); }
	static FString GetExtension(const FString& InPath, bool bIncludeDot) { return NativeCall<FString, const FString&, bool>(nullptr, "FPaths.GetExtension(FString&,bool)", InPath, bIncludeDot); }
	static FString SetExtension(const FString& InPath, const FString& InNewExtension) { return NativeCall<FString, const FString&, const FString&>(nullptr, "FPaths.SetExtension(FString&,FString&)", InPath, InNewExtension); }
	static FString EngineIntermediateDir() { return NativeCall<FString>(nullptr, "FPaths.EngineIntermediateDir()"); }
	static FString GetBaseFilename(FString* InPath, bool bRemovePath) { return NativeCall<FString, FString*, bool>(nullptr, "FPaths.GetBaseFilename(FString&&,bool)", InPath, bRemovePath); }
	static FString GetBaseFilename(const FString& InPath, bool bRemovePath) { return NativeCall<FString, const FString&, bool>(nullptr, "FPaths.GetBaseFilename(FString&,bool)", InPath, bRemovePath); }
	static FString GetCleanFilename(FString* InPath) { return NativeCall<FString, FString*>(nullptr, "FPaths.GetCleanFilename(FString&&)", InPath); }
	static FString GetCleanFilename(const FString& InPath) { return NativeCall<FString, const FString&>(nullptr, "FPaths.GetCleanFilename(FString&)", InPath); }
	static FString ConvertFromSandboxPath(const FString& InPath, const wchar_t* InSandboxName) { return NativeCall<FString, const FString&, const wchar_t*>(nullptr, "FPaths.ConvertFromSandboxPath(FString&,wchar_t*)", InPath, InSandboxName); }
	static FString GeneratedConfigDir() { return NativeCall<FString>(nullptr, "FPaths.GeneratedConfigDir()"); }
	static FString ProjectUserDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectUserDir()"); }
	static FString MakeValidFileName(const FString& InString, wchar_t InReplacementChar) { return NativeCall<FString, const FString&, wchar_t>(nullptr, "FPaths.MakeValidFileName(FString&,wchar_t)", InString, InReplacementChar); }
	static void CombineInternal(FString& OutPath, const TStringView<wchar_t>* Paths, int NumPaths) { NativeCall<void, FString&, const TStringView<wchar_t>*, int>(nullptr, "FPaths.CombineInternal(TStringView<wchar_t>*,int)", OutPath, Paths, NumPaths); }
	static FString SourceConfigDir() { return NativeCall<FString>(nullptr, "FPaths.SourceConfigDir()"); }
	static bool FileExists(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.FileExists(FString&)", InPath); }
	static FString GetInvalidFileSystemChars() { return NativeCall<FString>(nullptr, "FPaths.GetInvalidFileSystemChars()"); }
	static FString AutomationLogDir() { return NativeCall<FString>(nullptr, "FPaths.AutomationLogDir()"); }
	static FString GameDevelopersDir() { return NativeCall<FString>(nullptr, "FPaths.GameDevelopersDir()"); }
	static FString ScreenShotDir() { return NativeCall<FString>(nullptr, "FPaths.ScreenShotDir()"); }
	static FString CreateStandardFilename(const FString& InPath) { return NativeCall<FString, const FString&>(nullptr, "FPaths.CreateStandardFilename(FString&)", InPath); }
	static bool IsProjectFilePathSet() { return NativeCall<bool>(nullptr, "FPaths.IsProjectFilePathSet()"); }
	static void NormalizeDirectoryName(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.NormalizeDirectoryName(FString&)", InPath); }
	static FString EngineSavedDir() { return NativeCall<FString>(nullptr, "FPaths.EngineSavedDir()"); }
	static bool DirectoryExists(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.DirectoryExists(FString&)", InPath); }
	static FString ProjectPersistentDownloadDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectPersistentDownloadDir()"); }
	static bool MakePathRelativeTo(FString& InPath, const wchar_t* InRelativeTo) { return NativeCall<bool, FString&, const wchar_t*>(nullptr, "FPaths.MakePathRelativeTo(FString&,wchar_t*)", InPath, InRelativeTo); }
	static FString EngineDir() { return NativeCall<FString>(nullptr, "FPaths.EngineDir()"); }
	static FString AutomationTransientDir() { return NativeCall<FString>(nullptr, "FPaths.AutomationTransientDir()"); }
	static FString ChangeExtension(const FString& InPath, const FString& InNewExtension) { return NativeCall<FString, const FString&, const FString&>(nullptr, "FPaths.ChangeExtension(FString&,FString&)", InPath, InNewExtension); }
	static bool ShouldSaveToUserDir() { return NativeCall<bool>(nullptr, "FPaths.ShouldSaveToUserDir()"); }
	static bool IsRelative(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.IsRelative(FString&)", InPath); }
	static FString GetPath(FString* InPath) { return NativeCall<FString, FString*>(nullptr, "FPaths.GetPath(FString&&)", InPath); }
	static FString GetPath(const FString& InPath) { return NativeCall<FString, const FString&>(nullptr, "FPaths.GetPath(FString&)", InPath); }
	static FString ProjectConfigDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectConfigDir()"); }
	static FString const& CustomUserDirArgument() { return NativeCall<FString const&>(nullptr, "FPaths.CustomUserDirArgument()"); }
	static FString RootDir() { return NativeCall<FString>(nullptr, "FPaths.RootDir()"); }
	static FString BugItDir() { return NativeCall<FString>(nullptr, "FPaths.BugItDir()"); }
// 	static FString ProjectPlatformExtensionsDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectPlatformExtensionsDir()"); }
// FUNCTION MISSING: FPaths.ProjectPlatformExtensionsDir()
	static void MakeStandardFilename(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.MakeStandardFilename(FString&)", InPath); }
	static FString CreateTempFilename(const wchar_t* Path, const wchar_t* Prefix, const wchar_t* Extension) { return NativeCall<FString, const wchar_t*, const wchar_t*, const wchar_t*>(nullptr, "FPaths.CreateTempFilename(wchar_t*,wchar_t*,wchar_t*)", Path, Prefix, Extension); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetGameLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetGameLocalizationPaths()"); }
	static FString const& ProjectSavedDir() { return NativeCall<FString const&>(nullptr, "FPaths.ProjectSavedDir()"); }
	static FString ConvertToSandboxPath(const FString& InPath, const wchar_t* InSandboxName) { return NativeCall<FString, const FString&, const wchar_t*>(nullptr, "FPaths.ConvertToSandboxPath(FString&,wchar_t*)", InPath, InSandboxName); }
	static bool IsUnderDirectory(const FString& InPath, const FString& InDirectory) { return NativeCall<bool, const FString&, const FString&>(nullptr, "FPaths.IsUnderDirectory(FString&,FString&)", InPath, InDirectory); }
	static FString EngineSourceDir() { return NativeCall<FString>(nullptr, "FPaths.EngineSourceDir()"); }
	static FString ProfilingDir() { return NativeCall<FString>(nullptr, "FPaths.ProfilingDir()"); }
	static bool IsSamePath(const FString& PathA, const FString& PathB) { return NativeCall<bool, const FString&, const FString&>(nullptr, "FPaths.IsSamePath(FString&,FString&)", PathA, PathB); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetEngineLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetEngineLocalizationPaths()"); }
	static FString ProjectDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectDir()"); }
	static FString ProjectPluginsDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectPluginsDir()"); }
	static FString const& GetRelativePathToRoot() { return NativeCall<FString const&>(nullptr, "FPaths.GetRelativePathToRoot()"); }
	static FString GetPlatformLocalizationFolderName() { return NativeCall<FString>(nullptr, "FPaths.GetPlatformLocalizationFolderName()"); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetRestrictedFolderNames() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetRestrictedFolderNames()"); }
	static FString DiffDir() { return NativeCall<FString>(nullptr, "FPaths.DiffDir()"); }
	static FString GameSourceDir() { return NativeCall<FString>(nullptr, "FPaths.GameSourceDir()"); }
	static FString EnterprisePluginsDir() { return NativeCall<FString>(nullptr, "FPaths.EnterprisePluginsDir()"); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetPropertyNameLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetPropertyNameLocalizationPaths()"); }
	static void NormalizeFilename(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.NormalizeFilename(FString&)", InPath); }
	static FString ProjectContentDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectContentDir()"); }
	static void SetProjectFilePath(const FString& NewGameProjectFilePath) { NativeCall<void, const FString&>(nullptr, "FPaths.SetProjectFilePath(FString&)", NewGameProjectFilePath); }
	static FString GetProjectFilePath() { return NativeCall<FString>(nullptr, "FPaths.GetProjectFilePath()"); }
	static FString FeaturePackDir() { return NativeCall<FString>(nullptr, "FPaths.FeaturePackDir()"); }
	static bool IsDrive(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.IsDrive(FString&)", InPath); }
	static FString CloudDir() { return NativeCall<FString>(nullptr, "FPaths.CloudDir()"); }
	static FString LaunchDir() { return NativeCall<FString>(nullptr, "FPaths.LaunchDir()"); }
	static FString EngineConfigDir() { return NativeCall<FString>(nullptr, "FPaths.EngineConfigDir()"); }
	static bool ValidatePath(const FString& InPath, FText* OutReason) { return NativeCall<bool, const FString&, FText*>(nullptr, "FPaths.ValidatePath(FString&,FText*)", InPath, OutReason); }
	static FString AudioCaptureDir() { return NativeCall<FString>(nullptr, "FPaths.AudioCaptureDir()"); }
	static FString VideoCaptureDir() { return NativeCall<FString>(nullptr, "FPaths.VideoCaptureDir()"); }
	static void MakePlatformFilename(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.MakePlatformFilename(FString&)", InPath); }
	static FString ConvertRelativePathToFull(FString* BasePath, FString* InPath) { return NativeCall<FString, FString*, FString*>(nullptr, "FPaths.ConvertRelativePathToFull(FString&&,FString&&)", BasePath, InPath); }
	static FString ConvertRelativePathToFull(FString* InPath) { return NativeCall<FString, FString*>(nullptr, "FPaths.ConvertRelativePathToFull(FString&&)", InPath); }
	static FString ConvertRelativePathToFull(FString* BasePath, const FString& InPath) { return NativeCall<FString, FString*, const FString&>(nullptr, "FPaths.ConvertRelativePathToFull(FString&&,FString&)", BasePath, InPath); }
	static FString ConvertRelativePathToFull(const FString& BasePath, const FString& InPath) { return NativeCall<FString, const FString&, const FString&>(nullptr, "FPaths.ConvertRelativePathToFull(FString&,FString&)", BasePath, InPath); }
	static FString ConvertRelativePathToFull(const FString& InPath) { return NativeCall<FString, const FString&>(nullptr, "FPaths.ConvertRelativePathToFull(FString&)", InPath); }
	static FString ProjectModsDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectModsDir()"); }
	static FString AutomationDir() { return NativeCall<FString>(nullptr, "FPaths.AutomationDir()"); }

};

struct FJustInTimeTexture2D
{
	// Fields

	TSoftObjectPtr<UTexture2D>& SoftTextureField() { return *GetNativePointerField<TSoftObjectPtr<UTexture2D>*>(this, "FJustInTimeTexture2D.SoftTexture"); }
	UTexture2D*& TextureField() { return *GetNativePointerField<UTexture2D**>(this, "FJustInTimeTexture2D.Texture"); }
	float& ExpirationTimeInSecondsField() { return *GetNativePointerField<float*>(this, "FJustInTimeTexture2D.ExpirationTimeInSeconds"); }
	float& ExpirationCounterField() { return *GetNativePointerField<float*>(this, "FJustInTimeTexture2D.ExpirationCounter"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FJustInTimeTexture2D.StaticStruct()"); }
	FJustInTimeTexture2D& operator=(const FJustInTimeTexture2D* ThatTexture) { return NativeCall<FJustInTimeTexture2D&, const FJustInTimeTexture2D*>(this, "FJustInTimeTexture2D.operator=(FJustInTimeTexture2D&)", ThatTexture); }
	FJustInTimeTexture2D& operator=(UTexture2D* ThatTexture) { return NativeCall<FJustInTimeTexture2D&, UTexture2D*>(this, "FJustInTimeTexture2D.operator=(UTexture2D*)", ThatTexture); }
// 	void OnPostLoad(UTexture2D** ppTextureToPotentiallyJIT) { NativeCall<void, UTexture2D**>(this, "FJustInTimeTexture2D.OnPostLoad(UTexture2D**)", ppTextureToPotentiallyJIT); }
// FUNCTION MISSING: FJustInTimeTexture2D.OnPostLoad(UTexture2D**)
	UTexture2D* GetTexture(const UObject* pOwner) const { return NativeCall<UTexture2D*, const UObject*>(this, "FJustInTimeTexture2D.GetTexture(UObject*)", pOwner); }
};

struct FFunctionParams_NoArrays
{
	// Fields

	bool& BoolParam1Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam1"); }
	bool& BoolParam2Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam2"); }
	bool& BoolParam3Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam3"); }
	bool& BoolParam4Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam4"); }
	bool& BoolParam5Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam5"); }
	bool& BoolParam6Field() { return *GetNativePointerField<bool*>(this, "FFunctionParams_NoArrays.BoolParam6"); }
	int& IntParam1Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam1"); }
	int& IntParam2Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam2"); }
	int& IntParam3Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam3"); }
	int& IntParam4Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam4"); }
	int& IntParam5Field() { return *GetNativePointerField<int*>(this, "FFunctionParams_NoArrays.IntParam5"); }
	float& FloatParam1Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam1"); }
	float& FloatParam2Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam2"); }
	float& FloatParam3Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam3"); }
	float& FloatParam4Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam4"); }
	float& FloatParam5Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam5"); }
	float& FloatParam6Field() { return *GetNativePointerField<float*>(this, "FFunctionParams_NoArrays.FloatParam6"); }
	FString& StringParam1Field() { return *GetNativePointerField<FString*>(this, "FFunctionParams_NoArrays.StringParam1"); }
	FString& StringParam2Field() { return *GetNativePointerField<FString*>(this, "FFunctionParams_NoArrays.StringParam2"); }
	FString& StringParam3Field() { return *GetNativePointerField<FString*>(this, "FFunctionParams_NoArrays.StringParam3"); }
	FName& NameParam1Field() { return *GetNativePointerField<FName*>(this, "FFunctionParams_NoArrays.NameParam1"); }
	FName& NameParam2Field() { return *GetNativePointerField<FName*>(this, "FFunctionParams_NoArrays.NameParam2"); }
	FName& NameParam3Field() { return *GetNativePointerField<FName*>(this, "FFunctionParams_NoArrays.NameParam3"); }
	UObject*& ObjectParam1Field() { return *GetNativePointerField<UObject**>(this, "FFunctionParams_NoArrays.ObjectParam1"); }
	UObject*& ObjectParam2Field() { return *GetNativePointerField<UObject**>(this, "FFunctionParams_NoArrays.ObjectParam2"); }
	UObject*& ObjectParam3Field() { return *GetNativePointerField<UObject**>(this, "FFunctionParams_NoArrays.ObjectParam3"); }
	TSoftObjectPtr<UObject>& SoftObjectParam1Field() { return *GetNativePointerField<TSoftObjectPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftObjectParam1"); }
	TSoftObjectPtr<UObject>& SoftObjectParam2Field() { return *GetNativePointerField<TSoftObjectPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftObjectParam2"); }
	TSoftObjectPtr<UObject>& SoftObjectParam3Field() { return *GetNativePointerField<TSoftObjectPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftObjectParam3"); }
	UE::Math::TVector<double>& VectorParam1Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam1"); }
	UE::Math::TVector<double>& VectorParam2Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam2"); }
	UE::Math::TVector<double>& VectorParam3Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam3"); }
	UE::Math::TVector<double>& VectorParam4Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam4"); }
	UE::Math::TVector<double>& VectorParam5Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam5"); }
	UE::Math::TVector<double>& VectorParam6Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam6"); }
	UE::Math::TVector<double>& VectorParam7Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam7"); }
	UE::Math::TVector<double>& VectorParam8Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam8"); }
	UE::Math::TVector<double>& VectorParam9Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam9"); }
	UE::Math::TVector<double>& VectorParam10Field() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FFunctionParams_NoArrays.VectorParam10"); }
	UE::Math::TRotator<double>& RotatorParams1Field() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FFunctionParams_NoArrays.RotatorParams1"); }
	UE::Math::TRotator<double>& RotatorParams2Field() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FFunctionParams_NoArrays.RotatorParams2"); }
	UE::Math::TRotator<double>& RotatorParams3Field() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FFunctionParams_NoArrays.RotatorParams3"); }
	TSubclassOf<UObject>& ClassParam1Field() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "FFunctionParams_NoArrays.ClassParam1"); }
	TSubclassOf<UObject>& ClassParam2Field() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "FFunctionParams_NoArrays.ClassParam2"); }
	TSubclassOf<UObject>& ClassParam3Field() { return *GetNativePointerField<TSubclassOf<UObject>*>(this, "FFunctionParams_NoArrays.ClassParam3"); }
	TSoftClassPtr<UObject>& SoftClassParam1Field() { return *GetNativePointerField<TSoftClassPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftClassParam1"); }
	TSoftClassPtr<UObject>& SoftClassParam2Field() { return *GetNativePointerField<TSoftClassPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftClassParam2"); }
	TSoftClassPtr<UObject>& SoftClassParam3Field() { return *GetNativePointerField<TSoftClassPtr<UObject>*>(this, "FFunctionParams_NoArrays.SoftClassParam3"); }
	FText& TextParam1Field() { return *GetNativePointerField<FText*>(this, "FFunctionParams_NoArrays.TextParam1"); }
	FText& TextParam2Field() { return *GetNativePointerField<FText*>(this, "FFunctionParams_NoArrays.TextParam2"); }
	FText& TextParam3Field() { return *GetNativePointerField<FText*>(this, "FFunctionParams_NoArrays.TextParam3"); }
	unsigned char& ByteParam1Field() { return *GetNativePointerField<unsigned char*>(this, "FFunctionParams_NoArrays.ByteParam1"); }
	unsigned char& ByteParam2Field() { return *GetNativePointerField<unsigned char*>(this, "FFunctionParams_NoArrays.ByteParam2"); }
	unsigned char& ByteParam3Field() { return *GetNativePointerField<unsigned char*>(this, "FFunctionParams_NoArrays.ByteParam3"); }

	// Bitfields


	// Functions

	FFunctionParams_NoArrays& operator=(FFunctionParams_NoArrays* __that) { return NativeCall<FFunctionParams_NoArrays&, FFunctionParams_NoArrays*>(this, "FFunctionParams_NoArrays.operator=(FFunctionParams_NoArrays&&)", __that); }
	FFunctionParams_NoArrays& operator=(const FFunctionParams_NoArrays* __that) { return NativeCall<FFunctionParams_NoArrays&, const FFunctionParams_NoArrays*>(this, "FFunctionParams_NoArrays.operator=(FFunctionParams_NoArrays&)", __that); }
	void CopyFunctionParams(const FFunctionParams_NoArrays* InParams) { NativeCall<void, const FFunctionParams_NoArrays*>(this, "FFunctionParams_NoArrays.CopyFunctionParams(FFunctionParams_NoArrays&)", InParams); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FFunctionParams_NoArrays.StaticStruct()"); }

};

struct FStructureVariant
{
	// Fields

	FString& VariantNameField() { return *GetNativePointerField<FString*>(this, "FStructureVariant.VariantName"); }
	FName& VariantTagField() { return *GetNativePointerField<FName*>(this, "FStructureVariant.VariantTag"); }
	bool& bUseBPAllowSwitchToVariantField() { return *GetNativePointerField<bool*>(this, "FStructureVariant.bUseBPAllowSwitchToVariant"); }
	TSoftObjectPtr<UStaticMesh>& MeshField() { return *GetNativePointerField<TSoftObjectPtr<UStaticMesh>*>(this, "FStructureVariant.Mesh"); }
	bool& bUseMeshTransformField() { return *GetNativePointerField<bool*>(this, "FStructureVariant.bUseMeshTransform"); }
	UE::Math::TTransform<double>& MeshTransformField() { return *GetNativePointerField<UE::Math::TTransform<double>*>(this, "FStructureVariant.MeshTransform"); }
	TSoftObjectPtr<UGeometryCollection>& DestroyedMeshOverrideField() { return *GetNativePointerField<TSoftObjectPtr<UGeometryCollection>*>(this, "FStructureVariant.DestroyedMeshOverride"); }
	TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >& DestroyedMeshesOverrideField() { return *GetNativePointerField<TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "FStructureVariant.DestroyedMeshesOverride"); }
	TSoftObjectPtr<UTexture2D>& VariantIconField() { return *GetNativePointerField<TSoftObjectPtr<UTexture2D>*>(this, "FStructureVariant.VariantIcon"); }

	// Bitfields


	// Functions

	FStructureVariant& operator=(FStructureVariant* __that) { return NativeCall<FStructureVariant&, FStructureVariant*>(this, "FStructureVariant.operator=(FStructureVariant&&)", __that); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FStructureVariant.StaticStruct()"); }
};