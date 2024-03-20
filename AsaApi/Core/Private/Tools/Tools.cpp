#include <Tools.h>

#include "../IBaseApi.h"
#include "../PluginManager/PluginManager.h"

namespace AsaApi::Tools
{
	std::string GetCurrentDir()
	{
		char buffer[MAX_PATH];
		GetModuleFileNameA(nullptr, buffer, MAX_PATH);

		const std::string::size_type pos = std::string(buffer).find_last_of("\\/");

		return std::string(buffer).substr(0, pos);
	}

	std::string Utf8Encode(const std::wstring& wstr)
	{
		std::string converted_string;

		if (wstr.empty())
			return converted_string;

		const auto size_needed = WideCharToMultiByte(CP_UTF8, 0, wstr.data(), static_cast<int>(wstr.size()), nullptr, 0,
			nullptr, nullptr);
		if (size_needed > 0)
		{
			converted_string.resize(size_needed);

			WideCharToMultiByte(CP_UTF8, 0, wstr.data(), static_cast<int>(wstr.size()), converted_string.data(),
				size_needed, nullptr, nullptr);
		}

		return converted_string;
	}

	std::wstring Utf8Decode(const std::string& str)
	{
		std::wstring converted_string;

		if (str.empty())
		{
			return converted_string;
		}

		const auto size_needed = MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.size()), nullptr, 0);
		if (size_needed > 0)
		{
			converted_string.resize(size_needed);

			MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.size()), converted_string.data(),
				size_needed);
		}

		return converted_string;
	}

	bool IsPluginLoaded(const std::string& plugin_name)
	{
		return API::PluginManager::Get().IsPluginLoaded(plugin_name);
	}

	float GetApiVersion()
	{
		return API::game_api->GetVersion();
	}
} // namespace Tools // namespace AsaApi