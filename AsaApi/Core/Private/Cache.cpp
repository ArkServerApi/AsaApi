#pragma comment(lib, "libcrypto.lib")

#include "Cache.h"

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

		const auto fileSize = std::filesystem::file_size(filename);
		std::vector<char> buffer(fileSize);

		if (!file.read(buffer.data(), fileSize)) {
			Log::GetLog()->error("Error reading file for SHA-256 calculation: " + filename.string());
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

		if (EVP_DigestUpdate(mdctx.get(), buffer.data(), fileSize) != 1) {
			Log::GetLog()->error("Error updating SHA-256 context");
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

	void saveToFile(const std::filesystem::path& filename, const std::string& content)
	{
		std::ofstream file(filename, std::ios::binary | std::ios::trunc);
		if (file.is_open()) {
			file.write(content.data(), content.size());
			file.close();
			return;
		}

		Log::GetLog()->error("Error opening file for writing: " + filename.string());
	}

	std::string readFromFile(const std::filesystem::path& filename)
	{
		std::ifstream file(filename, std::ios::binary);
		if (file.is_open()) {
			std::string content;
			file.seekg(0, std::ios::end);
			content.resize(file.tellg());
			file.seekg(0, std::ios::beg);
			file.read(&content[0], content.size());
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