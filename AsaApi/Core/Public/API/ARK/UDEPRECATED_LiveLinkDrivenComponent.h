#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UDEPRECATED_LiveLinkDrivenComponent : public UActorComponent
{
public:
	UDEPRECATED_LiveLinkDrivenComponent() = delete;
	~UDEPRECATED_LiveLinkDrivenComponent() = delete;
	UDEPRECATED_LiveLinkDrivenComponent(const UDEPRECATED_LiveLinkDrivenComponent&) = delete;
	UDEPRECATED_LiveLinkDrivenComponent& operator=(const UDEPRECATED_LiveLinkDrivenComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDEPRECATED_LiveLinkDrivenComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDEPRECATED_LiveLinkDrivenComponent"); }

	FLiveLinkSubjectName& SubjectNameField() { return *GetNativePointerField<FLiveLinkSubjectName*>(this, "UDEPRECATED_LiveLinkDrivenComponent.SubjectName"); }
	FName& ActorTransformBoneField() { return *GetNativePointerField<FName*>(this, "UDEPRECATED_LiveLinkDrivenComponent.ActorTransformBone"); }
	bool& bModifyActorTransformField() { return *GetNativePointerField<bool*>(this, "UDEPRECATED_LiveLinkDrivenComponent.bModifyActorTransform"); }
	bool& bSetRelativeLocationField() { return *GetNativePointerField<bool*>(this, "UDEPRECATED_LiveLinkDrivenComponent.bSetRelativeLocation"); }
};
