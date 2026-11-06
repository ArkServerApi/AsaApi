#pragma once


inline UObject* AnyPackage()
{
	return reinterpret_cast<UObject*>(-1);
}

inline UScriptStruct* FindScriptStruct(std::wstring_view structName)
{
	if (structName.empty())
		return nullptr;

	constexpr std::wstring_view structPrefix = L"struct ";
	constexpr std::wstring_view classPrefix = L"class ";
	if (structName.starts_with(structPrefix))
		structName.remove_prefix(structPrefix.size());
	else if (structName.starts_with(classPrefix))
		structName.remove_prefix(classPrefix.size());

	if (const auto namespaceSeparator = structName.rfind(L"::"); namespaceSeparator != std::wstring_view::npos)
		structName.remove_prefix(namespaceSeparator + 2);

	if (structName.size() > 1 && structName.front() == L'F')
		structName.remove_prefix(1);

	UClass* scriptStructClass = static_cast<UClass*>(Globals::StaticFindObject(nullptr, AnyPackage(), L"ScriptStruct", true));
	if (!scriptStructClass)
		return nullptr;

	std::wstring reflectedName{ structName };

	return static_cast<UScriptStruct*>(Globals::StaticFindObject(scriptStructClass, AnyPackage(), reflectedName.c_str(), true));
}

template <typename T>
inline UScriptStruct* FindScriptStruct()
{
	return FindScriptStruct(GetGeneratedTypeName<std::remove_cvref_t<T>>());
}