#include "ArkBaseApi.h"
#include "..\PluginManager\PluginManager.h"
#include "..\Private\Offsets.h"
#include "..\Private\Cache.h"
#include "..\Hooks.h"
#include "..\Commands.h"
#include "Tools.h"
#include <Logger/Logger.h>
#include "HooksImpl.h"
#include "ApiUtils.h"
#include <algorithm>
#include <cctype>
#include <filesystem>
#include <fstream>
#include <optional>
#include <random>
#include <vector>
#include "Requests.h"
#include <Windows.h>
#include <minizip/unzip.h>
#include <minizip/iowin32.h>

namespace API
{
	namespace
	{
		constexpr std::size_t cache_metadata_version = 1;
		constexpr std::size_t usable_cache_retry_attempts = 3;

		struct CacheMetadata
		{
			std::string executableHash;
			std::string lastModified;
			std::string cacheDirectory;
		};

		struct LocalCacheState
		{
			std::optional<CacheMetadata> metadata;
			std::filesystem::path cacheDirectory;
			std::filesystem::path offsetsFile;
			std::filesystem::path bitfieldsFile;
			bool filesValid = false;
			bool usable = false;
		};

		std::string Trim(std::string value)
		{
			const auto isNotWhitespace = [](unsigned char character)
			{
				return !std::isspace(character);
			};

			value.erase(value.begin(), std::find_if(value.begin(), value.end(), isNotWhitespace));
			value.erase(std::find_if(value.rbegin(), value.rend(), isNotWhitespace).base(), value.end());
			return value;
		}

		bool NormalizeSha256(std::string& value)
		{
			value = Trim(std::move(value));
			if (value.size() != 64)
				return false;

			for (char& character : value)
			{
				const bool isDigit = character >= '0' && character <= '9';
				const bool isLowerHex = character >= 'a' && character <= 'f';
				const bool isUpperHex = character >= 'A' && character <= 'F';
				if (!isDigit && !isLowerHex && !isUpperHex)
					return false;

				if (isUpperHex)
					character = static_cast<char>(character - 'A' + 'a');
			}

			return true;
		}

		bool IsSafeGenerationDirectory(const std::string& value)
		{
			const std::filesystem::path relativePath(value);
			if (relativePath.empty() || relativePath.is_absolute() || relativePath.has_root_name()
				|| relativePath.has_root_directory() || relativePath.parent_path() != std::filesystem::path("generations"))
			{
				return false;
			}

			const std::string directoryName = relativePath.filename().string();
			const std::size_t firstSeparator = directoryName.find('-');
			const std::size_t secondSeparator = directoryName.find('-', firstSeparator + 1);
			const std::size_t thirdSeparator = directoryName.find('-', secondSeparator + 1);
			if (firstSeparator != 64 || secondSeparator == std::string::npos || thirdSeparator == std::string::npos
				|| directoryName.find('-', thirdSeparator + 1) != std::string::npos)
			{
				return false;
			}

			std::string hash = directoryName.substr(0, firstSeparator);
			const auto isDecimal = [](const std::string& part)
			{
				return !part.empty() && std::all_of(part.begin(), part.end(), [](unsigned char character)
				{
					return std::isdigit(character) != 0;
				});
			};

			return NormalizeSha256(hash)
				&& isDecimal(directoryName.substr(firstSeparator + 1, secondSeparator - firstSeparator - 1))
				&& isDecimal(directoryName.substr(secondSeparator + 1, thirdSeparator - secondSeparator - 1))
				&& isDecimal(directoryName.substr(thirdSeparator + 1));
		}

