#pragma once

#define WIN32_LEAN_AND_MEAN

#include <memory>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <windows.h>
#include <unordered_map>

#include "json.hpp"

namespace API
{
	struct Plugin
	{
		Plugin(HINSTANCE h_module, std::string name, std::string full_name,
		       std::string description, float version, float min_api_version,
		       std::vector<std::string> dependencies, bool supports_hot_reload)
			: h_module(h_module),
			  name(std::move(name)),
			  full_name(std::move(full_name)),
			  description(std::move(description)),
			  version(version),
			  min_api_version(min_api_version),
			  dependencies(std::move(dependencies)),
			  supports_hot_reload(supports_hot_reload)
		{
		}

		HINSTANCE h_module;
		std::string name;
		std::string full_name;
		std::string description;
		float version;
		float min_api_version;
		std::vector<std::string> dependencies;
		bool supports_hot_reload;
	};

	class PluginManager
	{
	public:
		static PluginManager& Get();

		PluginManager(const PluginManager&) = delete;
		PluginManager(PluginManager&&) = delete;
		PluginManager& operator=(const PluginManager&) = delete;
		PluginManager& operator=(PluginManager&&) = delete;

		/**
		 * \brief Find and load all plugins
		 */
		void LoadAllPlugins();

		/**
		 * \brief Load plugin by it's name
		 * \param plugin_name File name of the plugin
		 * \return Loaded plugin
		 */
		std::shared_ptr<Plugin>& LoadPlugin(const std::string& plugin_name) noexcept(false);

		/**
		 * \brief Unload plugin by it's name. Plugin must free all used resources.
		 * \param plugin_name File name of the plugin
		 */
		void UnloadPlugin(const std::string& plugin_name) noexcept(false);

		/**
		 * \brief Find plugin by it's name
		 * \param plugin_name File name of the plugin
		 * \return An iterator to the loaded plugin
		 */
		std::vector<std::shared_ptr<Plugin>>::const_iterator FindPlugin(const std::string& plugin_name);

		/**
		* \brief Returns true if plugin was loaded, false otherwise
		*/
		bool IsPluginLoaded(const std::string& plugin_name);

		/**
		* \brief Checks for auto plugin reloads
		*/
		static void DetectPluginChangesTimerCallback();
	private:
		PluginManager() = default;
		~PluginManager() = default;

		static nlohmann::json ReadPluginInfo(const std::string& plugin_name);
		static nlohmann::json ReadSettingsConfig();

		void CheckPluginsDependencies();

		void DetectPluginChanges();

		void MovePDB(const std::string& pluginname);

		std::vector<std::shared_ptr<Plugin>> loaded_plugins_;

		// Plugins auto reloading
		bool enable_plugin_reload_{false};
		int reload_sleep_seconds_{5};
		bool save_world_before_reload_{true};
		time_t next_reload_check_{5};
		std::set<std::string> hot_reload_warned_plugins_;

		std::unordered_map<std::string, DLL_DIRECTORY_COOKIE> dll_dir_cookies_{};
		bool dll_search_initialized_{ false };
	};
} // namespace API
