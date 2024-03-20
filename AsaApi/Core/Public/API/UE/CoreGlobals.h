// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Containers/UnrealString.h"
#include "CoreTypes.h"
#include "HAL/PlatformTLS.h"
//#include "Logging/LogMacros.h"
#include "Misc/Build.h"
#include "Misc/EnumClassFlags.h"
#include "Misc/OutputDevice.h"
//#include "ProfilingDebugging/CpuProfilerTrace.h"
#include "Templates/Atomic.h"
#include "UObject/NameTypes.h"

#include <atomic>

class Error;
class FChunkedFixedUObjectArray;
struct FConfigCacheIni;
class FExec;
class FFixedUObjectArray;
class FOutputDeviceConsole;
class FOutputDeviceRedirector;
class FRunnableThread;
class FText;
class ITransaction;
struct UClass;
/*
DECLARE_LOG_CATEGORY_EXTERN(LogHAL, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogSerialization, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogUnrealMath, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogUnrealMatrix, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogContentComparisonCommandlet, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogNetPackageMap, Warning, All);
DECLARE_LOG_CATEGORY_EXTERN(LogNetSerialization, Warning, All);
DECLARE_LOG_CATEGORY_EXTERN(LogMemory, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogProfilingDebugging, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogCore, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogOutputDevice, Log, All);

DECLARE_LOG_CATEGORY_EXTERN(LogSHA, Warning, All);
DECLARE_LOG_CATEGORY_EXTERN(LogStats, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogStreaming, Display, All);
DECLARE_LOG_CATEGORY_EXTERN(LogInit, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogExit, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogExec, Warning, All);
DECLARE_LOG_CATEGORY_EXTERN(LogScript, Warning, All);
DECLARE_LOG_CATEGORY_EXTERN(LogLocalization, Error, All);
DECLARE_LOG_CATEGORY_EXTERN(LogLongPackageNames, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogProcess, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogLoad, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogVirtualization, Log, All);

// Temporary log category, generally you should not check things in that use this
DECLARE_LOG_CATEGORY_EXTERN(LogTemp, Log, All);

// Platform specific logs, set here to make it easier to use them from anywhere
// need another layer of macro to help using a define in a define
#define DECLARE_LOG_CATEGORY_EXTERN_HELPER(A,B,C) DECLARE_LOG_CATEGORY_EXTERN(A,B,C)
#ifdef PLATFORM_GLOBAL_LOG_CATEGORY
	DECLARE_LOG_CATEGORY_EXTERN_HELPER(PLATFORM_GLOBAL_LOG_CATEGORY, Log, All);
#endif
#ifdef PLATFORM_GLOBAL_LOG_CATEGORY_ALT
	DECLARE_LOG_CATEGORY_EXTERN_HELPER(PLATFORM_GLOBAL_LOG_CATEGORY_ALT, Log, All);
#endif
*/

FOutputDeviceRedirector* GetGlobalLogSingleton();

void BootTimingPoint(const ANSICHAR *Message);

void DumpBootTiming();

struct FScopedBootTiming
{
	FString Message;
	double StartTime;
	FScopedBootTiming(const ANSICHAR *InMessage);
	FScopedBootTiming(const ANSICHAR *InMessage, FName Suffix);
	~FScopedBootTiming();
};

struct FEngineTrackedActivityScope
{
	FEngineTrackedActivityScope(const TCHAR* Fmt, ...);
	FEngineTrackedActivityScope(const FString& Str);
	~FEngineTrackedActivityScope();
};


#define SCOPED_BOOT_TIMING(x) TRACE_CPUPROFILER_EVENT_SCOPE_STR(x); FScopedBootTiming ANONYMOUS_VARIABLE(BootTiming_)(x);
#define UE_SCOPED_ENGINE_ACTIVITY(Fmt, ...) FEngineTrackedActivityScope ANONYMOUS_VARIABLE(EngineActivity_)(Fmt, ## __VA_ARGS__);