		std::optional<CacheMetadata> ParseCacheMetadata(const std::string& content)
		{
			try
			{
				const nlohmann::json metadataJson = nlohmann::json::parse(content);
				if (metadataJson.is_object()
					&& metadataJson.value("version", 0U) == cache_metadata_version)
				{
					CacheMetadata metadata{
						metadataJson.value("executable_hash", std::string{}),
						metadataJson.value("last_modified", std::string{}),
						metadataJson.value("cache_directory", std::string{})
					};

					if (NormalizeSha256(metadata.executableHash)
						&& (metadata.cacheDirectory.empty() || IsSafeGenerationDirectory(metadata.cacheDirectory)))
					{
						return metadata;
					}
				}
			}
			catch (const nlohmann::json::exception&)
			{
				// Raw hashes are accepted only when they match the current executable. Historical PDB hashes will not match.
			}

			std::string legacyHash = content;
			if (NormalizeSha256(legacyHash))
				return CacheMetadata{ std::move(legacyHash), {}, {} };

			return std::nullopt;
		}

		std::string SerializeCacheMetadata(const CacheMetadata& metadata)
		{
			return nlohmann::json{
				{ "version", cache_metadata_version },
				{ "executable_hash", metadata.executableHash },
				{ "last_modified", metadata.lastModified },
				{ "cache_directory", metadata.cacheDirectory }
			}.dump();
		}

		LocalCacheState InspectLocalCache(
			const std::filesystem::path& cacheRoot,
			const std::filesystem::path& keyCacheFile,
			const std::string& executableHash)
		{
			LocalCacheState state;
			state.cacheDirectory = cacheRoot;
			state.metadata = ParseCacheMetadata(Cache::readFromFile(keyCacheFile));
			if (!state.metadata || state.metadata->executableHash != executableHash)
				return state;

			if (!state.metadata->cacheDirectory.empty())
				state.cacheDirectory /= std::filesystem::path(state.metadata->cacheDirectory);

			state.offsetsFile = state.cacheDirectory / "cached_offsets.cache";
			state.bitfieldsFile = state.cacheDirectory / "cached_bitfields.cache";
			state.filesValid = Cache::validateSerializedMap<intptr_t>(state.offsetsFile)
				&& Cache::validateSerializedMap<BitField>(state.bitfieldsFile);
			state.usable = state.filesValid;
			return state;
		}

		void RemoveFileNoThrow(const std::filesystem::path& path)
		{
			std::error_code error;
			std::filesystem::remove(path, error);
		}

		void RemoveDirectoryNoThrow(const std::filesystem::path& path)
		{
			std::error_code error;
			std::filesystem::remove_all(path, error);
		}

		bool FlushFileToDisk(const std::filesystem::path& path)
		{
			HANDLE fileHandle = CreateFileW(
				path.c_str(),
				GENERIC_WRITE,
				FILE_SHARE_READ,
				nullptr,
				OPEN_EXISTING,
				FILE_ATTRIBUTE_NORMAL,
				nullptr);
			if (fileHandle == INVALID_HANDLE_VALUE)
				return false;

			const bool succeeded = FlushFileBuffers(fileHandle) != FALSE;
			CloseHandle(fileHandle);
			return succeeded;
		}

		void CleanupOldCacheGenerations(
			const std::filesystem::path& cacheRoot,
			const std::filesystem::path& selectedCacheDirectory)
		{
			const std::filesystem::path generationsDirectory = cacheRoot / "generations";
			const std::filesystem::path normalizedSelected = selectedCacheDirectory.lexically_normal();
			std::error_code iteratorError;
			for (std::filesystem::directory_iterator iterator(generationsDirectory, iteratorError), end;
				!iteratorError && iterator != end; iterator.increment(iteratorError))
			{
				std::error_code statusError;
				const auto status = iterator->symlink_status(statusError);
				const std::string relativeName = "generations/" + iterator->path().filename().string();
				if (statusError || status.type() != std::filesystem::file_type::directory
					|| !IsSafeGenerationDirectory(relativeName))
				{
					continue;
				}

				if (iterator->path().lexically_normal() != normalizedSelected)
					RemoveDirectoryNoThrow(iterator->path());
			}
		}
	}

	constexpr float api_version = 2.02f;

	ArkBaseApi::ArkBaseApi()
		: commands_(std::make_unique<AsaApi::Commands>()),
		hooks_(std::make_unique<Hooks>()),
		api_utils_(std::make_unique<AsaApi::ApiUtils>())
	{
	}

