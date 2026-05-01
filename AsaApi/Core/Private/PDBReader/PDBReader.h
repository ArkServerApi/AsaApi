#pragma once

#include <dia2.h>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>

#include "json.hpp"

#include <API/Fields.h>

namespace API
{
	class PdbReader
	{
	public:
		PdbReader() = default;
		~PdbReader() = default;

		void Read(const std::wstring& path,
			std::unordered_map<std::string, intptr_t>* offsets_dump,
			std::unordered_map<std::string, BitField>* bitfields_dump,
			const std::unordered_set<std::string> filter_set);

	private:
		static void LoadDataFromPdb(const std::wstring& path,
			IDiaDataSource** dia_source,
			IDiaSession** session,
			IDiaSymbol** symbol);

		void DumpStructs(IDiaSymbol* g_symbol);
		void DumpFunctions(IDiaSymbol* g_symbol);
		void DumpGlobalVariables(IDiaSymbol* g_symbol);
		void DumpType(IDiaSymbol* symbol, const std::string& structure, int indent) const;
		void DumpData(IDiaSymbol* symbol, const std::string& structure) const;

		bool FilterSymbols(const std::string input);
		static std::string GetSymbolNameString(IDiaSymbol* symbol);
		static uint32_t GetSymbolId(IDiaSymbol* symbol);
		static void Cleanup(IDiaSymbol* symbol, IDiaSession* session, IDiaDataSource* source);

		static std::string GetFunctionSymbolParams(IDiaSymbol* symbol);

		static std::string GetSymbolName(IDiaSymbol* symbol);
		static std::string GetBasicTypeName(IDiaSymbol* symbol);
		static std::string GetTypeName(IDiaSymbol* pType);

		static bool IsBasicTypeName(const std::string& t);
		static void CleanTypeName(std::string& typeName);

		static std::string BuildPointerTypeName(IDiaSymbol* pType);
		static std::string BuildArrayTypeName(IDiaSymbol* pType);

		static void CollectDataParameterSymbols(IDiaSymbol* functionSymbol,
			std::vector<IDiaSymbol*>& outParams);
		static std::vector<std::string> BuildArgTypesFromSignature(
			IDiaSymbol* functionSymbol,
			const std::vector<IDiaSymbol*>& dataParams);
		static bool AreAllTypesBasic(const std::vector<std::string>& argTypes);
		static std::vector<std::string> BuildArgTypesFromDataParams(
			const std::vector<IDiaSymbol*>& dataParams);
		static void ReleaseDataParameterSymbols(std::vector<IDiaSymbol*>& dataParams);
		static std::string JoinTypeNames(const std::vector<std::string>& argTypes);

		std::unordered_map<std::string, intptr_t>* offsets_dump_{ nullptr };
		std::unordered_map<std::string, BitField>* bitfields_dump_{ nullptr };

		std::unordered_set<std::string> filter_set_;
		std::unordered_set<uint32_t> visited_;
	};
} // namespace API
