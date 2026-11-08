#pragma once


struct FStringEqual
{
	bool operator()(const FString& lhs, const FString& rhs) const
	{
		return lhs.Equals(rhs);
	}
};