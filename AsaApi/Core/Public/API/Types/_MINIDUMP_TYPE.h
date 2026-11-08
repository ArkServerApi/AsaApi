#pragma once


enum class _MINIDUMP_TYPE:unsigned __int64
{
	MiniDumpNormal = 0x0,
	MiniDumpWithDataSegs = 0x1,
	MiniDumpWithFullMemory = 0x2,
	MiniDumpWithHandleData = 0x4,
	MiniDumpFilterMemory = 0x8,
	MiniDumpScanMemory = 0x10,
	MiniDumpWithUnloadedModules = 0x20,
	MiniDumpWithIndirectlyReferencedMemory = 0x40,
	MiniDumpFilterModulePaths = 0x80,
	MiniDumpWithProcessThreadData = 0x100,
	MiniDumpWithPrivateReadWriteMemory = 0x200,
	MiniDumpWithoutOptionalData = 0x400,
	MiniDumpWithFullMemoryInfo = 0x800,
	MiniDumpWithThreadInfo = 0x1000,
	MiniDumpWithCodeSegs = 0x2000,
	MiniDumpWithoutAuxiliaryState = 0x4000,
	MiniDumpWithFullAuxiliaryState = 0xFFFF8000,
	MiniDumpWithPrivateWriteCopyMemory = 0x10000,
	MiniDumpIgnoreInaccessibleMemory = 0x20000,
	MiniDumpWithTokenInformation = 0x40000,
	MiniDumpWithModuleHeaders = 0x80000,
	MiniDumpFilterTriage = 0x100000,
	MiniDumpWithAvxXStateContext = 0x200000,
	MiniDumpWithIptTrace = 0x400000,
	MiniDumpScanInaccessiblePartialPages = 0x800000,
	MiniDumpValidTypeFlags = 0xFFFFFF
};