#define GLog GetGlobalLogSingleton()
extern FConfigCacheIni* GConfig;
extern ITransaction* GUndo;
extern FOutputDeviceConsole* GLogConsole;
extern class FOutputDeviceError*			GError;
extern class FFeedbackContext*				GWarn;


extern TCHAR GErrorHist[16384];

// #crashReport: 2014-08-19 Combine into one, refactor.
extern TCHAR GErrorExceptionDescription[4096];

struct FCoreTexts
{
	const FText& True;
	const FText& False;
	const FText& Yes;
	const FText& No;
	const FText& None;

	static const FCoreTexts& Get();

	/** Invalidates existing references. Do not use FCoreTexts after calling. */
	static void TearDown();

	// Non-copyable
	FCoreTexts(const FCoreTexts&) = delete;
	FCoreTexts& operator=(const FCoreTexts&) = delete;

	FCoreTexts(const FText& InTrue, const FText& InFalse, const FText& InYes, const FText& InNo, const FText& InNone)
		: True(InTrue), False(InFalse), Yes(InYes), No(InNo), None(InNone)
	{
	}
};

#if !defined(DISABLE_LEGACY_CORE_TEXTS) || DISABLE_LEGACY_CORE_TEXTS == 0
UE_DEPRECATED(4.23, "GTrue has been deprecated in favor of FCoreTexts::Get().True.")
extern const FText GTrue;
UE_DEPRECATED(4.23, "GFalse has been deprecated in favor of FCoreTexts::Get().False.")
extern const FText GFalse;
UE_DEPRECATED(4.23, "GYes has been deprecated in favor of FCoreTexts::Get().Yes.")
extern const FText GYes;
UE_DEPRECATED(4.23, "GNo has been deprecated in favor of FCoreTexts::Get().No.")
extern const FText GNo;
UE_DEPRECATED(4.23, "GNone has been deprecated in favor of FCoreTexts::Get().None.")
extern const FText GNone;
#endif

/** If true, this executable is able to run all games (which are loaded as DLL's). */
extern bool GIsGameAgnosticExe;

/** When saving out of the game, this override allows the game to load editor only properties. */
extern bool GForceLoadEditorOnly;

/** Disable loading of objects not contained within script files; used during script compilation */
extern bool GVerifyObjectReferencesOnly;

/** when constructing objects, use the fast path on consoles... */
extern bool GFastPathUniqueNameGeneration;

/** allow AActor object to execute script in the editor from specific entry points, such as when running a construction script */
extern bool GAllowActorScriptExecutionInEditor;

/** Forces use of template names for newly instanced components in a CDO. */
extern bool GCompilingBlueprint;

/** True if we're garbage collecting after a blueprint compilation */
extern bool GIsGCingAfterBlueprintCompile;

/** True if we're reconstructing blueprint instances. Should never be true on cooked builds */
extern bool GIsReconstructingBlueprintInstances;

/** True if actors and objects are being re-instanced. */
extern bool GIsReinstancing;

/** Helper function to flush resource streaming. */
extern void(*GFlushStreamingFunc)(void);

/** The settings used by the UE-as-a-library feature. */
struct FUELibraryOverrideSettings
{
	/** True if we were initialized via the UELibrary.  If this is false,
	    none of the other field values should be acknowledged. */
	bool bIsEmbedded = false;

	/** The window handle to embed the engine into */
	void* WindowHandle = nullptr;

	/** The overridden width of the embedded viewport */
	int32 WindowWidth = 0;

	/** The overridden height of the embedded viewport */
	int32 WindowHeight = 0;
};

/** Settings for when using UE as a library */
extern FUELibraryOverrideSettings GUELibraryOverrideSettings;

extern bool GIsRunningUnattendedScript;

#if WITH_ENGINE
extern bool PRIVATE_GIsRunningCommandlet;
extern UClass* PRIVATE_GRunningCommandletClass;

