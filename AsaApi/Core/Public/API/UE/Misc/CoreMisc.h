// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "API/UE/Containers/Array.h"
#include "API/UE/Containers/ContainerAllocationPolicies.h"
#include "API/UE/Containers/Map.h"
#include "API/UE/Containers/UnrealString.h"
#include "API/UE/CoreGlobals.h"
#include "API/UE/CoreTypes.h"
#include "API/UE/HAL/PlatformProperties.h"
#include "API/UE/HAL/ThreadSingleton.h"
#include "API/UE/Logging/LogVerbosity.h"
#include "API/UE/Math/IntPoint.h"
#include "API/UE/Misc/Build.h"
#include "API/UE/Misc/Exec.h"
#include "API/UE/Templates/Function.h"
#include "API/UE/UObject/NameTypes.h"

class FOutputDevice;
class UWorld;

/**
 * Exec handler that registers itself and is being routed via StaticExec.
 * Note: Not intended for use with UObjects!
 */
class FSelfRegisteringExec : public FExec
{
public:
	/** Constructor, registering this instance. */
	FSelfRegisteringExec();
	/** Destructor, unregistering this instance. */
	virtual ~FSelfRegisteringExec();

	/** Routes a command to the self-registered execs. */
	static bool StaticExec( UWorld* Inworld, const TCHAR* Cmd, FOutputDevice& Ar );
};

/** Registers a static Exec function using FSelfRegisteringExec. */
class FStaticSelfRegisteringExec : public FSelfRegisteringExec
{
public:

	/** Initialization constructor. */
	FStaticSelfRegisteringExec(bool (*InStaticExecFunc)(UWorld* Inworld, const TCHAR* Cmd,FOutputDevice& Ar));

	//~ Begin Exec Interface
#if UE_ALLOW_EXEC_COMMANDS
	virtual bool Exec( UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar ) override;
#endif
	//~ End Exec Interface

private:

	bool (*StaticExecFunc)(UWorld* Inworld, const TCHAR* Cmd,FOutputDevice& Ar);
};

/** Registers a static Exec_Dev function using FSelfRegisteringExec. */
class FStaticSelfRegisteringExec_Dev: public FSelfRegisteringExec
{
public:

	/** Initialization constructor. */
	explicit FStaticSelfRegisteringExec_Dev(bool (*InStaticExecFunc)(UWorld* Inworld, const TCHAR* Cmd, FOutputDevice& Ar));

	//~ Begin Exec Interface
	virtual bool Exec_Dev(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
	//~ End Exec Interface

private:

	bool (*StaticExecFunc)(UWorld* Inworld, const TCHAR* Cmd,FOutputDevice& Ar);
};

/** Registers a static Exec_Editor function using FSelfRegisteringExec. */
class FStaticSelfRegisteringExec_Editor: public FSelfRegisteringExec
{
public:

	/** Initialization constructor. */
	explicit FStaticSelfRegisteringExec_Editor(bool (*InStaticExecFunc)(UWorld* Inworld, const TCHAR* Cmd, FOutputDevice& Ar));

	//~ Begin Exec Interface
	virtual bool Exec_Editor(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
	//~ End Exec Interface

private:

	bool (*StaticExecFunc)(UWorld* Inworld, const TCHAR* Cmd, FOutputDevice& Ar);
};

// Interface for returning a context string.
class FContextSupplier
{
public:
	virtual ~FContextSupplier() {}
	virtual FString GetContext()=0;
};


struct FMaintenance
{
	/** deletes log files older than a number of days specified in the Engine ini file */
	static void DeleteOldLogs();
};

/*-----------------------------------------------------------------------------
	Module singletons.
-----------------------------------------------------------------------------*/

/** Returns the derived data cache interface if it is available, otherwise null. */
class FDerivedDataCacheInterface* GetDerivedDataCache();

/** Returns the derived data cache interface, or fatal error if it is not available. */
class FDerivedDataCacheInterface& GetDerivedDataCacheRef();

/** Returns the derived data cache interface if it is available and initialized, otherwise null. */
class FDerivedDataCacheInterface* TryGetDerivedDataCache();

/**
 * Return the Target Platform Manager interface, if it is available, otherwise return nullptr.
 *
 * @param bFailOnInitErrors If true (default) and errors occur during init of the TPM, an error will be logged and the process may terminate, otherwise will return whether there was an error or not.
 * @return The Target Platform Manager interface, if it is available, otherwise return nullptr.
*/
class ITargetPlatformManagerModule* GetTargetPlatformManager(bool bFailOnInitErrors = true);

/** Return the Target Platform Manager interface, fatal error if it is not available. **/
class ITargetPlatformManagerModule& GetTargetPlatformManagerRef();

/**
 * Return true if we are currently in a commandlet is targeting platforms with AV requirements (ie not a server) 
 * or we are not targetingother platforms, and the current platform needs to render (CanEverRender())
 */
bool WillNeedAudioVisualData();

/*-----------------------------------------------------------------------------
	Runtime.
-----------------------------------------------------------------------------*/

/**
 * Check to see if this executable is running as dedicated server
 * Editor can run as dedicated with -server
 */
FORCEINLINE bool IsRunningDedicatedServer()
{
	if (FPlatformProperties::IsServerOnly())
	{
		return true;
	}

	if (FPlatformProperties::IsGameOnly())
	{
		return false;
	}

#if UE_EDITOR
	extern int32 StaticDedicatedServerCheck();
	return (StaticDedicatedServerCheck() == 1);
#else
	return false;
#endif
}

/**
 * Check to see if this executable is running as "the game"
 * - contains all net code (WITH_SERVER_CODE=1)
 * Editor can run as a game with -game
 */
FORCEINLINE bool IsRunningGame()
{
	if (FPlatformProperties::IsGameOnly())
	{
		return true;
	}

	if (FPlatformProperties::IsServerOnly())
	{
		return false;
	}

#if UE_EDITOR
	extern int32 StaticGameCheck();
	return (StaticGameCheck() == 1);
#else
	return false;
#endif
}

/**
 * Check to see if this executable is running as "the client"
 * - removes all net code (WITH_SERVER_CODE=0)
 * Editor can run as a game with -clientonly
 */
FORCEINLINE bool IsRunningClientOnly()
{
	if (FPlatformProperties::IsClientOnly())
	{
		return true;
	}

#if UE_EDITOR
	extern int32 StaticClientOnlyCheck();
	return (StaticClientOnlyCheck() == 1);
#else
	return false;
#endif
}

/**
 * Helper for obtaining the default Url configuration
 */
struct FUrlConfig
{
	FString DefaultProtocol;
	FString DefaultName;
	FString DefaultHost;
	FString DefaultPortal;
	FString DefaultSaveExt;
	int32 DefaultPort;

