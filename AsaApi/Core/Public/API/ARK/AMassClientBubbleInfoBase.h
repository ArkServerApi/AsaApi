#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AMassClientBubbleInfoBase : public AInfo
{
public:
	AMassClientBubbleInfoBase() = delete;
	~AMassClientBubbleInfoBase() = delete;
	AMassClientBubbleInfoBase(const AMassClientBubbleInfoBase&) = delete;
	AMassClientBubbleInfoBase& operator=(const AMassClientBubbleInfoBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMassClientBubbleInfoBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMassClientBubbleInfoBase"); }

	FDelegateHandle& OnPostWorldInitDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AMassClientBubbleInfoBase.OnPostWorldInitDelegateHandle"); }
	TArray<FMassClientBubbleSerializerBase*, TSizedDefaultAllocator<32> >& SerializersField() { return *GetNativePointerField<TArray<FMassClientBubbleSerializerBase*, TSizedDefaultAllocator<32> >*>(this, "AMassClientBubbleInfoBase.Serializers"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AMassClientBubbleInfoBase.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AMassClientBubbleInfoBase.Tick(float)", DeltaTime); }
	void PostInitProperties() { NativeCall<void>(this, "AMassClientBubbleInfoBase.PostInitProperties()"); }
	void BeginPlay() { NativeCall<void>(this, "AMassClientBubbleInfoBase.BeginPlay()"); }
	void InitializeForWorld(UWorld& World) { NativeCall<void, UWorld&>(this, "AMassClientBubbleInfoBase.InitializeForWorld(UWorld&)", World); }
};