	bool ArkBaseApi::Init()
	{
		nlohmann::json apiConfig = ArkBaseApi::GetConfig();
		const nlohmann::json autoCacheConfig = apiConfig.value("settings", nlohmann::json::object()).value("AutomaticCacheDownload", nlohmann::json::object());
		namespace fs = std::filesystem;
		
		Log::GetLog()->info("-----------------------------------------------");
		Log::GetLog()->info("ARK:SA Api V{:.2f}", GetVersion());
		Log::GetLog()->info("Brought to you by ArkServerApi");
		Log::GetLog()->info("https://github.com/orgs/ArkServerApi");
		Log::GetLog()->info("Website: https://ark-server-api.com");
		Log::GetLog()->info("Loading...\n");

		std::unordered_map<std::string, intptr_t> offsets_dump;
		std::unordered_map<std::string, BitField> bitfields_dump;
		std::optional<CacheMetadata> pendingCacheMetadata;
		fs::path pendingKeyCacheFile;
		fs::path pendingCacheDirectory;
		fs::path activeCacheRoot;
		fs::path activeCacheDirectory;

		try
		{
			TCHAR buffer[MAX_PATH];
			const DWORD executablePathLength = GetModuleFileName(nullptr, buffer, static_cast<DWORD>(std::size(buffer)));
			if (executablePathLength == 0 || executablePathLength >= std::size(buffer))
				throw std::runtime_error("Unable to resolve the server executable path");

			fs::path exe_path = std::filesystem::path(buffer).parent_path();
			const fs::path executableFile = exe_path / "ArkAscendedServer.exe";
			const fs::path arkApiDir = exe_path / ArkBaseApi::GetApiName();
			const fs::path cacheRoot = arkApiDir / "Cache";
			const fs::path keyCacheFile = cacheRoot / "cached_key.cache";

			fs::create_directories(arkApiDir / "Plugins");
			fs::create_directories(cacheRoot);

			const std::string fileHash = Cache::calculateSHA256(executableFile);
			if (fileHash.empty())
				return false;

			const std::string defaultCDNUrl = "https://cdn.pelayori.com/cache/";

			const DWORD dllFlags = LOAD_LIBRARY_SEARCH_APPLICATION_DIR |
				LOAD_LIBRARY_SEARCH_DEFAULT_DIRS |
				LOAD_LIBRARY_SEARCH_USER_DIRS;

			if (!SetDefaultDllDirectories(dllFlags))
			{
				const DWORD err = GetLastError();
				Log::GetLog()->warn("SetDefaultDllDirectories failed ({}). Falling back to SetDllDirectoryW.", err);

				std::wstring wApiDir = arkApiDir.wstring();
				if (!SetDllDirectoryW(wApiDir.c_str()))
				{
					Log::GetLog()->warn("SetDllDirectoryW failed ({}) for path: {}", GetLastError(), arkApiDir.string());
				}
			}

			const std::wstring w = arkApiDir.wstring();
			DLL_DIRECTORY_COOKIE cookie = AddDllDirectory(w.c_str());
			if (cookie == nullptr)
			{
				Log::GetLog()->warn("AddDllDirectory failed ({}) for path: {}", GetLastError(), std::filesystem::path(w).string());
			}
			else
			{
				Log::GetLog()->info("Added DLL search directory: {}", std::filesystem::path(w).string());
			}

			const bool automaticCacheDownloadEnabled = autoCacheConfig.value("Enable", true);
			std::string cacheDownloadUrl = autoCacheConfig.value("DownloadCacheURL", defaultCDNUrl);
			if (!cacheDownloadUrl.empty() && cacheDownloadUrl.back() != '/')
				cacheDownloadUrl.push_back('/');

			const auto retrySeed = static_cast<std::mt19937::result_type>(GetTickCount64())
				^ static_cast<std::mt19937::result_type>(GetCurrentProcessId());
			std::mt19937 randomGenerator(retrySeed);
			std::uniform_int_distribution<DWORD> retryDelaySeconds(30, 60);

			for (;;)
			{
				if (!pendingCacheDirectory.empty())
					RemoveDirectoryNoThrow(pendingCacheDirectory);
				pendingCacheMetadata.reset();
				pendingKeyCacheFile.clear();
				pendingCacheDirectory.clear();
				LocalCacheState selectedCache;
				if (automaticCacheDownloadEnabled && !cacheDownloadUrl.empty())
				{
					const std::string archiveName = fileHash + ".zip";
					const std::string downloadFile = cacheDownloadUrl + archiveName;
					const fs::path localFile = cacheRoot / archiveName;
					std::size_t failuresWithUsableCache = 0;
					LocalCacheState localCache;
					bool localCacheInspected = false;

					for (;;)
					{
						if (!localCacheInspected || !localCache.usable)
						{
							Log::GetLog()->info("Checking for a verified local cache for {}", archiveName);
							localCache = InspectLocalCache(cacheRoot, keyCacheFile, fileHash);
							localCacheInspected = true;
							CleanupOldCacheGenerations(cacheRoot, localCache.cacheDirectory);

							if (localCache.usable)
								Log::GetLog()->info("A verified local cache matches the current executable");
							else
								Log::GetLog()->info("No verified local cache matches the current executable");
						}

						std::string remoteTimestamp;
						bool remoteTimestampAvailable = false;
						bool shouldDownload = !localCache.usable;
						if (localCache.usable)
						{
							Log::GetLog()->info(
								"Checking {} for an updated cache archive (attempt {}/{})",
								archiveName,
								failuresWithUsableCache + 1,
								usable_cache_retry_attempts);
							remoteTimestampAvailable = Requests::GetFileLastModified(downloadFile, remoteTimestamp);
							if (remoteTimestampAvailable
								&& localCache.metadata->lastModified == remoteTimestamp)
							{
								Log::GetLog()->info("The verified local cache is current");
								selectedCache = std::move(localCache);
								break;
							}

							if (!remoteTimestampAvailable)
								Log::GetLog()->warn("Unable to check {} for updates", archiveName);
							shouldDownload = remoteTimestampAvailable;
						}

						bool cacheAcquired = false;
						if (shouldDownload)
						{
							Log::GetLog()->info("Downloading cache archive {}", archiveName);
							fs::path extractedCacheDirectory;
							std::string downloadedTimestamp;
							if (ArkBaseApi::DownloadCacheFiles(
								downloadFile, localFile, extractedCacheDirectory, downloadedTimestamp))
							{
								std::error_code relativePathError;
								const fs::path relativeCacheDirectory = fs::relative(
									extractedCacheDirectory, cacheRoot, relativePathError);
								const std::string relativeCacheDirectoryString = relativeCacheDirectory.generic_string();
								const CacheMetadata newMetadata{
									fileHash,
									!downloadedTimestamp.empty()
										? downloadedTimestamp
										: (remoteTimestampAvailable ? remoteTimestamp : std::string{}),
									relativeCacheDirectoryString
								};

								if (!relativePathError && IsSafeGenerationDirectory(relativeCacheDirectoryString))
								{
									selectedCache.metadata = newMetadata;
									selectedCache.cacheDirectory = extractedCacheDirectory;
									selectedCache.offsetsFile = extractedCacheDirectory / "cached_offsets.cache";
									selectedCache.bitfieldsFile = extractedCacheDirectory / "cached_bitfields.cache";
									selectedCache.filesValid = true;
									selectedCache.usable = true;
									pendingCacheMetadata = newMetadata;
									pendingKeyCacheFile = keyCacheFile;
									pendingCacheDirectory = extractedCacheDirectory;
									cacheAcquired = true;
								}

								if (!cacheAcquired)
									RemoveDirectoryNoThrow(extractedCacheDirectory);
							}
						}

						RemoveFileNoThrow(localFile);
						if (cacheAcquired)
							break;

						if (localCache.usable)
						{
							++failuresWithUsableCache;
							if (failuresWithUsableCache >= usable_cache_retry_attempts)
							{
								Log::GetLog()->warn(
									"Cache refresh failed after {} attempts. Continuing with the verified local cache.",
									failuresWithUsableCache);
								selectedCache = std::move(localCache);
								break;
							}
						}
						else
						{
							failuresWithUsableCache = 0;
							localCacheInspected = false;
						}

						const DWORD retryDelay = retryDelaySeconds(randomGenerator);
						Log::GetLog()->warn(
							"Cache archive {} is unavailable or invalid. Retrying in {} seconds.",
							archiveName,
							retryDelay);
						Sleep(retryDelay * 1000);
					}
				}
				else
				{
					for (;;)
					{
						selectedCache = InspectLocalCache(cacheRoot, keyCacheFile, fileHash);
						if (selectedCache.usable)
							break;

						const DWORD retryDelay = retryDelaySeconds(randomGenerator);
						Log::GetLog()->critical(
							"Automatic cache download is disabled and no verified cache matches this executable. "
							"Checking again in {} seconds.",
							retryDelay);
						Sleep(retryDelay * 1000);
					}
				}

				Log::GetLog()->info("Reading cached offsets");
				offsets_dump = Cache::deserializeMap<intptr_t>(selectedCache.offsetsFile);

				Log::GetLog()->info("Reading cached bitfields");
				bitfields_dump = Cache::deserializeMap<BitField>(selectedCache.bitfieldsFile);

				if (!offsets_dump.empty() && !bitfields_dump.empty())
				{
					activeCacheRoot = cacheRoot;
					activeCacheDirectory = selectedCache.cacheDirectory;
					break;
				}

				offsets_dump.clear();
				bitfields_dump.clear();
				const DWORD retryDelay = retryDelaySeconds(randomGenerator);
				Log::GetLog()->critical(
					"The selected cache became unreadable. Returning to cache acquisition in {} seconds.", retryDelay);
				Sleep(retryDelay * 1000);
			}
		}
		catch (const std::exception& error)
		{
			if (!pendingCacheDirectory.empty())
				RemoveDirectoryNoThrow(pendingCacheDirectory);
			Log::GetLog()->critical("Failed to initialize cache - {}", error.what());
			return false;
		}

		Offsets::Get().Init(move(offsets_dump), move(bitfields_dump));
		Sleep(10);
		AsaApi::InitHooks();

		bool cacheMetadataCommitted = true;
		if (pendingCacheMetadata)
		{
			cacheMetadataCommitted = Cache::saveToFile(
				pendingKeyCacheFile, SerializeCacheMetadata(*pendingCacheMetadata));
			if (!cacheMetadataCommitted)
			{
				RemoveDirectoryNoThrow(pendingCacheDirectory);
				pendingCacheDirectory.clear();
				Log::GetLog()->error(
					"The new cache loaded successfully, but its metadata could not be committed. "
					"Existing cache metadata was left unchanged, so acquisition will be retried on the next startup.");
			}
			else
			{
				pendingCacheDirectory.clear();
			}
		}

		if (cacheMetadataCommitted)
			CleanupOldCacheGenerations(activeCacheRoot, activeCacheDirectory);
		Log::GetLog()->info("API was successfully loaded");
		Log::GetLog()->info("-----------------------------------------------\n");

		return true;
	}

