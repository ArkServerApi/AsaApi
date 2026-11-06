#pragma once


enum class EAsyncPackageLoadingState2:unsigned char
{
	NewPackage = 0x0,
	WaitingForIo = 0x1,
	ProcessPackageSummary = 0x2,
	SetupDependencies = 0x3,
	ProcessExportBundles = 0x4,
	WaitingForExternalReads = 0x5,
	ExportsDone = 0x6,
	PostLoad = 0x7,
	DeferredPostLoad = 0x8,
	DeferredPostLoadDone = 0x9,
	Finalize = 0xA,
	PostLoadInstances = 0xB,
	CreateClusters = 0xC,
	Complete = 0xD,
	DeferredDelete = 0xE
};