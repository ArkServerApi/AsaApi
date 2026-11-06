#pragma once


enum class EWinHttpCallbackStatus:unsigned int
{
	ResolvingName = 0x1,
	NameResolved = 0x2,
	ConnectingToServer = 0x4,
	ConnectedToServer = 0x8,
	SendingRequest = 0x10,
	RequestSent = 0x20,
	ReceivingResponse = 0x40,
	ResponseReceived = 0x80,
	ClosingConnection = 0x100,
	ConnectionClosed = 0x200,
	HandleCreated = 0x400,
	HandleClosing = 0x800,
	DetectingProxy = 0x1000,
	Redirect = 0x4000,
	IntermediateResponse = 0xFFFF8000,
	SecureFailure = 0x10000,
	HeadersAvailable = 0x20000,
	DataAvailable = 0x40000,
	ReadComplete = 0x80000,
	WriteComplete = 0x100000,
	RequestError = 0x200000,
	SendRequestComplete = 0x400000,
	GetProxyForUrlComplete = 0x1000000,
	CloseComplete = 0x2000000,
	ShutdownComplete = 0x4000000,
	SettingsWriteComplete = 0x10000000,
	SettingsReadComplete = 0x20000000
};