#pragma once

enum class EGetObjectsFlags : unsigned int
{
    None = 0x0,
    IncludeNestedObjects = 0x1,
    EvenIfUnreachable = 0x2,
};
static_assert(sizeof(EGetObjectsFlags) == 4);
