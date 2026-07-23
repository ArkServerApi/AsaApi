#pragma once
#include <API/Base.h>
#include "Logger/Logger.h"

#include <unordered_map>
#include <unordered_set>
#include <filesystem>
#include <iostream>
#include <fstream>

namespace Cache
{
	std::string calculateSHA256(const std::filesystem::path& filename);

	bool saveToFile(const std::filesystem::path& filename, const std::string& content);

	std::string readFromFile(const std::filesystem::path& filename);

	template <typename T>
	bool validateSerializedMap(const std::filesystem::path& filename)
	{
		std::error_code error;
		if (!std::filesystem::is_regular_file(filename, error) || error)
			return false;

		const auto fileSize = std::filesystem::file_size(filename, error);
		if (error || fileSize == 0)
			return false;

		std::ifstream file(filename, std::ios::binary);
		if (!file.is_open())
			return false;

		constexpr std::uintmax_t maxKeySize = 1024 * 1024;
		constexpr std::size_t maxEntryCount = 5'000'000;
		std::uintmax_t bytesRemaining = fileSize;
		std::size_t entryCount = 0;
		std::unordered_set<std::string> keys;

		while (bytesRemaining > 0)
		{
			if (bytesRemaining < sizeof(std::size_t))
				return false;

			std::size_t keySize = 0;
			if (!file.read(reinterpret_cast<char*>(&keySize), sizeof(keySize)))
				return false;
			bytesRemaining -= sizeof(keySize);

			if (keySize == 0 || keySize > maxKeySize || keySize > bytesRemaining)
				return false;
			bytesRemaining -= keySize;

			if (bytesRemaining < sizeof(T))
				return false;

			std::string key(keySize, '\0');
			if (!file.read(key.data(), static_cast<std::streamsize>(keySize)) || !keys.emplace(std::move(key)).second)
				return false;

			T value{};
			if (!file.read(reinterpret_cast<char*>(&value), sizeof(T)))
				return false;
			bytesRemaining -= sizeof(T);
			++entryCount;
			if (entryCount > maxEntryCount)
				return false;
		}

		return entryCount > 0;
	}

	template <typename T>
	void serializeMap(const std::unordered_map<std::string, T>& data, const std::filesystem::path& filename)
	{
		std::ofstream file(filename, std::ios::binary | std::ios::trunc);
		if (!file.is_open())
		{
			Log::GetLog()->error("Error opening file for writing: " + filename.string());
			return;
		}

		for (const auto& entry : data)
		{
			std::size_t keySize = entry.first.size();
			file.write(reinterpret_cast<char*>(&keySize), sizeof(keySize));
			file.write(entry.first.data(), keySize);
			file.write(reinterpret_cast<const char*>(&entry.second), sizeof(T));
		}

		file.close();
	}

	template <typename T>
	std::unordered_map<std::string, T> deserializeMap(const std::filesystem::path& filename)
	{
		std::unordered_map<std::string, T> data;
		std::error_code error;
		if (!std::filesystem::is_regular_file(filename, error) || error)
		{
			Log::GetLog()->error("Cache map is missing or invalid: " + filename.string());
			return data;
		}

		const auto fileSize = std::filesystem::file_size(filename, error);
		if (error || fileSize == 0)
		{
			Log::GetLog()->error("Cache map is empty or unreadable: " + filename.string());
			return data;
		}

		std::ifstream file(filename, std::ios::binary);
		if (!file.is_open())
		{
			Log::GetLog()->error("Error opening cache map for reading: " + filename.string());
			return data;
		}

		constexpr std::uintmax_t maxKeySize = 1024 * 1024;
		constexpr std::size_t maxEntryCount = 5'000'000;
		std::uintmax_t bytesRemaining = fileSize;
		while (bytesRemaining > 0)
		{
			if (bytesRemaining < sizeof(std::size_t))
				return {};

			std::size_t keySize = 0;
			if (!file.read(reinterpret_cast<char*>(&keySize), sizeof(keySize)))
				return {};
			bytesRemaining -= sizeof(keySize);
			if (keySize == 0 || keySize > maxKeySize || keySize > bytesRemaining)
				return {};
			bytesRemaining -= keySize;
			if (bytesRemaining < sizeof(T))
				return {};

			std::string key(keySize, '\0');
			if (!file.read(key.data(), static_cast<std::streamsize>(keySize)))
				return {};

			T value{};
			if (!file.read(reinterpret_cast<char*>(&value), sizeof(T)))
				return {};
			bytesRemaining -= sizeof(T);

			if (!data.emplace(std::move(key), value).second)
				return {};
			if (data.size() > maxEntryCount)
				return {};
		}

		return data;
	}

	void saveToFilePlain(const std::filesystem::path& filename, const std::unordered_map<std::string, intptr_t>& map);

	std::unordered_set<std::string> readFileIntoSet(const std::filesystem::path& filename);

	static const std::unordered_set<std::string> default_filters = {
		"$",
		"<",
		"Z_",
		"z_",
		"zlib",
		"xatlas",
		"_",
		"TSet",
		"TSQVisitor",
		"TReversePredicate",
		"TResourceArray",
		"TResizableCircularQueue",
		"TRenderThreadStruct",
		"TRenderResourcePool",
		"TRenderAssetUpdate",
		"TRemove",
		"TRHILambdaCommand",
		"TRDGLambdaPass",
		"TQueue",
		"TProperty",
		"TPrivateObjectPtr",
		"TPairInitializer",
		"TObjectPtr",
		"TMapBase",
		"TBase",
		"TArray",
		"SharedPointerInternals",
		"TSharedRef",
		"TSizedInlineAllocator",
		"TSparseArray",
		"TTypedElementList",
		"TUniquePtr",
		"TWeakPtr",
		"UE.",
		"UScriptStruct",
		"oo2::",
		"std::",
		"ogg",
		"oidn",
		"ngx",
		"curl",
		"dt",
		"cpp",
		"Vulkan",
		"USynth",
		"UUI",
		"TType",
		"UE.",
		"UE:",
		"TkDOP",
		"TStatic",
		"TSlateBaseNamedArgs",
		"TSharedFromThis",
		"TShaderRefBase",
		"TMeshProcessorShaders",
		"TMaterialCHS",
		"TGraphTask",
		"TDelegate",
		"TCommon",
		"STableRow",
		"SNotification",
		"Nanite",
		"Metasound",
		"IPCGAttributeAccessorT",
		"ITyped",
		"FWide",
		"FView",
		"FSource",
		"FShader",
		"FRig",
		"FRender",
		"FRecast",
		"FRDG",
		"FPixel",
		"FOpen",
		"FOnlineFriendsSpec",
		"FNiagara",
		"FNDI",
		"FMovie",
		"FLumen",
		"FD3D",
		"FComputeShaderUtils",
		"FCombine",
		"Eigen",
		"D3D",
		"Chaos",
		"Build",
		"BINK",
		"Aws",
		"Audio",
		"Add",
		"Algo",
		"PCG",
		"TInd",
		"TSha",
		"TSlate",
		"TWeakBase",
		"UWi",
		"TIndTSha",
		"TSlate",
		"TWeakBase",
		"UWin"
	};
}
