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

struct UVictoryCore : UVictoryCoreHighest
{
	// Fields


	  // Bitfields


	  // Functions

	static void StaticRegisterNativesUVictoryCore() { NativeCall<void>(nullptr, "UVictoryCore.StaticRegisterNativesUVictoryCore()"); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UVictoryCore.GetPrivateStaticClass()"); }
	static void DestroyWidget(UWidget* WidgetToDestroy) { NativeCall<void, UWidget*>(nullptr, "UVictoryCore.DestroyWidget(UWidget*)", WidgetToDestroy); }
	static int RandInt(int MaxVal) { return NativeCall<int, int>(nullptr, "UVictoryCore.RandInt(int)", MaxVal); }
	static int GetWeightedRandomIndex(const TArray<float, TSizedDefaultAllocator<32> >* pArray, float ForceRand) { return NativeCall<int, const TArray<float, TSizedDefaultAllocator<32> >*, float>(nullptr, "UVictoryCore.GetWeightedRandomIndex(TArray<float,TSizedDefaultAllocator<32>>*,float)", pArray, ForceRand); }
	//static bool OverlappingActors() { return NativeCall<bool>(nullptr, "UVictoryCore.OverlappingActors()"); }
	//static int IsChildOfClassesSoftRefT<class APrimalBuff>(TSubclassOf<UObject> childClass, const //TArray<//TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, const //TArray<//TSoftClassPtr<APrimalBuff>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<class APrimalBuff>(TSubclassOf<UObject>,//TArray<//TSoftClassPtr<APrimalBuff>,TSizedDefaultAllocator<32>>*)", childClass, ParentClassesArray); }
	//static int IsChildOfClassesSoftRefT<class APrimalDinoCharacter>(TSubclassOf<UObject> childClass, const //TArray<//TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, const //TArray<//TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<class APrimalDinoCharacter>(TSubclassOf<UObject>,//TArray<//TSoftClassPtr<APrimalDinoCharacter>,TSizedDefaultAllocator<32>>*)", childClass, ParentClassesArray); }
	UShooterGameUserSettings* GetShooterGameUserSettings() { return NativeCall<UShooterGameUserSettings*>(this, "UVictoryCore.GetShooterGameUserSettings()"); }
	static UObjectBase* TracePhysMaterial() { return NativeCall<UObjectBase*>(nullptr, "UVictoryCore.TracePhysMaterial()"); }
	static UObject* GetClassDefaultObject(UClass* FromClass) { return NativeCall<UObject*, UClass*>(nullptr, "UVictoryCore.GetClassDefaultObject(UClass*)", FromClass); }
	static float ClampRotAxis(float BaseAxis, float DesiredAxis, float MaxDiff) { return NativeCall<float, float, float, float>(nullptr, "UVictoryCore.ClampRotAxis(float,float,float)", BaseAxis, DesiredAxis, MaxDiff); }
	static int BPGetWeightedRandomIndex(const TArray<float, TSizedDefaultAllocator<32> >* pArray, float ForceRand) { return NativeCall<int, const TArray<float, TSizedDefaultAllocator<32> >*, float>(nullptr, "UVictoryCore.BPGetWeightedRandomIndex(TArray<float,TSizedDefaultAllocator<32>>*,float)", pArray, ForceRand); }
	static bool ComponentBoundsEncompassesPoint(UPrimitiveComponent* Comp, const UE::Math::TVector<double>* Point, float BoundsMultiplier) { return NativeCall<bool, UPrimitiveComponent*, const UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.ComponentBoundsEncompassesPoint(UPrimitiveComponent*,UE::Math::TVector<double>*,float)", Comp, Point, BoundsMultiplier); }
	static bool SphereOverlapFast(UObject* WorldContextObject, const UE::Math::TVector<double>* Loc, const float Radius) { return NativeCall<bool, UObject*, const UE::Math::TVector<double>*, const float>(nullptr, "UVictoryCore.SphereOverlapFast(UObject*,UE::Math::TVector<double>*,float)", WorldContextObject, Loc, Radius); }
	//static bool CapsuleOverlapFast(UObject* WorldContextObject, AActor** OutFirstOverlappedActor, const UE::Math::TVector<double>* Origin, const UE::Math::TRotator<double>* CapsuleRotation, float Radius, float HalfHeight, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bIgnoreSelf, AActor* IgnoreActor, bool bDebugDraw, float DebugDrawDuration, bool bBlockingOnly) { return NativeCall<bool, UObject*, AActor**, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, float, float, TEnumAsByte<enum ECollisionChannel>, bool, bool, AActor*, bool, float, bool>(nullptr, "UVictoryCore.CapsuleOverlapFast(UObject*,AActor**,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,float,float,TEnumAsByte<enumECollisionChannel>,bool,bool,AActor*,bool,float,bool)", WorldContextObject, OutFirstOverlappedActor, Origin, CapsuleRotation, Radius, HalfHeight, CollisionChannel, bTraceComplex, bIgnoreSelf, IgnoreActor, bDebugDraw, DebugDrawDuration, bBlockingOnly); }
	//static bool CapsuleSweepFast(UObject* WorldContextObject, FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TRotator<double>* CapsuleRot, float Radius, float HalfHeight, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bIgnoreSelf, const TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, bool bDebugDraw, float DebugDrawDuration) { return NativeCall<bool, UObject*, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, float, float, TEnumAsByte<enum ECollisionChannel>, bool, bool, const TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, float>(nullptr, "UVictoryCore.CapsuleSweepFast(UObject*,FHitResult*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,float,float,TEnumAsByte<enumECollisionChannel>,bool,bool,TArray<AActor*,TSizedDefaultAllocator<32>>*,bool,float)", WorldContextObject, OutHit, Start, End, CapsuleRot, Radius, HalfHeight, CollisionChannel, bTraceComplex, bIgnoreSelf, IgnoreActors, bDebugDraw, DebugDrawDuration); }
	//static bool CapsuleSweepMulti(UObject* WorldContextObject, TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TRotator<double>* CapsuleRot, float Radius, float HalfHeight, const TArray<AActor*, TSizedDefaultAllocator<32> >* IgnoreActors, bool bIgnoreSelf, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bDebugDraw, float DebugDrawDuration, bool bFindInitialOverlaps) { return NativeCall<bool, UObject*, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, float, float, const TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, TEnumAsByte<enum ECollisionChannel>, bool, bool, float, bool>(nullptr, "UVictoryCore.CapsuleSweepMulti(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,float,float,TArray<AActor*,TSizedDefaultAllocator<32>>*,bool,TEnumAsByte<enumECollisionChannel>,bool,bool,float,bool)", WorldContextObject, OutHits, Start, End, CapsuleRot, Radius, HalfHeight, IgnoreActors, bIgnoreSelf, CollisionChannel, bTraceComplex, bDebugDraw, DebugDrawDuration, bFindInitialOverlaps); }
	//static void MultiTraceProjectSphere(UObject* WorldContextObject, TArray<FHitResult, TSizedDefaultAllocator<32> >* OutResults, const UE::Math::TVector<double>* Origin, ECollisionChannel TraceChannel, int HorizResolution, int VertResolution, float StartDistance, float EndDistance, float NorthConeSubtractAngle, float SouthConeSubtractAngle, int PctChanceToTrace, int MaxTraceCount, bool bDrawDebugLines, float DebugDrawDuration, bool bStopOnFirstHit) { NativeCall<void, UObject*, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, ECollisionChannel, int, int, float, float, float, float, int, int, bool, float, bool>(nullptr, "UVictoryCore.MultiTraceProjectSphere(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,ECollisionChannel,int,int,float,float,float,float,int,int,bool,float,bool)", WorldContextObject, OutResults, Origin, TraceChannel, HorizResolution, VertResolution, StartDistance, EndDistance, NorthConeSubtractAngle, SouthConeSubtractAngle, PctChanceToTrace, MaxTraceCount, bDrawDebugLines, DebugDrawDuration, bStopOnFirstHit); }
	static float GetProjectileArcPeakTime(UObject* WorldContextObject, const FProjectileArc* Arc) { return NativeCall<float, UObject*, const FProjectileArc*>(nullptr, "UVictoryCore.GetProjectileArcPeakTime(UObject*,FProjectileArc*)", WorldContextObject, Arc); }
	static void DrawDebugCapsule(UObject* WorldContextObject, const UE::Math::TVector<double>* CapsuleTop, const UE::Math::TVector<double>* CapsuleBottom, float Radius, const FColor* Color, bool bPersistentLines, float LifeTime, unsigned __int8 DepthPriority) { NativeCall<void, UObject*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float, const FColor*, bool, float, unsigned __int8>(nullptr, "UVictoryCore.DrawDebugCapsule(UObject*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,float,FColor*,bool,float,unsigned__int8)", WorldContextObject, CapsuleTop, CapsuleBottom, Radius, Color, bPersistentLines, LifeTime, DepthPriority); }
	//static bool TraceProjectileArc(UObject* WorldContextObject, const FProjectileArc* Arc, FHitResult* OutHitResult, UE::Math::TVector<double>* OutEndLocation, float* OutEndArcTime, UE::Math::TVector<double>* OutArcPeakLocation, float MaxArcLength, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, float ArcTimeStep, ECollisionChannel CollisionChannel, bool bTraceObjectTypeOnly, bool bDrawDebug, float DebugDrawDuration) { return NativeCall<bool, UObject*, const FProjectileArc*, FHitResult*, UE::Math::TVector<double>*, float*, UE::Math::TVector<double>*, float, const TArray<AActor*, TSizedDefaultAllocator<32> >*, float, ECollisionChannel, bool, bool, float>(nullptr, "UVictoryCore.TraceProjectileArc(UObject*,FProjectileArc*,FHitResult*,UE::Math::TVector<double>*,float*,UE::Math::TVector<double>*,float,TArray<AActor*,TSizedDefaultAllocator<32>>*,float,ECollisionChannel,bool,bool,float)", WorldContextObject, Arc, OutHitResult, OutEndLocation, OutEndArcTime, OutArcPeakLocation, MaxArcLength, ActorsToIgnore, ArcTimeStep, CollisionChannel, bTraceObjectTypeOnly, bDrawDebug, DebugDrawDuration); }
	//static bool CapsuleSweepProjectileArc(UObject* WorldContextObject, const FProjectileArc* Arc, const UE::Math::TRotator<double>* CapsuleRotation, float CapsuleRadius, float CapsuleHalfHeight, bool bRotateCapsuleAlongPath, bool bTraceComplex, FHitResult* OutHitResult, UE::Math::TVector<double>* OutEndLocation, float* OutEndArcTime, float MaxArcLength, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, bool bIgnoreSelf, float ArcTimeStep, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bDrawDebug, float DebugDrawDuration) { return NativeCall<bool, UObject*, const FProjectileArc*, const UE::Math::TRotator<double>*, float, float, bool, bool, FHitResult*, UE::Math::TVector<double>*, float*, float, const TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, float, TEnumAsByte<enum ECollisionChannel>, bool, float>(nullptr, "UVictoryCore.CapsuleSweepProjectileArc(UObject*,FProjectileArc*,UE::Math::TRotator<double>*,float,float,bool,bool,FHitResult*,UE::Math::TVector<double>*,float*,float,TArray<AActor*,TSizedDefaultAllocator<32>>*,bool,float,TEnumAsByte<enumECollisionChannel>,bool,float)", WorldContextObject, Arc, CapsuleRotation, CapsuleRadius, CapsuleHalfHeight, bRotateCapsuleAlongPath, bTraceComplex, OutHitResult, OutEndLocation, OutEndArcTime, MaxArcLength, ActorsToIgnore, bIgnoreSelf, ArcTimeStep, CollisionChannel, bDrawDebug, DebugDrawDuration); }
	//static void MultiLinePenetrationTraceByChannel(UObject* WorldContextObject, TArray<FPenetrationTraceHit, TSizedDefaultAllocator<32> >* OutResults, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, bool bTraceComplex, bool bIgnoreSelf, bool bDrawDebugLines, float DebugDrawDuration) { NativeCall<void, UObject*, TArray<FPenetrationTraceHit, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, const TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, bool, bool, float>(nullptr, "UVictoryCore.MultiLinePenetrationTraceByChannel(UObject*,TArray<FPenetrationTraceHit,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,ECollisionChannel,TArray<AActor*,TSizedDefaultAllocator<32>>*,bool,bool,bool,float)", WorldContextObject, OutResults, Start, End, TraceChannel, ActorsToIgnore, bTraceComplex, bIgnoreSelf, bDrawDebugLines, DebugDrawDuration); }
	static bool FindValidLocationNextToTarget(UObject* WorldContextObject, UE::Math::TVector<double>* OutLocation, APrimalCharacter* SourceCharacter, APrimalCharacter* TargetCharacter, float DistanceMargin, int MaxTraceCount, AActor* ActorToIgnore, bool bTraceComplex, bool bDrawDebug, float DebugDrawDuration, bool AllowCloseDistance, bool AllowLocationInAir) { return NativeCall<bool, UObject*, UE::Math::TVector<double>*, APrimalCharacter*, APrimalCharacter*, float, int, AActor*, bool, bool, float, bool, bool>(nullptr, "UVictoryCore.FindValidLocationNextToTarget(UObject*,UE::Math::TVector<double>*,APrimalCharacter*,APrimalCharacter*,float,int,AActor*,bool,bool,float,bool,bool)", WorldContextObject, OutLocation, SourceCharacter, TargetCharacter, DistanceMargin, MaxTraceCount, ActorToIgnore, bTraceComplex, bDrawDebug, DebugDrawDuration, AllowCloseDistance, AllowLocationInAir); }
	//	static bool FindValidLocationInFrontOfTarget(UE::Math::TVector<double>* OutLocation, APrimalCharacter* SourceCharacter, APrimalCharacter* TargetCharacter, float DistanceMargin, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bFailIfLocationNotOnGround, AActor* ActorToIgnore, bool bTraceComplex, float DebugDrawDuration) { return NativeCall<bool, UE::Math::TVector<double>*, APrimalCharacter*, APrimalCharacter*, float, TEnumAsByte<enum ECollisionChannel>, bool, AActor*, bool, float>(nullptr, "UVictoryCore.FindValidLocationInFrontOfTarget(UE::Math::TVector<double>*,APrimalCharacter*,APrimalCharacter*,float,TEnumAsByte<enumECollisionChannel>,bool,AActor*,bool,float)", OutLocation, SourceCharacter, TargetCharacter, DistanceMargin, CollisionChannel, bFailIfLocationNotOnGround, ActorToIgnore, bTraceComplex, DebugDrawDuration); }
	static void GridTraceAroundPoint() { NativeCall<void>(nullptr, "UVictoryCore.GridTraceAroundPoint()"); }
	//static float SimpleCurveEval(float Value, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveEval(float,TEnumAsByte<enumESimpleCurve::Type>)", Value, CurveType); }
	//static float SimpleCurveInterpClamped(float A, float B, float Alpha, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveInterpClamped(float,float,float,TEnumAsByte<enumESimpleCurve::Type>)", A, B, Alpha, CurveType); }
	//static float MapRangeToCurveClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, float, float, float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.MapRangeToCurveClamped(float,float,float,float,float,TEnumAsByte<enumESimpleCurve::Type>)", Value, InRangeA, InRangeB, OutRangeA, OutRangeB, CurveType); }
	//static float MapAngleRangeToCurveClamped(float AngleDegrees, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, float, float, float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.MapAngleRangeToCurveClamped(float,float,float,float,float,TEnumAsByte<enumESimpleCurve::Type>)", AngleDegrees, InRangeA, InRangeB, OutRangeA, OutRangeB, CurveType); }
	static bool BPFastTrace() { return NativeCall<bool>(nullptr, "UVictoryCore.BPFastTrace()"); }
	//static bool SplineLineTrace(USplineComponent* SplineComponent, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, int NumTracesPerSegment, ECollisionChannel Channel, bool bStopOnBlockingHit, float DebugDrawDuration) { return NativeCall<bool, USplineComponent*, const TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<FHitResult, TSizedDefaultAllocator<32> >*, int, ECollisionChannel, bool, float>(nullptr, "UVictoryCore.SplineLineTrace(USplineComponent*,TArray<AActor*,TSizedDefaultAllocator<32>>*,TArray<FHitResult,TSizedDefaultAllocator<32>>*,int,ECollisionChannel,bool,float)", SplineComponent, ActorsToIgnore, OutHits, NumTracesPerSegment, Channel, bStopOnBlockingHit, DebugDrawDuration); }
	//static bool VTraceIgnoreFoliage(UWorld* theWorld, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, FHitResult* HitOut, const AActor* ActorToIgnore, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, const UE::Math::TVector<double>* BoxExtent, FName TraceTag, const AActor* OtherActorToIgnore, TArray<AActor*, TSizedDefaultAllocator<32> >* OtherActorsToIgnore, const UE::Math::TQuat<double>* Rot, const AActor* AnotherActorToIgnore, bool bIgnoreFoliage) { return NativeCall<bool, UWorld*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, FHitResult*, const AActor*, ECollisionChannel, int, bool, bool, const UE::Math::TVector<double>*, FName, const AActor*, TArray<AActor*, TSizedDefaultAllocator<32> >*, const UE::Math::TQuat<double>*, const AActor*, bool>(nullptr, "UVictoryCore.VTraceIgnoreFoliage(UWorld*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,FHitResult*,AActor*,ECollisionChannel,int,bool,bool,UE::Math::TVector<double>*,FName,AActor*,TArray<AActor*,TSizedDefaultAllocator<32>>*,UE::Math::TQuat<double>*,AActor*,bool)", theWorld, Start, End, HitOut, ActorToIgnore, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, OtherActorToIgnore, OtherActorsToIgnore, Rot, AnotherActorToIgnore, bIgnoreFoliage); }
	static void SetSessionPrefix(const FString* InPrefix) { NativeCall<void, const FString*>(nullptr, "UVictoryCore.SetSessionPrefix(FString&)", InPrefix); }
	static FColor* GetTeamColor(FColor* result, const int TargetingTeam) { return NativeCall<FColor*, FColor*, const int>(nullptr, "UVictoryCore.GetTeamColor(FColor*,int)", result, TargetingTeam); }
	static FString* FormatAsTime(FString* result, int InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds) { return NativeCall<FString*, FString*, int, bool, bool, bool>(nullptr, "UVictoryCore.FormatAsTime(FString&,int,bool,bool,bool)", result, InTime, UseLeadingZero, bForceLeadingZeroHour, bShowSeconds); }
	static FString* FormatAsTimeLong(FString* result, int InTime) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.FormatAsTimeLong(FString&,int)", result, InTime); }
	static bool CalculateInterceptPosition(const UE::Math::TVector<double>* StartPosition, const UE::Math::TVector<double>* StartVelocity, float ProjectileVelocity, const UE::Math::TVector<double>* TargetPosition, const UE::Math::TVector<double>* TargetVelocity, UE::Math::TVector<double>* InterceptPosition) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, float, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UVictoryCore.CalculateInterceptPosition(UE::Math::TVector<double>*,UE::Math::TVector<double>*,float,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*)", StartPosition, StartVelocity, ProjectileVelocity, TargetPosition, TargetVelocity, InterceptPosition); }
	static int GetSecondsIntoDay() { return NativeCall<int>(nullptr, "UVictoryCore.GetSecondsIntoDay()"); }
	static bool GetGroundLocation(UObject* WorldContextObject, UE::Math::TVector<double>* theGroundLoc, const UE::Math::TVector<double>* StartLoc, const UE::Math::TVector<double>* OffsetUp, const UE::Math::TVector<double>* OffsetDown) { return NativeCall<bool, UObject*, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetGroundLocation(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", WorldContextObject, theGroundLoc, StartLoc, OffsetUp, OffsetDown); }
	static void CallGlobalLevelEvent(UObject* WorldContextObject, FName EventName) { NativeCall<void, UObject*, FName>(nullptr, "UVictoryCore.CallGlobalLevelEvent(UObject*,FName)", WorldContextObject, EventName); }
	static void StopAllMusicTracks(const UObject* WorldContextObject) { NativeCall<void, const UObject*>(nullptr, "UVictoryCore.StopAllMusicTracks(UObject*)", WorldContextObject); }
	static TArray<AActor*>* ServerOctreeOverlapActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result, UObject* WorldContextObject, UE::Math::TVector<double>* AtLoc, float Radius, int OctreeType, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*>*, TArray<AActor*>*, UObject*, UE::Math::TVector<double>*, float, int, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActors(UObject*,UE::Math::TVector<double>,float,EServerOctreeGroup::Type,bool)", result, WorldContextObject, AtLoc, Radius, OctreeType, bForceActorLocationDistanceCheck); }
	static TArray<AActor*>* ServerOctreeOverlapActorsClass(TArray<AActor*, TSizedDefaultAllocator<32> >* result, UObject* WorldContextObject, UE::Math::TVector<double>* AtLoc, float Radius, int OctreeType, TSubclassOf<AActor> ActorClass, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*>*, TArray<AActor*>*, UObject*, UE::Math::TVector<double>*, float, int, TSubclassOf<AActor>, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActors(UObject*,UE::Math::TVector<double>,float,EServerOctreeGroup::Type,bool)", result, WorldContextObject, AtLoc, Radius, OctreeType, ActorClass, bForceActorLocationDistanceCheck); }
	static bool IsVerboseDisplayEnabled(const UObject* WorldContextObject) { return NativeCall<bool, const UObject*>(nullptr, "UVictoryCore.IsVerboseDisplayEnabled(UObject*)", WorldContextObject); }
	static AActor* SpawnActorDeferred(UClass* Class, UObject* WorldContextObject, const UE::Math::TVector<double>* Location, const UE::Math::TRotator<double>* Rotation, AActor* Owner, APawn* Instigator, bool bNoCollisionFail) { return NativeCall<AActor*, UClass*, UObject*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, AActor*, APawn*, bool>(nullptr, "UVictoryCore.SpawnActorDeferred(UClass*,UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*,APawn*,bool)", Class, WorldContextObject, Location, Rotation, Owner, Instigator, bNoCollisionFail); }
	static void FinishSpawning(AActor* Actor) { NativeCall<void, AActor*>(nullptr, "UVictoryCore.FinishSpawning(AActor*)", Actor); }
	static bool KillTargetCharacterOrStructure(AActor* ActorToKill, AActor* DamageCauser, bool bTryDestroyActor) { return NativeCall<bool, AActor*, AActor*, bool>(nullptr, "UVictoryCore.KillTargetCharacterOrStructure(AActor*,AActor*,bool)", ActorToKill, DamageCauser, bTryDestroyActor); }
	static __int64 GetWeightedRandomIndexFromArray() { return NativeCall<__int64>(nullptr, "UVictoryCore.GetWeightedRandomIndexFromArray()"); }
	static AActor* GetClosestActorArray() { return NativeCall<AActor*>(nullptr, "UVictoryCore.GetClosestActorArray()"); }
	//static void GetSpecialActorList(UObject* WorldContextObject, TEnumAsByte<enum EActorListsBP::Type> ActorListType, TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, UObject*, TEnumAsByte<enum EActorListsBP::Type>, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetSpecialActorList(UObject*,TEnumAsByte<enumEActorListsBP::Type>,TArray<AActor*,TSizedDefaultAllocator<32>>*)", WorldContextObject, ActorListType, OutActors); }
	static ACustomActorList* GetCustomActorList(UObject* WorldContextObject, FName SearchCustomTag) { return NativeCall<ACustomActorList*, UObject*, FName>(nullptr, "UVictoryCore.GetCustomActorList(UObject*,FName)", WorldContextObject, SearchCustomTag); }
	static long double GetNetworkTimeInSeconds(UObject* WorldContextObject) { return NativeCall<long double, UObject*>(nullptr, "UVictoryCore.GetNetworkTimeInSeconds(UObject*)", WorldContextObject); }
	static long double GetRealWorldUtcTimeInSeconds() { return NativeCall<long double>(nullptr, "UVictoryCore.GetRealWorldUtcTimeInSeconds()"); }
	static long double NetworkTimeToRealWorldUtcTime(UObject* WorldContextObject, long double NetworkTime) { return NativeCall<long double, UObject*, long double>(nullptr, "UVictoryCore.NetworkTimeToRealWorldUtcTime(UObject*,longdouble)", WorldContextObject, NetworkTime); }
	static TArray<APlayerCameraManager*, TSizedDefaultAllocator<32> >* GetAllLocalPlayerCameraManagers(TArray<APlayerCameraManager*, TSizedDefaultAllocator<32> >* result, UObject* WorldContextObject) { return NativeCall<TArray<APlayerCameraManager*, TSizedDefaultAllocator<32> >*, TArray<APlayerCameraManager*, TSizedDefaultAllocator<32> >*, UObject*>(nullptr, "UVictoryCore.GetAllLocalPlayerCameraManagers(TArray<APlayerCameraManager*,TSizedDefaultAllocator<32>>*,UObject*)", result, WorldContextObject); }
	static AShooterCharacter* GetShooterCharacterFromPawn(APawn* Pawn) { return NativeCall<AShooterCharacter*, APawn*>(nullptr, "UVictoryCore.GetShooterCharacterFromPawn(APawn*)", Pawn); }
	static AShooterCharacter* GetShooterCharacterFromController(AController* Controller) { return NativeCall<AShooterCharacter*, AController*>(nullptr, "UVictoryCore.GetShooterCharacterFromController(AController*)", Controller); }
	static bool VTraceSingleBP(UObject* WorldContextObject, FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, int CollisionGroups, FName TraceTag, bool bTraceComplex, AActor* ActorToIgnore, float DebugDrawDuration) { return NativeCall<bool, UObject*, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, int, FName, bool, AActor*, float>(nullptr, "UVictoryCore.VTraceSingleBP(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,int,FName,bool,AActor*,float)", WorldContextObject, OutHit, Start, End, TraceChannel, CollisionGroups, TraceTag, bTraceComplex, ActorToIgnore, DebugDrawDuration); }
	//static bool VTraceSingleBP_IgnoreActorsArray(UObject* WorldContextObject, FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, const AActor* InIgnoreActor, ECollisionChannel TraceChannel, int CollisionGroups, FName TraceTag, bool bReturnPhysMaterial, bool bTraceComplex, float DebugDrawDuration) { return NativeCall<bool, UObject*, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const TArray<AActor*, TSizedDefaultAllocator<32> >*, const AActor*, ECollisionChannel, int, FName, bool, bool, float>(nullptr, "UVictoryCore.VTraceSingleBP_IgnoreActorsArray(UObject*,FHitResult*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,TArray<AActor*,TSizedDefaultAllocator<32>>*,AActor*,ECollisionChannel,int,FName,bool,bool,float)", WorldContextObject, OutHit, Start, End, ExtraIgnoreActors, InIgnoreActor, TraceChannel, CollisionGroups, TraceTag, bReturnPhysMaterial, bTraceComplex, DebugDrawDuration); }
	//static bool VTraceSphereBP(UObject* WorldContextObject, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, FHitResult* HitOut, float Radius, const AActor* ActorToIgnore, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FName TraceTag, const AActor* OtherActorToIgnore, AActor* AnotherActorToIgnore, float DebugDrawDuration) { return NativeCall<bool, UObject*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, FHitResult*, float, const AActor*, ECollisionChannel, int, bool, bool, FName, const AActor*, AActor*, float>(nullptr, "UVictoryCore.VTraceSphereBP(UObject*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,FHitResult*,float,AActor*,ECollisionChannel,int,bool,bool,FName,AActor*,AActor*,float)", WorldContextObject, Start, End, HitOut, Radius, ActorToIgnore, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, TraceTag, OtherActorToIgnore, AnotherActorToIgnore, DebugDrawDuration); }
	//static bool VTraceSphereBP_IgnoreActorsArray(UObject* WorldContextObject, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, FHitResult* HitOut, float Radius, const TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, const AActor* InIgnoreActor, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FName TraceTag, float DebugDrawDuration) { return NativeCall<bool, UObject*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, FHitResult*, float, const TArray<AActor*, TSizedDefaultAllocator<32> >*, const AActor*, ECollisionChannel, int, bool, bool, FName, float>(nullptr, "UVictoryCore.VTraceSphereBP_IgnoreActorsArray(UObject*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,FHitResult*,float,TArray<AActor*,TSizedDefaultAllocator<32>>*,AActor*,ECollisionChannel,int,bool,bool,FName,float)", WorldContextObject, Start, End, HitOut, Radius, ExtraIgnoreActors, InIgnoreActor, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, TraceTag, DebugDrawDuration); }
	static bool VTraceShapeBP() { return NativeCall<bool>(nullptr, "UVictoryCore.VTraceShapeBP()"); }
	static bool VTraceShapeMultiBP() { return NativeCall<bool>(nullptr, "UVictoryCore.VTraceShapeMultiBP()"); }
	//static bool VTraceMulti(UWorld* theWorld, TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, AActor* InIgnoreActor, int CollisionGroups, float SphereRadius, const UE::Math::TVector<double>* BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, FName TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, AActor* AdditionalIgnoreActor, AActor* AnotherIgnoreActor, bool bJustDoSphereOverlapAtStartLoc, TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors) { return NativeCall<bool, UWorld*, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, AActor*, int, float, const UE::Math::TVector<double>*, bool, ECollisionChannel, bool, FName, bool, bool, AActor*, AActor*, bool, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.VTraceMulti(UWorld*,TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,AActor*,int,float,UE::Math::TVector<double>*,bool,ECollisionChannel,bool,FName,bool,bool,AActor*,AActor*,bool,TArray<AActor*,TSizedDefaultAllocator<32>>*)", theWorld, OutHits, Start, End, InIgnoreActor, CollisionGroups, SphereRadius, BoxExtent, bReturnPhysMaterial, TraceChannel, bTraceComplex, TraceTag, bTraceChannelForceOverlap, bDoSort, AdditionalIgnoreActor, AnotherIgnoreActor, bJustDoSphereOverlapAtStartLoc, ExtraIgnoreActors); }
	//static bool VTraceMultiBP(UObject* WorldContextObject, TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, AActor* InIgnoreActor, int CollisionGroups, float SphereRadius, const UE::Math::TVector<double>* BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, FName TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, AActor* AdditionalIgnoreActor, AActor* AnotherIgnoreActor, bool bJustDoSphereOverlapAtStartLoc, float DebugDrawDuration) { return NativeCall<bool, UObject*, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, AActor*, int, float, const UE::Math::TVector<double>*, bool, ECollisionChannel, bool, FName, bool, bool, AActor*, AActor*, bool, float>(nullptr, "UVictoryCore.VTraceMultiBP(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,AActor*,int,float,UE::Math::TVector<double>*,bool,ECollisionChannel,bool,FName,bool,bool,AActor*,AActor*,bool,float)", WorldContextObject, OutHits, Start, End, InIgnoreActor, CollisionGroups, SphereRadius, BoxExtent, bReturnPhysMaterial, TraceChannel, bTraceComplex, TraceTag, bTraceChannelForceOverlap, bDoSort, AdditionalIgnoreActor, AnotherIgnoreActor, bJustDoSphereOverlapAtStartLoc, DebugDrawDuration); }
	//static bool VTraceMultiBP_IgnoreActorsArray(UObject* WorldContextObject, TArray<FHitResult, TSizedDefaultAllocator<32> >* OutHits, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, AActor* InIgnoreActor, int CollisionGroups, float SphereRadius, const UE::Math::TVector<double>* BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, FName TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, bool bJustDoSphereOverlapAtStartLoc, float DebugDrawDuration) { return NativeCall<bool, UObject*, TArray<FHitResult, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const TArray<AActor*, TSizedDefaultAllocator<32> >*, AActor*, int, float, const UE::Math::TVector<double>*, bool, ECollisionChannel, bool, FName, bool, bool, bool, float>(nullptr, "UVictoryCore.VTraceMultiBP_IgnoreActorsArray(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,TArray<AActor*,TSizedDefaultAllocator<32>>*,AActor*,int,float,UE::Math::TVector<double>*,bool,ECollisionChannel,bool,FName,bool,bool,bool,float)", WorldContextObject, OutHits, Start, End, ExtraIgnoreActors, InIgnoreActor, CollisionGroups, SphereRadius, BoxExtent, bReturnPhysMaterial, TraceChannel, bTraceComplex, TraceTag, bTraceChannelForceOverlap, bDoSort, bJustDoSphereOverlapAtStartLoc, DebugDrawDuration); }
	static bool IsGamePadConnected() { return NativeCall<bool>(nullptr, "UVictoryCore.IsGamePadConnected()"); }
	//static int IsChildOfClasses(TSubclassOf<UObject> childClass, const //TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, const //TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClasses(TSubclassOf<UObject>,//TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>*)", childClass, ParentClassesArray); }
	static bool ObjectIsChildOfSoftRef() { return NativeCall<bool>(nullptr, "UVictoryCore.ObjectIsChildOfSoftRef()"); }
	static bool IsPVEServer(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UVictoryCore.IsPVEServer(UObject*)", WorldContextObject); }
	static bool IsTimeSince_Network(UObject* WorldContextObject, long double OldTime, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, UObject*, long double, float, bool>(nullptr, "UVictoryCore.IsTimeSince_Network(UObject*,longdouble,float,bool)", WorldContextObject, OldTime, CheckTimeSince, bForceTrueAtZeroTime); }
	static bool IsTimeSince_Utc(long double OldTime, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, long double, float, bool>(nullptr, "UVictoryCore.IsTimeSince_Utc(longdouble,float,bool)", OldTime, CheckTimeSince, bForceTrueAtZeroTime); }
	static float TimeSince_Network(UObject* WorldContextObject, long double OldTime) { return NativeCall<float, UObject*, long double>(nullptr, "UVictoryCore.TimeSince_Network(UObject*,longdouble)", WorldContextObject, OldTime); }
	static bool IsTimeSince(UObject* WorldContextObject, long double OldTime, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, UObject*, long double, float, bool>(nullptr, "UVictoryCore.IsTimeSince(UObject*,longdouble,float,bool)", WorldContextObject, OldTime, CheckTimeSince, bForceTrueAtZeroTime); }
	static float TimeSince(UObject* WorldContextObject, long double OldTime) { return NativeCall<float, UObject*, long double>(nullptr, "UVictoryCore.TimeSince(UObject*,longdouble)", WorldContextObject, OldTime); }
	//static FString* LeaderboardColumnNameToString(FString* result, TEnumAsByte<enum ELeaderboardColumnName::Type> ColumnType) { return NativeCall<FString*, FString*, TEnumAsByte<enum ELeaderboardColumnName::Type>>(nullptr, "UVictoryCore.LeaderboardColumnNameToString(FString&,TEnumAsByte<enumELeaderboardColumnName::Type>)", result, ColumnType); }
	static void PauseTimer() { NativeCall<void>(nullptr, "UVictoryCore.PauseTimer()"); }
	static void UnPauseTimer() { NativeCall<void>(nullptr, "UVictoryCore.UnPauseTimer()"); }
	static bool IsTimerActive() { return NativeCall<bool>(nullptr, "UVictoryCore.IsTimerActive()"); }
	static bool IsTimerPaused() { return NativeCall<bool>(nullptr, "UVictoryCore.IsTimerPaused()"); }
	static FString* GetLastMapPlayed(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetLastMapPlayed(FString&)", result); }
	static void SetLastMapPlayed(const FString* NewLastMapPlayed) { NativeCall<void, const FString*>(nullptr, "UVictoryCore.SetLastMapPlayed(FString&)", NewLastMapPlayed); }
	static FString* GetLastHostedMapPlayed(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetLastHostedMapPlayed(FString&)", result); }
	static void SetLastHostedMapPlayed(const FString* NewLastHostedMapPlayed) { NativeCall<void, const FString*>(nullptr, "UVictoryCore.SetLastHostedMapPlayed(FString&)", NewLastHostedMapPlayed); }
	static bool OwnsScorchedEarth() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsScorchedEarth()"); }
	static bool OwnsAberration() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsAberration()"); }
	static bool OwnsExtinction() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsExtinction()"); }
	static bool OwnsGenesisSeasonPass() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsGenesisSeasonPass()"); }
	static bool OwnsGenesis() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsGenesis()"); }
	static bool IsEngramGroupAllowed(AShooterPlayerController* forPC, int EngramGroup) { return NativeCall<bool, AShooterPlayerController*, int>(nullptr, "UVictoryCore.IsEngramGroupAllowed(AShooterPlayerController*,int)", forPC, EngramGroup); }
	static bool DoesOwnSelectedDLC(EDLCSelector SelectedDLC) { return NativeCall<bool, EDLCSelector>(nullptr, "UVictoryCore.DoesOwnSelectedDLC(EDLCSelector)", SelectedDLC); }
	static FString* GetDLCNameFromSelector(FString* result, EDLCSelector SelectedDLC) { return NativeCall<FString*, FString*, EDLCSelector>(nullptr, "UVictoryCore.GetDLCNameFromSelector(FString&,EDLCSelector)", result, SelectedDLC); }
	static void OpenStorePageForDLC() { NativeCall<void>(nullptr, "UVictoryCore.OpenStorePageForDLC()"); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* SortActorsByDistance(TArray<AActor*, TSizedDefaultAllocator<32> >* result, const UE::Math::TVector<double>* fromLoc, const TArray<AActor*, TSizedDefaultAllocator<32> >* actors) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>*, const TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SortActorsByDistance(TArray<AActor*,TSizedDefaultAllocator<32>>*,UE::Math::TVector<double>*,TArray<AActor*,TSizedDefaultAllocator<32>>*)", result, fromLoc, actors); }
	static void PlayMusic() { NativeCall<void>(nullptr, "UVictoryCore.PlayMusic()"); }
	static void StopMusic() { NativeCall<void>(nullptr, "UVictoryCore.StopMusic()"); }
	//static bool VTraceAgainstActorExpensive(UObject* WorldContextObject, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, FHitResult* HitOut, AActor* ActorToTraceAgainst, ECollisionChannel Channel, __int64 CollisionGroups, float SphereRadius, bool bReturnPhysMaterial, bool bTraceComplex, const UE::Math::TVector<double>* BoxExtent, FName TraceTag, bool bSort) { return NativeCall<bool, UObject*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, FHitResult*, AActor*, ECollisionChannel, __int64, float, bool, bool, const UE::Math::TVector<double>*, FName, bool>(nullptr, "UVictoryCore.VTraceAgainstActorExpensive(UObject*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,FHitResult*,AActor*,ECollisionChannel,__int64,float,bool,bool,UE::Math::TVector<double>*,FName,bool)", WorldContextObject, Start, End, HitOut, ActorToTraceAgainst, Channel, CollisionGroups, SphereRadius, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, bSort); }
	static TSubclassOf<UObject>* StringReferenceToClass(TSubclassOf<UObject>* result, const FString* StringReference) { return NativeCall<TSubclassOf<UObject> *, TSubclassOf<UObject>*, const FString*>(nullptr, "UVictoryCore.StringReferenceToClass(FString&)", result, StringReference); }
	static void RefreshApplySoundVolumes() { NativeCall<void>(nullptr, "UVictoryCore.RefreshApplySoundVolumes()"); }
	static void RefreshApplySoundAndMusicVolumes() { NativeCall<void>(nullptr, "UVictoryCore.RefreshApplySoundAndMusicVolumes()"); }
	static FString* GetTwoLetterISOLanguageName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetTwoLetterISOLanguageName(FString&)", result); }
	static FString* GetSoundWaveLocalizedSpokenText(FString* result, USoundWave* inSound) { return NativeCall<FString*, FString*, USoundWave*>(nullptr, "UVictoryCore.GetSoundWaveLocalizedSpokenText(FString&,USoundWave*)", result, inSound); }
	static FString* GetSoundCueLocalizedSpokenText(FString* result, USoundCue* inSound) { return NativeCall<FString*, FString*, USoundCue*>(nullptr, "UVictoryCore.GetSoundCueLocalizedSpokenText(FString&,USoundCue*)", result, inSound); }
	static bool GetLocaleSpecificAudio(const TArray<FLocalizedSoundCueEntry, TSizedDefaultAllocator<32> >* LocalizedSoundCues, FLocalizedSoundCueEntry* OutLocalizedAudio, const FString* LanguageOverride) { return NativeCall<bool, const TArray<FLocalizedSoundCueEntry, TSizedDefaultAllocator<32> >*, FLocalizedSoundCueEntry*, const FString*>(nullptr, "UVictoryCore.GetLocaleSpecificAudio(TArray<FLocalizedSoundCueEntry,TSizedDefaultAllocator<32>>*,FLocalizedSoundCueEntry*,FString&)", LocalizedSoundCues, OutLocalizedAudio, LanguageOverride); }
	static bool GetLocaleSpecificSoundWaveAnimTexturePairArrays(const TArray<FLocalizedSoundWaveAnimTexturePairArrays, TSizedDefaultAllocator<32> >* LocalizedSoundWaveAnimTextures, FLocalizedSoundWaveAnimTexturePairArrays* OutLocalizedAudio, bool* FoundLocalizedSoundWavesForThisLanguage, const FString* LanguageOverride) { return NativeCall<bool, const TArray<FLocalizedSoundWaveAnimTexturePairArrays, TSizedDefaultAllocator<32> >*, FLocalizedSoundWaveAnimTexturePairArrays*, bool*, const FString*>(nullptr, "UVictoryCore.GetLocaleSpecificSoundWaveAnimTexturePairArrays(TArray<FLocalizedSoundWaveAnimTexturePairArrays,TSizedDefaultAllocator<32>>*,FLocalizedSoundWaveAnimTexturePairArrays*,bool*,FString&)", LocalizedSoundWaveAnimTextures, OutLocalizedAudio, FoundLocalizedSoundWavesForThisLanguage, LanguageOverride); }
	static FString* FindLocalizedVersionOfFilename(FString* result, const FSoftObjectPath* OriginalFile) { return NativeCall<FString*, FString*, const FSoftObjectPath*>(nullptr, "UVictoryCore.FindLocalizedVersionOfFilename(FString&,FSoftObjectPath*)", result, OriginalFile); }
	static void AddEnvironmentInteractionEffect() { NativeCall<void>(nullptr, "UVictoryCore.AddEnvironmentInteractionEffect()"); }
	static void AddEnvironmentCapsuleInteractionEffect() { NativeCall<void>(nullptr, "UVictoryCore.AddEnvironmentCapsuleInteractionEffect()"); }
	static void AddFluidInteraction() { NativeCall<void>(nullptr, "UVictoryCore.AddFluidInteraction()"); }
	static char IsLocationLikelyWithinAnIncorrectlyPlacedWaterVolume() { return NativeCall<char>(nullptr, "UVictoryCore.IsLocationLikelyWithinAnIncorrectlyPlacedWaterVolume()"); }
	static FString* GetTotalCoversionIdAsString(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetTotalCoversionIdAsString(FString&)", result); }
	static UClass* GetItemClassFromItemSetup(const FItemSetup* ItemSetup) { return NativeCall<UClass*, const FItemSetup*>(nullptr, "UVictoryCore.GetItemClassFromItemSetup(FItemSetup*)", ItemSetup); }
	//static bool GetCharacterCapsuleSize(TSubclassOf<APrimalCharacter> CharClass, float* OutCapsuleRadius, float* OutCapsuleHalfHeight) { return NativeCall<bool, TSubclassOf<APrimalCharacter>, float*, float*>(nullptr, "UVictoryCore.GetCharacterCapsuleSize(TSubclassOf<APrimalCharacter>,float*,float*)", CharClass, OutCapsuleRadius, OutCapsuleHalfHeight); }
	static UClass* GetDinoStaticClass(const FDinoSetup* DinoSetup) { return NativeCall<UClass*, const FDinoSetup*>(nullptr, "UVictoryCore.GetDinoStaticClass(FDinoSetup*)", DinoSetup); }
	//static APrimalDinoCharacter* SpawnCustomDino(UObject* WorldContextObject, const UE::Math::TVector<double>* SpawnLocation, const UE::Math::TRotator<double>* SpawnRotation, const FDinoSetup* DinoSetup, AShooterPlayerController* OwnerPlayerController, float DebugDrawDuration, bool bApplyRotationToSpawnOffset, bool bUseExactSpawnLocation, bool bSkipAddingTamedLevels, bool bSuppressTamingNotifications, AMissionType* mission, TSubclassOf<UPrimalColorSet> ColorSet) { return NativeCall<APrimalDinoCharacter*, UObject*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FDinoSetup*, AShooterPlayerController*, float, bool, bool, bool, bool, AMissionType*, TSubclassOf<UPrimalColorSet>>(nullptr, "UVictoryCore.SpawnCustomDino(UObject*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FDinoSetup*,AShooterPlayerController*,float,bool,bool,bool,bool,AMissionType*,TSubclassOf<UPrimalColorSet>)", WorldContextObject, SpawnLocation, SpawnRotation, DinoSetup, OwnerPlayerController, DebugDrawDuration, bApplyRotationToSpawnOffset, bUseExactSpawnLocation, bSkipAddingTamedLevels, bSuppressTamingNotifications, mission, ColorSet); }
	static bool CanSpawnCustomDino(UObject* WorldContextObject, UE::Math::TVector<double>* OutCalculatedSpawnLocation, const UE::Math::TVector<double>* PlayerLocation, const UE::Math::TVector<double>* SpawnLocation, const UE::Math::TRotator<double>* SpawnRotation, const FDinoSetup* DinoSetup, float DebugDrawDuration, bool bDoLosCheck, bool bDoExtraSafetyChecks, APrimalCharacter* spawningCharacter, bool bDoOverlapCheck) { return NativeCall<bool, UObject*, UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, const FDinoSetup*, float, bool, bool, APrimalCharacter*, bool>(nullptr, "UVictoryCore.CanSpawnCustomDino(UObject*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TRotator<double>*,FDinoSetup*,float,bool,bool,APrimalCharacter*,bool)", WorldContextObject, OutCalculatedSpawnLocation, PlayerLocation, SpawnLocation, SpawnRotation, DinoSetup, DebugDrawDuration, bDoLosCheck, bDoExtraSafetyChecks, spawningCharacter, bDoOverlapCheck); }
	static int CountCharactersResolvingGroundLocationInSphere(UWorld* WorldContext, const UE::Math::TVector<double>* location, float radius) { return NativeCall<int, UWorld*, const UE::Math::TVector<double>*, float>(nullptr, "UVictoryCore.CountCharactersResolvingGroundLocationInSphere(UWorld*,UE::Math::TVector<double>*,float)", WorldContext, location, radius); }
	static bool GetDinoSetupGroup_ByName(FName GroupName, const TArray<FDinoSetupGroup, TSizedDefaultAllocator<32> >* DinoSetupGroups, FDinoSetupGroup* OutGroup) { return NativeCall<bool, FName, const TArray<FDinoSetupGroup, TSizedDefaultAllocator<32> >*, FDinoSetupGroup*>(nullptr, "UVictoryCore.GetDinoSetupGroup_ByName(FName,TArray<FDinoSetupGroup,TSizedDefaultAllocator<32>>*,FDinoSetupGroup*)", GroupName, DinoSetupGroups, OutGroup); }
	static bool GetDinoSetupGroup_WeightedRandom(const TArray<FDinoSetupGroup, TSizedDefaultAllocator<32> >* DinoSetupGroups, FDinoSetupGroup* OutGroup) { return NativeCall<bool, const TArray<FDinoSetupGroup, TSizedDefaultAllocator<32> >*, FDinoSetupGroup*>(nullptr, "UVictoryCore.GetDinoSetupGroup_WeightedRandom(TArray<FDinoSetupGroup,TSizedDefaultAllocator<32>>*,FDinoSetupGroup*)", DinoSetupGroups, OutGroup); }
	static void ForEachAvailableMissionType(UWorld* World, const TFunction<bool __cdecl(FAvailableMission const&)>* Callback) { NativeCall<void, UWorld*, const TFunction<bool __cdecl(FAvailableMission const&)>*>(nullptr, "UVictoryCore.ForEachAvailableMissionType(UWorld*,TFunction<bool__cdecl(FAvailableMission&)>*)", World, Callback); }
	static TArray<FAvailableMission, TSizedDefaultAllocator<32> >* GetAllAvailableMissions(TArray<FAvailableMission, TSizedDefaultAllocator<32> >* result, UObject* WorldContextObject) { return NativeCall<TArray<FAvailableMission, TSizedDefaultAllocator<32> >*, TArray<FAvailableMission, TSizedDefaultAllocator<32> >*, UObject*>(nullptr, "UVictoryCore.GetAllAvailableMissions(TArray<FAvailableMission,TSizedDefaultAllocator<32>>*,UObject*)", result, WorldContextObject); }
	static TArray<FName, TSizedDefaultAllocator<32> >* GetAllAvailableMissionsAsTags(TArray<FName, TSizedDefaultAllocator<32> >* result, UObject* WorldContextObject) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*, UObject*>(nullptr, "UVictoryCore.GetAllAvailableMissionsAsTags(TArray<FName,TSizedDefaultAllocator<32>>*,UObject*)", result, WorldContextObject); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllMissionActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result, UObject* WorldContextObject) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, UObject*>(nullptr, "UVictoryCore.GetAllMissionActors(TArray<AActor*,TSizedDefaultAllocator<32>>*,UObject*)", result, WorldContextObject); }
	//static AActor* GetMissionActorOfType(UObject* WorldContextObject, TSubclassOf<AMissionType> theMissionType, bool bExactMatch) { return NativeCall<AActor*, UObject*, TSubclassOf<AMissionType>, bool>(nullptr, "UVictoryCore.GetMissionActorOfType(UObject*,TSubclassOf<AMissionType>,bool)", WorldContextObject, theMissionType, bExactMatch); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllMissionDispatchers(TArray<AActor*, TSizedDefaultAllocator<32> >* result, UObject* WorldContextObject) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, UObject*>(nullptr, "UVictoryCore.GetAllMissionDispatchers(TArray<AActor*,TSizedDefaultAllocator<32>>*,UObject*)", result, WorldContextObject); }
	static TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllMissionDispatcherPoints(TArray<AActor*, TSizedDefaultAllocator<32> >* result, UObject* WorldContextObject) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, UObject*>(nullptr, "UVictoryCore.GetAllMissionDispatcherPoints(TArray<AActor*,TSizedDefaultAllocator<32>>*,UObject*)", result, WorldContextObject); }
	//static TSubclassOf<UPrimalItem>* GenerateRandomLootItem(TSubclassOf<UPrimalItem>* result, TEnumAsByte<enum ELootItemType::Type> LootItemType) { return NativeCall<TSubclassOf<UPrimalItem> *, TSubclassOf<UPrimalItem>*, TEnumAsByte<enum ELootItemType::Type>>(nullptr, "UVictoryCore.GenerateRandomLootItem(TSubclassOf<UPrimalItem>*,TEnumAsByte<enumELootItemType::Type>)", result, LootItemType); }
	//static TSubclassOf<UPrimalItem>* GenerateRandomLootItemFromLootTable(TSubclassOf<UPrimalItem>* result, const TArray<FLootTableEntry, TSizedDefaultAllocator<32> >* Entries, int* OutItemQuantity, float* OutItemQuality) { return NativeCall<TSubclassOf<UPrimalItem> *, TSubclassOf<UPrimalItem>*, const TArray<FLootTableEntry, TSizedDefaultAllocator<32> >*, int*, float*>(nullptr, "UVictoryCore.GenerateRandomLootItemFromLootTable(TSubclassOf<UPrimalItem>*,TArray<FLootTableEntry,TSizedDefaultAllocator<32>>*,int*,float*)", result, Entries, OutItemQuantity, OutItemQuality); }
	//static TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* GiveItemToCharacter(TArray<UPrimalItem*, TSizedDefaultAllocator<32> >* result, APrimalCharacter* Character, TSubclassOf<UPrimalItem> ItemType, int NumItems, float Quality, bool bAutoEquip) { return NativeCall<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*, APrimalCharacter*, TSubclassOf<UPrimalItem>, int, float, bool>(nullptr, "UVictoryCore.GiveItemToCharacter(TArray<UPrimalItem*,TSizedDefaultAllocator<32>>*,APrimalCharacter*,TSubclassOf<UPrimalItem>,int,float,bool)", result, Character, ItemType, NumItems, Quality, bAutoEquip); }
	static void GetObjectsReferencedBy(UObject* ForObject, TArray<UObject*, TSizedDefaultAllocator<32> >* OutReferencedObjects, bool bIgnoreTransient) { NativeCall<void, UObject*, TArray<UObject*, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UVictoryCore.GetObjectsReferencedBy(UObject*,TArray<UObject*,TSizedDefaultAllocator<32>>*,bool)", ForObject, OutReferencedObjects, bIgnoreTransient); }
	static bool GetOverlappedHarvestActors(UObject* WorldContextObject, const UE::Math::TVector<double>* AtLoc, float AtRadius, TArray<AActor*, TSizedDefaultAllocator<32> >* OutHarvestActors, TArray<UActorComponent*, TSizedDefaultAllocator<32> >* OutHarvestComponents, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* OutHarvestLocations, TArray<int, TSizedDefaultAllocator<32> >* OutHitBodyIndices) { return NativeCall<bool, UObject*, const UE::Math::TVector<double>*, float, TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetOverlappedHarvestActors(UObject*,UE::Math::TVector<double>*,float,TArray<AActor*,TSizedDefaultAllocator<32>>*,TArray<UActorComponent*,TSizedDefaultAllocator<32>>*,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>*,TArray<int,TSizedDefaultAllocator<32>>*)", WorldContextObject, AtLoc, AtRadius, OutHarvestActors, OutHarvestComponents, OutHarvestLocations, OutHitBodyIndices); }
	static void ServerSearchFoliage
	(UObject* WorldContextObject, UE::Math::TVector<double>* Origin, float Radius, TArray<FOverlappedFoliageElement, TSizedDefaultAllocator<32> >* OutFoliage, bool bVisibleAndActiveOnly, bool bIncludeUsableFoliage, bool bIncludeMeshFoliage, bool bSortByDistance, bool bReverseSort) 
	{ NativeCall<void, UObject*, UE::Math::TVector<double>*, float, TArray<FOverlappedFoliageElement, TSizedDefaultAllocator<32>>*, bool, bool, bool, bool, bool>(nullptr, "UVictoryCore.ServerSearchFoliage(UObject*,UE::Math::TVector<double>,float,TArray<FOverlappedFoliageElement,TSizedDefaultAllocator<32>>&,bool,bool,bool,bool,bool)",
		WorldContextObject, Origin, Radius, OutFoliage, bVisibleAndActiveOnly, bIncludeUsableFoliage, bIncludeMeshFoliage, bSortByDistance, bReverseSort); }
	static FName* GetHitBoneNameFromDamageEvent(FName* result, APrimalCharacter* Character, AController* HitInstigator, const FDamageEvent* DamageEvent, bool bIsPointDamage, const FHitResult* PointHitResult, FName MatchCollisionPresetName) { return NativeCall<FName*, FName*, APrimalCharacter*, AController*, const FDamageEvent*, bool, const FHitResult*, FName>(nullptr, "UVictoryCore.GetHitBoneNameFromDamageEvent(FName*,APrimalCharacter*,AController*,FDamageEvent*,bool,FHitResult*,FName)", result, Character, HitInstigator, DamageEvent, bIsPointDamage, PointHitResult, MatchCollisionPresetName); }
	static float GetAngleBetweenVectors(const UE::Math::TVector<double>* VectorA, const UE::Math::TVector<double>* VectorB, const UE::Math::TVector<double>* AroundAxis) { return NativeCall<float, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*>(nullptr, "UVictoryCore.GetAngleBetweenVectors(UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*)", VectorA, VectorB, AroundAxis); }
	static float GetAngleBetweenVectorsPure() { return NativeCall<float>(nullptr, "UVictoryCore.GetAngleBetweenVectorsPure()"); }
	static bool AreRotatorsNearlyEqual(const UE::Math::TRotator<double>* RotatorA, const UE::Math::TRotator<double>* RotatorB, float WithinError) { return NativeCall<bool, const UE::Math::TRotator<double>*, const UE::Math::TRotator<double>*, float>(nullptr, "UVictoryCore.AreRotatorsNearlyEqual(UE::Math::TRotator<double>*,UE::Math::TRotator<double>*,float)", RotatorA, RotatorB, WithinError); }
	static bool AreTransformsNearlyEqual(const UE::Math::TTransform<double>* TransformA, const UE::Math::TTransform<double>* TransformB, float WithinError) { return NativeCall<bool, const UE::Math::TTransform<double>*, const UE::Math::TTransform<double>*, float>(nullptr, "UVictoryCore.AreTransformsNearlyEqual(UE::Math::TTransform<double>*,UE::Math::TTransform<double>*,float)", TransformA, TransformB, WithinError); }
	static void MulticastDrawDebugLine(AActor* ReplicatedActor, UE::Math::TVector<double>* LineStart, UE::Math::TVector<double>* LineEnd, FLinearColor* LineColor, float Duration, float Thickness, const bool allowInShipping) { NativeCall<void, AActor*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FLinearColor*, float, float, const bool>(nullptr, "UVictoryCore.MulticastDrawDebugLine(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,float,float,bool)", ReplicatedActor, LineStart, LineEnd, LineColor, Duration, Thickness, allowInShipping); }
	static AShooterCharacter* GetPlayerCharacterByController(APlayerController* PC) { return NativeCall<AShooterCharacter*, APlayerController*>(nullptr, "UVictoryCore.GetPlayerCharacterByController(APlayerController*)", PC); }
	static APrimalDinoCharacter* GetDinoCharacterByID(UObject* WorldContextObject, const int DinoID1, const int DinoID2, const bool bSearchTamedOnly) { return NativeCall<APrimalDinoCharacter*, UObject*, const int, const int, const bool>(nullptr, "UVictoryCore.GetDinoCharacterByID(UObject*,int,int,bool)", WorldContextObject, DinoID1, DinoID2, bSearchTamedOnly); }
	static APrimalDinoCharacter* GetDinoCharacterByLongDinoID(UObject* WorldContextObject, const FString* DinoID, const bool bSearchTamedOnly) { return NativeCall<APrimalDinoCharacter*, UObject*, const FString*, const bool>(nullptr, "UVictoryCore.GetDinoCharacterByLongDinoID(UObject*,FString&,bool)", WorldContextObject, DinoID, bSearchTamedOnly); }
	static void GetAllClassesOfType(TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >* Subclasses, TSubclassOf<UObject> ParentClass, bool bAllowAbstract, FString* Path) { NativeCall<void, TArray<TSubclassOf<UObject>, TSizedDefaultAllocator<32> >*, TSubclassOf<UObject>, bool, FString*>(nullptr, "UVictoryCore.GetAllClassesOfType(TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&,TSubclassOf<UObject>,bool,FString)", Subclasses, ParentClass, bAllowAbstract, Path); }
	static bool IsValidItemForGrinding(const UPrimalItem* item, const UPrimalInventoryComponent* inventory) { return NativeCall<bool, const UPrimalItem*, const UPrimalInventoryComponent*>(nullptr, "UVictoryCore.IsValidItemForGrinding(UPrimalItem*,UPrimalInventoryComponent*)", item, inventory); }
	static bool GrindItemIntoInventory(UPrimalItem* item, UPrimalInventoryComponent* inventory, const bool bGrindStack, const int MaxQuantityToGrind, const float GrindGiveItemsPercent, const int MaxItemsToGivePerGrind) { return NativeCall<bool, UPrimalItem*, UPrimalInventoryComponent*, const bool, const int, const float, const int>(nullptr, "UVictoryCore.GrindItemIntoInventory(UPrimalItem*,UPrimalInventoryComponent*,bool,int,float,int)", item, inventory, bGrindStack, MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
	static void GrindAllItemsToInventory(UPrimalInventoryComponent* inventory, const bool bGrindStack, const int MaxQuantityToGrind, const float GrindGiveItemsPercent, const int MaxItemsToGivePerGrind) { NativeCall<void, UPrimalInventoryComponent*, const bool, const int, const float, const int>(nullptr, "UVictoryCore.GrindAllItemsToInventory(UPrimalInventoryComponent*,bool,int,float,int)", inventory, bGrindStack, MaxQuantityToGrind, GrindGiveItemsPercent, MaxItemsToGivePerGrind); }
	//static TSubclassOf<UPrimalItem>* GetGrinderReplacementItem(TSubclassOf<UPrimalItem>* result, TSubclassOf<UPrimalItem> current) { return NativeCall<TSubclassOf<UPrimalItem> *, TSubclassOf<UPrimalItem>*, TSubclassOf<UPrimalItem>>(nullptr, "UVictoryCore.GetGrinderReplacementItem(TSubclassOf<UPrimalItem>*,TSubclassOf<UPrimalItem>)", result, current); }
	static bool HasPlayerSeenGen2Intro(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UVictoryCore.HasPlayerSeenGen2Intro(UObject*)", WorldContextObject); }
	static void MarkGen2IntroAsSeen(UObject* WorldContextObject) { NativeCall<void, UObject*>(nullptr, "UVictoryCore.MarkGen2IntroAsSeen(UObject*)", WorldContextObject); }
	static void ForceScreenColorFade() { NativeCall<void>(nullptr, "UVictoryCore.ForceScreenColorFade()"); }
	static float GetScreenPercentage() { return NativeCall<float>(nullptr, "UVictoryCore.GetScreenPercentage()"); }
	static bool ProjectWorldToScreenPositionRaw() { return NativeCall<bool>(nullptr, "UVictoryCore.ProjectWorldToScreenPositionRaw()"); }
	static char ProjectWorldLocationToScreenOrScreenEdgePosition() { return NativeCall<char>(nullptr, "UVictoryCore.ProjectWorldLocationToScreenOrScreenEdgePosition()"); }
	static void AdjustScreenPositionWithScreenDPI(UObject* WorldContextObject, UE::Math::TVector2<double>* ScreenPosition) { NativeCall<void, UObject*, UE::Math::TVector2<double>*>(nullptr, "UVictoryCore.AdjustScreenPositionWithScreenDPI(UObject*,UE::Math::TVector2<double>*)", WorldContextObject, ScreenPosition); }
	static bool IsPointStuckWithinMesh() { return NativeCall<bool>(nullptr, "UVictoryCore.IsPointStuckWithinMesh()"); }
	static bool ServerCheckMeshingOnActor(AActor* OnActor, bool bForceUseActorCenterBounds) { return NativeCall<bool, AActor*, bool>(nullptr, "UVictoryCore.ServerCheckMeshingOnActor(AActor*,bool)", OnActor, bForceUseActorCenterBounds); }
	static void PlayCompanionReactionToPlayers() { NativeCall<void>(nullptr, "UVictoryCore.PlayCompanionReactionToPlayers()"); }
	static void PlayCompanionReactionOnSolePlayer(APrimalCharacter* PlayerWhoGetReaction, FCompanionReactionData* ReactionData, const bool ForcePlayNow, UMaterialInterface* OverrideDialogueIcon, const bool RestrictedEnvironmentalReaction, const int UniqueID) { NativeCall<void, APrimalCharacter*, FCompanionReactionData*, const bool, UMaterialInterface*, const bool, const int>(nullptr, "UVictoryCore.PlayCompanionReactionOnSolePlayer(APrimalCharacter*,FCompanionReactionData*,bool,UMaterialInterface*,bool,int)", PlayerWhoGetReaction, ReactionData, ForcePlayNow, OverrideDialogueIcon, RestrictedEnvironmentalReaction, UniqueID); }
	static void SetMaterialColorizationFromItemColors(UPrimalItem* item, UMaterialInstanceDynamic* dynamicMic) { NativeCall<void, UPrimalItem*, UMaterialInstanceDynamic*>(nullptr, "UVictoryCore.SetMaterialColorizationFromItemColors(UPrimalItem*,UMaterialInstanceDynamic*)", item, dynamicMic); }
	static FString* ConvertIntToStringWithCommas(FString* result, int GivenNumber) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.ConvertIntToStringWithCommas(FString&,int)", result, GivenNumber); }
	static float GetSimpleMontageDuration(UAnimMontage* GivenMontage, float GivenPlayRate) { return NativeCall<float, UAnimMontage*, float>(nullptr, "UVictoryCore.GetSimpleMontageDuration(UAnimMontage*,float)", GivenMontage, GivenPlayRate); }
	static void PrintMessageInShippingBuild(const FString* msg) { NativeCall<void, const FString*>(nullptr, "UVictoryCore.PrintMessageInShippingBuild(FString&)", msg); }
	static bool IsDinoDuped(UObject* WorldContextObject, const int id1, const int id2) { return NativeCall<bool, UObject*, const int, const int>(nullptr, "UVictoryCore.IsDinoDuped(UObject*,int,int)", WorldContextObject, id1, id2); }
	static bool IsUnderMesh(APrimalCharacter* Character, UE::Math::TVector<double>* CheckSevenHitLocation, bool* bOverlapping, UActorComponent** CheckSevenResult, bool DebugDraw, float DebugDrawSeconds) { return NativeCall<bool, APrimalCharacter*, UE::Math::TVector<double>*, bool*, UActorComponent**, bool, float>(nullptr, "UVictoryCore.IsUnderMesh(APrimalCharacter*,UE::Math::TVector<double>*,bool*,UActorComponent**,bool,float)", Character, CheckSevenHitLocation, bOverlapping, CheckSevenResult, DebugDraw, DebugDrawSeconds); }
	static FString* BPGetPrimaryMapName(FString* result, UObject* WorldContextObject) { return NativeCall<FString*, FString*, UObject*>(nullptr, "UVictoryCore.BPGetPrimaryMapName(FString&,UObject*)", result, WorldContextObject); }
	static FString* SimpleReplaceUnicodeWithSupportedAlternatives(FString* result, const FString* OriginalString) { return NativeCall<FString*, FString*, const FString*>(nullptr, "UVictoryCore.SimpleReplaceUnicodeWithSupportedAlternatives(FString&,FString&)", result, OriginalString); }
	static AActor* SpawnSaddleAttachedStructure() { return NativeCall<AActor*>(nullptr, "UVictoryCore.SpawnSaddleAttachedStructure()"); }
	static void DisableGCM(AActor* targetActor) { NativeCall<void, AActor*>(nullptr, "UVictoryCore.DisableGCM(AActor*)", targetActor); }
	static TArray<FString, TSizedDefaultAllocator<32> >* ChunkFStringIntoArray() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.ChunkFStringIntoArray()"); }
	static bool IsBrainControllingDinoAttached(APrimalCharacter* character) { return NativeCall<bool, APrimalCharacter*>(nullptr, "UVictoryCore.IsBrainControllingDinoAttached(APrimalCharacter*)", character); }
	static long double GetMissionNetworkStartTime(UObject* WorldContextObject, FName MissionTag) { return NativeCall<long double, UObject*, FName>(nullptr, "UVictoryCore.GetMissionNetworkStartTime(UObject*,FName)", WorldContextObject, MissionTag); }
	static TArray<FName, TSizedDefaultAllocator<32> >* GetLoadedStreamingLevelNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetLoadedStreamingLevelNames(TArray<FName,TSizedDefaultAllocator<32>>*)", result); }
	static void BlockTillAllStreamingRequestsFinished() { NativeCall<void>(nullptr, "UVictoryCore.BlockTillAllStreamingRequestsFinished()"); }
	static AActor* DeferredSpawnAndFireProjectile_Start() { return NativeCall<AActor*>(nullptr, "UVictoryCore.DeferredSpawnAndFireProjectile_Start()"); }
	static void ViewTrailer(bool bAnimatedSeriesTrailer, bool bARK2Trailer) { NativeCall<void, bool, bool>(nullptr, "UVictoryCore.ViewTrailer(bool,bool)", bAnimatedSeriesTrailer, bARK2Trailer); }
	static FString* FuseChunkedFString() { return NativeCall<FString*>(nullptr, "UVictoryCore.FuseChunkedFString()"); }
	static char ClipLineInsideBox() { return NativeCall<char>(nullptr, "UVictoryCore.ClipLineInsideBox()"); }
	static void GetLaunchVelocityAndGravity() { NativeCall<void>(nullptr, "UVictoryCore.GetLaunchVelocityAndGravity()"); }
	static void RecordMeshingMetrics(AActor* ForActor, bool bWasDestoryed) { NativeCall<void, AActor*, bool>(nullptr, "UVictoryCore.RecordMeshingMetrics(AActor*,bool)", ForActor, bWasDestoryed); }
	static void DestroyAllCharactersWithinMissionTileVolumes(UObject* WorldContextObject, bool bOnlyCheckForDeadCharacters, FName ForceOnTileStreamVolumeCustomTag) { NativeCall<void, UObject*, bool, FName>(nullptr, "UVictoryCore.DestroyAllCharactersWithinMissionTileVolumes(UObject*,bool,FName)", WorldContextObject, bOnlyCheckForDeadCharacters, ForceOnTileStreamVolumeCustomTag); }
	//static bool IsMissionActiveAnywhere(TSubclassOf<AMissionType> MissionType) { return NativeCall<bool, TSubclassOf<AMissionType>>(nullptr, "UVictoryCore.IsMissionActiveAnywhere(TSubclassOf<AMissionType>)", MissionType); }
	static bool IsMissionTagActiveAnywhere(AShooterPlayerController* FromPC, FName MissionTag) { return NativeCall<bool, AShooterPlayerController*, FName>(nullptr, "UVictoryCore.IsMissionTagActiveAnywhere(AShooterPlayerController*,FName)", FromPC, MissionTag); }
	static FName* GetBlockingMissionTag(FName* result, AShooterPlayerController* FromPC, FName MissionTag) { return NativeCall<FName*, FName*, AShooterPlayerController*, FName>(nullptr, "UVictoryCore.GetBlockingMissionTag(FName*,AShooterPlayerController*,FName)", result, FromPC, MissionTag); }
	static bool TryGetLocalizedString() { return NativeCall<bool>(nullptr, "UVictoryCore.TryGetLocalizedString()"); }
	static void GetAllActorsOfClassSoft() { NativeCall<void>(nullptr, "UVictoryCore.GetAllActorsOfClassSoft()"); }
	static FString* ListDinos(FString* result, UObject* WorldContextObject, const bool TamedOnly, const int TargetingTeamExcluded) { return NativeCall<FString*, FString*, UObject*, const bool, const int>(nullptr, "UVictoryCore.ListDinos(FString&,UObject*,bool,int)", result, WorldContextObject, TamedOnly, TargetingTeamExcluded); }
	static FString* ListDinosNew(FString* result, UObject* WorldContextObject) { return NativeCall<FString*, FString*, UObject*>(nullptr, "UVictoryCore.ListDinosNew(FString&,UObject*)", result, WorldContextObject); }
	static bool EnsureNumericAndCharsEx(FString* text, int maxChars, bool bAllowSpace) { return NativeCall<bool, FString*, int, bool>(nullptr, "UVictoryCore.EnsureNumericAndCharsEx(FString&,int,bool)", text, maxChars, bAllowSpace); }
	static TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* AttemptToSpawnAWildFollower() { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.AttemptToSpawnAWildFollower()"); }
	static TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >* SpawnFollowerBasedOnRNG() { return NativeCall<TArray<APrimalDinoCharacter*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.SpawnFollowerBasedOnRNG()"); }
	static APrimalDinoCharacter* SpawnFollower() { return NativeCall<APrimalDinoCharacter*>(nullptr, "UVictoryCore.SpawnFollower()"); }
	static FPrimalPlayerCharacterConfigStructReplicated* MakePlayerCharacterConfigStructReplicated() { return NativeCall<FPrimalPlayerCharacterConfigStructReplicated*>(nullptr, "UVictoryCore.MakePlayerCharacterConfigStructReplicated()"); }
	static void BreakPlayerCharacterConfigStructReplicated(const FPrimalPlayerCharacterConfigStructReplicated* FromStruct, bool* bIsFemale, TArray<FLinearColor, TSizedDefaultAllocator<32> >* BodyColors, FString* PlayerCharacterName, TArray<float, TSizedDefaultAllocator<32> >* RawBoneModifiers, int* PlayerSpawnRegionIndex, unsigned __int8* HeadHairIndex, unsigned __int8* FacialHairIndex, float* PercentOfFullHeadHairGrowth, float* PercentOfFullFacialHairGrowth, TArray<unsigned char, TSizedDefaultAllocator<32> >* OverrideHeadHairColor, TArray<unsigned char, TSizedDefaultAllocator<32> >* OverrideFacialHairColor, TArray<unsigned char, TSizedDefaultAllocator<32> >* DynamicMaterialBytes, int PlayerVoiceCollectionIndex, bool* bUsingCustomPlayerVoiceCollection) { NativeCall<void, const FPrimalPlayerCharacterConfigStructReplicated*, bool*, TArray<FLinearColor, TSizedDefaultAllocator<32> >*, FString*, TArray<float, TSizedDefaultAllocator<32> >*, int*, unsigned __int8*, unsigned __int8*, float*, float*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*, int, bool*>(nullptr, "UVictoryCore.BreakPlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStructReplicated*,bool*,TArray<FLinearColor,TSizedDefaultAllocator<32>>*,FString&,TArray<float,TSizedDefaultAllocator<32>>*,int*,unsigned__int8*,unsigned__int8*,float*,float*,TArray<unsignedchar,TSizedDefaultAllocator<32>>*,TArray<unsignedchar,TSizedDefaultAllocator<32>>*,TArray<unsignedchar,TSizedDefaultAllocator<32>>*,int,bool*)", FromStruct, bIsFemale, BodyColors, PlayerCharacterName, RawBoneModifiers, PlayerSpawnRegionIndex, HeadHairIndex, FacialHairIndex, PercentOfFullHeadHairGrowth, PercentOfFullFacialHairGrowth, OverrideHeadHairColor, OverrideFacialHairColor, DynamicMaterialBytes, PlayerVoiceCollectionIndex, bUsingCustomPlayerVoiceCollection); }
	static AActor* GetNearestAlliedPlayer() { return NativeCall<AActor*>(nullptr, "UVictoryCore.GetNearestAlliedPlayer()"); }
	static AActor* GetNearestAlliedDinoElsePlayer() { return NativeCall<AActor*>(nullptr, "UVictoryCore.GetNearestAlliedDinoElsePlayer()"); }
	static FKey* GetKeybindByPredicate(FKey* result, FName KeybindName) { return NativeCall<FKey*, FKey*, FName>(nullptr, "UVictoryCore.GetKeybindByPredicate(FKey*,FName)", result, KeybindName); }
	static FText* GetKeybindDisplayName(FText* result, FName Keybind) { return NativeCall<FText*, FText*, FName>(nullptr, "UVictoryCore.GetKeybindDisplayName(FText*,FName)", result, Keybind); }
	static UAnimSequence* GetNearestAnimSequenceFromBlendSpace() { return NativeCall<UAnimSequence*>(nullptr, "UVictoryCore.GetNearestAnimSequenceFromBlendSpace()"); }
	static bool GetAllAnimationSequencesFromMontage(UAnimMontage* InMontage, TArray<UAnimationAsset*, TSizedDefaultAllocator<32> >* AnimationAssets) { return NativeCall<bool, UAnimMontage*, TArray<UAnimationAsset*, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.GetAllAnimationSequencesFromMontage(UAnimMontage*,TArray<UAnimationAsset*,TSizedDefaultAllocator<32>>*)", InMontage, AnimationAssets); }
	static char GetPreviousTrackedActorLinkedEntry() { return NativeCall<char>(nullptr, "UVictoryCore.GetPreviousTrackedActorLinkedEntry()"); }
	static char GetNextTrackedActorLinkedEntry() { return NativeCall<char>(nullptr, "UVictoryCore.GetNextTrackedActorLinkedEntry()"); }
	static void DoForceStreamComponents(TArray<UMeshComponent*, TSizedDefaultAllocator<32> >* ComponentsArray, bool bIsFirstPerson, bool bForceMaxTexturesOnConsole) { NativeCall<void, TArray<UMeshComponent*, TSizedDefaultAllocator<32> >*, bool, bool>(nullptr, "UVictoryCore.DoForceStreamComponents(TArray<UMeshComponent*,TSizedDefaultAllocator<32>>*,bool,bool)", ComponentsArray, bIsFirstPerson, bForceMaxTexturesOnConsole); }
	static bool VTraceSingleBP_IgnoreActorsArray(UObject* WorldContextObject, FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const TArray<AActor*, TSizedDefaultAllocator<32> >* ExtraIgnoreActors, const AActor* InIgnoreActor, ECollisionChannel TraceChannel, int CollisionGroups, FName TraceTag, bool bReturnPhysMaterial, bool bTraceComplex, float DebugDrawDuration) { return NativeCall<bool, UObject *, FHitResult *, const UE::Math::TVector<double> *, const UE::Math::TVector<double> *, const TArray<AActor *,TSizedDefaultAllocator<32> > *, const AActor *, ECollisionChannel, int, FName, bool, bool, float>(nullptr, "UVictoryCore.VTraceSingleBP_IgnoreActorsArray(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,ECollisionChannel,int,FName,bool,bool,float)", WorldContextObject, OutHit, Start, End, ExtraIgnoreActors, InIgnoreActor, TraceChannel, CollisionGroups, TraceTag, bReturnPhysMaterial, bTraceComplex, DebugDrawDuration); }
	//static int IsChildOfClassesSoftRefT<class UObject>(TSubclassOf<UObject> childClass, const //TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, const //TArray<//TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<class UObject>(TSubclassOf<UObject>,//TArray<//TSoftClassPtr<UObject>,TSizedDefaultAllocator<32>>*)", childClass, ParentClassesArray); }
	//static bool OverlappingActorsTrace() { return NativeCall<bool>(nullptr, "UVictoryCore.OverlappingActorsTrace()"); }
	//static int IsChildOfClassesSoftRefT<class AActor>(TSubclassOf<UObject> childClass, const //TArray<//TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, const //TArray<//TSoftClassPtr<AActor>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<class AActor>(TSubclassOf<UObject>,//TArray<//TSoftClassPtr<AActor>,TSizedDefaultAllocator<32>>*)", childClass, ParentClassesArray); }
	//static int IsChildOfClassesT<class UPrimalItem>(TSubclassOf<UObject> childClass, const //TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, const //TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesT<class UPrimalItem>(TSubclassOf<UObject>,//TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>*)", childClass, ParentClassesArray); }
	//static int IsChildOfClassesSoftRefT<class APrimalStructure>(TSubclassOf<UObject> childClass, const //TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, const //TArray<//TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<class APrimalStructure>(TSubclassOf<UObject>,//TArray<//TSoftClassPtr<APrimalStructure>,TSizedDefaultAllocator<32>>*)", childClass, ParentClassesArray); }
	//static int IsChildOfClassesT<class APrimalStructure>(TSubclassOf<UObject> childClass, const //TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, const //TArray<TSubclassOf<APrimalStructure>, TSizedDefaultAllocator<32> >*>(nullptr, "UVictoryCore.IsChildOfClassesT<class APrimalStructure>(TSubclassOf<UObject>,//TArray<TSubclassOf<APrimalStructure>,TSizedDefaultAllocator<32>>*)", childClass, ParentClassesArray); }

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

struct FTribeGovernment
{
	int TribeGovern_PINCode;
	int TribeGovern_DinoOwnership;
	int TribeGovern_StructureOwnership;
	int TribeGovern_DinoTaming;
	int TribeGovern_DinoUnclaimAdminOnly;
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
	long double& LastNameChangeTimeField() { return *GetNativePointerField<long double*>(this, "FTribeData.LastNameChangeTime"); }
	unsigned int& OwnerPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeData.OwnerPlayerDataID"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FTribeData.TribeID"); }
	TArray<FString>& MembersPlayerNameField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeData.MembersPlayerName"); }
	TArray<unsigned int>& MembersPlayerDataIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.MembersPlayerDataID"); }
	TArray<unsigned char>& MembersRankGroupsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTribeData.MembersRankGroups"); }
	TArray<double>& SlotFreedTimeField() { return *GetNativePointerField<TArray<double>*>(this, "FTribeData.SlotFreedTime"); }
	TArray<unsigned int>& TribeAdminsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.TribeAdmins"); }
	TArray<FTribeAlliance>& TribeAlliancesField() { return *GetNativePointerField<TArray<FTribeAlliance>*>(this, "FTribeData.TribeAlliances"); }
	bool& bSetGovernmentField() { return *GetNativePointerField<bool*>(this, "FTribeData.bSetGovernment"); }
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "FTribeData.TribeGovernment"); }
	TArray<FPrimalPlayerCharacterConfigStruct>& MembersConfigsField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStruct>*>(this, "FTribeData.MembersConfigs"); }
	TArray<FTribeWar>& TribeWarsField() { return *GetNativePointerField<TArray<FTribeWar>*>(this, "FTribeData.TribeWars"); }
	TArray<FString>& TribeLogField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeData.TribeLog"); }
	int& LogIndexField() { return *GetNativePointerField<int*>(this, "FTribeData.LogIndex"); }
	TArray<FTribeRankGroup>& TribeRankGroupsField() { return *GetNativePointerField<TArray<FTribeRankGroup>*>(this, "FTribeData.TribeRankGroups"); }
	int& NumTribeDinosField() { return *GetNativePointerField<int*>(this, "FTribeData.NumTribeDinos"); }
	TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>& MembersPlayerDataIDSet_ServerField() { return *GetNativePointerField<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>*>(this, "FTribeData.MembersPlayerDataIDSet_Server"); }
	TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32>>& CachedTeamTameList_UpdatedOnIntervalField() { return *GetNativePointerField<TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32>>*>(this, "FTribeData.CachedTeamTameList_UpdatedOnInterval"); }
	long double& LastNetworkTimeUpdatedCachedTeamTameListField() { return *GetNativePointerField<long double*>(this, "FTribeData.LastNetworkTimeUpdatedCachedTeamTameList"); }
	FTeamPingData& RallyPointDataField() { return *GetNativePointerField<FTeamPingData*>(this, "FTribeData.RallyPointData"); }
	bool& bHaveRallyPointDataField() { return *GetNativePointerField<bool*>(this, "FTribeData.bHaveRallyPointData"); }

	// Functions

	bool IsTribeWarActive(int TribeID, UWorld* ForWorld, bool bIncludeUnstarted) { return NativeCall<bool, int, UWorld*, bool>(this, "FTribeData.IsTribeWarActive(int,UWorld*,bool)", TribeID, ForWorld, bIncludeUnstarted); }
	FTribeAlliance* FindTribeAlliance(unsigned int AllianceID) { return NativeCall<FTribeAlliance*, unsigned int>(this, "FTribeData.FindTribeAlliance(unsignedint)", AllianceID); }
	bool IsTribeAlliedWith(unsigned int OtherTribeID) { return NativeCall<bool, unsigned int>(this, "FTribeData.IsTribeAlliedWith(unsignedint)", OtherTribeID); }
	bool GetTribeRankGroupForPlayer(unsigned int PlayerDataID, FTribeRankGroup* outRankGroup) { return NativeCall<bool, unsigned int, FTribeRankGroup*>(this, "FTribeData.GetTribeRankGroupForPlayer(unsignedint,FTribeRankGroup&)", PlayerDataID, outRankGroup); }
	long double GetSecondsSinceLastNameChange(UObject* WorldContextObject) { return NativeCall<long double, UObject*>(this, "FTribeData.GetSecondsSinceLastNameChange(UObject*)", WorldContextObject); }
	int GetDefaultRankGroupIndex() { return NativeCall<int>(this, "FTribeData.GetDefaultRankGroupIndex()"); }
	FTribeData* operator=(FTribeData* __that) { return NativeCall<FTribeData*, FTribeData*>(this, "FTribeData.operator=(FTribeData&)", __that); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FTribeData.StaticStruct()"); }
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
	static void LoadStreamLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>* Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo* LatentInfo) { NativeCall<void, const UObject*, const TSoftObjectPtr<UWorld>*, bool, bool, FLatentActionInfo*>(nullptr, "UGameplayStatics.LoadStreamLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,bool,bool,FLatentActionInfo)", WorldContextObject, Level, bMakeVisibleAfterLoad, bShouldBlockOnLoad, LatentInfo); }
	static void UnloadStreamLevel(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo* LatentInfo, bool bShouldBlockOnUnload) { NativeCall<void, const UObject*, FName, FLatentActionInfo*, bool>(nullptr, "UGameplayStatics.UnloadStreamLevel(UObject*,FName,FLatentActionInfo,bool)", WorldContextObject, LevelName, LatentInfo, bShouldBlockOnUnload); }
	static void UnloadStreamLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>* Level, FLatentActionInfo* LatentInfo, bool bShouldBlockOnUnload) { NativeCall<void, const UObject*, const TSoftObjectPtr<UWorld>*, FLatentActionInfo*, bool>(nullptr, "UGameplayStatics.UnloadStreamLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,FLatentActionInfo,bool)", WorldContextObject, Level, LatentInfo, bShouldBlockOnUnload); }
	static void OpenLevel(const UObject* WorldContextObject, FName LevelName, FName bAbsolute, FString* Options) { NativeCall<void, const UObject*, FName, FName, FString*>(nullptr, "UGameplayStatics.OpenLevel(UObject*,FName,bool,FString)", WorldContextObject, LevelName, bAbsolute, Options); }
	static void OpenLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>* Level, bool bAbsolute, FString* Options) { NativeCall<void, const UObject*, const TSoftObjectPtr<UWorld>*, bool, FString*>(nullptr, "UGameplayStatics.OpenLevelBySoftObjectPtr(UObject*,TSoftObjectPtr<UWorld>,bool,FString)", WorldContextObject, Level, bAbsolute, Options); }
	static FString* GetCurrentLevelName(FString* result, const UObject* WorldContextObject, FName bRemovePrefixString) { return NativeCall<FString*, FString*, const UObject*, FName>(nullptr, "UGameplayStatics.GetCurrentLevelName(UObject*,bool)", result, WorldContextObject, bRemovePrefixString); }
	static AActor* GetActorOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass) { return NativeCall<AActor*, const UObject*, TSubclassOf<AActor>>(nullptr, "UGameplayStatics.GetActorOfClass(UObject*,TSubclassOf<AActor>)", WorldContextObject, ActorClass); }
	static void GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, const UObject*, TSubclassOf<AActor>, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UGameplayStatics.GetAllActorsOfClass(UObject*,TSubclassOf<AActor>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, ActorClass, OutActors); }
	static void GetAllActorsWithInterface(const UObject* WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, const UObject*, TSubclassOf<UInterface>, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UGameplayStatics.GetAllActorsWithInterface(UObject*,TSubclassOf<UInterface>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, Interface, OutActors); }
	static void GetAllActorsWithTag(const UObject* WorldContextObject, FName Tag, TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, const UObject*, FName, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UGameplayStatics.GetAllActorsWithTag(UObject*,FName,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, Tag, OutActors); }
	static void GetAllActorsOfClassWithTag(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName Tag, TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors) { NativeCall<void, const UObject*, TSubclassOf<AActor>, FName, TArray<AActor*, TSizedDefaultAllocator<32> >*>(nullptr, "UGameplayStatics.GetAllActorsOfClassWithTag(UObject*,TSubclassOf<AActor>,FName,TArray<AActor*,TSizedDefaultAllocator<32>>&)", WorldContextObject, ActorClass, Tag, OutActors); }
	static void BreakHitResult(const FHitResult* Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, UE::Math::TVector<double>* Location, UE::Math::TVector<double>* ImpactPoint, UE::Math::TVector<double>* Normal, UE::Math::TVector<double>* ImpactNormal, UPhysicalMaterial** PhysMat, AActor** HitActor, UPrimitiveComponent** HitComponent, FName* HitBoneName, FName* BoneName, int* HitItem, int* ElementIndex, int* FaceIndex, UE::Math::TVector<double>* TraceStart, UE::Math::TVector<double>* TraceEnd) { NativeCall<void, const FHitResult*, bool*, bool*, float*, float*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UPhysicalMaterial**, AActor**, UPrimitiveComponent**, FName*, FName*, int*, int*, int*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UGameplayStatics.BreakHitResult(FHitResult&,bool&,bool&,float&,float&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UPhysicalMaterial*&,AActor*&,UPrimitiveComponent*&,FName&,FName&,int&,int&,int&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Hit, bBlockingHit, bInitialOverlap, Time, Distance, Location, ImpactPoint, Normal, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, BoneName, HitItem, ElementIndex, FaceIndex, TraceStart, TraceEnd); }
	static bool FindCollisionUV(const FHitResult* Hit, int UVChannel, UE::Math::TVector2<double>* UV) { return NativeCall<bool, const FHitResult*, int, UE::Math::TVector2<double>*>(nullptr, "UGameplayStatics.FindCollisionUV(FHitResult&,int,UE::Math::TVector2<double>&)", Hit, UVChannel, UV); }
	void PlaySound2D(USoundBase* Sound, UE::Math::TVector<double>* Location, float VolumeMultiplier) { NativeCall<void, USoundBase*, UE::Math::TVector<double>*, float>(this, "UGameplayStatics.PlaySound2D(UObject*,USoundBase*,float,float,float,USoundConcurrency*,AActor*,bool)", Sound, Location, VolumeMultiplier); }
	static UAudioComponent* CreateSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) { return NativeCall<UAudioComponent*, const UObject*, USoundBase*, float, float, float, USoundConcurrency*, bool, bool>(nullptr, "UGameplayStatics.CreateSound2D(UObject*,USoundBase*,float,float,float,USoundConcurrency*,bool,bool)", WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, bPersistAcrossLevelTransition, bAutoDestroy); }
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
	static bool SuggestProjectileVelocity(const UObject* WorldContextObject, UE::Math::TVector<double>* OutTossVelocity, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, float TossSpeed, bool bFavorHighArc, float CollisionRadius, float OverrideGravityZ, ESuggestProjVelocityTraceOption::Type TraceOption, const FCollisionResponseParams* ResponseParam, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, bool bDrawDebug) { return NativeCall<bool, const UObject*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, float, bool, float, float, ESuggestProjVelocityTraceOption::Type, const FCollisionResponseParams*, const TArray<AActor*, TSizedDefaultAllocator<32> >*, bool>(nullptr, "UGameplayStatics.SuggestProjectileVelocity(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,float,bool,float,float,ESuggestProjVelocityTraceOption::Type,FCollisionResponseParams&,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool)", WorldContextObject, OutTossVelocity, Start, End, TossSpeed, bFavorHighArc, CollisionRadius, OverrideGravityZ, TraceOption, ResponseParam, ActorsToIgnore, bDrawDebug); }
	static bool PredictProjectilePath(const UObject* WorldContextObject, const FPredictProjectilePathParams* PredictParams, FPredictProjectilePathResult* PredictResult) { return NativeCall<bool, const UObject*, const FPredictProjectilePathParams*, FPredictProjectilePathResult*>(nullptr, "UGameplayStatics.PredictProjectilePath(UObject*,FPredictProjectilePathParams&,FPredictProjectilePathResult&)", WorldContextObject, PredictParams, PredictResult); }
	//static bool Blueprint_PredictProjectilePath_ByObjectType(const UObject* WorldContextObject, FHitResult* OutHit, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* OutPathPositions, UE::Math::TVector<double>* OutLastTraceDestination, UE::Math::TVector<double>* StartPos, UE::Math::TVector<double>* LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<TEnumAsByte<EObjectTypeQuery>, TSizedDefaultAllocator<32> >* ObjectTypes, bool bTraceComplex, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) { return NativeCall<bool, const UObject*, FHitResult*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, float, const TArray<TEnumAsByte<EObjectTypeQuery>, TSizedDefaultAllocator<32> >*, bool, const TArray<AActor*, TSizedDefaultAllocator<32> >*, EDrawDebugTrace::Type, float, float, float, float>(nullptr, "UGameplayStatics.Blueprint_PredictProjectilePath_ByObjectType(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,float,float,float,float)", WorldContextObject, OutHit, OutPathPositions, OutLastTraceDestination, StartPos, LaunchVelocity, bTracePath, ProjectileRadius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, DrawDebugTime, SimFrequency, MaxSimTime, OverrideGravityZ); }
	//static bool Blueprint_PredictProjectilePath_ByTraceChannel(const UObject* WorldContextObject, FHitResult* OutHit, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* OutPathPositions, UE::Math::TVector<double>* OutLastTraceDestination, UE::Math::TVector<double>* StartPos, UE::Math::TVector<double>* LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<AActor*, TSizedDefaultAllocator<32> >* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) { return NativeCall<bool, const UObject*, FHitResult*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, float, TEnumAsByte<ECollisionChannel>, bool, const TArray<AActor*, TSizedDefaultAllocator<32> >*, EDrawDebugTrace::Type, float, float, float, float>(nullptr, "UGameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,float,TEnumAsByte<ECollisionChannel>,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,float,float,float,float)", WorldContextObject, OutHit, OutPathPositions, OutLastTraceDestination, StartPos, LaunchVelocity, bTracePath, ProjectileRadius, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, DrawDebugTime, SimFrequency, MaxSimTime, OverrideGravityZ); }
	static __int64 GrassOverlappingSphereCount(const UObject* WorldContextObject, const UStaticMesh* Mesh, UE::Math::TVector<double>* CenterPosition, float Radius) { return NativeCall<__int64, const UObject*, const UStaticMesh*, UE::Math::TVector<double>*, float>(nullptr, "UGameplayStatics.GrassOverlappingSphereCount(UObject*,UStaticMesh*,UE::Math::TVector<double>,float)", WorldContextObject, Mesh, CenterPosition, Radius); }
	static bool DeprojectScreenToWorld(const APlayerController* Player, const UE::Math::TVector2<double>* ScreenPosition, UE::Math::TVector<double>* WorldPosition, UE::Math::TVector<double>* WorldDirection) { return NativeCall<bool, const APlayerController*, const UE::Math::TVector2<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UGameplayStatics.DeprojectScreenToWorld(APlayerController*,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Player, ScreenPosition, WorldPosition, WorldDirection); }
	static bool DeprojectSceneCaptureToWorld(const ASceneCapture2D* SceneCapture2D, const UE::Math::TVector2<double>* TargetUV, UE::Math::TVector<double>* WorldPosition, UE::Math::TVector<double>* WorldDirection) { return NativeCall<bool, const ASceneCapture2D*, const UE::Math::TVector2<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "UGameplayStatics.DeprojectSceneCaptureToWorld(ASceneCapture2D*,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", SceneCapture2D, TargetUV, WorldPosition, WorldDirection); }
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
	static FString* GetUniqueDeviceId(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetUniqueDeviceId", result); }
	//static FText* MakeLiteralText(FText* result, FText Value) { return NativeCall<FText*, FText*, FText>(nullptr, "UKismetSystemLibrary.MakeLiteralText", result, Value); }
	//static void QuitGame(UObject* WorldContextObject, APlayerController* SpecificPlayer, TEnumAsByte<enum EQuitPreference::Type> QuitPreference) { NativeCall<void, UObject*, APlayerController*, TEnumAsByte<enum EQuitPreference::Type>>(nullptr, "UKismetSystemLibrary.QuitGame", WorldContextObject, SpecificPlayer, QuitPreference); }
	static void K2_SetTimer(UObject* Object, FString FunctionName, float Time, bool bLooping) { NativeCall<void, UObject*, FString, float, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimer(UObject*,FString,float,bool,float,float)", Object, FunctionName, Time, bLooping); }
	static void K2_SetTimerForNextTick(UObject* Object, FString FunctionName, bool bLooping) { NativeCall<void, UObject*, FString, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTick(UObject*,FString,bool)", Object, FunctionName, bLooping); }
	static void K2_SetTimerDelegate(FBlueprintTimerDynamicDelegate Delegate, float Time, bool bLooping) { NativeCall<void, FBlueprintTimerDynamicDelegate, float, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerDelegate(FTimerDynamicDelegate,float,bool,float,float)", Delegate, Time, bLooping); }
	static void K2_SetTimerForNextTickDelegate(FBlueprintTimerDynamicDelegate Delegate, bool bLooping) { NativeCall<void, FBlueprintTimerDynamicDelegate, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTickDelegate(FBlueprintTimerDynamicDelegate,bool)", Delegate, bLooping); }
	static void K2_ClearTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_ClearTimer(UObject*,FString)", Object, FunctionName); }
	static void K2_PauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_PauseTimer(UObject*,FString)", Object, FunctionName); }
	static void K2_UnPauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_UnPauseTimer(UObject*,FString)", Object, FunctionName); }
	static bool K2_IsTimerActive(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_IsTimerActive(UObject*,FString)", Object, FunctionName); }
	static bool K2_IsTimerPaused(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_IsTimerPaused(UObject*,FString)", Object, FunctionName); }
	static bool K2_TimerExists(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_TimerExists(UObject*,FString)", Object, FunctionName); }
	static float K2_GetTimerElapsedTime(UObject* Object, FString FunctionName) { return NativeCall<float, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_GetTimerElapsedTime(UObject*,FString)", Object, FunctionName); }
	static float K2_GetTimerRemainingTime(UObject* Object, FString FunctionName) { return NativeCall<float, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_GetTimerRemainingTime(UObject*,FString)", Object, FunctionName); }
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

struct FARKDinoData
{
	UClass* DinoClass;
	TArray<unsigned char, TSizedDefaultAllocator<32> > DinoData;
	FString DinoNameInMap;
	FString DinoName;
	bool bNetInfoFromClient;

	// Fields

	UClass*& DinoClassField() { return *GetNativePointerField<UClass**>(this, "FARKDinoData.DinoClass"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& DinoDataField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FARKDinoData.DinoData"); }
	FString& DinoNameInMapField() { return *GetNativePointerField<FString*>(this, "FARKDinoData.DinoNameInMap"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKDinoData.DinoName"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FARKDinoData.StaticStruct()"); }
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

struct FDamageEvent
{
	// Fields

	//FDamageEvent_vtbl*& __vftableField() { return *GetNativePointerField<FDamageEvent_vtbl**>(this, "FDamageEvent.__vftable"); }
	float& ImpulseField() { return *GetNativePointerField<float*>(this, "FDamageEvent.Impulse"); }
	float& OriginalDamageField() { return *GetNativePointerField<float*>(this, "FDamageEvent.OriginalDamage"); }
	int& InstanceBodyIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.InstanceBodyIndex"); }
	int& TypeIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.TypeIndex"); }
	TSubclassOf<UDamageType>& DamageTypeClassField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamageEvent.DamageTypeClass"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDamageEvent.StaticStruct()"); }
	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>* OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*>(this, "FDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
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
	void SetBaseLevels(EPrimalCharacterStatusValue::Type StatusType, int Value) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "FDinoSetup.SetBaseLevels(EPrimalCharacterStatusValue::Type,int)", StatusType, Value); }
	void SetConstantSaddleQuality(float Quality) { NativeCall<void, float>(this, "FDinoSetup.SetConstantSaddleQuality(float)", Quality); }
	void SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type StatusType, int Value) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "FDinoSetup.SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type,int)", StatusType, Value); }
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
	FString* GetStackTrace(FString* result) { return NativeCall<FString*, FString*>(this, "FFrame.GetStackTrace(FString&)", result); }
	void GetStackTrace(TStringBuilderBase<wchar_t>* Result) { NativeCall<void, TStringBuilderBase<wchar_t>*>(this, "FFrame.GetStackTrace(TStringBuilderBase<wchar_t>&)", Result); }
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

	static FHitResult* GetReversedHit(FHitResult* result, const FHitResult* Hit) { return NativeCall<FHitResult*, FHitResult*, const FHitResult*>(nullptr, "FHitResult.GetReversedHit(FHitResult&)", result, Hit); }
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
	unsigned __int32 bUsed : 1;
	unsigned __int32 bCalculateAsPercent : 1;
	unsigned __int32 bDisplayAsPercent : 1;
	unsigned __int32 bRequiresSubmerged : 1;
	unsigned __int32 bPreventIfSubmerged : 1;
	unsigned __int32 bHideStatFromTooltip : 1;
	int DefaultModifierValue;
	int RandomizerRangeOverride;
	float RandomizerRangeMultiplier;
	float TheRandomizerPower;
	float StateModifierScale;
	float InitialValueConstant;
	float RatingValueMultiplier;
	float AbsoluteMaxValue;

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
	bool IsPointInitialized() { return NativeCall<bool>(this, "FPointOfInterestData.IsPointInitialized()"); }
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
	void UnlockEmote(FName EmoteName) { NativeCall<void, FName>(this, "FPrimalPersistentCharacterStatsStruct.UnlockEmote(FName)", EmoteName); }
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

	bool AreFileOperationsDisabled() { return NativeCall<bool>(this, "FConfigCacheIni.AreFileOperationsDisabled()"); }
	int GetIntOrDefault(const wchar_t* Section, const wchar_t* Key, const int DefaultValue, const FString* Filename) { return NativeCall<int, const wchar_t*, const wchar_t*, const int, const FString*>(this, "FConfigCacheIni.GetIntOrDefault(wchar_t*,wchar_t*,int,FString&)", Section, Key, DefaultValue, Filename); }
	FConfigFile* FindConfigFile(const FString* Filename) { return NativeCall<FConfigFile*, const FString*>(this, "FConfigCacheIni.FindConfigFile(FString&)", Filename); }
	FConfigFile* Find(const FString* Filename) { return NativeCall<FConfigFile*, const FString*>(this, "FConfigCacheIni.Find(FString&)", Filename); }
	FConfigFile* FindConfigFileWithBaseName(FName BaseName) { return NativeCall<FConfigFile*, FName>(this, "FConfigCacheIni.FindConfigFileWithBaseName(FName)", BaseName); }
	TArray<FString, TSizedDefaultAllocator<32> >* GetFilenames(TArray<FString, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FConfigCacheIni.GetFilenames()", result); }
	void Flush(bool bRemoveFromCache, const FString* Filename) { NativeCall<void, bool, const FString*>(this, "FConfigCacheIni.Flush(bool,FString&)", bRemoveFromCache, Filename); }
	void Parse1ToNSectionOfNames(const wchar_t* Section, const wchar_t* KeyOne, const wchar_t* KeyN, TMap<FName, TArray<FName, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<FName, TSizedDefaultAllocator<32> >, 0> >* OutMap, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, TMap<FName, TArray<FName, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<FName, TSizedDefaultAllocator<32> >, 0> >*, const FString*>(this, "FConfigCacheIni.Parse1ToNSectionOfNames(wchar_t*,wchar_t*,wchar_t*,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>>,0>>&,FString&)", Section, KeyOne, KeyN, OutMap, Filename); }
	void Parse1ToNSectionOfStrings(const wchar_t* Section, const wchar_t* KeyOne, const wchar_t* KeyN, TMap<FString, TArray<FString, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<FString, TSizedDefaultAllocator<32> >, 0> >* OutMap, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, TMap<FString, TArray<FString, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<FString, TSizedDefaultAllocator<32> >, 0> >*, const FString*>(this, "FConfigCacheIni.Parse1ToNSectionOfStrings(wchar_t*,wchar_t*,wchar_t*,TMap<FString,TArray<FString,TSizedDefaultAllocator<32>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>>,0>>&,FString&)", Section, KeyOne, KeyN, OutMap, Filename); }
	void LoadFile(const FString* Filename, const FConfigFile* Fallback, const wchar_t* PlatformString) { NativeCall<void, const FString*, const FConfigFile*, const wchar_t*>(this, "FConfigCacheIni.LoadFile(FString&,FConfigFile*,wchar_t*)", Filename, Fallback, PlatformString); }
	void UnloadFile(const FString* Filename) { NativeCall<void, const FString*>(this, "FConfigCacheIni.UnloadFile(FString&)", Filename); }
	bool GetString(const wchar_t* Section, const wchar_t* Key, FString* Value, const FString* Filename) { return NativeCall<bool, const wchar_t*, const wchar_t*, FString*, const FString*>(this, "FConfigCacheIni.GetString(wchar_t*,wchar_t*,FString&,FString&)", Section, Key, Value, Filename); }
	bool GetSection(const wchar_t* Section, TArray<FString, TSizedDefaultAllocator<32> >* Result, const FString* Filename) { return NativeCall<bool, const wchar_t*, TArray<FString, TSizedDefaultAllocator<32> >*, const FString*>(this, "FConfigCacheIni.GetSection(wchar_t*,TArray<FString,TSizedDefaultAllocator<32>>&,FString&)", Section, Result, Filename); }
	FConfigSection* GetSectionPrivate(const wchar_t* Section, const bool Force, const bool Const, const FString* Filename) { return NativeCall<FConfigSection*, const wchar_t*, const bool, const bool, const FString*>(this, "FConfigCacheIni.GetSectionPrivate(wchar_t*,bool,bool,FString&)", Section, Force, Const, Filename); }
	bool DoesSectionExist(const wchar_t* Section, const FString* Filename) { return NativeCall<bool, const wchar_t*, const FString*>(this, "FConfigCacheIni.DoesSectionExist(wchar_t*,FString&)", Section, Filename); }
	void SetString(const wchar_t* Section, const wchar_t* Key, const wchar_t* Value, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, const wchar_t*, const FString*>(this, "FConfigCacheIni.SetString(wchar_t*,wchar_t*,wchar_t*,FString&)", Section, Key, Value, Filename); }
	bool RemoveKey(const wchar_t* Section, const wchar_t* Key, const FString* Filename) { return NativeCall<bool, const wchar_t*, const wchar_t*, const FString*>(this, "FConfigCacheIni.RemoveKey(wchar_t*,wchar_t*,FString&)", Section, Key, Filename); }
	bool EmptySection(const wchar_t* Section, const FString* Filename) { return NativeCall<bool, const wchar_t*, const FString*>(this, "FConfigCacheIni.EmptySection(wchar_t*,FString&)", Section, Filename); }
	FString* GetConfigFilename(FString* result, const wchar_t* BaseIniName) { return NativeCall<FString*, FString*, const wchar_t*>(this, "FConfigCacheIni.GetConfigFilename(wchar_t*)", result, BaseIniName); }
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
	void SetVector(const wchar_t* Section, const wchar_t* Key, UE::Math::TVector<double>* Value, const FString* Filename) { NativeCall<void, const wchar_t*, const wchar_t*, UE::Math::TVector<double>*, const FString*>(this, "FConfigCacheIni.SetVector(wchar_t*,wchar_t*,UE::Math::TVector<double>,FString&)", Section, Key, Value, Filename); }
	void ShowMemoryUsage(FOutputDevice* Ar) { NativeCall<void, FOutputDevice*>(this, "FConfigCacheIni.ShowMemoryUsage(FOutputDevice&)", Ar); }
	unsigned __int64 GetMaxMemoryUsage() { return NativeCall<unsigned __int64>(this, "FConfigCacheIni.GetMaxMemoryUsage()"); }
	bool ForEachEntry(const TDelegate<void __cdecl(wchar_t const*, wchar_t const*), FDefaultDelegateUserPolicy>* Visitor, const wchar_t* Section, const FString* Filename) { return NativeCall<bool, const TDelegate<void __cdecl(wchar_t const*, wchar_t const*), FDefaultDelegateUserPolicy>*, const wchar_t*, const FString*>(this, "FConfigCacheIni.ForEachEntry(TDelegate<void__cdecl(wchar_t*,wchar_t*)", Visitor, Section, Filename); }
	static FString* GetDestIniFilename(FString* result, const wchar_t* BaseIniName, const wchar_t* PlatformName, const wchar_t* GeneratedConfigDir) { return NativeCall<FString*, FString*, const wchar_t*, const wchar_t*, const wchar_t*>(nullptr, "FConfigCacheIni.GetDestIniFilename(wchar_t*,wchar_t*,wchar_t*)", result, BaseIniName, PlatformName, GeneratedConfigDir); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FConfigCacheIni.Serialize(FArchive&)", Ar); }
	void SerializeStateForBootstrap_Impl(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FConfigCacheIni.SerializeStateForBootstrap_Impl(FArchive&)", Ar); }
	void FKnownConfigFiles() { NativeCall<void>(this, "FConfigCacheIni.FKnownConfigFiles()"); }
	static bool CreateGConfigFromSaved(const wchar_t* Filename) { return NativeCall<bool, const wchar_t*>(nullptr, "FConfigCacheIni.CreateGConfigFromSaved(wchar_t*)", Filename); }
	static void InitializeConfigSystem(__int64 a1, __int64 a2, __int64 a3) { NativeCall<void, __int64, __int64, __int64>(nullptr, "FConfigCacheIni.InitializeConfigSystem()", a1, a2, a3); }
	static const FString* GetCustomConfigString() { return NativeCall<const FString*>(nullptr, "FConfigCacheIni.GetCustomConfigString()"); }
	static bool LoadGlobalIniFile(FString* OutFinalIniFilename, const wchar_t* BaseIniName, const wchar_t* Platform, bool bForceReload, bool bRequireDefaultIni, bool bAllowGeneratedIniWhenCooked, bool bAllowRemoteConfig, const wchar_t* GeneratedConfigDir, FConfigCacheIni* ConfigSystem) { return NativeCall<bool, FString*, const wchar_t*, const wchar_t*, bool, bool, bool, bool, const wchar_t*, FConfigCacheIni*>(nullptr, "FConfigCacheIni.LoadGlobalIniFile(FString&,wchar_t*,wchar_t*,bool,bool,bool,bool,wchar_t*,FConfigCacheIni*)", OutFinalIniFilename, BaseIniName, Platform, bForceReload, bRequireDefaultIni, bAllowGeneratedIniWhenCooked, bAllowRemoteConfig, GeneratedConfigDir, ConfigSystem); }
	static bool LoadLocalIniFile(FConfigFile* ConfigFile, const wchar_t* IniName, bool bIsBaseIniName, const wchar_t* Platform, bool bForceReload) { return NativeCall<bool, FConfigFile*, const wchar_t*, bool, const wchar_t*, bool>(nullptr, "FConfigCacheIni.LoadLocalIniFile(FConfigFile&,wchar_t*,bool,wchar_t*,bool)", ConfigFile, IniName, bIsBaseIniName, Platform, bForceReload); }
	static FConfigFile* FindPlatformConfig(const wchar_t* IniName, const wchar_t* Platform) { return NativeCall<FConfigFile*, const wchar_t*, const wchar_t*>(nullptr, "FConfigCacheIni.FindPlatformConfig(wchar_t*,wchar_t*)", IniName, Platform); }
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
	FName CustomDataName;
	TArray<FString, TSizedDefaultAllocator<32> > CustomDataStrings;
	TArray<float, TSizedDefaultAllocator<32> > CustomDataFloats;
	TArray<UObject*, TSizedDefaultAllocator<32> > CustomDataObjects;
	TArray<UClass*, TSizedDefaultAllocator<32> > CustomDataClasses;
	TArray<FName, TSizedDefaultAllocator<32> > CustomDataNames;
	FCustomItemByteArrays CustomDataBytes;
	FCustomItemDoubles CustomDataDoubles;

	// Fields

	FName& CustomDataNameField() { return *GetNativePointerField<FName*>(this, "FCustomItemData.CustomDataName"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CustomDataStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataStrings"); }
	TArray<float, TSizedDefaultAllocator<32> >& CustomDataFloatsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataFloats"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& CustomDataObjectsField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataObjects"); }
	TArray<UClass*, TSizedDefaultAllocator<32> >& CustomDataClassesField() { return *GetNativePointerField<TArray<UClass*, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataClasses"); }
	TArray<FName, TSizedDefaultAllocator<32> >& CustomDataNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataNames"); }
	FCustomItemByteArrays& CustomDataBytesField() { return *GetNativePointerField<FCustomItemByteArrays*>(this, "FCustomItemData.CustomDataBytes"); }
	FCustomItemDoubles& CustomDataDoublesField() { return *GetNativePointerField<FCustomItemDoubles*>(this, "FCustomItemData.CustomDataDoubles"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FCustomItemData.StaticStruct()"); }
	FCustomItemData* operator=(const FCustomItemData* __that) { return NativeCall<FCustomItemData*, const FCustomItemData*>(this, "FCustomItemData.operator=(FCustomItemData&)", __that); }
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

struct FPointDamageEvent : FDamageEvent
{
	// Fields

	float& DamageField() { return *GetNativePointerField<float*>(this, "FPointDamageEvent.Damage"); }
	FVector_NetQuantizeNormal& ShotDirectionField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FPointDamageEvent.ShotDirection"); }
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "FPointDamageEvent.HitInfo"); }

	// Bitfields


	// Functions

	//void ~FPointDamageEvent() { NativeCall<void>(this, "FPointDamageEvent.~FPointDamageEvent()"); }
	//void FPointDamageEvent(const FPointDamageEvent* __that) { NativeCall<void, const FPointDamageEvent*>(this, "FPointDamageEvent.FPointDamageEvent(FPointDamageEvent&)", __that); }
	bool IsOfType(int InID) { return NativeCall<bool, int>(this, "FPointDamageEvent.IsOfType(int)", InID); }
	//void FPointDamageEvent() { NativeCall<void>(this, "FPointDamageEvent.FPointDamageEvent()"); }
	//void FPointDamageEvent(float InDamage, const FHitResult* InHitInfo, const UE::Math::TVector<double>* InShotDirection, TSubclassOf<UDamageType> InDamageTypeClass) { NativeCall<void, float, const FHitResult*, const UE::Math::TVector<double>*, TSubclassOf<UDamageType>>(this, "FPointDamageEvent.FPointDamageEvent(float,FHitResult&,UE::Math::TVector<double>&,TSubclassOf<UDamageType>)", InDamage, InHitInfo, InShotDirection, InDamageTypeClass); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FPointDamageEvent.StaticStruct()"); }
	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>* OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*>(this, "FPointDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
};

struct FTopLevelAssetPath
{
	// Fields

	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FTopLevelAssetPath.PackageName"); }
	FName& AssetNameField() { return *GetNativePointerField<FName*>(this, "FTopLevelAssetPath.AssetName"); }

	// Bitfields


	// Functions

	//void FTopLevelAssetPath(const FString* Path) { NativeCall<void, const FString*>(this, "FTopLevelAssetPath.FTopLevelAssetPath(FString&)", Path); }
	void AppendString(TStringBuilderBase<wchar_t>* Builder) { NativeCall<void, TStringBuilderBase<wchar_t>*>(this, "FTopLevelAssetPath.AppendString(TStringBuilderBase<wchar_t>&)", Builder); }
	FString* ToString(FString* result) { return NativeCall<FString*, FString*>(this, "FTopLevelAssetPath.ToString(FString&)", result); }
	//void ToString(FString* OutString) { NativeCall<void, FString*>(this, "FTopLevelAssetPath.ToString(FString&)", OutString); }
	bool TrySetPath(TStringView<wchar_t>* Path) { return NativeCall<bool, TStringView<wchar_t>*>(this, "FTopLevelAssetPath.TrySetPath(TStringView<wchar_t>)", Path); }
	bool ExportTextItem(FString* ValueStr, const FTopLevelAssetPath* DefaultValue, UObject* Parent, int PortFlags, UObject* ExportRootScope) { return NativeCall<bool, FString*, const FTopLevelAssetPath*, UObject*, int, UObject*>(this, "FTopLevelAssetPath.ExportTextItem(FString&,FTopLevelAssetPath&,UObject*,int,UObject*)", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	bool ImportTextItem(const wchar_t** Buffer, int PortFlags, UObject* Parent, FOutputDevice* ErrorText, FArchive* InSerializingArchive) { return NativeCall<bool, const wchar_t**, int, UObject*, FOutputDevice*, FArchive*>(this, "FTopLevelAssetPath.ImportTextItem(wchar_t*&,int,UObject*,FOutputDevice*,FArchive*)", Buffer, PortFlags, Parent, ErrorText, InSerializingArchive); }
};