/** If true, initialize RHI and set up scene for rendering even when running a commandlet. */
extern bool PRIVATE_GAllowCommandletRendering;

/** If true, initialize audio and even when running a commandlet. */
extern bool PRIVATE_GAllowCommandletAudio;
#endif

#if WITH_EDITORONLY_DATA

/**
*	True if we are in the editor.
*	Note that this is still true when using Play In Editor. You may want to use GWorld->HasBegunPlay in that case.
*/
extern bool GIsEditor;
extern bool GIsImportingT3D;
extern bool GIsUCCMakeStandaloneHeaderGenerator;
extern bool GIsTransacting;

/** Indicates that the game thread is currently paused deep in a call stack,
while some subset of the editor user interface is pumped.  No game
thread work can be done until the UI pumping loop returns naturally. */
extern bool			GIntraFrameDebuggingGameThread;
/** True if this is the first time through the UI message pumping loop. */
extern bool			GFirstFrameIntraFrameDebugging;

#elif USING_CODE_ANALYSIS

// Defined as variables during code analysis to prevent lots of '<constant> && <expr>' warnings
extern bool GIsEditor;
extern bool GIsUCCMakeStandaloneHeaderGenerator;
extern bool GIntraFrameDebuggingGameThread;
extern bool GFirstFrameIntraFrameDebugging;

#else

#define GIsEditor								false
#define GIsUCCMakeStandaloneHeaderGenerator		false
#define GIntraFrameDebuggingGameThread			false
#define GFirstFrameIntraFrameDebugging			false

#endif // WITH_EDITORONLY_DATA

#if WITH_EDITOR
extern bool PRIVATE_GIsRunningCookCommandlet;
extern bool PRIVATE_GIsRunningDLCCookCommandlet;
#endif

/**
* Check to see if this executable is running a commandlet (custom command-line processing code in an editor-like environment)
*/
FORCEINLINE bool IsRunningCommandlet()
{
#if WITH_ENGINE
	return PRIVATE_GIsRunningCommandlet;
#else
	return false;
#endif
}

/**
* Check to see if this executable is running the cookcommandlet
*/
FORCEINLINE bool IsRunningCookCommandlet()
{
#if WITH_EDITOR
	return PRIVATE_GIsRunningCookCommandlet;
#else
	return false;
#endif
}

/**
* Check to see if this executable is running the cookcommandlet
*/
FORCEINLINE bool IsRunningDLCCookCommandlet()
{
#if WITH_EDITOR
	return PRIVATE_GIsRunningDLCCookCommandlet;
#else
	return false;
#endif
}

/** Returns running commandlet name 
 * 
 */
FORCEINLINE UClass* GetRunningCommandletClass()
{
#if WITH_ENGINE
	return PRIVATE_GRunningCommandletClass;
#else
	return nullptr;
#endif
}

/**
 * Check to see if we should initialise RHI and set up scene for rendering even when running a commandlet.
 */
FORCEINLINE bool IsAllowCommandletRendering()
{
#if WITH_ENGINE
	return PRIVATE_GAllowCommandletRendering;
#else
	return false;
#endif
}

FORCEINLINE bool IsAllowCommandletAudio()
{
#if WITH_ENGINE
	return PRIVATE_GAllowCommandletAudio;
#else
	return false;
#endif
}

class FIsDuplicatingClassForReinstancing
{
public:
	FIsDuplicatingClassForReinstancing& operator= (bool bOther);
	operator bool() const;
};

extern bool GEdSelectionLock;
extern bool GIsClient;
extern bool GIsServer;
extern bool GIsCriticalError;
extern TSAN_ATOMIC(bool) GIsRunning;
extern FIsDuplicatingClassForReinstancing GIsDuplicatingClassForReinstancing;

/**
* These are set when the engine first starts up.
*/

/**
* This specifies whether the engine was launched as a build machine process.
*/
extern bool GIsBuildMachine;

/**
* This determines if we should output any log text.  If Yes then no log text should be emitted.
*/
extern bool GIsSilent;

