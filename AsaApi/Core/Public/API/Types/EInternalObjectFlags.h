#pragma once

enum class EInternalObjectFlags : unsigned int
{
    None = 0x0,
    Remote = 0x0,
    RemoteReference = 0x0,
    Borrowed = 0x0,
    LocalNotReady = 0x0,
    ReachabilityFlag0 = 0x4000,
    ReachabilityFlag1 = 0x8000,
    ReachabilityFlag2 = 0x10000,
    AutoRTFMConstructionAborted = 0x20000,
    LoaderImport = 0x100000,
    Garbage = 0x200000,
    AsyncLoadingPhase1 = 0x400000,
    ReachableInCluster = 0x800000,
    ClusterRoot = 0x1000000,
    Native = 0x2000000,
    Async = 0x4000000,
    AsyncLoadingPhase2 = 0x8000000,
    Unreachable = 0x10000000,
    RefCounted = 0x20000000,
    RootSet = 0x40000000,
    PendingConstruction = 0x80000000,
};
static_assert(sizeof(EInternalObjectFlags) == 4);
