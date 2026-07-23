#pragma comment(lib, "libcrypto.lib")

#include "Cache.h"

#include <array>
#include <unordered_map>
#include <string>
#include <cstdint>
#include <filesystem>
#include <openssl/evp.h>

namespace Cache
{
	std::string calculateSHA256(const std::filesystem::path& filename)
	{
		std::ifstream file(filename, std::ios::binary);
		if (!file.is_open()) {
			Log::GetLog()->error("Error opening file for SHA-256 calculation: " + filename.string());
			return "";
		}

		std::unique_ptr<EVP_MD_CTX, decltype(&EVP_MD_CTX_free)> mdctx(EVP_MD_CTX_new(), &EVP_MD_CTX_free);
		if (mdctx == nullptr) {
			Log::GetLog()->error("Error creating EVP_MD_CTX");
			return "";
		}

		if (EVP_DigestInit_ex(mdctx.get(), EVP_sha256(), nullptr) != 1) {
			Log::GetLog()->error("Error initializing SHA-256 context");
			return "";
		}

		std::array<char, 64 * 1024> buffer{};
		while (file)
		{
			file.read(buffer.data(), static_cast<std::streamsize>(buffer.size()));
			const std::streamsize bytesRead = file.gcount();
			if (bytesRead > 0 && EVP_DigestUpdate(mdctx.get(), buffer.data(), static_cast<std::size_t>(bytesRead)) != 1)
			{
				Log::GetLog()->error("Error updating SHA-256 context");
				return "";
			}
		}

		if (!file.eof())
		{
			Log::GetLog()->error("Error reading file for SHA-256 calculation: " + filename.string());
			return "";
		}

		unsigned char digest[EVP_MAX_MD_SIZE];
		unsigned int digestLen;
		if (EVP_DigestFinal_ex(mdctx.get(), digest, &digestLen) != 1) {
			Log::GetLog()->error("Error finalizing SHA-256 context");
			return "";
		}

		std::string result;
		result.reserve(digestLen * 2);
		for (unsigned int i = 0; i < digestLen; i++) {
			char hex[3];
			snprintf(hex, sizeof(hex), "%02x", digest[i]);
			result += hex;
		}

		return result;
	}

	bool saveToFile(const std::filesystem::path& filename, const std::string& content)
	{
		std::filesystem::path temporaryFile = filename;
		temporaryFile += ".tmp";

		std::error_code error;
		std::filesystem::remove(temporaryFile, error);

		std::ofstream file(temporaryFile, std::ios::binary | std::ios::trunc);
		if (!file.is_open())
		{
			Log::GetLog()->error("Error opening file for writing: " + temporaryFile.string());
			return false;
		}

		file.write(content.data(), static_cast<std::streamsize>(content.size()));
		file.flush();
		file.close();
		const bool writeSucceeded = !file.fail();

		if (!writeSucceeded)
		{
			Log::GetLog()->error("Error writing file: " + temporaryFile.string());
			std::filesystem::remove(temporaryFile, error);
			return false;
		}

		HANDLE temporaryFileHandle = CreateFileW(
			temporaryFile.c_str(),
			GENERIC_WRITE,
			FILE_SHARE_READ,
			nullptr,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL,
			nullptr);
		if (temporaryFileHandle == INVALID_HANDLE_VALUE)
		{
			Log::GetLog()->error("Error opening temporary metadata for flushing: " + temporaryFile.string());
			std::filesystem::remove(temporaryFile, error);
			return false;
		}

		const bool flushSucceeded = FlushFileBuffers(temporaryFileHandle) != FALSE;
		const DWORD flushError = flushSucceeded ? ERROR_SUCCESS : GetLastError();
		CloseHandle(temporaryFileHandle);
		if (!flushSucceeded)
		{
			Log::GetLog()->error(
				"Error flushing temporary metadata: " + temporaryFile.string() + " (" + std::to_string(flushError) + ")");
			std::filesystem::remove(temporaryFile, error);
			return false;
		}

		if (!MoveFileExW(
			temporaryFile.c_str(),
			filename.c_str(),
			MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
		{
			Log::GetLog()->error(
				"Error replacing file: " + filename.string() + " (" + std::to_string(GetLastError()) + ")");
			std::filesystem::remove(temporaryFile, error);
			return false;
		}

		return true;
	}

	std::string readFromFile(const std::filesystem::path& filename)
	{
		std::ifstream file(filename, std::ios::binary);
		if (file.is_open()) {
			std::string content;
			file.seekg(0, std::ios::end);
			content.resize(file.tellg());
			file.seekg(0, std::ios::beg);
			if (!content.empty())
				file.read(content.data(), static_cast<std::streamsize>(content.size()));
			return content;
		}

		if (std::filesystem::exists(filename))
			Log::GetLog()->error("Error file exists but is not readable: " + filename.string());

		return "";
	}

	void saveToFilePlain(const std::filesystem::path& filename, const std::unordered_map<std::string, intptr_t>& map)
	{
		std::ofstream file(filename, std::ios::trunc);
		if (file.is_open())
		{
			std::vector<std::pair<std::string, intptr_t>> sortedVec(map.begin(), map.end());
			std::sort(sortedVec.begin(), sortedVec.end(), [](const auto& a, const auto& b) { return a.first < b.first; });

			for (const auto& pair : sortedVec)
			{
				std::string data(fmt::format("{}\n", pair.first));
				file.write(data.data(), data.size());
			}
			file.close();
			return;
		}

		Log::GetLog()->error("Error opening file for writing: " + filename.string());
	}

	std::unordered_set<std::string> readFileIntoSet(const std::filesystem::path& filename)
	{
		std::unordered_set<std::string> set;

		std::ifstream file(filename);
		if (!file.is_open())
			return default_filters;

		std::string line;
		while (std::getline(file, line))
		{
			set.insert(line);
		}

		file.close();
		return set;
	}
}
