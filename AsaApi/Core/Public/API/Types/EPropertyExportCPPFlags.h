#pragma once


enum class EPropertyExportCPPFlags:int
{
	CPPF_None = 0x0,
	CPPF_OptionalValue = 0x1,
	CPPF_ArgumentOrReturnValue = 0x2,
	CPPF_Implementation = 0x4,
	CPPF_CustomTypeName = 0x8,
	CPPF_NoConst = 0x10,
	CPPF_NoRef = 0x20,
	CPPF_NoStaticArray = 0x40,
	CPPF_BlueprintCppBackend = 0x80
};