#pragma once
#include <algorithm>
#include <stdexcept>
#include <string>
#include <vector>

namespace AsaApi::detail
{
    class ClassResolutionScope
    {
    public:
        explicit ClassResolutionScope(const std::string& Name)
        {
            if (std::find(Names.begin(), Names.end(), Name) != Names.end())
                throw std::runtime_error("Recursive native class resolution: " + Name);
            Names.push_back(Name);
        }
        ~ClassResolutionScope() { Names.pop_back(); }
        ClassResolutionScope(const ClassResolutionScope&) = delete;
        ClassResolutionScope& operator=(const ClassResolutionScope&) = delete;
    private:
        inline static thread_local std::vector<std::string> Names;
    };
}
