#pragma once

struct FSocket
{
	ESocketType& SocketTypeField() { return *GetNativePointerField<ESocketType*>(this, "FSocket.SocketType"); }
	FString& SocketDescriptionField() { return *GetNativePointerField<FString*>(this, "FSocket.SocketDescription"); }
};