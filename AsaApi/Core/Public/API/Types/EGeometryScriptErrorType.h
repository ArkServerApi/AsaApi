#pragma once


enum class EGeometryScriptErrorType:unsigned char
{
	NoError = 0x0,
	UnknownError = 0x1,
	InvalidInputs = 0x2,
	OperationFailed = 0x3
};