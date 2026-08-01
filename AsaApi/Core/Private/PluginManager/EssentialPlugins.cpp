#include "EssentialPlugins.h"

#include <fstream>
#include <optional>
#include <string.h>
#include <unordered_map>
#include <utility>
#include <vector>

#include <json.hpp>
#include <Logger/Logger.h>
#include <Tools.h>

#include "../Cache.h"
#include "../Offsets.h"
#include "Requests.h"

namespace API::EssentialPlugins
{
	namespace
	{
		constexpr auto marker_file_name = "OffsetCrash.json";

		struct Config
		{
			std::optional<std::vector<std::string>> essential_plugins;
			std::string webhook_url;
		};

		Config ReadConfig()
		{
			Config result;

			try
			{
				const std::string config_path = AsaApi::Tools::GetCurrentDir() + "/config.json";
				std::ifstream file(config_path);
				if (!file.is_open())
					return result;

				nlohmann::json cfg;
				file >> cfg;

				const nlohmann::json essentials = cfg["settings"].value("EssentialPlugins", nlohmann::json::object());
				if (essentials.value("Enable", false))
					result.essential_plugins = essentials.value("Plugins", std::vector<std::string>{});

				result.webhook_url = cfg["settings"].value("PluginFailureWebhook", "");
			}
			catch (...) {}

			return result;
		}

		const Config& GetConfig()
		{
			static const Config config = ReadConfig();
			return config;
		}

		thread_local std::string current_loading_plugin;
		thread_local LoadFailure pending_load_failure;
		thread_local bool in_library_load = false;

		thread_local bool report_collecting = false;
		thread_local std::vector<std::string> report_lines;

		std::filesystem::path MarkerPath(const std::filesystem::path& plugin_dir)
		{
			return plugin_dir / marker_file_name;
		}

		// the diff fence colors the ---- separator lines red
		std::string FormatWebhookCard(const std::string& header, const std::vector<std::string>& lines)
		{
			constexpr auto separator = "--------------------------------------------------";

			std::string card = "```diff\n" + header + "\n" + separator + "\n";

			// discord rejects messages over 2000 characters
			for (const auto& line : lines)
			{
				if (card.size() + line.size() > 1800)
					break;

				card += line + "\n";
			}

			card += separator;
			card += "\n```";

			return card;
		}

		void PostWebhook(const std::string& content)
		{
			const std::string& url = GetConfig().webhook_url;
			if (url.empty())
				return;

			// starting the HTTP worker under the loader lock can hang the process
			if (in_library_load)
			{
				Log::GetLog()->warn("Webhook suppressed while a plugin DLL is loading or unloading");
				return;
			}

			try
			{
				nlohmann::json payload;
				payload["content"] = content;

				Requests::Get().CreatePostRequest(url,
					[](bool, std::string, std::unordered_map<std::string, std::string>) {},
					payload.dump(), "application/json");
			}
			catch (...) {}
		}

		std::optional<SymbolKind> SymbolKindFromName(const std::string& name)
		{
			if (name == "offset")
				return SymbolKind::Offset;
			if (name == "bitfield")
				return SymbolKind::BitField;

			return std::nullopt;
		}

		struct CrashMarker
		{
			std::string symbol;
			SymbolKind kind;
			std::string dll_hash;
		};

		std::optional<CrashMarker> ReadCrashMarker(const std::filesystem::path& plugin_dir)
		{
			const auto marker_path = MarkerPath(plugin_dir);

			std::error_code error;
			if (!std::filesystem::exists(marker_path, error))
				return std::nullopt;

			try
			{
				std::ifstream file(marker_path);
				nlohmann::json json;
				file >> json;

				CrashMarker marker;
				marker.symbol = json.value("Symbol", "");
				marker.dll_hash = json.value("DllHash", "");

				const auto kind = SymbolKindFromName(json.value("SymbolKind", ""));
				if (kind && !marker.symbol.empty())
				{
					marker.kind = *kind;
					return marker;
				}
			}
			catch (...) {}

			Log::GetLog()->warn("Discarding unreadable {} in '{}'", marker_file_name, plugin_dir.string());
			ClearCrashMarker(plugin_dir);

			return std::nullopt;
		}

		bool DllHashMatches(const CrashMarker& marker, const std::filesystem::path& dll_path)
		{
			// a read error must not lift the quarantine
			const std::string current = Cache::calculateSHA256(dll_path);
			if (current.empty())
				return true;

			return marker.dll_hash == current;
		}

		bool SymbolAvailable(const CrashMarker& marker)
		{
			return marker.kind == SymbolKind::BitField
				? Offsets::Get().HasBitField(marker.symbol)
				: Offsets::Get().HasOffset(marker.symbol);
		}
	}

	const char* SymbolKindName(SymbolKind kind)
	{
		return kind == SymbolKind::BitField ? "bitfield" : "offset";
	}

	bool IsEssential(const std::string& plugin_name)
	{
		const auto& essential_plugins = GetConfig().essential_plugins;
		if (!essential_plugins)
			return true;

		for (const auto& name : *essential_plugins)
		{
			if (_stricmp(name.c_str(), plugin_name.c_str()) == 0)
				return true;
		}

		return false;
	}

