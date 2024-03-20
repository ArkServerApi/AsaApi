#include "Logger/Logger.h"
#include "..\Private\IBaseApi.h"
#include "..\Private\Ark\ArkBaseApi.h"

#include "Tools.h"
#include <filesystem>
#include <tlhelp32.h>
#include <fstream>
#include <json.hpp>

DWORD GetParentProcessId()
{
	const DWORD InvalidParentProcessId = 0;

	HANDLE Snapshot = 0;
	PROCESSENTRY32 ProcessEntry;
	DWORD PID = GetCurrentProcessId();

	Snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (Snapshot == INVALID_HANDLE_VALUE)
		return InvalidParentProcessId;

	ZeroMemory(&ProcessEntry, sizeof(ProcessEntry));
	ProcessEntry.dwSize = sizeof(ProcessEntry);

	if (!Process32First(Snapshot, &ProcessEntry))
		return InvalidParentProcessId;

	do
	{
		if (ProcessEntry.th32ProcessID == PID)
			return ProcessEntry.th32ParentProcessID;
	} while (Process32Next(Snapshot, &ProcessEntry));

	return InvalidParentProcessId;
}

bool AttachToParent()
{
	const std::string config_path = AsaApi::Tools::GetCurrentDir() + "/config.json";
	std::ifstream file{ config_path };
	if (!file.is_open())
		return false;

	nlohmann::json config;
	file >> config;
	file.close();

	return config["settings"].value("AttachToParent", true);
}

void OpenConsole()
{
	DWORD parentProcessId = GetParentProcessId();
	bool attachToParent = AttachToParent();
	if (GetConsoleWindow())
		return;
	if (attachToParent && parentProcessId && AttachConsole(parentProcessId))
		return;
	AllocConsole();
	FILE* p_cout;
	freopen_s(&p_cout, "conout$", "w", stdout);
	SetConsoleOutputCP(CP_UTF8);
}

void DeleteOldLogFiles()
{
	const std::string config_path = AsaApi::Tools::GetCurrentDir() + "/config.json";
	std::ifstream file{ config_path };
	if (!file.is_open())
		return;

	nlohmann::json config;
	file >> config;
	file.close();

	if (config.value("DeleteOldLogs", nlohmann::json::object()).value("Enabled", false) == false)
		return;

	const std::string folderPath = API::Tools::GetCurrentDir() + "\\logs";
	const int maxAgeInSeconds = config.value("DeleteOldLogs", nlohmann::json::object()).value("MaxAge", 24) * 3600;

	for (const auto& entry : std::filesystem::directory_iterator(folderPath)) {
		if (entry.is_regular_file()) {
			try
			{
				std::filesystem::file_time_type file_time = std::filesystem::last_write_time(entry);
				auto sctp = std::chrono::time_point_cast<std::chrono::system_clock::duration>(file_time - std::filesystem::file_time_type::clock::now() + std::chrono::system_clock::now());
				std::time_t tt = std::chrono::system_clock::to_time_t(sctp);

				if (std::difftime(std::time(nullptr), tt) > maxAgeInSeconds) {
					Log::GetLog()->info("Deleted log file: {}", entry.path().filename().string());

					std::filesystem::remove(entry.path());
				}
			}
			catch (std::exception& error)
			{
				Log::GetLog()->error("Error: {}", error.what());
				break;
			}
		}
	}
}

void Init()
{
	namespace fs = std::filesystem;

	OpenConsole();

	const std::string current_dir = API::Tools::GetCurrentDir();

	if (!fs::exists(current_dir + "/logs"))
	{
		fs::create_directory(current_dir + "/logs");
	}

	Log::Get().Init("API");

	DeleteOldLogFiles();

	API::game_api = std::make_unique<API::ArkBaseApi>();
	API::game_api->Init();
}

extern "C" ARK_API void InitApi()
{
	Init();
}