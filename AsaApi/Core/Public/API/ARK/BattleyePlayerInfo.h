#pragma once


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