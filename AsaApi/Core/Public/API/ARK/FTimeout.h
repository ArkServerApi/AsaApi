#pragma once
namespace UE
{
    class FTimeout
    {
    public:
        unsigned __int64 StartCycles;
        unsigned __int64 TimeoutCycles;
    };
    static_assert(sizeof(FTimeout) == 16);
    static_assert(offsetof(FTimeout, StartCycles) == 0);
    static_assert(offsetof(FTimeout, TimeoutCycles) == 8);
}