	/**
	 * Initialize with defaults from ini
	 */
	void Init();

	/**
	 * Reset state
	 */
	void Reset();
};

bool StringHasBadDashes(const TCHAR* Str);

/** Helper structure for boolean values in config */
struct FBoolConfigValueHelper
{
private:
	bool bValue;
public:
	FBoolConfigValueHelper(const TCHAR* Section, const TCHAR* Key, const FString& Filename = GEditorIni);

	operator bool() const
	{
		return bValue;
	}
};

/**
 * Function signature for handlers for script exceptions.
 */
typedef TFunction<void(ELogVerbosity::Type /*Verbosity*/, const TCHAR* /*ExceptionMessage*/, const TCHAR* /*StackMessage*/)> FScriptExceptionHandlerFunc;

/** 
 * Exception handler stack used for script exceptions.
 */
class FScriptExceptionHandler : public TThreadSingleton<FScriptExceptionHandler>
{
public:
	/**
	 * Get the exception handler for the current thread
	 */
	static FScriptExceptionHandler& Get();

	/**
	 * Push an exception handler onto the stack
	 */
	void PushExceptionHandler(const FScriptExceptionHandlerFunc& InFunc);

	/**
	 * Pop an exception handler from the stack
	 */
	void PopExceptionHandler();

	/**
	 * Handle an exception using the active exception handler
	 */
	void HandleException(ELogVerbosity::Type Verbosity, const TCHAR* ExceptionMessage, const TCHAR* StackMessage);

	/**
	 * Handler for a script exception that emits an ensure (for warnings or errors)
	 */
	static void AssertionExceptionHandler(ELogVerbosity::Type Verbosity, const TCHAR* ExceptionMessage, const TCHAR* StackMessage);

	/**
	 * Handler for a script exception that emits a log message
	 */
	static void LoggingExceptionHandler(ELogVerbosity::Type Verbosity, const TCHAR* ExceptionMessage, const TCHAR* StackMessage);

private:
	/**
	 * Default script exception handler
	 */
	static FScriptExceptionHandlerFunc DefaultExceptionHandler;

	/**
	 * Stack of active exception handlers
	 * The top of the stack will be called on an exception, or DefaultExceptionHandler will be used if the stack is empty
	 */
	TArray<FScriptExceptionHandlerFunc, TInlineAllocator<4>> ExceptionHandlerStack;
};

/** 
 * Scoped struct used to push and pop a script exception handler
 */
struct FScopedScriptExceptionHandler
{
	explicit FScopedScriptExceptionHandler(const FScriptExceptionHandlerFunc& InFunc);
	~FScopedScriptExceptionHandler();
};

/**
 * Enables named events when profiling.
 * Increments/decrements GCycleStatsShouldEmitNamedEvents based on bIsProfiling.
 * Functionality is controlled by stats.AutoEnableNamedEventsWhenProfiling.
 */
class FAutoNamedEventsToggler
{
public:
	void Update(bool bIsProfiling);

private:
	bool bSetNamedEventsEnabled = false;
};

/** 
 * This define enables the blueprint runaway and exception stack trace checks
 * If this is true, it will create a FBlueprintContextTracker (previously FBlueprintExceptionTracker) which is defined in Script.h
 */
#ifndef DO_BLUEPRINT_GUARD
	#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
		#define DO_BLUEPRINT_GUARD 1
	#else
		#define DO_BLUEPRINT_GUARD 0
	#endif
#endif

/** This define enables ScriptAudit exec commands */
#ifndef SCRIPT_AUDIT_ROUTINES
	#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
		#define SCRIPT_AUDIT_ROUTINES 1
	#else
		#define SCRIPT_AUDIT_ROUTINES 0
	#endif
#endif
