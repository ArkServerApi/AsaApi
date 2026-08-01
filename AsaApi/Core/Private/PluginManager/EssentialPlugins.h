#pragma once

#include <filesystem>
#include <string>

namespace API::EssentialPlugins
{
	enum class SymbolKind
	{
		Offset,
		BitField
	};

	const char* SymbolKindName(SymbolKind kind);

	bool IsEssential(const std::string& plugin_name);

	void SendWebhookMessage(const std::string& content);
	void SendCrashWebhook(const std::string& plugin_name, const std::string& symbol, SymbolKind kind);
	void BeginWebhookReport();
	void SendWebhookReport();

	struct LoadFailure
	{
		std::string symbol;
		SymbolKind kind;
	};

	class PluginLoadGuard
	{
	public:
		PluginLoadGuard(const std::string& plugin_name);
		~PluginLoadGuard();

		PluginLoadGuard(const PluginLoadGuard&) = delete;
		PluginLoadGuard& operator=(const PluginLoadGuard&) = delete;

		LoadFailure TakeFailure();
	};

	class LibraryLoadGuard
	{
	public:
		LibraryLoadGuard();
		~LibraryLoadGuard();

		LibraryLoadGuard(const LibraryLoadGuard&) = delete;
		LibraryLoadGuard& operator=(const LibraryLoadGuard&) = delete;

	private:
		bool previous_;
	};

	const std::string& CurrentLoadingPlugin();

	void NoteLoadFailure(const std::string& symbol, SymbolKind kind);

	std::string QuarantineAfterCrash(const std::filesystem::path& dll_path, const std::string& symbol, SymbolKind kind);
	bool ShouldSkipQuarantined(const std::filesystem::path& dll_path);
	void ClearCrashMarker(const std::filesystem::path& plugin_dir);
} // namespace API::EssentialPlugins
