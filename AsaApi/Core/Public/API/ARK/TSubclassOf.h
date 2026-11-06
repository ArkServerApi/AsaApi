#pragma once


template <typename T>
struct TSubclassOf
{
	TSubclassOf()
		: uClass(nullptr)
	{
	}

	TSubclassOf(UClass* uClass)
		: uClass(uClass)
	{
	}

    friend uint32 GetTypeHash(const TSubclassOf& Value)
    {
        return PointerHash(Value.uClass);
    }
    bool operator==(const TSubclassOf& Other) const { return uClass == Other.uClass; }
	UClass* uClass;
};