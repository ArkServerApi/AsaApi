#pragma once


enum class ELoadFlags:unsigned __int64
{
	LOAD_None = 0x0,
	LOAD_Async = 0x1,
	LOAD_NoWarn = 0x2,
	LOAD_EditorOnly = 0x4,
	LOAD_ResolvingDeferredExports = 0x8,
	LOAD_Verify = 0x10,
	LOAD_NoVerify = 0x80,
	LOAD_IsVerifying = 0x100,
	LOAD_SkipLoadImportedPackages = 0x200,
	LOAD_RegenerateBulkDataGuids = 0x400,
	LOAD_DisableDependencyPreloading = 0x1000,
	LOAD_Quiet = 0x2000,
	LOAD_FindIfFail = 0x4000,
	LOAD_MemoryReader = 0xFFFF8000,
	LOAD_NoRedirects = 0x10000,
	LOAD_ForDiff = 0x20000,
	LOAD_PackageForPIE = 0x80000,
	LOAD_DeferDependencyLoads = 0x100000,
	LOAD_ForFileDiff = 0x200000,
	LOAD_DisableCompileOnLoad = 0x400000,
	LOAD_DisableEngineVersionChecks = 0x800000
};