#include "PDBReader.h"

#include <fstream>

#include <Logger/Logger.h>
#include <Tools.h>

#include "../Private/Helpers.h"
#include "../Private/Offsets.h"

namespace API
{
	template <typename T>
	class ScopedDiaType
	{
	public:
		ScopedDiaType() : _sym(nullptr)
		{
		}

		ScopedDiaType(T* sym) : _sym(sym)
		{
		}

		~ScopedDiaType()
		{
			if (_sym != nullptr)
				_sym->Release();
		}

		T** ref() { return &_sym; }
		T** operator&() { return ref(); }
		T* operator->() { return _sym; }
		operator T* () { return _sym; }
		void Attach(T* sym) { _sym = sym; }

	private:
		T* _sym;
	};

	template <typename T>
	using CComPtr = ScopedDiaType<T>;

	void PdbReader::Read(const std::wstring& path,
		std::unordered_map<std::string, intptr_t>* offsets_dump,
		std::unordered_map<std::string, BitField>* bitfields_dump,
		const std::unordered_set<std::string> filter_set)
	{
		offsets_dump_ = offsets_dump;
		bitfields_dump_ = bitfields_dump;
		filter_set_ = filter_set;

		offsets_dump_->reserve(550000);
		bitfields_dump_->reserve(11000);

		std::ifstream f{ path };
		if (!f.good())
			throw std::runtime_error("Failed to open pdb file");

		IDiaDataSource* data_source;
		IDiaSession* dia_session;
		IDiaSymbol* symbol;

		try
		{
			LoadDataFromPdb(path, &data_source, &dia_session, &symbol);
		}
		catch (const std::runtime_error&)
		{
			Log::GetLog()->error("Failed to load data from pdb file ");
			throw;
		}

		Log::GetLog()->info("Dumping structures..");
		DumpStructs(symbol);

		Log::GetLog()->info("Dumping functions..");
		DumpFunctions(symbol);

		Log::GetLog()->info("Dumping globals..");
		DumpGlobalVariables(symbol);

		Cleanup(symbol, dia_session, data_source);

		Log::GetLog()->info("Successfully read information from PDB\n");
	}

	void PdbReader::LoadDataFromPdb(const std::wstring& path,
		IDiaDataSource** dia_source,
		IDiaSession** session,
		IDiaSymbol** symbol)
	{
		const std::string current_dir = Tools::GetCurrentDir();

		const std::string lib_path = current_dir + "\\msdia140.dll";
		const HMODULE h_module = LoadLibraryA(lib_path.c_str());
		if (h_module == nullptr)
		{
			throw std::runtime_error("Failed to load msdia140.dll. Error code - " + std::to_string(GetLastError()));
		}

		const auto dll_get_class_object =
			reinterpret_cast<HRESULT(WINAPI*)(REFCLSID, REFIID, LPVOID)>(
				GetProcAddress(h_module, "DllGetClassObject"));
		if (dll_get_class_object == nullptr)
		{
			throw std::runtime_error("Can't find DllGetClassObject. Error code - " + std::to_string(GetLastError()));
		}

		IClassFactory* class_factory;
		HRESULT hr = dll_get_class_object(__uuidof(DiaSource), IID_IClassFactory, &class_factory);
		if (FAILED(hr))
		{
			throw std::runtime_error("DllGetClassObject has failed. Error code - " + std::to_string(GetLastError()));
		}

		hr = class_factory->CreateInstance(nullptr, __uuidof(IDiaDataSource),
			reinterpret_cast<void**>(dia_source));
		if (FAILED(hr))
		{
			class_factory->Release();
			throw std::runtime_error("CreateInstance has failed. Error code - " + std::to_string(GetLastError()));
		}

		hr = (*dia_source)->loadDataFromPdb(path.c_str());
		if (FAILED(hr))
		{
			class_factory->Release();
			throw std::runtime_error("loadDataFromPdb has failed. HRESULT - " + std::to_string(hr));
		}

		// Open a session for querying symbols

		hr = (*dia_source)->openSession(session);
		if (FAILED(hr))
		{
			class_factory->Release();
			throw std::runtime_error("openSession has failed. HRESULT - " + std::to_string(hr));
		}

		// Retrieve a reference to the global scope
		
		hr = (*session)->get_globalScope(symbol);
		if (hr != S_OK)
		{
			class_factory->Release();
			throw std::runtime_error("get_globalScope has failed. HRESULT - " + std::to_string(hr));
		}

		class_factory->Release();
	}