	void SendWebhookMessage(const std::string& content)
	{
		if (GetConfig().webhook_url.empty())
			return;

		if (report_collecting)
		{
			report_lines.push_back(content);
			return;
		}

		PostWebhook(FormatWebhookCard("AsaApi - Plugin Report", { content }));
	}

	// posts immediately: the server is about to terminate, a queued report would never be flushed
	void SendCrashWebhook(const std::string& plugin_name, const std::string& symbol, SymbolKind kind)
	{
		const char* label = GetConfig().essential_plugins ? "Essential plugin" : "Plugin";
		const std::string message = std::string(label) + " '" + plugin_name + "' crashed the server on missing "
			+ SymbolKindName(kind) + " '" + symbol + "'";

		PostWebhook(FormatWebhookCard("AsaApi - Plugin Crash", { message }));
	}

	void BeginWebhookReport()
	{
		report_collecting = true;
		report_lines.clear();
	}

	void SendWebhookReport()
	{
		report_collecting = false;

		if (report_lines.empty())
			return;

		PostWebhook(FormatWebhookCard("AsaApi - Plugin Report", report_lines));
		report_lines.clear();
	}

	PluginLoadGuard::PluginLoadGuard(const std::string& plugin_name)
	{
		current_loading_plugin = plugin_name;
		pending_load_failure = {};
	}

	PluginLoadGuard::~PluginLoadGuard()
	{
		current_loading_plugin.clear();
		pending_load_failure = {};
	}

	LoadFailure PluginLoadGuard::TakeFailure()
	{
		LoadFailure failure = std::move(pending_load_failure);
		pending_load_failure = {};

		return failure;
	}

	LibraryLoadGuard::LibraryLoadGuard()
		: previous_(in_library_load)
	{
		in_library_load = true;
	}

	LibraryLoadGuard::~LibraryLoadGuard()
	{
		in_library_load = previous_;
	}

	const std::string& CurrentLoadingPlugin()
	{
		return current_loading_plugin;
	}

	void NoteLoadFailure(const std::string& symbol, SymbolKind kind)
	{
		pending_load_failure = { symbol, kind };
	}

	std::string QuarantineAfterCrash(const std::filesystem::path& dll_path, const std::string& symbol, SymbolKind kind)
	{
		const std::string plugin_name = dll_path.stem().string();

		try
		{
			const std::string missing = std::string(SymbolKindName(kind)) + " '" + symbol + "'";

			// an empty hash reads as a changed dll on the next boot and would retry-crash instead of skip
			const std::string dll_hash = Cache::calculateSHA256(dll_path);

			bool marker_written = false;
			if (!dll_hash.empty())
			{
				nlohmann::json marker;
				marker["Symbol"] = symbol;
				marker["SymbolKind"] = SymbolKindName(kind);
				marker["DllHash"] = dll_hash;

				marker_written = Cache::saveToFile(MarkerPath(dll_path.parent_path()), marker.dump(4));
			}

			std::string message;
			if (marker_written)
				message = "Plugin '" + plugin_name + "' crashed the server on missing " + missing + " - it will be skipped on the next boot";
			else
				message = "Plugin '" + plugin_name + "' crashed the server on missing " + missing + " but writing " + marker_file_name + " failed - it will not be skipped";

			if (report_collecting)
				SendWebhookMessage(message);
			else
				PostWebhook(FormatWebhookCard("AsaApi - Plugin Crash", { message }));

			return message;
		}
		catch (...)
		{
			Log::GetLog()->warn("Failed to write {} for '{}'", marker_file_name, plugin_name);
			return {};
		}
	}

	bool ShouldSkipQuarantined(const std::filesystem::path& dll_path)
	{
		const std::filesystem::path plugin_dir = dll_path.parent_path();
		const std::string plugin_name = dll_path.stem().string();

		const auto marker = ReadCrashMarker(plugin_dir);
		if (!marker)
			return false;

		if (IsEssential(plugin_name))
		{
			ClearCrashMarker(plugin_dir);
			Log::GetLog()->info("Crash marker for '{}' ignored - the plugin is in EssentialPlugins", plugin_name);

			return false;
		}

		if (!DllHashMatches(*marker, dll_path))
		{
			ClearCrashMarker(plugin_dir);

			const std::string message = "Retrying plugin '" + plugin_name + "' - " + plugin_name + ".dll changed since the crash";
			Log::GetLog()->info("{}", message);
			SendWebhookMessage(message);

			return false;
		}

		if (SymbolAvailable(*marker))
		{
			ClearCrashMarker(plugin_dir);

			const std::string message = "Retrying plugin '" + plugin_name + "' - " + SymbolKindName(marker->kind) + " '" + marker->symbol + "' is available again";
			Log::GetLog()->info("{}", message);
			SendWebhookMessage(message);

			return false;
		}

		const std::string message = "Skipping plugin '" + plugin_name + "' - crashed earlier on missing "
			+ SymbolKindName(marker->kind) + " '" + marker->symbol + "'";
		Log::GetLog()->error("{}", message);
		SendWebhookMessage(message);

		return true;
	}

	void ClearCrashMarker(const std::filesystem::path& plugin_dir)
	{
		std::error_code error;
		std::filesystem::remove(MarkerPath(plugin_dir), error);
	}
} // namespace API::EssentialPlugins
