#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UBlackboardComponent : public UActorComponent
{
public:
	UBlackboardComponent() = delete;
	~UBlackboardComponent() = delete;
	UBlackboardComponent(const UBlackboardComponent&) = delete;
	UBlackboardComponent& operator=(const UBlackboardComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBlackboardComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBlackboardComponent"); }

	TArray<unsigned char, TSizedDefaultAllocator<32> >& ValueMemoryField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UBlackboardComponent.ValueMemory"); }
	TArray<unsigned short, TSizedDefaultAllocator<32> >& ValueOffsetsField() { return *GetNativePointerField<TArray<unsigned short, TSizedDefaultAllocator<32> >*>(this, "UBlackboardComponent.ValueOffsets"); }
	bool& bBlackboardMemoryInitializedField() { return *GetNativePointerField<bool*>(this, "UBlackboardComponent.bBlackboardMemoryInitialized"); }
	int& NotifyObserversRecursionCountField() { return *GetNativePointerField<int*>(this, "UBlackboardComponent.NotifyObserversRecursionCount"); }
	int& ObserversToRemoveCountField() { return *GetNativePointerField<int*>(this, "UBlackboardComponent.ObserversToRemoveCount"); }
	BitFieldValue<bool, unsigned __int32> bPausedNotifies() { return { this, "UBlackboardComponent.bPausedNotifies"}; }
	BitFieldValue<bool, unsigned __int32> bSynchronizedKeyPopulated() { return { this, "UBlackboardComponent.bSynchronizedKeyPopulated"}; }
	FString* GetValueAsString(FString* result, const FName& KeyName) { return NativeCall<FString*, FString*, const FName&>(this, "UBlackboardComponent.GetValueAsString(FName&)", result, KeyName); }
	void UnregisterObserversFrom(const UObject* NotifyOwner) { NativeCall<void, const UObject*>(this, "UBlackboardComponent.UnregisterObserversFrom(UObject*)", NotifyOwner); }
	void DestroyValues() { NativeCall<void>(this, "UBlackboardComponent.DestroyValues()"); }
	void SetValueAsVector(const FName& KeyName, UE::Math::TVector<double>* VectorValue) { if (!VectorValue) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, const FName &, UE :: Math :: TVector < double >>(this, "UBlackboardComponent.SetValueAsVector(FName&,UE::Math::TVector<double>)", KeyName, *VectorValue); }
	void ResumeObserverNotifications(bool bSendQueuedObserverNotifications) { NativeCall<void, bool>(this, "UBlackboardComponent.ResumeObserverNotifications(bool)", bSendQueuedObserverNotifications); }
	bool ShouldSyncWithBlackboard(UBlackboardComponent& OtherBlackboardComponent) { return NativeCall<bool, UBlackboardComponent&>(this, "UBlackboardComponent.ShouldSyncWithBlackboard(UBlackboardComponent&)", OtherBlackboardComponent); }
	void PopulateSynchronizedKeys() { NativeCall<void>(this, "UBlackboardComponent.PopulateSynchronizedKeys()"); }
	void CacheBrainComponent(UBrainComponent& BrainComponent) { NativeCall<void, UBrainComponent&>(this, "UBlackboardComponent.CacheBrainComponent(UBrainComponent&)", BrainComponent); }
	void InitializeComponent() { NativeCall<void>(this, "UBlackboardComponent.InitializeComponent()"); }
	bool IsCompatibleWith(const UBlackboardData* TestAsset) { return NativeCall<bool, const UBlackboardData*>(this, "UBlackboardComponent.IsCompatibleWith(UBlackboardData*)", TestAsset); }
	UClass* GetValueAsClass(const FName& KeyName) { return NativeCall<UClass*, const FName&>(this, "UBlackboardComponent.GetValueAsClass(FName&)", KeyName); }
	bool InitializeBlackboard(UBlackboardData& NewAsset) { return NativeCall<bool, UBlackboardData&>(this, "UBlackboardComponent.InitializeBlackboard(UBlackboardData&)", NewAsset); }
	FString* GetDebugInfoString(FString* result, EBlackboardDescription::Type Mode) { return NativeCall<FString*, FString*, EBlackboardDescription::Type>(this, "UBlackboardComponent.GetDebugInfoString(EBlackboardDescription::Type)", result, Mode); }
	float GetValueAsFloat(const FName& KeyName) { return NativeCall<float, const FName&>(this, "UBlackboardComponent.GetValueAsFloat(FName&)", KeyName); }
	UBrainComponent* GetBrainComponent() { return NativeCall<UBrainComponent*>(this, "UBlackboardComponent.GetBrainComponent()"); }
	unsigned char GetValueAsEnum(const FName& KeyName) { return NativeCall<unsigned char, const FName&>(this, "UBlackboardComponent.GetValueAsEnum(FName&)", KeyName); }
	void SetValueAsObject(const FName& KeyName, UObject* ObjectValue) { NativeCall<void, const FName&, UObject*>(this, "UBlackboardComponent.SetValueAsObject(FName&,UObject*)", KeyName, ObjectValue); }
	void SetValueAsFloat(const FName& KeyName, float FloatValue) { NativeCall<void, const FName&, float>(this, "UBlackboardComponent.SetValueAsFloat(FName&,float)", KeyName, FloatValue); }
	UBlackboardData* GetBlackboardAsset() { return NativeCall<UBlackboardData*>(this, "UBlackboardComponent.GetBlackboardAsset()"); }
	void ForceNotifyBlackboardKeyObservers(const FName& KeyName) { NativeCall<void, const FName&>(this, "UBlackboardComponent.ForceNotifyBlackboardKeyObservers(FName&)", KeyName); }
	void SetValueAsBool(const FName& KeyName, bool BoolValue) { NativeCall<void, const FName&, bool>(this, "UBlackboardComponent.SetValueAsBool(FName&,bool)", KeyName, BoolValue); }
	void UninitializeComponent() { NativeCall<void>(this, "UBlackboardComponent.UninitializeComponent()"); }
	UObject* GetValueAsObject(const FName& KeyName) { return NativeCall<UObject*, const FName&>(this, "UBlackboardComponent.GetValueAsObject(FName&)", KeyName); }
	bool GetValueAsBool(const FName& KeyName) { return NativeCall<bool, const FName&>(this, "UBlackboardComponent.GetValueAsBool(FName&)", KeyName); }
	UE::Math::TVector<double>* GetValueAsVector(UE::Math::TVector<double>* result, const FName& KeyName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FName&>(this, "UBlackboardComponent.GetValueAsVector(FName&)", result, KeyName); }
	void ClearValue(const FName& KeyName) { NativeCall<void, const FName&>(this, "UBlackboardComponent.ClearValue(FName&)", KeyName); }
	int GetValueAsInt(const FName& KeyName) { return NativeCall<int, const FName&>(this, "UBlackboardComponent.GetValueAsInt(FName&)", KeyName); }
	UE::Math::TRotator<double>* GetValueAsRotator(UE::Math::TRotator<double>* result, const FName& KeyName) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, const FName&>(this, "UBlackboardComponent.GetValueAsRotator(FName&)", result, KeyName); }
	void SetValueAsInt(const FName& KeyName, int IntValue) { NativeCall<void, const FName&, int>(this, "UBlackboardComponent.SetValueAsInt(FName&,int)", KeyName, IntValue); }
	FName GetValueAsName(const FName& KeyName) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const FName &>(this, "UBlackboardComponent.GetValueAsName(FName&)", AsaReturnPointer, KeyName); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void InitializeParentChain(UBlackboardData* NewAsset) { NativeCall<void, UBlackboardData*>(this, "UBlackboardComponent.InitializeParentChain(UBlackboardData*)", NewAsset); }
};
