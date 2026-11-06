#pragma once


enum class _WINHTTP_REQUEST_STAT_ENTRY:int
{
	WinHttpConnectFailureCount = 0x0,
	WinHttpProxyFailureCount = 0x1,
	WinHttpTlsHandshakeClientLeg1Size = 0x2,
	WinHttpTlsHandshakeServerLeg1Size = 0x3,
	WinHttpTlsHandshakeClientLeg2Size = 0x4,
	WinHttpTlsHandshakeServerLeg2Size = 0x5,
	WinHttpRequestHeadersSize = 0x6,
	WinHttpRequestHeadersCompressedSize = 0x7,
	WinHttpResponseHeadersSize = 0x8,
	WinHttpResponseHeadersCompressedSize = 0x9,
	WinHttpResponseBodySize = 0xA,
	WinHttpResponseBodyCompressedSize = 0xB,
	WinHttpProxyTlsHandshakeClientLeg1Size = 0xC,
	WinHttpProxyTlsHandshakeServerLeg1Size = 0xD,
	WinHttpProxyTlsHandshakeClientLeg2Size = 0xE,
	WinHttpProxyTlsHandshakeServerLeg2Size = 0xF,
	WinHttpRequestStatLast = 0x10,
	WinHttpRequestStatMax = 0x20
};