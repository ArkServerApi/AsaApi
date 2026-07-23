#pragma once
#include <Windows.h>
#include <bcrypt.h>

#include <cstdint>
#include <stdexcept>

#pragma comment(lib, "bcrypt.lib")

namespace AsaApi
{
	void InitHooks();

	std::uint32_t GenerateServerId();
} // namespace AsaApi
