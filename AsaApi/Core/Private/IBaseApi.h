#pragma once

#include <memory>
#include <string>

#include "ICommands.h"

namespace API
{
	class IBaseApi
	{
	public:
		virtual ~IBaseApi() = default;

		virtual bool Init() = 0;
		virtual float GetVersion() = 0;
		virtual std::string GetApiName() = 0;
		virtual void RegisterCommands() = 0;

		virtual std::unique_ptr<AsaApi::ICommands>& GetCommands() = 0;
		virtual std::unique_ptr<AsaApi::IHooks>& GetHooks() = 0;
		virtual std::unique_ptr<AsaApi::IApiUtils>& GetApiUtils() = 0;
	};

	inline std::unique_ptr<IBaseApi> game_api;
} // namespace API