extern bool GIsSlowTask;
extern bool GSlowTaskOccurred;
extern bool GIsGuarded;

/**
* Set this to true to only allow setting RequestingExit at the start of the Engine tick
*   This will remove the chance for undefined behaviour when setting RequestExit
*
* This needs to proved out on all platforms/use cases before this can moved to default
*/
#ifndef UE_SET_REQUEST_EXIT_ON_TICK_ONLY
	#define UE_SET_REQUEST_EXIT_ON_TICK_ONLY 0
#endif

UE_DEPRECATED(4.24, "Please use IsEngineExitRequested()/RequestEngineExit(const FString&)")
extern bool GIsRequestingExit;

/**
 * This will check if a RequestExit has come in, if it has will set GIsRequestingExit.
 */
extern void BeginExitIfRequested();

FORCEINLINE bool IsEngineExitRequested()
{
PRAGMA_DISABLE_DEPRECATION_WARNINGS
	return GIsRequestingExit;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
}

// Request that the engine exit as soon as it can safely do so
// The ReasonString is not optional and should be a useful description of why the engine exit is requested
void RequestEngineExit(const TCHAR* ReasonString);
void RequestEngineExit(const FString& ReasonString);

/**
*	Global value indicating on-screen warnings/message should be displayed.
*	Disabled via console command "DISABLEALLSCREENMESSAGES"
*	Enabled via console command "ENABLEALLSCREENMESSAGES"
*	Toggled via console command "TOGGLEALLSCREENMESSAGES"
*/
extern bool GAreScreenMessagesEnabled;
extern bool GScreenMessagesRestoreState;

/* Whether we are dumping screen shots */
extern int32 GIsDumpingMovie;
extern bool GIsHighResScreenshot;
extern uint32 GScreenshotResolutionX;
extern uint32 GScreenshotResolutionY;
extern uint64 GMakeCacheIDIndex;

extern FString GEngineIni;

/** Editor ini file locations - stored per engine version (shared across all projects). Migrated between versions on first run. */
extern FString GEditorLayoutIni;
extern FString GEditorKeyBindingsIni;
extern FString GEditorSettingsIni;

/** Editor per-project ini files - stored per project. */
extern FString GEditorIni;
extern FString GEditorPerProjectIni;

extern FString GCompatIni;
extern FString GLightmassIni;
extern FString GScalabilityIni;
extern FString GHardwareIni;
extern FString GInputIni;
extern FString GGameIni;
extern FString GGameUserSettingsIni;
extern FString GRuntimeOptionsIni;
extern FString GInstallBundleIni;
extern FString GDeviceProfilesIni;
extern FString GGameplayTagsIni;

extern float GNearClippingPlane;

extern bool GExitPurge;
extern TCHAR GInternalProjectName[64];
extern const TCHAR* GForeignEngineDir;

/** Exec handler for game debugging tool, allowing commands like "editactor" */
extern FExec* GDebugToolExec;

/** Whether we're currently in the async loading code path or not */
extern bool(*IsAsyncLoading)();

/** Suspends async package loading. */
extern void (*SuspendAsyncLoading)();

/** Resumes async package loading. */
extern void (*ResumeAsyncLoading)();

/** Suspends async package loading. */
extern bool (*IsAsyncLoadingSuspended)();

/** Returns true if async loading is using the async loading thread */
extern bool(*IsAsyncLoadingMultithreaded)();

/** Suspends texture updates caused by completed async IOs. */
extern void (*SuspendTextureStreamingRenderTasks)();

/** Resume texture updates caused by completed async IOs. */
extern void (*ResumeTextureStreamingRenderTasks)();

/** Whether the editor is currently loading a package or not */
extern bool GIsEditorLoadingPackage;

/** Whether the cooker is currently loading a package or not */
extern bool GIsCookerLoadingPackage;

/** Whether GWorld points to the play in editor world */
extern bool GIsPlayInEditorWorld;

