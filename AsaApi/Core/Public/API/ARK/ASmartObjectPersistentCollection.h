#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ASmartObjectPersistentCollection : public AActor
{
public:
	ASmartObjectPersistentCollection() = delete;
	~ASmartObjectPersistentCollection() = delete;
	ASmartObjectPersistentCollection(const ASmartObjectPersistentCollection&) = delete;
	ASmartObjectPersistentCollection& operator=(const ASmartObjectPersistentCollection&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASmartObjectPersistentCollection"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASmartObjectPersistentCollection"); }

	FSmartObjectContainer& SmartObjectContainerField() { return *GetNativePointerField<FSmartObjectContainer*>(this, "ASmartObjectPersistentCollection.SmartObjectContainer"); }
	bool& bRegisteredField() { return *GetNativePointerField<bool*>(this, "ASmartObjectPersistentCollection.bRegistered"); }
	bool RegisterWithSubsystem(const FString& Context) { return NativeCall<bool, const FString&>(this, "ASmartObjectPersistentCollection.RegisterWithSubsystem(FString&)", Context); }
	void PostActorCreated() { NativeCall<void>(this, "ASmartObjectPersistentCollection.PostActorCreated()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ASmartObjectPersistentCollection.PostUnregisterAllComponents()"); }
	void Destroyed() { NativeCall<void>(this, "ASmartObjectPersistentCollection.Destroyed()"); }
	void PostLoad() { NativeCall<void>(this, "ASmartObjectPersistentCollection.PostLoad()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ASmartObjectPersistentCollection.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "ASmartObjectPersistentCollection.PreRegisterAllComponents()"); }
	bool UnregisterWithSubsystem(const FString& Context) { return NativeCall<bool, const FString&>(this, "ASmartObjectPersistentCollection.UnregisterWithSubsystem(FString&)", Context); }
};
