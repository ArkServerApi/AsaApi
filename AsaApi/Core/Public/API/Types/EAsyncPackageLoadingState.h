#pragma once


enum class EAsyncPackageLoadingState:unsigned char
{
	NewPackage = 0x0,
	WaitingForSummary = 0x1,
	StartImportPackages = 0x2,
	WaitingForImportPackages = 0x3,
	SetupImports = 0x4,
	SetupExports = 0x5,
	ProcessNewImportsAndExports = 0x6,
	WaitingForPostLoad = 0x7,
	ReadyForPostLoad = 0x8,
	PostLoad_Etc = 0x9,
	PackageComplete = 0xA
};