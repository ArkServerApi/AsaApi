#pragma once
#include <API/Fields.h>

namespace AsaApi::detail
{
    class ClassCacheGCScope
    {
    public:
        ClassCacheGCScope() { NativeCall<void>(this, "FGCScopeGuard.FGCScopeGuard()"); }
        ~ClassCacheGCScope() { NativeCall<void>(this, "FGCScopeGuard.~FGCScopeGuard()"); }
        ClassCacheGCScope(const ClassCacheGCScope&) = delete;
        ClassCacheGCScope& operator=(const ClassCacheGCScope&) = delete;
    };
    static_assert(sizeof(ClassCacheGCScope) == 1);
    static_assert(alignof(ClassCacheGCScope) == 1);
}