	nlohmann::json ArkBaseApi::GetConfig()
	{
		const std::string config_path = AsaApi::Tools::GetCurrentDir() + "/config.json";
		std::ifstream file{ config_path };
		if (!file.is_open())
			return false;

		nlohmann::json config;
		file >> config;
		file.close();

		return config;
	}

	bool ArkBaseApi::DownloadCacheFiles(
		const std::filesystem::path downloadFile,
		const std::filesystem::path localFile,
		std::filesystem::path& extractedCacheDirectory,
		std::string& downloadedTimestamp)
	{
		namespace fs = std::filesystem;
		extractedCacheDirectory.clear();
		downloadedTimestamp.clear();
		constexpr std::uint64_t maximumArchiveDownloadSize = 768ULL * 1024ULL * 1024ULL;
		if (!API::Requests::DownloadFile(
			downloadFile.string(), localFile.string(), {}, maximumArchiveDownloadSize, downloadedTimestamp))
			return false;

		const fs::path cacheRoot = localFile.parent_path();
		const fs::path generationsDirectory = cacheRoot / "generations";
		std::error_code directoryError;
		fs::create_directories(generationsDirectory, directoryError);
		if (directoryError)
		{
			Log::GetLog()->error("Unable to create cache generation directory: {}", directoryError.message());
			return false;
		}

		fs::path stagingDirectory;
		const std::string generationPrefix = localFile.stem().string() + "-"
			+ std::to_string(GetCurrentProcessId()) + "-" + std::to_string(GetTickCount64());
		for (unsigned int suffix = 0; suffix < 100; ++suffix)
		{
			const fs::path candidate = generationsDirectory / (generationPrefix + "-" + std::to_string(suffix));
			std::error_code createError;
			if (fs::create_directory(candidate, createError))
			{
				stagingDirectory = candidate;
				break;
			}
			if (createError)
				break;
		}

		if (stagingDirectory.empty())
		{
			Log::GetLog()->error("Unable to create a unique cache staging directory");
			return false;
		}

		zlib_filefunc64_def fileFunctions{};
		fill_win32_filefunc64W(&fileFunctions);
		unzFile archive = unzOpen2_64(localFile.c_str(), &fileFunctions);
		bool currentFileOpen = false;
		auto failExtraction = [&]()
		{
			if (currentFileOpen)
				unzCloseCurrentFile(archive);
			if (archive != nullptr)
				unzClose(archive);
			RemoveDirectoryNoThrow(stagingDirectory);
			return false;
		};

		if (archive == nullptr)
			return failExtraction();

		unz_global_info64 globalInfo{};
		if (unzGetGlobalInfo64(archive, &globalInfo) != UNZ_OK || globalInfo.number_entry < 2
			|| globalInfo.number_entry > 4
			|| unzGoToFirstFile(archive) != UNZ_OK)
		{
			return failExtraction();
		}

		bool offsetsSeen = false;
		bool bitfieldsSeen = false;
		bool keySeen = false;
		bool plainOffsetsSeen = false;
		char readBuffer[8192];
		constexpr ZPOS64_T maximumCacheEntrySize = 512ULL * 1024ULL * 1024ULL;
		constexpr ZPOS64_T maximumTotalCacheSize = 768ULL * 1024ULL * 1024ULL;
		ZPOS64_T totalCacheSize = 0;

		for (ZPOS64_T index = 0; index < globalInfo.number_entry; ++index)
		{
			unz_file_info64 fileInfo{};
			if (unzGetCurrentFileInfo64(archive, &fileInfo, nullptr, 0, nullptr, 0, nullptr, 0) != UNZ_OK
				|| fileInfo.size_filename == 0 || fileInfo.size_filename > 1024)
			{
				return failExtraction();
			}

			std::vector<char> filenameBuffer(static_cast<std::size_t>(fileInfo.size_filename) + 1, '\0');
			if (unzGetCurrentFileInfo64(
				archive, &fileInfo, filenameBuffer.data(), static_cast<uLong>(filenameBuffer.size()),
				nullptr, 0, nullptr, 0) != UNZ_OK)
			{
				return failExtraction();
			}

			const std::string entryName(filenameBuffer.data(), static_cast<std::size_t>(fileInfo.size_filename));
			if (entryName.find('\0') != std::string::npos)
				return failExtraction();

			fs::path outputFile;
			bool* entrySeen = nullptr;
			if (entryName == "cached_offsets.cache")
			{
				outputFile = stagingDirectory / "cached_offsets.cache";
				entrySeen = &offsetsSeen;
			}
			else if (entryName == "cached_bitfields.cache")
			{
				outputFile = stagingDirectory / "cached_bitfields.cache";
				entrySeen = &bitfieldsSeen;
			}
			else if (entryName == "cached_key.cache")
			{
				if (keySeen)
					return failExtraction();
				keySeen = true;
			}
			else if (entryName == "cached_offsets.txt")
			{
				outputFile = stagingDirectory / "cached_offsets.txt";
				entrySeen = &plainOffsetsSeen;
			}
			else
			{
				Log::GetLog()->error("Rejected unexpected cache archive entry: {}", entryName);
				return failExtraction();
			}

			if (entrySeen != nullptr)
			{
				if (*entrySeen || fileInfo.uncompressed_size == 0
					|| fileInfo.uncompressed_size > maximumCacheEntrySize
					|| totalCacheSize > maximumTotalCacheSize - fileInfo.uncompressed_size)
				{
					return failExtraction();
				}
				*entrySeen = true;
				totalCacheSize += fileInfo.uncompressed_size;

				if (unzOpenCurrentFile(archive) != UNZ_OK)
					return failExtraction();
				currentFileOpen = true;

				std::ofstream output(outputFile, std::ios::binary | std::ios::trunc);
				if (!output.is_open())
					return failExtraction();

				ZPOS64_T bytesWritten = 0;
				bool readSucceeded = true;
				for (;;)
				{
					const int bytesRead = unzReadCurrentFile(archive, readBuffer, sizeof(readBuffer));
					if (bytesRead < 0)
					{
						readSucceeded = false;
						break;
					}
					if (bytesRead == 0)
						break;

					output.write(readBuffer, bytesRead);
					if (!output)
					{
						readSucceeded = false;
						break;
					}
					bytesWritten += static_cast<ZPOS64_T>(bytesRead);
				}

				output.flush();
				const bool outputSucceeded = output.good();
				output.close();
				const int closeResult = unzCloseCurrentFile(archive);
				currentFileOpen = false;
				if (!readSucceeded || !outputSucceeded || !output || closeResult != UNZ_OK
					|| bytesWritten != fileInfo.uncompressed_size || !FlushFileToDisk(outputFile))
				{
					return failExtraction();
				}
			}

			if ((index + 1) < globalInfo.number_entry && unzGoToNextFile(archive) != UNZ_OK)
				return failExtraction();
		}

		const int archiveCloseResult = unzClose(archive);
		archive = nullptr;
		if (archiveCloseResult != UNZ_OK || !offsetsSeen || !bitfieldsSeen
			|| !Cache::validateSerializedMap<intptr_t>(stagingDirectory / "cached_offsets.cache")
			|| !Cache::validateSerializedMap<BitField>(stagingDirectory / "cached_bitfields.cache"))
		{
			return failExtraction();
		}

		Log::GetLog()->info("Cache files downloaded and processed successfully");
		extractedCacheDirectory = stagingDirectory;
		return true;
	}

