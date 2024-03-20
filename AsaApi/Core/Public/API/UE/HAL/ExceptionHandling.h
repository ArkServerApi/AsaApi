// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/ContainersFwd.h"
#include "CoreTypes.h"

struct FProgramCounterSymbolInfo;

/** Whether we should generate crash reports even if the debugger is attached. */
extern bool GAlwaysReportCrash;

/** Whether to use ClientReportClient rather than AutoReporter. */
extern bool GUseCrashReportClient;

extern TCHAR MiniDumpFilenameW[1024];

// #CrashReport: 2014-09-11 Move to PlatformExceptionHandling
#if PLATFORM_WINDOWS
#include "Windows/WindowsSystemIncludes.h"

#include <excpt.h>

// #CrashReport: 2014-10-09 These methods are specific to windows, remove from here.
extern int32 ReportCrash( Windows::LPEXCEPTION_POINTERS ExceptionInfo );
extern void ReportAssert(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportGPUCrash(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportEnsure(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportStall(const TCHAR* ErrorMessage, uint32 HitchThreadId);
extern void ReportHang(const TCHAR*, const uint64* StackFrames, int32 NumStackFrames, uint32 HungThreadId);
#elif PLATFORM_MAC
// #CrashReport: 2014-10-09 Should be move to another file
#include <signal.h>

extern int32 ReportCrash(ucontext_t *Context, int32 Signal, struct __siginfo* Info);
extern void ReportAssert(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportGPUCrash(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportEnsure(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportHang(const TCHAR*, const uint64* StackFrames, int32 NumStackFrames, uint32 HungThreadId);
#elif PLATFORM_UNIX
extern void ReportAssert(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportGPUCrash(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportEnsure(const TCHAR* ErrorMessage, void* ProgramCounter);
extern void ReportStall(const TCHAR* ErrorMessage, uint32 ThreadId);
extern void ReportHang(const TCHAR*, const uint64* StackFrames, int32 NumStackFrames, uint32 HungThreadId);
#endif


extern void ReportInteractiveEnsure(const TCHAR* InMessage);
extern bool IsInteractiveEnsureMode();