	void PdbReader::DumpStructs(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol = nullptr;

		CComPtr<IDiaEnumSymbols> enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagUDT, nullptr, nsNone, &enum_symbols)))
			throw std::runtime_error("Failed to find symbols");

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			CComPtr<IDiaSymbol> sym(symbol);

			const uint32_t sym_id = GetSymbolId(symbol);
			if (visited_.find(sym_id) != visited_.end())
				return;

			visited_.insert(sym_id);

			std::string str_name = GetSymbolNameString(sym);

			if (FilterSymbols(str_name))
				continue;

			DumpType(sym, str_name, 0);
		}
	}

	void PdbReader::DumpFunctions(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol;

		CComPtr<IDiaEnumSymbols> enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagFunction, nullptr, nsNone, &enum_symbols)))
			throw std::runtime_error("Failed to find symbols");

		ULONG celt = 0;
		std::stringstream ss;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			CComPtr<IDiaSymbol> sym(symbol);

			DWORD sym_tag_type;
			if (sym->get_symTag(&sym_tag_type) != S_OK)
				continue;

			std::string str_name = GetSymbolNameString(sym);

			if (FilterSymbols(str_name))
				continue;

			const uint32_t sym_id = GetSymbolId(sym);
			if (visited_.find(sym_id) != visited_.end())
				continue;

			visited_.insert(sym_id);

			if (str_name.empty())
				continue;

			DWORD offset;
			if (sym->get_addressOffset(&offset) != S_OK)
				continue;

			ss.clear();
			ss.str(std::string());

			// Check if it's a member function
			if (str_name.find(':') != std::string::npos)
			{
				ss << ReplaceString(str_name, "::", ".")
					<< "(" << GetFunctionSymbolParams(sym) << ")";
				(*offsets_dump_)[ss.str()] = offset;
			}
			else
			{
				ss << "Global." << str_name
					<< "(" << GetFunctionSymbolParams(sym) << ")";
				(*offsets_dump_)[ss.str()] = offset;
			}
		}
	}

	void PdbReader::DumpGlobalVariables(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol;

		CComPtr<IDiaEnumSymbols> enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagData, nullptr, nsNone, &enum_symbols)))
			throw std::runtime_error("Failed to find symbols");

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			CComPtr<IDiaSymbol> sym(symbol);

			const uint32_t sym_id = GetSymbolId(symbol);
			if (visited_.find(sym_id) != visited_.end())
				return;

			visited_.insert(sym_id);

			std::string str_name = GetSymbolNameString(sym);
			if (FilterSymbols(str_name))
				continue;

			DWORD sym_tag;
			if (sym->get_symTag(&sym_tag) != S_OK)
				continue;

			DWORD offset;
			if (sym->get_addressOffset(&offset) != S_OK)
				continue;

			(*offsets_dump_)["Global." + str_name] = offset;
		}
	}

	void PdbReader::DumpType(IDiaSymbol* symbol, const std::string& structure, int indent) const
	{
		CComPtr<IDiaEnumSymbols> enum_children;
		IDiaSymbol* symbol_child;
		DWORD sym_tag;
		ULONG celt = 0;

		if (indent > 5)
			return;

		if (symbol->get_symTag(&sym_tag) != S_OK)
			return;

		switch (sym_tag)
		{
		case SymTagData:
			DumpData(symbol, structure);
			break;
		case SymTagEnum:
		case SymTagUDT:
			if (SUCCEEDED(symbol->findChildren(SymTagNull, nullptr, nsNone, &enum_children)))
			{
				while (SUCCEEDED(enum_children->Next(1, &symbol_child, &celt)) && celt == 1)
				{
					CComPtr<IDiaSymbol> sym_child(symbol_child);
					DumpType(sym_child, structure, indent + 2);
				}
			}
			break;
		default:
			break;
		}
	}

	void PdbReader::DumpData(IDiaSymbol* symbol, const std::string& structure) const
	{
		DWORD loc_type;
		if (symbol->get_locationType(&loc_type) != S_OK)
			return;

		if (loc_type != LocIsThisRel && loc_type != LocIsBitField)
			return;

		CComPtr<IDiaSymbol> type;
		if (symbol->get_type(&type) != S_OK)
			return;

		if (type == nullptr)
			return;

		LONG offset;
		if (symbol->get_offset(&offset) != S_OK)
			return;

		std::string str_name = GetSymbolNameString(symbol);
		if (str_name.empty())
			return;

		if (loc_type == LocIsBitField)
		{
			DWORD bit_position;
			if (symbol->get_bitPosition(&bit_position) != S_OK)
				return;

			ULONGLONG num_bits;
			if (symbol->get_length(&num_bits) != S_OK)
				return;

			ULONGLONG length;
			if (type->get_length(&length) != S_OK)
				return;

			const BitField bit_field{ static_cast<DWORD64>(offset), bit_position, num_bits, length };

			(*bitfields_dump_)[structure + "." + str_name] = bit_field;
		}
		else if (loc_type == LocIsThisRel)
		{
			(*offsets_dump_)[structure + "." + str_name] = offset;
		}
	}

	bool PdbReader::FilterSymbols(const std::string input)
	{
		if (input.empty())
			return true;

		for (const auto& filter : filter_set_)
		{
			if (input.starts_with(filter) && !input.starts_with("UE::GC"))
				return true;
		}

		if (input.find('`') != std::string::npos)
			return true;

		return false;
	}

	std::string PdbReader::GetSymbolNameString(IDiaSymbol* symbol)
	{
		BSTR str = nullptr;
		std::string name;

		HRESULT hr = symbol->get_name(&str);
		if (hr != S_OK)
			return name;

		if (str != nullptr)
		{
			name = Tools::Utf8Encode(str);
		}

		SysFreeString(str);

		return name;
	}

	uint32_t PdbReader::GetSymbolId(IDiaSymbol* symbol)
	{
		DWORD id;
		symbol->get_symIndexId(&id);
		return id;
	}

	void PdbReader::Cleanup(IDiaSymbol* symbol, IDiaSession* session, IDiaDataSource* source)
	{
		if (symbol != nullptr)
			symbol->Release();
		if (session != nullptr)
			session->Release();
		if (source != nullptr)
			source->Release();

		CoUninitialize();
	}

	std::string PdbReader::GetSymbolName(IDiaSymbol* symbol)
	{
		if (symbol == nullptr)
			return "";

		BSTR bstrName = nullptr;
		std::string name;

		HRESULT hr = symbol->get_name(&bstrName);
		if (hr != S_OK || bstrName == nullptr)
			return "";

		name = Tools::Utf8Encode(bstrName);

		SysFreeString(bstrName);
		return name;
	}

	std::string PdbReader::GetBasicTypeName(IDiaSymbol* symbol)
	{
		DWORD basicType;
		if (SUCCEEDED(symbol->get_baseType(&basicType)))
		{
			ULONGLONG length;
			switch (basicType)
			{
			case btNoType: return "<NoType>";
			case btVoid: return "void";
			case btChar: return "char";
			case btWChar: return "wchar_t";
			case btInt:
				if (SUCCEEDED(symbol->get_length(&length)))
				{
					if (length == 1) return "signedchar";
					else if (length == 2) return "short";
					else if (length == 4) return "int";
					else if (length == 8) return "__int64";
				}
				return "int";
			case btUInt:
				if (SUCCEEDED(symbol->get_length(&length)))
				{
					if (length == 1) return "unsignedchar";
					else if (length == 2) return "unsignedshort";
					else if (length == 4) return "unsignedint";
					else if (length == 8) return "unsigned__int64";
				}
				return "unsignedint";
			case btFloat:
				if (SUCCEEDED(symbol->get_length(&length)))
				{
					if (length == 4) return "float";
					else if (length == 8) return "double";
				}
				return "float";
			case btBCD: return "BCD";
			case btBool: return "bool";
			case btLong: return "long";
			case btULong: return "unsigned long";
			case btCurrency: return "CURRENCY";
			case btDate: return "DATE";
			case btVariant: return "VARIANT";
			case btComplex: return "complex";
			case btBit: return "bit";
			case btBSTR: return "BSTR";
			case btHresult: return "HRESULT";
			case btChar16: return "char16_t";
			case btChar32: return "char32_t";
			default: return "UnknownType";
			}
		}
		return "";
	}

	std::string PdbReader::BuildPointerTypeName(IDiaSymbol* pType)
	{
		IDiaSymbol* pBaseType = nullptr;
		std::string baseName;

		if (SUCCEEDED(pType->get_type(&pBaseType)) && pBaseType != nullptr)
		{
			baseName = GetTypeName(pBaseType);
			pBaseType->Release();
		}

		if (baseName.empty())
			baseName = "void";

		BOOL isRef = FALSE;
		pType->get_reference(&isRef);

		BOOL isRValueRef = FALSE;
		pType->get_RValueReference(&isRValueRef);

		BOOL isConst = FALSE;
		pType->get_constType(&isConst);

		std::string result = baseName;

		if (isRValueRef)
			result += " &&";
		else if (isRef)
			result += " &";
		else
			result += " *";

		if (isConst)
			result += " const";

		return result;
	}

	std::string PdbReader::BuildArrayTypeName(IDiaSymbol* pType)
	{
		IDiaSymbol* pElemType = nullptr;
		std::string elemName;

		if (SUCCEEDED(pType->get_type(&pElemType)) && pElemType != nullptr)
		{
			elemName = GetTypeName(pElemType);
			pElemType->Release();
		}

		if (elemName.empty())
			elemName = "void";

		return elemName + " *";
	}

	std::string PdbReader::GetTypeName(IDiaSymbol* pType)
	{
		if (pType == nullptr)
			return "";

		DWORD symTag = 0;
		pType->get_symTag(&symTag);

		switch (symTag)
		{
		case SymTagPointerType:
			return BuildPointerTypeName(pType);
		case SymTagArrayType:
			return BuildArrayTypeName(pType);
		case SymTagBaseType:
			return GetBasicTypeName(pType);
		case SymTagEnum:
			return GetSymbolName(pType);
		case SymTagTypedef:
			return GetSymbolName(pType);
		case SymTagUDT:
			return GetSymbolName(pType);
		default:
			return GetSymbolName(pType);
		}
	}

	bool PdbReader::IsBasicTypeName(const std::string& t)
	{
		return t == "int" || t == "long" ||
			t == "unsignedint" || t == "unsignedlong" ||
			t == "char" || t == "unsignedchar" ||
			t == "signedchar" || t == "__int64" ||
			t == "unsigned__int64" || t == "short" ||
			t == "unsignedshort" || t == "bool" ||
			t == "float" || t == "double";
	}

	void PdbReader::CleanTypeName(std::string& typeName)
	{
		typeName = ReplaceString(typeName, "struct ", "");
		typeName = ReplaceString(typeName, "class ", "");
		typeName = ReplaceString(typeName, "enum ", "");
		typeName = ReplaceString(typeName, "const ", "");
		typeName = ReplaceString(typeName, " ", "");
		typeName = ReplaceString(typeName, "__ptr64", "");

		typeName = ReplaceString(typeName, ",FDefaultDelegateUserPolicy", "");
		typeName = ReplaceString(typeName, ",FDefaultTSDelegateUserPolicy", "");

		if (typeName.rfind("TFunction", 0) == 0 || typeName.rfind("TFunctionRef", 0) == 0)
		{
			if (typeName.size() >= 2 && typeName.compare(typeName.size() - 2, 2, ")>") == 0)
				typeName.resize(typeName.size() - 1);

			if (typeName.size() >= 3 && typeName.compare(typeName.size() - 3, 3, ">&&") == 0)
				typeName.resize(typeName.size() - 3);

			if (typeName.size() >= 2 && typeName.compare(typeName.size() - 2, 2, "))") == 0)
				typeName.resize(typeName.size() - 1);
		}

		if (typeName.rfind("TDelegate<", 0) == 0 ||
			typeName.rfind("TMulticastDelegate<", 0) == 0 ||
			typeName.rfind("TBaseDelegate<", 0) == 0)
		{
			if (!typeName.empty() && typeName.back() == '&')
				typeName.pop_back();
		}
	}

	void PdbReader::CollectDataParameterSymbols(IDiaSymbol* functionSymbol,
		std::vector<IDiaSymbol*>& outParams)
	{
		CComPtr<IDiaEnumSymbols> data_params;
		if (FAILED(functionSymbol->findChildren(SymTagData, nullptr, nsNone, &data_params)))
			return;

		IDiaSymbol* param = nullptr;
		ULONG celt = 0;

		while (SUCCEEDED(data_params->Next(1, &param, &celt)) && celt == 1)
		{
			DWORD data_kind = 0;
			if (SUCCEEDED(param->get_dataKind(&data_kind)) && data_kind == DataIsParam)
			{
				outParams.push_back(param);
			}
			else
			{
				param->Release();
			}
		}
	}

	std::vector<std::string> PdbReader::BuildArgTypesFromSignature(
		IDiaSymbol* functionSymbol,
		const std::vector<IDiaSymbol*>& dataParams)
	{
		std::vector<std::string> argTypes;

		CComPtr<IDiaSymbol> funcType;
		if (FAILED(functionSymbol->get_type(&funcType)) || !funcType)
			return argTypes;

		CComPtr<IDiaEnumSymbols> function_args;
		if (FAILED(funcType->findChildren(SymTagFunctionArgType, nullptr, nsNone, &function_args)))
			return argTypes;

		CComPtr<IDiaSymbol> funcArg;
		ULONG celt = 0;
		int paramIndex = 0;

		while (SUCCEEDED(function_args->Next(1, &funcArg, &celt)) && celt == 1)
		{
			IDiaSymbol* funcArgType = nullptr;
			if (SUCCEEDED(funcArg->get_type(&funcArgType)) && funcArgType != nullptr)
			{
				std::string typeName = GetTypeName(funcArgType);

				std::string cleanName = typeName;
				CleanTypeName(cleanName);

				bool canUseRichType = IsBasicTypeName(cleanName) || cleanName == "void*";

				if (paramIndex < static_cast<int>(dataParams.size()) && canUseRichType)
				{
					IDiaSymbol* dataParamType = nullptr;
					if (SUCCEEDED(dataParams[paramIndex]->get_type(&dataParamType)) && dataParamType)
					{
						std::string richName = GetTypeName(dataParamType);
						std::string cleanRichName = richName;
						CleanTypeName(cleanRichName);

						bool richIsBasic = IsBasicTypeName(cleanRichName);
						if (!cleanRichName.empty() && !richIsBasic)
							typeName = richName;

						dataParamType->Release();
					}
				}

				CleanTypeName(typeName);

				if (!typeName.empty() && typeName != "void")
					argTypes.push_back(typeName);

				funcArgType->Release();
			}

			++paramIndex;
		}

		return argTypes;
	}

	bool PdbReader::AreAllTypesBasic(const std::vector<std::string>& argTypes)
	{
		for (const std::string& typeName : argTypes)
		{
			if (!IsBasicTypeName(typeName))
				return false;
		}
		return true;
	}

	std::vector<std::string> PdbReader::BuildArgTypesFromDataParams(
		const std::vector<IDiaSymbol*>& dataParams)
	{
		std::vector<std::string> argTypes;

		for (IDiaSymbol* param : dataParams)
		{
			IDiaSymbol* dataType = nullptr;
			if (SUCCEEDED(param->get_type(&dataType)) && dataType)
			{
				std::string typeName = GetTypeName(dataType);
				CleanTypeName(typeName);

				if (!typeName.empty() && typeName != "void")
					argTypes.push_back(typeName);

				dataType->Release();
			}
		}

		return argTypes;
	}

	void PdbReader::ReleaseDataParameterSymbols(std::vector<IDiaSymbol*>& dataParams)
	{
		for (IDiaSymbol* param : dataParams)
		{
			if (param)
				param->Release();
		}
		dataParams.clear();
	}

	std::string PdbReader::JoinTypeNames(const std::vector<std::string>& argTypes)
	{
		std::string result;
		for (size_t i = 0; i < argTypes.size(); ++i)
		{
			if (i != 0)
				result += ",";
			result += argTypes[i];
		}
		return result;
	}

	std::string PdbReader::GetFunctionSymbolParams(IDiaSymbol* pFunction)
	{
		std::vector<IDiaSymbol*> dataParamSymbols;
		CollectDataParameterSymbols(pFunction, dataParamSymbols);

		std::vector<std::string> argTypes =
			BuildArgTypesFromSignature(pFunction, dataParamSymbols);

		bool shouldFallbackToDataParams =
			argTypes.empty() ||
			(AreAllTypesBasic(argTypes) && argTypes.size() < dataParamSymbols.size());

		if (shouldFallbackToDataParams)
			argTypes = BuildArgTypesFromDataParams(dataParamSymbols);

		ReleaseDataParameterSymbols(dataParamSymbols);

		return JoinTypeNames(argTypes);
	}

} // namespace API