#pragma once
#include "Base.h"
#include <cstddef>

namespace AsaApi
{
    // Resolves a reflected native C++ class. Successful results remain strongly
    // referenced until the engine shuts down its object system. A class that
    // has not been registered returns nullptr and can be requested again later.
    ARK_API UClass* ResolveClass(const char* cppClassName);
    ARK_API std::size_t GetClassCacheSize();
}