extern int32 GPlayInEditorID;

/** Whether or not PIE was attempting to play from PlayerStart */
UE_DEPRECATED(4.25, "This variable is no longer set. Use !GEditor->GetPlayInEditorSessionInfo()->OriginalRequestParams.HasPlayWorldPlacement() instead.")
extern bool GIsPIEUsingPlayerStart;

/** true if the runtime needs textures to be powers of two */
extern bool GPlatformNeedsPowerOfTwoTextures;

/** Time at which FPlatformTime::Seconds() was first initialized (very early on) */
extern double GStartTime;

/** System time at engine init. */
extern FString GSystemStartTime;

/** Whether we are still in the initial loading process. */
extern bool GIsInitialLoad;

/* Whether we are using the event driven loader */
extern bool GEventDrivenLoaderEnabled;

/** true when we are retrieving VTablePtr from UClass */
extern bool GIsRetrievingVTablePtr;

/** Steadily increasing frame counter. */
extern uint64 GFrameCounter;

extern uint64 GFrameCounterRenderThread;

/** GFrameCounter the last time GC was run. */
extern uint64 GLastGCFrame;

/** The time input was sampled, in cycles. */
extern uint64 GInputTime;

/** Incremented once per frame before the scene is being rendered. In split screen mode this is incremented once for all views (not for each view). */
extern uint32 GFrameNumber;

/** NEED TO RENAME, for RT version of GFrameTime use View.ViewFamily->FrameNumber or pass down from RT from GFrameTime). */
extern uint32 GFrameNumberRenderThread;

/** Whether we are the first instance of the game running. */
UE_DEPRECATED(5.1, "Please use `FPlatformProcess::IsFirstInstance()`")
extern bool GIsFirstInstance;

/** Threshold for a frame to be considered a hitch (in milliseconds). */
extern float GHitchThresholdMS;

/** Size to break up data into when saving compressed data */
extern int32 GSavingCompressionChunkSize;

/** Thread ID of the main/game thread */
extern uint32 GGameThreadId;

/** Thread ID of the render thread, if any */
UE_DEPRECATED(4.26, "Please use `IsInActualRenderingThread()`")
extern uint32 GRenderThreadId;

/** Thread ID of the slate thread, if any */
extern uint32 GSlateLoadingThreadId;

/** Has GGameThreadId been set yet? */
extern bool GIsGameThreadIdInitialized;

/** Whether we want the rendering thread to be suspended, used e.g. for tracing. */
extern bool GShouldSuspendRenderingThread;

/** Determines what kind of trace should occur, NAME_None for none. */
extern FLazyName GCurrentTraceName;

/** How to print the time in log output. */
extern ELogTimes::Type GPrintLogTimes;

/** How to print the category in log output. */
extern TSAN_ATOMIC(bool) GPrintLogCategory;

/** How to print the verbosity in log output. */
extern TSAN_ATOMIC(bool) GPrintLogVerbosity;

#if USE_HITCH_DETECTION
/** Used by the lightweight stats and FGameThreadHitchHeartBeat to print a stat stack for hitches in shipping builds. */
extern TSAN_ATOMIC(bool) GHitchDetected;
#endif

/** Whether stats should emit named events for e.g. PIX. */
extern int32 GCycleStatsShouldEmitNamedEvents;

/** Whether verbose stats should be also generate external profiler named events.
* Thread sleep/wait stats or extremely high frequency cycle counting stats are disabled by default.
* Has no effect if GCycleStatsShouldEmitNamedEvents is 0.
*/
extern bool GShouldEmitVerboseNamedEvents;

/** Disables some warnings and minor features that would interrupt a demo presentation*/
extern bool GIsDemoMode;

/** Name of the core package. */
//@Package name transition, remove the double checks 
extern FLazyName GLongCorePackageName;
//@Package name transition, remove the double checks 
extern FLazyName GLongCoreUObjectPackageName;