	float ArkBaseApi::GetVersion()
	{
		return api_version;
	}

	std::string ArkBaseApi::GetApiName()
	{
		return "ArkApi";
	}

	std::unique_ptr<AsaApi::IHooks>& ArkBaseApi::GetHooks()
	{
		return hooks_;
	}

	std::unique_ptr<AsaApi::ICommands>& ArkBaseApi::GetCommands()
	{
		return commands_;
	}

	std::unique_ptr<AsaApi::IApiUtils>& ArkBaseApi::GetApiUtils()
	{
		return api_utils_;
	}

	void ArkBaseApi::RegisterCommands()
	{
		GetCommands()->AddConsoleCommand("plugins.load", &LoadPluginCmd);
		GetCommands()->AddConsoleCommand("plugins.unload", &UnloadPluginCmd);
		GetCommands()->AddRconCommand("plugins.load", &LoadPluginRcon);
		GetCommands()->AddRconCommand("plugins.unload", &UnloadPluginRcon);
		GetCommands()->AddRconCommand("map.setserverid", &SetServerID);
	}

	FString ArkBaseApi::LoadPlugin(FString* cmd)
	{
		TArray<FString> parsed;
		cmd->ParseIntoArray(parsed, L" ", true);

		if (parsed.IsValidIndex(1))
		{
			const std::string plugin_name = parsed[1].ToString();

			try
			{
				PluginManager::Get().LoadPlugin(plugin_name);
			}
			catch (const std::exception& error)
			{
				Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
				return FString::Format("Failed to load plugin - {}", error.what());
			}

			Log::GetLog()->info("Loaded plugin - {}", plugin_name.c_str());

			return "Successfully loaded plugin";
		}

		return "Plugin not found";
	}

