#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTickableWorldSubsystem.h"

class ULandscapeSubsystem : public UTickableWorldSubsystem
{
public:
	ULandscapeSubsystem() = delete;
	~ULandscapeSubsystem() = delete;
	ULandscapeSubsystem(const ULandscapeSubsystem&) = delete;
	ULandscapeSubsystem& operator=(const ULandscapeSubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeSubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeSubsystem"); }
	bool& bIsGrassCreationPrioritizedField() { return *GetNativePointerField<bool*>(this, "ULandscapeSubsystem.bIsGrassCreationPrioritized"); }
	FDelegateHandle& OnNaniteWorldSettingsChangedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "ULandscapeSubsystem.OnNaniteWorldSettingsChangedHandle"); }
	FLandscapeTextureStreamingManager*& TextureStreamingManagerField() { return *GetNativePointerField<FLandscapeTextureStreamingManager**>(this, "ULandscapeSubsystem.TextureStreamingManager"); }
	FLandscapeGrassMapsBuilder*& GrassMapsBuilderField() { return *GetNativePointerField<FLandscapeGrassMapsBuilder**>(this, "ULandscapeSubsystem.GrassMapsBuilder"); }
	int& LastVisualTickFrameNumberField() { return *GetNativePointerField<int*>(this, "ULandscapeSubsystem.LastVisualTickFrameNumber"); }
	FDelegateHandle& OnScalabilityChangedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "ULandscapeSubsystem.OnScalabilityChangedHandle"); }
	void Initialize(FSubsystemCollectionBase& Collection) { NativeCall<void, FSubsystemCollectionBase&>(this, "ULandscapeSubsystem.Initialize(FSubsystemCollectionBase&)", Collection); }
	void TickEdgeFixup() { NativeCall<void>(this, "ULandscapeSubsystem.TickEdgeFixup()"); }
	bool DoesSupportWorldType(EWorldType::Type WorldType) { return NativeCall<bool, EWorldType::Type>(this, "ULandscapeSubsystem.DoesSupportWorldType(EWorldType::Type)", WorldType); }
	void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) { NativeCall<void, ULevel*, UWorld*>(this, "ULandscapeSubsystem.OnLevelRemovedFromWorld(ULevel*,UWorld*)", InLevel, InWorld); }
	void UnregisterActor(ALandscapeProxy* Proxy) { NativeCall<void, ALandscapeProxy*>(this, "ULandscapeSubsystem.UnregisterActor(ALandscapeProxy*)", Proxy); }
	void RegisterComponent(ULandscapeComponent* Component) { NativeCall<void, ULandscapeComponent*>(this, "ULandscapeSubsystem.RegisterComponent(ULandscapeComponent*)", Component); }
	void Deinitialize() { NativeCall<void>(this, "ULandscapeSubsystem.Deinitialize()"); }
	void HandlePostGarbageCollect() { NativeCall<void>(this, "ULandscapeSubsystem.HandlePostGarbageCollect()"); }
	void OnNaniteWorldSettingsChanged(AWorldSettings* WorldSettings) { NativeCall<void, AWorldSettings*>(this, "ULandscapeSubsystem.OnNaniteWorldSettingsChanged(AWorldSettings*)", WorldSettings); }
	void UnregisterComponent(ULandscapeComponent* Component) { NativeCall<void, ULandscapeComponent*>(this, "ULandscapeSubsystem.UnregisterComponent(ULandscapeComponent*)", Component); }
	void RegisterActor(ALandscapeProxy* Proxy) { NativeCall<void, ALandscapeProxy*>(this, "ULandscapeSubsystem.RegisterActor(ALandscapeProxy*)", Proxy); }
	void OnNaniteEnabledChanged(IConsoleVariable* __formal) { NativeCall<void, IConsoleVariable*>(this, "ULandscapeSubsystem.OnNaniteEnabledChanged(IConsoleVariable*)", __formal); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "ULandscapeSubsystem.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
};