/** Whether or not a unit test is currently being run. */
extern bool GIsAutomationTesting;

/** Whether or not messages are being pumped outside of main loop */
extern bool GPumpingMessagesOutsideOfMainLoop;

/** Whether or not messages are being pumped */
extern bool GPumpingMessages;
 
/** Enables various editor and HMD hacks that allow the experimental VR editor feature to work, perhaps at the expense of other systems */
extern bool GEnableVREditorHacks;

#if !UE_BUILD_SHIPPING

/** Whether we should ignore the attached debugger. */
extern bool GIgnoreDebugger;

#endif // #if !UE_BUILD_SHIPPING

enum class ETaskTag : int32
{
	ENone						= 0 << 0,
	EStaticInit					= 1 << 0,
	EGameThread					= 1 << 1,
	ESlateThread				= 1 << 2,
	EAudioThread UE_DEPRECATED(5.0, "AudioThread was removed and ETaskTag::EAudioThread is not used anymore. Please remove it.") = 1 << 3,
	ERenderingThread			= 1 << 4,
	ERhiThread					= 1 << 5,
	EAsyncLoadingThread			= 1 << 6,

	ENamedThreadBits			= (EAsyncLoadingThread << 1) - 1,
	EParallelThread				= 1 << 8, //This can be used when multipe threads or jobs are involved (usually a parallel for) It will avoid the check for uniqieness of the named thread tag.
	EWorkerThread				= 1 << 7 | EParallelThread,
	EParallelRenderingThread	= ERenderingThread | EParallelThread,
	EParallelGameThread			= EGameThread | EParallelThread,
	EParallelRhiThread			= ERhiThread | EParallelThread,
};

ENUM_CLASS_FLAGS(ETaskTag);


/**
 * This class can be used to Tag an execution context aka Thead or Job and allows us to later querry the state when we are in the callstack
 * It is usually used for the IsInRendering/GamethreadFunctions.
 *
 * @param CtorSignature InTag the Tag to use
 */
class FTaskTagScope
{
	friend class FRunnableThread;
	friend class FRenderingThread;
	static thread_local ETaskTag ActiveTaskTag;
	static int32 GetStaticThreadId();
	ETaskTag ParentTag;
	ETaskTag Tag;
	bool TagOnlyIfNone;

public:
	/**
	 * Clear the ETaskTag::StaticInit tag so that the Main OS Thread has no active tag.
	 * This will allow functions such as IsInGameThread() to function properly when called from the Main Thread.
	 */
	static void SetTagNone();

	/**
	 * Restore the ETaskTag::StaticInit tag so that the destructors of global
	 * (or local static) C++ objects function properly when checking thread
	 * state (from functions like IsInGameThread()).
	 */
	static void SetTagStaticInit();

	/**
	* Swap the Tag this is only used when Thread contexts move between different threads.
	*/
	static ETaskTag SwapTag(ETaskTag Tag);

protected:
	FTaskTagScope(bool InTagOnlyIfNone, ETaskTag InTag);

public:
	FTaskTagScope(ETaskTag InTag = ETaskTag::ENone) : FTaskTagScope(false, InTag)
	{

	}

	~FTaskTagScope();

	static ETaskTag GetCurrentTag();
	static bool IsCurrentTag(ETaskTag InTag);
	static bool IsRunningDuringStaticInit();
};

/**
 * This class can be used to Tag an execution context but only in case it has not already been tagged
 * It is usually used for the IsInRendering/GamethreadFunctions.
 *
 * @param CtorSignature InTag the Tag to use
 */
class FOptionalTaskTagScope : public FTaskTagScope
{
public:
	FOptionalTaskTagScope(ETaskTag InTag = ETaskTag::ENone) : FTaskTagScope(true, InTag)
	{

	}
};

/**
 * Ensures that current thread is during retrieval of vtable ptr of some
 * UClass.
 *
 * @param CtorSignature The signature of the ctor currently running to
 *		construct proper error message.
 */