	FString ArkBaseApi::UnloadPlugin(FString* cmd)
	{
		TArray<FString> parsed;
		cmd->ParseIntoArray(parsed, L" ", true);

		if (parsed.IsValidIndex(1))
		{
			const std::string plugin_name = parsed[1].ToString();

			try
			{
				PluginManager::Get().UnloadPlugin(plugin_name);
			}
			catch (const std::exception& error)
			{
				Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
				return *FString::Format("Failed to unload plugin - {}", error.what());
			}

			Log::GetLog()->info("Unloaded plugin - {}", plugin_name.c_str());

			return L"Successfully unloaded plugin";
		}

		return L"Plugin not found";
	}

	// Command Callbacks
	void ArkBaseApi::LoadPluginCmd(APlayerController* player_controller, FString* cmd, bool /*unused*/)
	{
		auto* shooter_controller = static_cast<AShooterPlayerController*>(player_controller);
		AsaApi::GetApiUtils().SendServerMessage(shooter_controller, FColorList::Green, *LoadPlugin(cmd));
	}

	void ArkBaseApi::UnloadPluginCmd(APlayerController* player_controller, FString* cmd, bool /*unused*/)
	{
		auto* shooter_controller = static_cast<AShooterPlayerController*>(player_controller);
		AsaApi::GetApiUtils().SendServerMessage(shooter_controller, FColorList::Green, *UnloadPlugin(cmd));
	}

