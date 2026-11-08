#pragma once


struct FStringHash
{
	std::size_t operator()(const FString& str) const
	{
		const std::string stdString(TCHAR_TO_UTF8(*str));
		return std::hash<std::string>{}(stdString);
	}
};