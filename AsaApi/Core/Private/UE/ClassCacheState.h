#pragma once
#include <shared_mutex>
#include <string>
#include <unordered_map>
#include <vector>

struct UClass;

namespace AsaApi::detail
{
    struct ClassCacheState
    {
        std::shared_mutex Mutex;
        std::unordered_map<std::string, UClass*> Classes;
        std::unordered_map<std::string, std::vector<std::wstring>> ClassPaths;
        bool IndexBuilt = false;
        bool Closing = false;
    };

    void ShutdownClassCache();
}