	// RCON Command Callbacks
	void ArkBaseApi::LoadPluginRcon(RCONClientConnection* rcon_connection, RCONPacket* rcon_packet, UWorld* /*unused*/)
	{
		FString reply = LoadPlugin(&rcon_packet->Body);
		rcon_connection->SendMessageW(rcon_packet->Id, 0, &reply);
	}

	void ArkBaseApi::UnloadPluginRcon(RCONClientConnection* rcon_connection, RCONPacket* rcon_packet,
		UWorld* /*unused*/)
	{
		FString reply = UnloadPlugin(&rcon_packet->Body);
		rcon_connection->SendMessageW(rcon_packet->Id, 0, &reply);
	}

	void ArkBaseApi::SetServerID(RCONClientConnection* rcon_connection, RCONPacket* rcon_packet,
		UWorld* /*unused*/)
	{
		FString reply = "Set new server id";
		TArray<FString> parsed;
		rcon_packet->Body.ParseIntoArray(parsed, L" ", true);

		if (parsed.IsValidIndex(1))
		{
			int new_server_id = std::stoi(parsed[1].ToString());

			try
			{
				const auto& actors = AsaApi::GetApiUtils().GetWorld()->PersistentLevelField().Get()->ActorsField();
				for (auto actor : actors)
				{
					FString bp = AsaApi::GetApiUtils().GetBlueprint(actor);
					if (bp.Equals("Blueprint'/Script/ShooterGame.PrimalPersistentWorldData'"))
					{
						actor->TargetingTeamField() = new_server_id;

						AsaApi::GetApiUtils().GetShooterGameMode()->MyServerIdField() = FString(std::to_string(new_server_id));
						AsaApi::GetApiUtils().GetShooterGameMode()->ServerIDField() = new_server_id;
						Log::GetLog()->info("SERVER ID: {}", new_server_id);
						Log::GetLog()->info("Forcing world save to lock-in new server id");
						AsaApi::GetApiUtils().GetShooterGameMode()->SaveWorld(false, true, false);

						break;
					}
				}
			}
			catch (const std::exception& error)
			{
				Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
				reply = FString::Format("Failed to set server id - {}", error.what());
			}
		}
		else
			reply = L"You must specify a unique server id.";

		
		rcon_connection->SendMessageW(rcon_packet->Id, 0, &reply);
	}
} // namespace API