void EnsureRetrievingVTablePtrDuringCtor(const TCHAR* CtorSignature);

/** @return True if called from the game thread. */
extern bool IsInGameThread();

/** @return True if called from the game thread in a parallel for. */
extern bool IsInParallelGameThread();

extern bool IsAudioThreadRunning();

/** @return True if called from the audio thread, and not merely a thread calling audio functions. */
extern bool IsInAudioThread();

/** @return True if called from the slate thread, and not merely a thread calling slate functions. */
extern bool IsInSlateThread();

/** @return True if called from the rendering thread, or if called from ANY thread during single threaded rendering */
extern bool IsInRenderingThread();

/** @return True if called from the rendering thread, or if called from ANY thread that isn't the game thread, except that during single threaded rendering the game thread is ok too.*/
extern bool IsInParallelRenderingThread();

/** @return True if called from the rendering thread. */
// Unlike IsInRenderingThread, this will always return false if we are running single threaded. It only returns true if this is actually a separate rendering thread. Mostly useful for checks
extern bool IsInActualRenderingThread();

/** @return True if called from the async loading thread if it's enabled, otherwise if called from game thread while is async loading code. */
extern bool (*IsInAsyncLoadingThread)();

/** Thread used for rendering */
UE_DEPRECATED(4.26, "Please use `GIsThreadedRendering` or `IsInActualRenderingThread()`")
extern FRunnableThread* GRenderingThread;

/** Whether the rendering thread is suspended (not even processing the tickables) */
extern TAtomic<int32> GIsRenderingThreadSuspended;

/** @return True if RHI thread is running */
extern bool IsRHIThreadRunning();

/** @return True if called from the RHI thread, or if called from ANY thread during single threaded rendering */
extern bool IsInRHIThread();

/** @return True if called from any parallel RHI thread, or if called from ANY thread during single threaded rendering */
extern bool IsInParallelRHIThread();

/** Thread used for RHI */
UE_DEPRECATED(4.26, "Please use `IsRHIThreadRunning()`")
extern FRunnableThread* GRHIThread_InternalUseOnly;

/** Thread ID of the the thread we are executing RHI commands on. This could either be a constant dedicated thread or changing every task if we run the rhi thread on tasks. */
UE_DEPRECATED(4.26, "Please use `IsRHIThreadRunning()` or `IsInRHIThread()`")
extern uint32 GRHIThreadId;

/** Boot loading timers */
#if !UE_BUILD_SHIPPING
void NotifyLoadingStateChanged(bool bState, const TCHAR *Message);
struct FScopedLoadingState
{
	FString Message;
	FScopedLoadingState(const TCHAR* InMessage)
		: Message(InMessage)
	{
		NotifyLoadingStateChanged(true, *Message);
	}
	~FScopedLoadingState()
	{
		NotifyLoadingStateChanged(false, *Message);
	}
};
#else
FORCEINLINE void NotifyLoadingStateChanged(bool bState, const TCHAR *Message)
{
}
struct FScopedLoadingState
{
	FORCEINLINE FScopedLoadingState(const TCHAR* InMessage)
	{
	}
};
#endif

bool GetEmitDrawEvents();
void SetEmitDrawEvents(bool EmitDrawEvents);

/** Array to help visualize weak pointers in the debugger */
class FChunkedFixedUObjectArray;

extern FChunkedFixedUObjectArray* GCoreObjectArrayForDebugVisualizers;

namespace UE::CoreUObject::Private
{
	/** Array to help visualize object paths in the debugger */
	struct FStoredObjectPath;
	
	/** Array to help visualize object handles in the debugger */
	struct FObjectHandlePackageDebugData;
}
extern UE::CoreUObject::Private::FStoredObjectPath* GCoreComplexObjectPathDebug;
extern UE::CoreUObject::Private::FObjectHandlePackageDebugData* GCoreObjectHandlePackageDebug;

/** @return True if running cook-on-the-fly. */
bool IsRunningCookOnTheFly();
