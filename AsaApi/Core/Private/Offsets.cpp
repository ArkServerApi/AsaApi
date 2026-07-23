#include "Offsets.h"
#include "Logger/Logger.h"
#include <Psapi.h>
#pragma comment(lib, "Psapi.lib")
#include <fstream>
#include <json.hpp>
#include <Tools.h>

namespace
{
	std::string ModuleName(HMODULE hModule)
	{
		if (!hModule)
			return "<unknown>";

		char path[MAX_PATH]{};
		if (!GetModuleFileNameA(hModule, path, MAX_PATH))
			return "<unknown>";

		const std::string full(path);
		const auto slash = full.find_last_of("\\/");
		std::string name = (slash != std::string::npos) ? full.substr(slash + 1) : full;

		const auto dot = name.rfind('.');
		if (dot != std::string::npos)
			name.erase(dot);

		return name;
	}

	std::string GetCallingModuleName()
	{
		constexpr int maxFrames = 32;
		void* stack[maxFrames]{};

		const USHORT frames = CaptureStackBackTrace(1, maxFrames, stack, nullptr);

		HMODULE self = nullptr;
		GetModuleHandleExA(
			GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
			reinterpret_cast<LPCSTR>(&GetCallingModuleName),
			&self);

		constexpr int maxStackDepth = 2;
		int stackDepth = 0;

		for (USHORT i = 0; i < frames; ++i)
		{
			HMODULE module = nullptr;
			if (!GetModuleHandleExA(
				GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
				reinterpret_cast<LPCSTR>(stack[i]),
				&module))
			{
				continue;
			}

			if (module == self)
			{
				if (++stackDepth > maxStackDepth)
					return ModuleName(self);
				continue;
			}

			if (stackDepth > 0)
				return ModuleName(module);
		}

		return stackDepth > 0 ? ModuleName(self) : "<unknown>";
	}
} // namespace

namespace API
{
	Offsets::Offsets()
	{
		try
		{
			const std::string config_path = AsaApi::Tools::GetCurrentDir() + "/config.json";
			std::ifstream f(config_path);
			if (f.is_open())
			{
				nlohmann::json cfg;
				f >> cfg;
				hooks_do_not_throw_ = cfg["settings"].value("HooksDoNotThrow", false);
			}
		}
		catch (...) {}

		module_base_ = data_base_ = reinterpret_cast<DWORD64>(GetModuleHandle(nullptr));

		const auto dos_header = reinterpret_cast<PIMAGE_DOS_HEADER>(module_base_);
		const auto nt_headers = reinterpret_cast<PIMAGE_NT_HEADERS>(module_base_ + dos_header->e_lfanew);

		// get base of .data section
		const auto section_count = nt_headers->FileHeader.NumberOfSections;
		const auto first_section = IMAGE_FIRST_SECTION(nt_headers);
		const auto end_section = first_section + section_count;

		const auto data_section_header = std::find_if(first_section, end_section, [](_IMAGE_SECTION_HEADER hdr)
			{
				auto name = std::string(reinterpret_cast<char*>(hdr.Name), 8);
				name.erase(std::remove(name.begin(), name.end(), '\0'), name.end());

				return name == ".data";
			});

		if (data_section_header == end_section)
		{
			Log::GetLog()->error("Failed to get the base of the .data section.");
			throw;
		}
	}

	Offsets& Offsets::Get()
	{
		static Offsets instance;
		return instance;
	}

	void Offsets::Init(std::unordered_map<std::string, intptr_t>&& offsets_dump,
		std::unordered_map<std::string, BitField>&& bitfields_dump)
	{
		offsets_dump_.swap(offsets_dump);
		bitfields_dump_.swap(bitfields_dump);
	}

	DWORD64 Offsets::GetAddress(const void* base, const std::string& name)
	{
		if (!offsets_dump_.contains(name))
		{
			Log::GetLog()->critical("Failed to get the offset of '{}'.\nRequested by plugin: {}", name, GetCallingModuleName());
			Log::GetLog()->flush();
			Sleep(10000);
			throw;
		}

		return reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(offsets_dump_[name]);
	}

	LPVOID Offsets::GetAddress(const std::string& name)
	{
		if (!offsets_dump_.contains(name))
		{
			Log::GetLog()->critical("Failed to get the offset of '{}'.\nRequested by plugin: {}", name, GetCallingModuleName());
			Log::GetLog()->flush();
			if (hooks_do_not_throw_)
				return nullptr;
			else
			{
				Sleep(10000);
				throw;
			}
		}

		return reinterpret_cast<LPVOID>(module_base_ + static_cast<DWORD64>(offsets_dump_[name]));
	}

	LPVOID Offsets::GetDataAddress(const std::string& name)
	{
		if (!offsets_dump_.contains(name))
		{
			Log::GetLog()->critical("Failed to get the offset of '{}'.\nRequested by plugin: {}", name, GetCallingModuleName());
			Log::GetLog()->flush();
			if (hooks_do_not_throw_)
				return nullptr;
			else
			{
				Sleep(10000);
				throw;
			}
		}

		return reinterpret_cast<LPVOID>(data_base_ + static_cast<DWORD64>(offsets_dump_[name]));
	}

	BitField Offsets::GetBitField(const void* base, const std::string& name)
	{
		return GetBitFieldInternal(base, name);
	}

	BitField Offsets::GetBitField(LPVOID base, const std::string& name)
	{
		return GetBitFieldInternal(base, name);
	}

	BitField Offsets::GetBitFieldInternal(const void* base, const std::string& name)
	{
		if (!bitfields_dump_.contains(name))
		{
			Log::GetLog()->critical("Failed to get the bitfield address of '{}'.\nRequested by plugin: {}", name, GetCallingModuleName());
			Log::GetLog()->flush();
			Sleep(10000);
			throw;
		}

		const auto bf = bitfields_dump_[name];
		auto cf = BitField();
		cf.bit_position = bf.bit_position;
		cf.length = bf.length;
		cf.num_bits = bf.num_bits;
		cf.offset = reinterpret_cast<DWORD64>(base) + static_cast<DWORD64>(bf.offset);

		return cf;
	}
} // namespace API