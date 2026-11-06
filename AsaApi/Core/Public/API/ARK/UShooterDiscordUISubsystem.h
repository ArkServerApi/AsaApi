#pragma once
#include "BulkForward.h"
#include "ULocalPlayerSubsystem.h"

struct UShooterDiscordUISubsystem : public ULocalPlayerSubsystem
{
public:
	UShooterDiscordUISubsystem() = delete;
	~UShooterDiscordUISubsystem() = delete;
	UShooterDiscordUISubsystem(const UShooterDiscordUISubsystem&) = delete;
	UShooterDiscordUISubsystem& operator=(const UShooterDiscordUISubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterDiscordUISubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterDiscordUISubsystem"); }

	FDiscordClientOnStatusChangedMulticast& OnStatusChangedField() { return *GetNativePointerField<FDiscordClientOnStatusChangedMulticast*>(this, "UShooterDiscordUISubsystem.OnStatusChanged"); }
	FDiscordClientActivityInviteCallbackMulticast& OnActivityInviteField() { return *GetNativePointerField<FDiscordClientActivityInviteCallbackMulticast*>(this, "UShooterDiscordUISubsystem.OnActivityInvite"); }
	FDiscordClientActivityJoinCallbackMulticast& OnActivityJoinField() { return *GetNativePointerField<FDiscordClientActivityJoinCallbackMulticast*>(this, "UShooterDiscordUISubsystem.OnActivityJoin"); }
	FDiscordClientMessageCreatedCallbackMulticast& OnMessageCreatedField() { return *GetNativePointerField<FDiscordClientMessageCreatedCallbackMulticast*>(this, "UShooterDiscordUISubsystem.OnMessageCreated"); }
	FDiscordClientMessageUpdatedCallbackMulticast& OnMessageUpdatedField() { return *GetNativePointerField<FDiscordClientMessageUpdatedCallbackMulticast*>(this, "UShooterDiscordUISubsystem.OnMessageUpdated"); }
	FDiscordClientMessageDeletedCallbackMulticast& OnMessageDeletedField() { return *GetNativePointerField<FDiscordClientMessageDeletedCallbackMulticast*>(this, "UShooterDiscordUISubsystem.OnMessageDeleted"); }
	FDiscordClientRelationshipCreatedCallbackMulticast& OnRelationshipCreatedField() { return *GetNativePointerField<FDiscordClientRelationshipCreatedCallbackMulticast*>(this, "UShooterDiscordUISubsystem.OnRelationshipCreated"); }
	FDiscordClientRelationshipDeletedCallbackMulticast& OnRelationshipDeletedField() { return *GetNativePointerField<FDiscordClientRelationshipDeletedCallbackMulticast*>(this, "UShooterDiscordUISubsystem.OnRelationshipDeleted"); }
	FDiscordClientUserUpdatedCallbackMulticast& OnUserUpdatedField() { return *GetNativePointerField<FDiscordClientUserUpdatedCallbackMulticast*>(this, "UShooterDiscordUISubsystem.OnUserUpdated"); }
	FShooterDiscordUIUnreadChangedMulticast& OnDiscordUIUnreadChangedField() { return *GetNativePointerField<FShooterDiscordUIUnreadChangedMulticast*>(this, "UShooterDiscordUISubsystem.OnDiscordUIUnreadChanged"); }
	FShooterDiscordUISessionSocialStateChangedMulticast& OnDiscordUISessionSocialStateChangedField() { return *GetNativePointerField<FShooterDiscordUISessionSocialStateChangedMulticast*>(this, "UShooterDiscordUISubsystem.OnDiscordUISessionSocialStateChanged"); }
	unsigned __int64& ActiveDiscordConversationUserIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UShooterDiscordUISubsystem.ActiveDiscordConversationUserId"); }
	bool& bFriendRequestTrackingEnabledField() { return *GetNativePointerField<bool*>(this, "UShooterDiscordUISubsystem.bFriendRequestTrackingEnabled"); }
	void BindBackendDelegates() { NativeCall<void>(this, "UShooterDiscordUISubsystem.BindBackendDelegates()"); }
	void SetFriendRequestTrackingEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UShooterDiscordUISubsystem.SetFriendRequestTrackingEnabled(bool)", bEnabled); }
	void HandleBackendActivityInvite(UDiscordActivityInvite* Invite) { NativeCall<void, UDiscordActivityInvite*>(this, "UShooterDiscordUISubsystem.HandleBackendActivityInvite(UDiscordActivityInvite*)", Invite); }
	void Deinitialize() { NativeCall<void>(this, "UShooterDiscordUISubsystem.Deinitialize()"); }
	bool RunDiscordCallbacks(float DeltaTime) { return NativeCall<bool, float>(this, "UShooterDiscordUISubsystem.RunDiscordCallbacks(float)", DeltaTime); }
	void HandleDiscordUIActivityInviteCreated(UDiscordActivityInvite* Invite) { NativeCall<void, UDiscordActivityInvite*>(this, "UShooterDiscordUISubsystem.HandleDiscordUIActivityInviteCreated(UDiscordActivityInvite*)", Invite); }
	UDiscordClient* GetDiscordClient() { return NativeCall<UDiscordClient*>(this, "UShooterDiscordUISubsystem.GetDiscordClient()"); }
	bool CanUseDiscordUI() { return NativeCall<bool>(this, "UShooterDiscordUISubsystem.CanUseDiscordUI()"); }
	bool ShouldCreateSubsystem(UObject* Outer) { return NativeCall<bool, UObject*>(this, "UShooterDiscordUISubsystem.ShouldCreateSubsystem(UObject*)", Outer); }
	void ResolvePendingDiscordUIUnreadMessages() { NativeCall<void>(this, "UShooterDiscordUISubsystem.ResolvePendingDiscordUIUnreadMessages()"); }
	void Initialize(FSubsystemCollectionBase& Collection) { NativeCall<void, FSubsystemCollectionBase&>(this, "UShooterDiscordUISubsystem.Initialize(FSubsystemCollectionBase&)", Collection); }
	void UnbindBackendDelegates() { NativeCall<void>(this, "UShooterDiscordUISubsystem.UnbindBackendDelegates()"); }
};
